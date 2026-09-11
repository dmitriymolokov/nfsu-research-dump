/* Decompiled from Speed.exe @ 00425120 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00425120(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_00735f8c;
  iVar1 = *(int *)(DAT_00735f8c + 0x18);
  *param_1 = *(undefined4 *)(DAT_00735f8c + 0x10);
  *(int *)(iVar2 + 0x18) = iVar1 + -1;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  return;
}

