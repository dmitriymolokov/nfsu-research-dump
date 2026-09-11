/* spd-match: far pct=10.45 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0061fd80();
int __cdecl FUN_0061fdf0();
int __cdecl FUN_0061fea0();
int __cdecl FUN_00620250();
int __cdecl FUN_006385a0();
extern int DAT_007096d8;
extern int DAT_00709704;
extern int DAT_00709724;
extern unsigned char *DAT_00709d7c;
extern unsigned char *DAT_00709d80;
extern int DAT_00709d90;
extern int DAT_00709d94;
extern int _DAT_00709728;
extern int _DAT_0070972c;

undefined4 __fastcall FUN_00620970(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  bool bVar3;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  int *piStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 *puStack_110;
  undefined4 *puStack_10c;
  char cStack_28;
  
  if (DAT_007096d8 == 0) {
    return 0x80004005;
  }
  _DAT_0070972c = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xd8);
  bVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x60) != 0;
  if (bVar3) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xd0) = 1;
    iVar1 = *(int *)(param_1 + 0xc);
    puStack_10c = (undefined4 *)(iVar1 + 0x40);
    puStack_110 = (undefined4 *)(iVar1 + 0x5c);
    iStack_114 = iVar1 + 0x60;
    uStack_11c = *(undefined4 *)(iVar1 + 0xb8);
    iStack_118 = 1;
    uStack_120 = 0x6209d4;
    FUN_0061fea0();
    _DAT_00709728 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40);
  }
  DAT_00709724 = (uint)bVar3;
  puStack_10c = &DAT_00709d80;
  puStack_110 = &DAT_00709704;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xd0) = 1;
  iStack_114 = 0x80;
  iStack_118 = DAT_007096d8;
  uStack_120 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xb8);
  uStack_11c = 1;
  piStack_124 = DAT_00709d7c;
  puStack_128 = (undefined4 *)0x620a27;
  iVar1 = (**(code **)(*DAT_00709d7c + 0x3c))();
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 < 0) {
    bVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x60) != 0;
    if (bVar3) {
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xd0) = 1;
      iVar1 = *(int *)(param_1 + 0xc);
      puStack_128 = (undefined4 *)(iVar1 + 0x40);
      puStack_12c = (undefined4 *)(iVar1 + 0x5c);
      FUN_0061fea0(*(undefined4 *)(iVar1 + 0xb8),1,iVar1 + 0x60);
      _DAT_00709728 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40);
    }
    DAT_00709724 = (uint)bVar3;
    puStack_128 = &DAT_00709d80;
    puStack_12c = &DAT_00709704;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xd0) = 1;
    uVar2 = (**(code **)(*DAT_00709d7c + 0x3c))
                      (DAT_00709d7c,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xb8),1,DAT_007096d8,
                       0x20);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    piStack_124 = (int *)(*(int *)(param_1 + 0xc) + 0xf4);
    puStack_128 = (undefined4 *)0x0;
    puStack_12c = (undefined4 *)0x0;
    (**(code **)(*DAT_00709d80 + 0x40))(DAT_00709d80);
    if (DAT_00709724 != 0) {
      (**(code **)(*DAT_00709d80 + 0x84))(DAT_00709d80,*(int *)(param_1 + 0xc) + 0xf8);
    }
    uVar2 = FUN_00620250(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3c));
    *(undefined4 *)(extraout_ECX + 0x54) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x58) =
         *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x54);
    switch(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc4)) {
    case 0:
    case 2:
      DAT_00709d90 = FUN_006385a0(DAT_00709d80,&puStack_12c);
      break;
    case 1:
    case 3:
      DAT_00709d94 = FUN_006385a0(DAT_00709d80,&puStack_12c);
    }
    if (cStack_28 == '\0') {
      FUN_0061fd80();
      FUN_0061fdf0();
    }
    return *(undefined4 *)(param_1 + 8);
  }
  return 0;
}
