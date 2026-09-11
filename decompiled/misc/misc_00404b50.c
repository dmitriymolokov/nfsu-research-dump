/* Decompiled from Speed.exe @ 00404b50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00404b50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_00405350();
  iVar1 = unaff_ESI + 0x3c;
  *(int *)iVar1 = iVar1;
  *(int *)(unaff_ESI + 0x40) = iVar1;
  *(undefined4 *)(unaff_ESI + 0x44) = param_1;
  FUN_00405350(param_2);
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  return;
}

