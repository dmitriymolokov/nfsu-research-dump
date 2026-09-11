/* Decompiled from Speed.exe @ 00455510 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00455510(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_007344c8;
  iVar1 = *(int *)(DAT_007344c8 + 0x18);
  *param_1 = *(undefined4 *)(DAT_007344c8 + 0x10);
  *(int *)(iVar2 + 0x18) = iVar1 + -1;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  return;
}

