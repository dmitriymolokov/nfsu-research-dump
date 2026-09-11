/* spd-match: far pct=23.08 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C1B50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00414a60();
int __cdecl FUN_004bdf40();
int __cdecl FUN_004bdfb0();
int __cdecl FUN_004be020();
int __cdecl FUN_004c13b0();
extern int DAT_00777cb8;
extern void LAB_004be0c0(void);
extern void LAB_004be230(void);
extern void LAB_004be3a0(void);
void __fastcall FUN_004c1b50(int obj)

{

  int iVar1;
  
  iVar1 = 0;
  DAT_00777cb8 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004c13b0(iVar1,0);
  } while (iVar1 < 3);
  (**(code **)(*(int *)(obj + 0x100) + 0xc))(1);
  (**(code **)(*(int *)(obj + 0xd0) + 0xc))(1);
  (**(code **)(*(int *)(obj + 0x130) + 0xc))(1);
  *(undefined4 *)(obj + 0x168) = 1;
  *(undefined1 **)(obj + 0x48) = &LAB_004be230;
  FUN_004bdfb0();
  *(undefined4 *)(obj + 0x164) = 2;
  *(undefined1 **)(obj + 0x4c) = &LAB_004be0c0;
  FUN_004bdf40();
  *(undefined4 *)(obj + 0x178) = 3;
  *(undefined1 **)(obj + 0x50) = &LAB_004be3a0;
  FUN_004be020();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  *(undefined4 *)(obj + 0x160) = 1;
  *(undefined1 *)(obj + 0x21c) = 0;
  return;
}
