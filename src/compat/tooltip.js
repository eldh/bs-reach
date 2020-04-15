import { rewriteAriaProps } from './rewriteProps'
import { Tooltip as Tooltip_ } from '@reach/tooltip'

export const Tooltip = rewriteAriaProps(Tooltip_)
