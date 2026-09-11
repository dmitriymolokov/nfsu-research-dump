/* Decompiled from Speed.exe @ 0045cea0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0045cea0(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_8;
  
  if (param_2 == 0) {
    return (float10)DAT_006cc7a4;
  }
  iVar1 = *(int *)(param_2 + 0x34);
  iVar4 = *param_1;
  fVar5 = (float10)FUN_0057b480();
  local_8 = (float)ABS(fVar5);
  if (ABS(fVar5) <= (float10)DAT_006cc7a4) {
    local_8 = 0.0;
  }
  if (*(int *)(*(int *)(iVar4 + 0x14) + 4) == 3) {
    fVar5 = (float10)_DAT_006b7510;
    goto LAB_0045cf86;
  }
  iVar4 = FUN_00647b70();
  fVar2 = DAT_006b74fc;
  if ((iVar4 == 6) && (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x1d4) + 0x90) + 0x14) + 4) == 3)
     ) {
LAB_0045cf41:
    cVar3 = FUN_0057a720();
    fVar2 = DAT_006b7500;
    if (cVar3 != '\0') {
      fVar5 = (float10)FUN_0044d5f0();
      if (ABS(fVar5) < (float10)fVar2 != (ABS(fVar5) == (float10)fVar2)) goto LAB_0045cf67;
    }
    cVar3 = FUN_0057a6b0();
    if (cVar3 == '\0') {
      fVar5 = (float10)_DAT_006b7504;
    }
    else {
      fVar5 = (float10)_DAT_006b7508;
    }
  }
  else {
    fVar5 = (float10)FUN_0044d5f0();
    if (ABS(fVar5) < (float10)fVar2 == (ABS(fVar5) == (float10)fVar2)) goto LAB_0045cf41;
LAB_0045cf67:
    fVar5 = (float10)_DAT_006b750c;
  }
LAB_0045cf86:
  if (fVar5 < (float10)local_8) {
    fVar5 = (float10)local_8;
  }
  return fVar5;
}

