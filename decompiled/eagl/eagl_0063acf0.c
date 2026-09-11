/* spd-match: far pct=6.73 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0063ACF0 */
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

int __cdecl FUN_00672a10();
void __fastcall FUN_0063acf0(char * obj)

{
  char cVar1;
  int iVar2;

  undefined1 *puVar3;
  BOOL BVar4;
  DWORD dwMessageId;
  LPCSTR pCStack_108;
  CHAR aCStack_104 [260];
  
  iVar2 = -(int)obj;
  do {
    cVar1 = *obj;
    obj[(int)(aCStack_104 + iVar2)] = cVar1;
    obj = obj + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined1 *)FUN_00672a10(aCStack_104,0x5c);
  if (puVar3 != (undefined1 *)0x0) goto code_r0x0063ad50;
  puVar3 = (undefined1 *)FUN_00672a10(aCStack_104,0x2f);
  while (puVar3 != (undefined1 *)0x0) {
code_r0x0063ad50:
    do {
      *puVar3 = 0;
      BVar4 = CreateDirectoryA(aCStack_104,(LPSECURITY_ATTRIBUTES)0x0);
      if ((BVar4 == 0) && (dwMessageId = GetLastError(), dwMessageId != 0xb7)) {
        if (dwMessageId == 0) {
          dwMessageId = GetLastError();
        }
        FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPSTR)&pCStack_108,0,(va_list *)0x0);
        OutputDebugStringA(pCStack_108);
        LocalFree(pCStack_108);
      }
      *puVar3 = 0x5c;
      puVar3 = (undefined1 *)FUN_00672a10(puVar3 + 1,0x5c);
    } while (puVar3 != (undefined1 *)0x0);
    puVar3 = (undefined1 *)FUN_00672a10(aCStack_104,0x2f);
  }
  return;
}
