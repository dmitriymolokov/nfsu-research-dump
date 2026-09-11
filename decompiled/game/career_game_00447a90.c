/* Decompiled from Speed.exe @ 00447a90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00447a90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_007360f8;
  iVar1 = *(int *)(DAT_007360f8 + 0x18);
  *param_1 = *(undefined4 *)(DAT_007360f8 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar1 + -1;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  return;
}

