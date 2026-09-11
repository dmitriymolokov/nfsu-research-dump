/* Decompiled from Speed.exe @ 00411ef0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00411ef0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  FUN_00639c00(*(undefined4 *)(param_3 + 400));
  iVar1 = FUN_0063a5d0(param_3 + 0x84,1,*(undefined4 *)(param_3 + 0x50),param_3);
  *(int *)(param_3 + 400) = iVar1;
  if (iVar1 != 0) {
    FUN_00639f20(iVar1,FUN_00411ec0);
  }
  return;
}

