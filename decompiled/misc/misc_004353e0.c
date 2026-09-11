/* Decompiled from Speed.exe @ 004353e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004353e0(int *param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int unaff_EBX;
  
  sVar1 = *(short *)(param_2 + 0x10);
  if ((sVar1 == 1) && (*(short *)(param_3 + 0x10) == 1)) {
    *param_1 = *(int *)(param_3 + 0x110) - *(int *)(param_2 + 0x110);
    return;
  }
  if (sVar1 != 1) {
    if (*(short *)(param_3 + 0x10) == 1) {
      FUN_00433340((float)(int)*(char *)(param_3 + 9));
      FUN_00433340(*(undefined4 *)(param_2 + 0x20));
      iVar2 = FUN_00674898();
      *param_1 = ((iVar2 - *(int *)(param_3 + 0x110)) - *(int *)(unaff_EBX + 0x10)) + DAT_0073ad34;
      return;
    }
    if (sVar1 != 1) goto LAB_00435513;
  }
  if (*(short *)(param_3 + 0x10) != 1) {
    FUN_00433340(*(undefined4 *)(param_3 + 0x20));
    FUN_00433340((float)(int)*(char *)(param_2 + 9));
    iVar2 = FUN_00674898();
    *param_1 = (iVar2 + *(int *)(param_2 + 0x110) + *(int *)(unaff_EBX + 0x10)) - DAT_0073ad34;
    return;
  }
LAB_00435513:
  FUN_00433340(*(undefined4 *)(param_3 + 0x20));
  FUN_00433340(*(undefined4 *)(param_2 + 0x20));
  iVar2 = FUN_00674898();
  *param_1 = iVar2;
  return;
}

