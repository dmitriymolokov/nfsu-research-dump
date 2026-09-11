/* spd-match: far pct=26.00 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2065_undecl_stubs_p2/batches/20260724T141837Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
int __cdecl WideCharToMultiByte(void);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_005e54bc(...);

struct ThisCallBox {
  undefined4 * FUN_005e54f8(LPCSTR param_2);
};
undefined4 * ThisCallBox::FUN_005e54f8(LPCSTR param_2) {
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_005e54bc(param_2);
  puVar2 = *(undefined4 **)(((int)this) + iVar1 * 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar1 = lstrcmpiA((LPCSTR)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined4 *)puVar2[8];
  }
  return puVar2;
}
