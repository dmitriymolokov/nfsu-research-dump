/* Decompiled from Speed.exe @ 006512f0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006512f0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_1 * 0x8c + DAT_00713f48;
  iVar5 = param_1 * 0x110 + DAT_0071400c;
  if ((*(byte *)(param_1 * 0x8c + 0x24 + DAT_00713f48) & 4) == 0) {
    piVar1 = *(int **)(*(int *)(iVar5 + 0xc0) + 0x3c);
    (**(code **)(*piVar1 + 0x3c))
              (piVar1,(int)*(short *)(&DAT_006e9be8 +
                                     (int)ROUND(*(float *)(iVar3 + 0x48) * _DAT_006ccb34) * 2));
  }
  else {
    iVar4 = 0;
    fVar2 = (float)(int)*(char *)(iVar3 + 0x5f) * *(float *)(iVar3 + 0x48) * _DAT_006ccbec;
    if (DAT_00713cdc != 0) {
      do {
        FUN_00656870(param_1,iVar4,fVar2 * *(float *)(iVar5 + iVar4 * 4));
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)DAT_00713cdc);
      return;
    }
  }
  return;
}

