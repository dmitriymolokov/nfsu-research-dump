/* Decompiled from Speed.exe @ 00477300 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477300(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar2 = FUN_0047ac00(*(undefined4 *)(param_1 + 0x5c),param_1 + 0x70,param_1 + 0x74);
  if (iVar2 == 0) {
    iVar3 = 0x2f0;
    do {
      iVar1 = *(int *)(param_1 + -0x2c8 + iVar3);
      if (*(float *)(iVar1 + 0x1c) == *(float *)(*(int *)(iVar1 + 0x14) + 0x14)) {
        fVar4 = (float10)FUN_00588ab0();
        iVar2 = 1;
        *(float *)(iVar3 + *(int *)(param_1 + 0x58)) =
             (float)(fVar4 + (float10)*(float *)(iVar3 + *(int *)(param_1 + 0x58)));
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x300);
  }
  if ((DAT_00735fac == 0) || (*(int *)(*(int *)(param_1 + 0x5c) + 0x24) != 1)) {
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    DAT_00735fac = 0;
    FUN_00584e30();
  }
  _DAT_006f0738 = 0;
  FUN_0046abd0();
  return;
}

