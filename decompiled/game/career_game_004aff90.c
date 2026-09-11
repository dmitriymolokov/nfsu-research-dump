/* Decompiled from Speed.exe @ 004aff90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004aff90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar2 = param_1;
  uVar1 = (&DAT_00758ad4)[*(int *)(param_1 + 0x68) * 0x3e51];
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  FUN_004f68a0("%s %d",iVar3,uVar1);
  param_1 = *(int *)(param_1 + 0x114);
  if (*(int *)(param_1 + 0x1c9c) == 0) {
    if (*(int *)(param_1 + 0x1ca0) == 0) {
      if (*(int *)(param_1 + 0x1ca4) == 0) {
        if (*(int *)(param_1 + 0x1ca8) == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + 0x1570;
        }
      }
      else {
        param_1 = param_1 + 0xe50;
      }
    }
    else {
      param_1 = param_1 + 0x730;
    }
  }
  else {
    param_1 = param_1 + 0x10;
  }
  if ((*(int *)(iVar2 + 0x94) == 0) && (param_1 != 0)) {
    FUN_004b1cb0(0);
    fVar4 = (float10)FUN_005802c0();
    FUN_004aeee0((float)fVar4);
    fVar4 = (float10)FUN_005801b0();
    FUN_004aeee0((float)fVar4);
    fVar4 = (float10)FUN_00580400();
    FUN_004aeee0((float)fVar4);
    if (*(int *)(iVar2 + 0x98) == 0) {
      fVar4 = (float10)FUN_005802c0();
      FUN_004aef50((float)fVar4);
      fVar4 = (float10)FUN_005801b0();
      FUN_004aef50((float)fVar4);
      fVar4 = (float10)FUN_00580400();
      FUN_004aef50((float)fVar4);
      return;
    }
    if (*(int *)(iVar2 + 0xb0) != 0) {
      FUN_004f6910(*(int *)(iVar2 + 0xb0));
    }
    if (*(int *)(iVar2 + 200) != 0) {
      FUN_004f6910(*(int *)(iVar2 + 200));
    }
    if (*(int *)(iVar2 + 0xe0) != 0) {
      FUN_004f6910(*(int *)(iVar2 + 0xe0));
      return;
    }
  }
  else {
    FUN_004b1c50(0);
  }
  return;
}

