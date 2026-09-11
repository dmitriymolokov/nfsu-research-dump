/* Decompiled from Speed.exe @ 0050eee0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050eee0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int unaff_EBX;
  
  iVar2 = *(int *)(unaff_EBX + 0x40);
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
     (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0xc53843de);
    }
  }
  FUN_004f6910(iVar3);
  if (param_1 == -0x6edfbf62) {
    if ((*(int *)(unaff_EBX + 0x40) != *(int *)(unaff_EBX + 0x44)) &&
       (*(int *)(unaff_EBX + 0x44) != unaff_EBX + 0x44)) {
      *(undefined4 *)(unaff_EBX + 0x40) = *(undefined4 *)(*(int *)(unaff_EBX + 0x40) + 4);
    }
  }
  else if (((param_1 == -0x4a68e40f) &&
           (*(undefined4 **)(unaff_EBX + 0x40) != *(undefined4 **)(unaff_EBX + 0x48))) &&
          (*(int *)(unaff_EBX + 0x44) != unaff_EBX + 0x44)) {
    *(undefined4 *)(unaff_EBX + 0x40) = **(undefined4 **)(unaff_EBX + 0x40);
  }
  iVar3 = *(int *)(unaff_EBX + 0x40);
  iVar5 = *(int *)(iVar3 + 0xc);
  piVar4 = *(int **)(iVar5 + 0x14);
  piVar1 = piVar4 + *(short *)(iVar5 + 0x1c) * 2;
  if (piVar4 != (int *)0x0) {
    for (; (piVar4 < piVar1 && (*piVar4 != -0x14fefe1e)); piVar4 = piVar4 + 2) {
    }
  }
  iVar5 = FUN_0050dee0();
  *(int *)(unaff_EBX + 0x90) = iVar5;
  if (iVar5 == 0) {
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
      if (DAT_0073578c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004ef050(0xc53843de);
      }
    }
    FUN_004f6910(iVar5);
  }
  else {
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar5 = FUN_004f65d0(), iVar5 == 0)) ||
       (iVar5 = FUN_004ffb70(), iVar5 == 0)) {
      if (DAT_0073578c == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_004ef050(0xc53843de);
      }
    }
    FUN_004f6970(iVar5);
    FUN_004ad7b0(*(undefined4 *)(unaff_EBX + 0x90));
  }
  if (iVar2 != iVar3) {
    FUN_004f8910();
    FUN_0050f200(unaff_EBX);
    FUN_00504450();
    if (param_1 == -0x6edfbf62) {
      FUN_004f8340(*(undefined4 *)(unaff_EBX + 0xc));
      return;
    }
    FUN_004f8340(*(undefined4 *)(unaff_EBX + 0xc));
  }
  return;
}

