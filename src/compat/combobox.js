import { rewriteAriaProps } from '../rewriteProps'
import {
  ComboboxInput as ComboboxInput_,
  ComboboxPopover as ComboboxPopover_,
} from '@reach/combobox'

export const ComboboxInput = rewriteAriaProps(ComboboxInput_)
export const ComboboxPopover = rewriteAriaProps(ComboboxPopover_)
