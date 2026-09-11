/* Decompiled from Speed.exe @ 00608700 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __fastcall FUN_00608700(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      puVar1 = *(uint **)(*(int *)(param_1 + 0x144) + uVar6 * 4);
      uVar2 = *puVar1;
      uVar5 = uVar2 & 0xff000000;
      if ((((uVar5 == 0x44000000) || (uVar5 == 0x40000000)) &&
          (piVar3 = *(int **)(*(int *)(param_1 + 0x14) +
                             *(int *)(puVar1[2] + (uVar2 & 0xffffff) * 4) * 4),
          *piVar3 == *(int *)(param_1 + 0x60))) &&
         (iVar4 = FUN_00608320(*(undefined4 *)(param_1 + 0x140),*(undefined4 *)(param_1 + 0x134),
                               piVar3[2]), iVar4 < 0)) {
        return iVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x88));
  }
  return 0;
}

