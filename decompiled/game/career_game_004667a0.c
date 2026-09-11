/* Decompiled from Speed.exe @ 004667a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004667a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0072cbf4;
  iVar1 = *(int *)(DAT_0072cbf4 + 0x18);
  *param_1 = *(undefined4 *)(DAT_0072cbf4 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar1 + -1;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  return;
}

