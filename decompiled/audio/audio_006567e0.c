/* Decompiled from Speed.exe @ 006567e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006567e0(int param_1)

{
  code *pcVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  
  pfVar5 = (float *)(param_1 * 0x60 + DAT_0071666c);
  iVar4 = 0;
  _DAT_00716590 = *(float *)(param_1 * 0x60 + 0x34 + DAT_0071666c) * pfVar5[0xf] + _DAT_00716590;
  pfVar3 = pfVar5;
  if (DAT_00716465 != 0) {
    do {
      iVar4 = iVar4 + 1;
      (&DAT_00716574)[iVar4] = pfVar3[1] * pfVar5[0xf] + (float)(&DAT_00716574)[iVar4];
      pfVar3 = pfVar3 + 1;
    } while (iVar4 < (int)(uint)DAT_00716465);
  }
  do {
    pcVar1 = *(code **)((int)pfVar5[0x10] + 4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(pfVar5[0x10]);
    }
    fVar2 = *(float *)((int)pfVar5[0x10] + 8);
    FUN_006510d0(pfVar5[0x10]);
    pfVar5[0x10] = fVar2;
  } while (fVar2 != 0.0);
  *(undefined1 *)pfVar5 = 0;
  return;
}

