#ifndef WIN32U_DEF_H
#define WIN32U_DEF_H

#include <minwindef.h>

/*
 * DLL Library: win32u.dll
 * Name in library: NtUserEnableMouseInputForCursorSuppression
 * Alternative DLL: user32.dll
 * Alternative name: Ordinal 2519
 * Available starting from Windows 8 (NT 6.2)
 * Parameter bShow: TRUE to show cursor and FALSE to hide cursor
 * Returns: TRUE if success and FALSE if fail (Watch GetLastError())
 * Remarks: for the function to work, after call the application
 *          must create some kind of window, as when using
 *          MessageBox or create an invisible window even
 *          without registering its own window class and
 *          message loop
 */
typedef BOOL(*NtUserEnableMouseInputForCursorSuppression_Function)(BOOL bShow);

/*
 * DLL Library: win32u.dll
 * Name in library: NtUserIsMouseInputEnabled
 * Alternative DLL: user32.dll
 * Alternative name: Ordinal 2520
 * Available starting from Windows 8 (NT 6.2)
 * Returns: TRUE if success and FALSE if fail (Watch GetLastError()) (It may fail?)
 */
typedef BOOL(*NtUserIsMouseInputEnabled_Function)();

#endif //WIN32U_DEF_H