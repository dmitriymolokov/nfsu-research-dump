/* Decompiled from Speed.exe @ 004b6fe0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b6fe0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_ESI;
  bool bVar4;
  
  iVar2 = FUN_004ab5c0(&DAT_00748f70);
  if (iVar2 == 0) {
    param_2 = 1;
    FUN_004f75b0(0xff606060);
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,0);
    }
  }
  if (unaff_ESI != 0) {
    *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(int *)(unaff_ESI + 0x5c) = param_5;
    if (bVar4) {
      (**(code **)*puVar1)();
    }
    *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) & 0xfffffffd | 0x400000;
  }
  piVar3 = _malloc(0x20);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[3] = param_2;
    piVar3[2] = unaff_EBX;
    piVar3[4] = param_3;
    piVar3[5] = param_4;
    piVar3[6] = param_5;
    piVar3[7] = unaff_ESI;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  *puVar1 = piVar3;
  *(int **)(param_1 + 0x44) = piVar3;
  piVar3[1] = (int)puVar1;
  *piVar3 = param_1 + 0x40;
  return;
}

