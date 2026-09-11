/* Decompiled from Speed.exe @ 004b7a30 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004b7a30(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  for (puVar3 = *(undefined4 **)(param_2 + 0x40); puVar3 != (undefined4 *)(param_2 + 0x40);
      puVar3 = (undefined4 *)*puVar3) {
    if (puVar3[2] == DAT_00777cc8) goto LAB_004b7a4e;
  }
  puVar3 = (undefined4 *)0x0;
LAB_004b7a4e:
  iVar1 = *(int *)(param_2 + 0x58);
  uVar2 = puVar3[5];
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
    puVar3 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar1 + 0x5c) = uVar2;
    if (bVar4) {
      (**(code **)*puVar3)(iVar1);
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
  }
  return;
}

