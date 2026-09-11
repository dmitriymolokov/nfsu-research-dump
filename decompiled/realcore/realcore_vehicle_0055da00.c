/* spd-match: far pct=19.05 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0055DA00 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00495f00(int);
extern int __cdecl FUN_004f65d0();
extern int __cdecl FUN_0054a370(void*, void*);
extern int __cdecl FUN_0054a660();
extern int DAT_00734718;
extern int DAT_0073dafc;
extern int DAT_00777b58;
extern void LAB_0055e770();
void __fastcall FUN_0055da00(int obj) {
  int iVar1;
  if (DAT_00777b58 != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) *(int*)(iVar1 + 0x1c) = 0;
    return;
  }
  FUN_00495f00(0xa8f7bf1b);
  FUN_00495f00(0x4fc29dca);
  FUN_00495f00(0xced06599);
  if (DAT_0073dafc != -1) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) *(int*)(iVar1 + 0x1c) = 0;
    FUN_0054a660();
  } else {
    *(char*)(obj + 0x7c) = 1;
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) *(int*)(iVar1 + 0x1c) = 0;
    FUN_0054a370(&DAT_00734718, &LAB_0055e770);
  }
}
