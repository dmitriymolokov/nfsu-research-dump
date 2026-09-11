/* Decompiled from Speed.exe @ 0064d1e0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0064D1E0(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 * 0x8c + DAT_00713f48;
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0x7fff < param_2) {
    param_2 = 0x7fff;
  }
  iVar6 = 0;
  fVar2 = (float)param_2 * _DAT_006aa9b8;
  *(float *)(iVar5 + 0x38) = fVar2;
  *(float *)(iVar5 + 0x48) = fVar2 * _DAT_006e9bc8;
  if (*(char *)(iVar5 + 0x23) != '\0') {
    psVar4 = (short *)(iVar5 + 4);
    do {
      sVar1 = *psVar4;
      iVar3 = sVar1 * 0x8c + DAT_00713f48;
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar5 + 0x48);
      FUN_006512f0((int)sVar1);
      iVar6 = iVar6 + 1;
      psVar4 = psVar4 + 1;
    } while (iVar6 < (int)(uint)*(byte *)(iVar5 + 0x23));
  }
  return;
}

