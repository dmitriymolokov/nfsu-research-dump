/* Decompiled from Speed.exe @ 004a8cb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a8cb0(void)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  
  piVar1 = DAT_0077b244;
  fVar6 = (float10)FUN_00439a80();
  if (fVar6 < (float10)DAT_006cc7a4) {
    FUN_004f6910();
  }
  else {
    fVar6 = (float10)FUN_00439a80();
    FUN_004f6970();
    FUN_004f68a0("%1.1f",(double)(float)fVar6);
    iVar4 = *piVar1;
    if ((((iVar4 != 3) && (iVar4 != 4)) && (iVar4 != 5)) && ((iVar4 != 0 && (iVar4 != 6)))) {
      uVar2 = FUN_00674898();
      uVar3 = uVar2 & 0x80000001;
      bVar5 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar5 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if ((bVar5) && (ABS((float)fVar6 - (float)(int)uVar2) < DAT_0073457c)) {
        iVar4 = FUN_0059fb80();
        if (iVar4 == 0) {
          FUN_0059fb80();
        }
        FUN_004a8b10();
      }
    }
  }
  FUN_004a8a70();
  return;
}

