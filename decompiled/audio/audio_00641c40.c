/* Decompiled from Speed.exe @ 00641c40 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00641c40(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_4 + 0x18);
  puVar3 = param_1 + 6;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[4] = param_2;
    param_1[5] = param_3;
    return;
  }
  param_1[4] = &LAB_00641b20;
  param_1[5] = param_3;
  return;
}

