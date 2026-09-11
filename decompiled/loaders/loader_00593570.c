/* Decompiled from Speed.exe @ 00593570 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00593570(char param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  piVar2 = (int *)FUN_00567160();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[2] = unaff_EDI;
    *(undefined1 *)(piVar2 + 3) = 0;
  }
  *(int *)(unaff_EDI + 0x270) = unaff_EBX;
  *(int *)(*(int *)(unaff_EDI + 600) + 0xc) = unaff_EBX;
  *(int *)(*(int *)(unaff_EDI + 0x25c) + 0xc) = unaff_EBX;
  if (param_1 != '\0') {
    FUN_00467700(*(float *)(unaff_EBX + 8) - *(float *)(unaff_EBX + 0xc));
  }
  iVar1 = *(int *)(unaff_EBX + 0x1c);
  *(undefined4 *)(unaff_EBX + 0x1c) = piVar2;
  *(int **)(iVar1 + 4) = piVar2;
  piVar2[1] = unaff_EBX + 0x1c;
  *piVar2 = iVar1;
  return;
}

