import { rewriteAriaProps } from '../rewriteProps'
import {
  AlertDialog as AlertDialog_,
  AlertDialogContent as AlertDialogContent_,
} from '@reach/alert-dialog'

export const AlertDialog = rewriteAriaProps(AlertDialog_)
export const AlertDialogContent = rewriteAriaProps(AlertDialogContent_)
