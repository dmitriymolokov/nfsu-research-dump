/* Decompiled from Speed.exe @ 00664990 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00664990(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  param_1[3] = 0x6f66666c;
  FUN_0066e040(*param_1);
  piVar4 = param_1 + 0x128;
  iVar3 = 10;
  do {
    if (*piVar4 != 0) {
      iVar1 = FUN_0066dac0(*piVar4);
      while (iVar1 != 0) {
        uVar2 = FUN_00666eb0(piVar4[1],iVar1);
        FUN_00447030(uVar2);
        iVar1 = FUN_0066dac0(*piVar4);
      }
    }
    piVar4 = piVar4 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = param_1[0x1bd];
  while (iVar3 != 0) {
    iVar3 = param_1[0x1bd];
    param_1[0x1bd] = *(undefined4 *)(iVar3 + 0x40);
    FUN_00447030(iVar3);
    iVar3 = param_1[0x1bd];
  }
  FUN_00664920();
  param_1[0x1be] = 0;
  param_1[0x1c1] = 0;
  return;
}

