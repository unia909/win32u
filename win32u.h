#ifndef LOGONUI_WIN32U_H
#define LOGONUI_WIN32U_H

#include <minwindef.h>

/*
 * DLL Library: win32u.dll
 * Name in library: NtUserEnableMouseInputForCursorSuppression
 * Parameter bShow: TRUE to show cursor and FALSE to hide cursor
 * Returns: TRUE if success and FALSE if fail (Watch GetLastError())
 */
typedef BOOL(*NtUserEnableMouseInputForCursorSuppression_Function)(BOOL bShow);

/*
 * DLL Library: win32u.dll
 * Name in library: NtUserIsMouseInputEnabled
 * Returns: TRUE if success and FALSE if fail (Watch GetLastError()) (It may fail?)
 */
typedef BOOL(*NtUserIsMouseInputEnabled_Function)();

#endif //LOGONUI_WIN32U_H
