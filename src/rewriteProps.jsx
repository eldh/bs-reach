import React from 'react'

export function rewriteProps(propMap, Comp) {
  const Component = React.forwardRef(({ children, ...props }, ref) => {
    const fixed = Object.keys(props).reduce((prev, current) => {
      return current in propMap
        ? {
            ...prev,
            [propMap[current]]: props[current],
          }
        : {
            ...prev,
            [current]: props[current],
          }
    }, {})

    return (
      <Comp {...fixed} ref={ref}>
        {children}
      </Comp>
    )
  })
  Component.displayName = Comp.displayName
  return Component
}

export function rewriteAriaProps(comp) {
  return rewriteProps({ ariaLabel: 'aria-label', ariaLabelledby: 'aria-labelledby' }, comp)
}

export function rewriteReservedProps(comp) {
  return rewriteProps({ isOpen: 'open', type_: 'type' }, comp)
}
