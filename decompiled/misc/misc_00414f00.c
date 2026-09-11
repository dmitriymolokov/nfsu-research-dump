/* spd-match: far pct=5.63 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00414F00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004151c0();
extern int DAT_00700e70;
extern unsigned char *DAT_00736334;
void __fastcall FUN_00414f00(int obj)

{

  int iVar1;
  
  *(undefined4 *)(obj + 0x7c) = DAT_00700e70;
  iVar1 = DAT_00736334 + 1;
  *(float *)(obj + 0x5c) = (float)iVar1;
  if (*(float *)(obj + 0x54) < (float)iVar1) {
    *(undefined4 *)(obj + 0x5c) = *(undefined4 *)(obj + 0x54);
  }
  if (*(float *)(obj + 0x5c) < *(float *)(obj + 0x58)) {
    *(undefined4 *)(obj + 0x5c) = *(undefined4 *)(obj + 0x58);
  }
  (**(code **)(*(int *)(obj + 0x40) + 0x10))();
  FUN_004151c0();
  return;
}
