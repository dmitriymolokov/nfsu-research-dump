/* Decompiled from Speed.exe @ 00589240 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_00589240(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00734514;
  iVar1 = *(int *)(DAT_00734514 + 0x18);
  *param_1 = *(undefined4 *)(DAT_00734514 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar1 + -1;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  return;
}

