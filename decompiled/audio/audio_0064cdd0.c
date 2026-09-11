/* Decompiled from Speed.exe @ 0064cdd0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_0064CDD0(undefined4 *param_1)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = param_1[3];
  if (iVar8 != param_1[1]) {
    pcVar3 = (char *)*param_1;
    param_1[1] = iVar8;
    iVar4 = *(int *)(pcVar3 + 4);
    iVar7 = iVar4;
    if ((iVar4 <= iVar8) && (iVar7 = iVar8, *(int *)(pcVar3 + 8) < iVar8)) {
      iVar7 = *(int *)(pcVar3 + 8);
    }
    iVar7 = iVar7 - iVar4;
    if (*(int *)(pcVar3 + 0xc) == 0x3f800000) {
      if (*pcVar3 == '\x02') {
        sVar2 = *(short *)(pcVar3 + iVar7 * 2 + 0x10);
        param_1[2] = (int)sVar2;
        return (int)sVar2;
      }
      if (*pcVar3 != '\x01') {
        iVar8 = *(int *)(pcVar3 + iVar7 * 4 + 0x10);
        param_1[2] = iVar8;
        return iVar8;
      }
      cVar1 = pcVar3[iVar7 + 0x10];
      param_1[2] = (int)cVar1;
      return (int)cVar1;
    }
    iVar4 = (int)ROUND((float)iVar7 * *(float *)(pcVar3 + 0xc) - _DAT_006cc7dc);
    iVar8 = iVar4 + 1;
    if ((int)(uint)*(ushort *)(pcVar3 + 2) <= iVar8) {
      iVar8 = *(ushort *)(pcVar3 + 2) - 1;
    }
    if (*pcVar3 == '\x02') {
      fVar5 = (float)(int)*(short *)(pcVar3 + iVar4 * 2 + 0x10);
      fVar6 = (float)(int)*(short *)(pcVar3 + iVar8 * 2 + 0x10);
    }
    else if (*pcVar3 == '\x01') {
      fVar5 = (float)(int)pcVar3[iVar4 + 0x10];
      fVar6 = (float)(int)pcVar3[iVar8 + 0x10];
    }
    else {
      fVar5 = (float)*(int *)(pcVar3 + iVar4 * 4 + 0x10);
      fVar6 = (float)*(int *)(pcVar3 + iVar8 * 4 + 0x10);
    }
    param_1[2] = (int)ROUND((fVar6 - fVar5) *
                            ((float)iVar7 * *(float *)(pcVar3 + 0xc) - (float)iVar4) + fVar5);
  }
  return param_1[2];
}

