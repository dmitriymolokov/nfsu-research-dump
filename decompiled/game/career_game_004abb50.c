/* Decompiled from Speed.exe @ 004abb50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004abb50(int param_1)

{
  int iVar1;
  char cVar2;
  int unaff_EBX;
  
  *(undefined4 *)(unaff_EBX + 0x2f928) = 1;
  if (*(int **)(unaff_EBX + 0x2ed5c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBX + 0x2ed5c) + 0x14))();
    iVar1 = *(int *)(unaff_EBX + 0x2ebdc);
    if ((iVar1 == 1) && (unaff_EBX != -0x15f88)) {
      iVar1 = *(int *)(unaff_EBX + 0x2ed5c);
      cVar2 = FUN_005a2f10(iVar1,1);
      if (cVar2 == '\0') {
        FUN_005a0f60();
      }
      else {
        FUN_005a0dc0(*(undefined4 *)(iVar1 + 0x58a0));
      }
    }
    else if (((iVar1 == 2) || (iVar1 == 4)) && (*(int *)(unaff_EBX + 0x2ed58) == 4)) {
      if (*(undefined4 **)(unaff_EBX + 0x2ed5c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(unaff_EBX + 0x2ed5c))(1);
      }
      *(undefined4 *)(unaff_EBX + 0x2ed5c) = 0;
    }
  }
  if (param_1 == 0) {
    if ((*(int *)(unaff_EBX + 0x2ebdc) != 1) ||
       (*(int *)(*(int *)(unaff_EBX + 0x2ed5c) + 0x58a0) != 0)) {
      *(int *)(unaff_EBX + 0x1f254) = *(int *)(unaff_EBX + 0x1f254) + 1;
    }
    if (*(int *)(unaff_EBX + 0x2ebdc) == 4) {
      *(int *)(unaff_EBX + 0x2eb98) = *(int *)(unaff_EBX + 0x2eb98) + 1;
    }
  }
  return;
}

