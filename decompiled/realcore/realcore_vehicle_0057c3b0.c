/* Decompiled from Speed.exe @ 0057c3b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0057c3b0(uint param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_ESI;
  
  iVar4 = param_2 + 7 >> 3;
  if ((param_1 == unaff_ESI[7]) && (param_3 == unaff_ESI[5])) {
    iVar2 = unaff_ESI[8];
    unaff_ESI[8] = iVar2 + 1;
    if ((*(int *)(&DAT_006f1110 + param_3 * 0xc) != 0) &&
       (*(int *)(&DAT_006f1110 + param_3 * 0xc) < iVar2 + 1)) {
      FUN_0063e5c0(1);
    }
  }
  else {
    unaff_ESI[7] = param_1;
    unaff_ESI[5] = param_3;
  }
  iVar2 = *unaff_ESI;
  pcVar1 = (char *)((iVar2 - unaff_ESI[3]) + 100 + (int)unaff_ESI);
  *pcVar1 = (char)iVar4 * '\x10' + (char)param_3;
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      pcVar1[iVar3 + 1] = (char)param_1;
      param_1 = param_1 >> 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar2 = iVar4 + 1 + iVar2;
  iVar4 = iVar2 - unaff_ESI[3];
  *unaff_ESI = iVar2;
  unaff_ESI[1] = iVar4;
  unaff_ESI[4] = iVar2;
  if (((unaff_ESI[3] - iVar2) + 0x4000 < 0x100) && (0 < iVar4)) {
    FUN_00594ef0(unaff_ESI + 0x19);
    unaff_ESI[3] = *unaff_ESI;
    unaff_ESI[1] = 0;
  }
  return;
}

