/* spd-match: far pct=3.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00460970 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00460a80();
int __cdecl FUN_00460de0();
int __cdecl FUN_00674898();
extern int DAT_00736514;
void __fastcall FUN_00460970(int obj, undefined4 param_1, undefined4 param_2, undefined4 param_3)

{

  int iVar1;
  
  FUN_00460a80(param_1,param_2,param_3);
  if (DAT_00736514 == '\0') {
    FUN_00460de0(param_1,param_2,param_3);
  }
  iVar1 = FUN_00674898();
  *(short *)(obj + 0x70) =
       (short)((ulonglong)((longlong)iVar1 * 0xb60b60b7) >> 0x28) -
       ((short)(char)((char)(iVar1 / 0x1680000) + (char)(iVar1 >> 0x1f)) >> 0xf);
  return;
}
