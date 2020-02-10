import React, { useEffect, useState, useContext } from 'react'

// See https://github.com/WICG/focus-visible

export const FocusVisibleContext = React.createContext({
  hadKeyboardEvent: true,
  isInitialized: false,
})

export function FocusVisibleManager(props) {
  const [hadKeyboardEvent, setHadKeyboardEvent] = useState(true)

  useEffect(() => {
    function onPointerDown() {
      setHadKeyboardEvent(false)
    }

    function onInitialPointerMove(e) {
      // Work around a Safari quirk that fires a mousemove on <html> whenever the window blurs, even if you're tabbing out of the page. ¯\_(ツ)_/¯
      if (e.target.nodeName && e.target.nodeName.toLowerCase() === 'html') {
        return
      }

      setHadKeyboardEvent(false)
      removeInitialPointerMoveListeners()
    }

    function addInitialPointerMoveListeners() {
      document.addEventListener('mousemove', onInitialPointerMove)
      document.addEventListener('mousedown', onInitialPointerMove)
      document.addEventListener('mouseup', onInitialPointerMove)
      document.addEventListener('pointermove', onInitialPointerMove)
      document.addEventListener('pointerdown', onInitialPointerMove)
      document.addEventListener('pointerup', onInitialPointerMove)
      document.addEventListener('touchmove', onInitialPointerMove)
      document.addEventListener('touchstart', onInitialPointerMove)
      document.addEventListener('touchend', onInitialPointerMove)
    }

    function removeInitialPointerMoveListeners() {
      document.removeEventListener('mousemove', onInitialPointerMove)
      document.removeEventListener('mousedown', onInitialPointerMove)
      document.removeEventListener('mouseup', onInitialPointerMove)
      document.removeEventListener('pointermove', onInitialPointerMove)
      document.removeEventListener('pointerdown', onInitialPointerMove)
      document.removeEventListener('pointerup', onInitialPointerMove)
      document.removeEventListener('touchmove', onInitialPointerMove)
      document.removeEventListener('touchstart', onInitialPointerMove)
      document.removeEventListener('touchend', onInitialPointerMove)
    }

    function onKeyDown(e) {
      if (e.metaKey || e.altKey || e.ctrlKey) {
        return
      }

      setHadKeyboardEvent(true)
    }

    function onVisibilityChange() {
      if (document.visibilityState === 'hidden') {
        setHadKeyboardEvent(true)
        addInitialPointerMoveListeners()
      }
    }

    document.addEventListener('keydown', onKeyDown, true)
    document.addEventListener('mousedown', onPointerDown, true)
    document.addEventListener('pointerdown', onPointerDown, true)
    document.addEventListener('touchstart', onPointerDown, true)
    document.addEventListener('visibilitychange', onVisibilityChange, true)

    addInitialPointerMoveListeners()

    return () => {
      document.removeEventListener('keydown', onKeyDown, true)
      document.removeEventListener('mousedown', onPointerDown, true)
      document.removeEventListener('pointerdown', onPointerDown, true)
      document.removeEventListener('touchstart', onPointerDown, true)
      document.removeEventListener('visibilitychange', onVisibilityChange, true)

      removeInitialPointerMoveListeners()
    }
  }, [setHadKeyboardEvent])

  /* eslint-disable react/prop-types */
  // return null
  return (
    <FocusVisibleContext.Provider value={{ hadKeyboardEvent, isInitialized: true }}>
      {props.children}
    </FocusVisibleContext.Provider>
  )
}
/* eslint-enable react/prop-types */

export function useFocusVisible({ onFocus: onFocusProp, onBlur: onBlurProp } = {}) {
  const [isFocused, setIsFocused] = useState(false)
  const { hadKeyboardEvent, isInitialized } = useContext(FocusVisibleContext)

  function onFocusVisible() {
    setIsFocused(true)
  }

  function onBlurVisible() {
    setIsFocused(false)
  }
  const onFocus = onFocusProp
    ? e => {
        onFocusVisible(e)
        return onFocusProp(e)
      }
    : onFocusVisible
  const onBlur = onBlurProp
    ? e => {
        onBlurVisible(e)
        return onBlurProp(e)
      }
    : onBlurVisible
  let focusVisible
  if (isInitialized) {
    focusVisible = hadKeyboardEvent && isFocused
  } else {
    // Fallback to focused when the `FocusVisibleManager` is not used.
    focusVisible = isFocused
  }
  return {
    ...(focusVisible ? { ['data-focus-visible']: true } : {}),
    onFocus,
    onBlur,
  }
}

export const focusStyle = 'filter: drop-shadow(0px 0px 6px rgba(47, 113, 165, 0.9));'
