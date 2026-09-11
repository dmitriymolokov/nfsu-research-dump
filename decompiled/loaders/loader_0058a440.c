/* Decompiled from Speed.exe @ 0058a440 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0058a440(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00734508;
  iVar1 = *(int *)(DAT_00734508 + 0x18);
  *param_1 = *(undefined4 *)(DAT_00734508 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar1 + -1;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  return;
}

