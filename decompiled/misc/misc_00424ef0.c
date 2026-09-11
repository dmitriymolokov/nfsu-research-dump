/* Decompiled from Speed.exe @ 00424ef0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00424ef0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0072cbf0;
  iVar1 = *(int *)(DAT_0072cbf0 + 0x18);
  *param_1 = *(undefined4 *)(DAT_0072cbf0 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar1 + -1;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  return;
}

