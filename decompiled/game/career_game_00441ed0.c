/* Decompiled from Speed.exe @ 00441ed0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


bool FUN_00441ed0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0x34146) {
    puVar4 = (undefined4 *)((int)param_1 + 0x17U & 0xfffffff0);
    puVar1 = DAT_0077b194;
    for (uVar3 = ((param_1[1] - ((int)param_1 + 0x17U & 0xfffffff0)) + 8 + (int)param_1) / 0x30;
        uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = puVar4;
      DAT_0077b194 = puVar4;
      puVar4[1] = puVar1;
      *puVar4 = &DAT_0077b190;
      puVar4 = puVar4 + 0xc;
      puVar1 = DAT_0077b194;
    }
    DAT_0077b194 = puVar1;
    return true;
  }
  iVar2 = FUN_00441380();
  return iVar2 != 0;
}

