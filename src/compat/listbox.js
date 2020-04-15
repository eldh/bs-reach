import { rewriteAriaProps } from './rewriteProps'
import { Listbox as Listbox_ } from '@reach/listbox'

export const Listbox = rewriteAriaProps(Listbox_)
