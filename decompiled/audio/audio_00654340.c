/* spd-match: far pct=13.93 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_006525f0();
int __cdecl FUN_006538b0();
int __cdecl FUN_00653a20();
int __cdecl FUN_00653d50();
int __cdecl FUN_00654210();
int __cdecl FUN_00654cd0();
int __cdecl FUN_006568d0();
extern int DAT_00713d9a;
extern int DAT_00713d9e;
extern int DAT_00713dae;
extern int DAT_00713db7;
extern unsigned char *DAT_00713db8;
extern int DAT_00713ff3;
extern unsigned char *DAT_00714068;
extern int DAT_0071406c;
extern unsigned char *DAT_00714070;
extern int DAT_00714078;
extern int DAT_007160b8;
extern int DAT_007160bc;
extern int DAT_007160c0;
extern char stack0xffffffc4;

int FUN_00654340(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  HWND pHStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  uint *puStack_40;
  uint local_30;
  undefined1 local_2c;
  byte local_2b;
  undefined1 local_2a;
  code *local_28;
  
  local_2c = DAT_00713d9e;
  local_2b = DAT_00713db8 + DAT_00713db7;
  local_30 = (uint)DAT_00713d9a;
  puStack_40 = &local_30;
  local_2a = 1 < local_2b;
  local_28 = FUN_006525f0;
  puStack_44 = (undefined4 *)0x654387;
  FUN_006568d0();
  puStack_40 = (uint *)0x0;
  puStack_44 = &DAT_00714068;
  uStack_48 = 0;
  DAT_0071406c = 0;
  DAT_00714070 = (int *)0x0;
  uStack_4c = 0x6543ac;
  iVar1 = Ordinal_1();
  if (iVar1 != 0) {
    if (iVar1 == -0x7787fff6) {
      DAT_00714068 = (int *)0x0;
      uStack_4c = 0x6543cb;
      FUN_00653d50();
      return -0x12;
    }
    DAT_00714068 = (int *)0x0;
    uStack_4c = 0x6543f2;
    FUN_00653d50();
    return ((iVar1 != -0x7787ff88) - 1 & 0xfffffff7) - 1;
  }
  uStack_4c = 0x6543ff;
  pHStack_50 = GetForegroundWindow();
  if (pHStack_50 == (HWND)0x0) {
    uStack_4c = 0x654409;
    pHStack_50 = GetDesktopWindow();
  }
  uStack_4c = 2;
  piStack_54 = DAT_00714068;
  uStack_58 = 0x654418;
  (**(code **)(*DAT_00714068 + 0x18))();
  puStack_5c = (undefined4 *)&stack0xffffffc4;
  uStack_58 = 0x24;
  puStack_60 = (undefined1 *)0x654424;
  FUN_00654cd0();
  uStack_58 = 0;
  puStack_5c = &DAT_0071406c;
  puStack_60 = &stack0xffffffc4;
  iVar1 = (**(code **)(*DAT_00714068 + 0xc))(DAT_00714068);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_006538b0((uint)DAT_00713db8 + (uint)DAT_00713db7,DAT_00713d9a), -1 < iVar1)) {
    if (DAT_00713ff3 != '\0') {
      FUN_00654210(DAT_00713dae);
      FUN_00653a20(DAT_007160b8,DAT_007160bc,DAT_007160c0);
    }
    uVar2 = 0;
    iVar1 = (**(code **)(*DAT_00714070 + 0x2c))
                      (DAT_00714070,0,DAT_00714078,&puStack_60,&puStack_5c,0,0,0);
    if (-1 < iVar1) {
      FUN_00654cd0(uVar2,DAT_00714078);
      (**(code **)(*DAT_00714070 + 0x4c))(DAT_00714070,uVar2,DAT_00714078,0,0);
    }
    iVar1 = (**(code **)(*DAT_00714070 + 0x30))(DAT_00714070,0,0,1);
    if (-1 < iVar1) {
      return 0;
    }
  }
  FUN_00653d50();
  return -1;
}
