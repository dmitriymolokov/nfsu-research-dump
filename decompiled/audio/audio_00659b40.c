/* Decompiled from Speed.exe @ 00659b40 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00659b40(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1 * 0x8c + DAT_00713f48;
  if ((*(byte *)(param_1 * 0x8c + 0x24 + DAT_00713f48) & 4) != 0) {
    param_1 = 0;
    fVar1 = (float)(int)*(char *)(iVar4 + 0x5f) * *(float *)(iVar4 + 0x48) * _DAT_006ccbec;
    if (*(char *)(iVar4 + 0x23) != '\0') {
      uVar3 = (uint)DAT_00713db7;
      psVar5 = (short *)(iVar4 + 4);
      do {
        iVar7 = *psVar5 * 0x110 + DAT_0071400c;
        iVar6 = 0;
        if (uVar3 != 0) {
          do {
            fVar2 = (float)(int)*(char *)(iVar6 + param_2) * _DAT_006ccbec;
            *(float *)(iVar7 + iVar6 * 4) = fVar2;
            FUN_00656870((int)*psVar5,iVar6,fVar2 * fVar1);
            uVar3 = (uint)DAT_00713db7;
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)uVar3);
        }
        param_1 = param_1 + 1;
        psVar5 = psVar5 + 1;
        param_2 = param_2 + 6;
      } while (param_1 < (int)(uint)*(byte *)(iVar4 + 0x23));
    }
  }
  return;
}

