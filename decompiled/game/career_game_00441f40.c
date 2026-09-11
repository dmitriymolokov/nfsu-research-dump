/* Decompiled from Speed.exe @ 00441f40 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


bool career_game_00441F40(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (*param_1 == 0x34146) {
    piVar4 = (int *)((int)param_1 + 0x17U & 0xfffffff0);
    for (uVar3 = ((param_1[1] - ((int)param_1 + 0x17U & 0xfffffff0)) + 8 + (int)param_1) / 0x30;
        uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar2 = *piVar4;
      piVar1 = (int *)piVar4[1];
      piVar4 = piVar4 + 0xc;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
    }
    return true;
  }
  iVar2 = FUN_00441480();
  return iVar2 != 0;
}

