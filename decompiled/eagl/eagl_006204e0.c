/* Decompiled from Speed.exe @ 006204e0 */
/* S45 QUARANTINE: Windows/D3D — out of WASM scope (see QUARANTINE.md) */
/* Module: EAGL */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_006204e0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int *piVar4;
  undefined8 uVar5;
  
  (**(code **)(*DAT_00709d7c + 0x20))
            (DAT_00709d7c,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xb8),&DAT_007096e4);
  DAT_00709720 = 1;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3c) = DAT_007096f0;
  DAT_0070970c = DAT_007096f0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x38) = DAT_007096f0;
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + 0x5c);
  uVar5 = FUN_00620250(DAT_0070970c);
  piVar4 = (int *)((ulonglong)uVar5 >> 0x20);
  if (*piVar1 + *piVar4 == (int)uVar5) {
    cVar2 = FUN_0061fea0(*(undefined4 *)(extraout_ECX + 0xb8),*(undefined4 *)(extraout_ECX + 0xd0),
                         piVar4,piVar1,extraout_ECX + 0x40);
    if (cVar2 != '\0') goto LAB_00620578;
  }
  uVar3 = FUN_00620250(DAT_0070970c);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x60) = uVar3;
LAB_00620578:
  uVar3 = FUN_00620250(DAT_0070970c);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x54) = uVar3;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x54);
  _DAT_00709730 = 0;
  _DAT_00709734 = 0;
  return 1;
}

