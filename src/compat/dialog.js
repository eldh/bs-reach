import { rewriteAriaProps } from './rewriteProps'
import { Dialog as Dialog_, DialogContent as DialogContent_ } from '@reach/dialog'

export const Dialog = rewriteAriaProps(Dialog_)
export const DialogContent = rewriteAriaProps(DialogContent_)
