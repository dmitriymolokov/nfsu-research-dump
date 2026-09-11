/* Decompiled from Speed.exe @ 0042ed40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0042ed40(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x95c) != 0) {
    FUN_004a9540(*(int *)(unaff_ESI + 0x95c),param_1,param_2);
  }
  *(uint *)(unaff_ESI + 0x4b0) = *(uint *)(unaff_ESI + 0x4b0) & 0xffffff9f;
  *(undefined4 *)(unaff_ESI + 0x4b4) = *(undefined4 *)(unaff_ESI + 0x4b4);
  FUN_0042ec10(param_1,param_2);
  *(undefined4 *)(unaff_ESI + 0x4b4) = param_2;
  *(undefined4 *)(unaff_ESI + 0x4b0) = param_1;
  return;
}

