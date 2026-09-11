/* Decompiled from Speed.exe @ 0066ddd0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 * FUN_0066ddd0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (param_2 < 0x10) {
    param_2 = 0x10;
  }
  puVar1 = (undefined4 *)FUN_00549460(0x24);
  puVar2 = puVar1;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar1[4] = param_2;
  puVar2 = (undefined4 *)FUN_00549460(param_2 * 4);
  puVar1[5] = puVar2;
  for (uVar4 = puVar1[4] & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar1[8] = &LAB_0066db60;
  if (0 < param_1) {
    FUN_0066da60(puVar1,param_1);
  }
  return puVar1;
}

