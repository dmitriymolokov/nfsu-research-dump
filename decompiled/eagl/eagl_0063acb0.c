/* spd-match: far pct=33.33 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.5/va_0063ACB0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);
void __cdecl FUN_0063acb0(DWORD val)

{

  LPCSTR pCStack_4;
  
  if (val == 0) {
    val = GetLastError();
  }
  FormatMessageA(0x1300,(LPCVOID)0x0,val,0x400,(LPSTR)&pCStack_4,0,(va_list *)0x0);
  OutputDebugStringA(pCStack_4);
  LocalFree(pCStack_4);
  return;
}
