/* Decompiled from Speed.exe @ 00530f80 */
/* Module: realcore */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall fn_00530f80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float afStack_1c [4];
  undefined4 uStack_c;
  float fStack_8;
  char cStack_4;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x21c) + 0x60);
  iVar1 = *(int *)(param_1 + 0x340);
  pfVar4 = *(float **)(param_1 + 0x2f8);
  pfVar5 = afStack_1c;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  afStack_1c[3] = afStack_1c[3] * *(float *)(&DAT_006b6450 + iVar1 * 4);
  if (ABS(afStack_1c[3] - afStack_1c[2]) < _DAT_006ccae0) {
    afStack_1c[3] = afStack_1c[3] + _DAT_006ccae0;
  }
  fStack_8 = afStack_1c[0];
  uStack_c = uVar2;
  FUN_00532840();
  if (cStack_4 != '\0') {
    FUN_00532840();
  }
  uVar2 = FUN_00674898();
  *(undefined4 *)(param_1 + 0x248) = uVar2;
  return;
}

