/* Decompiled from Speed.exe @ 00442b00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int __fastcall FUN_00442b00(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_2 + 8;
  *(int *)param_2 = param_2;
  *(int *)(param_2 + 4) = param_2;
  *(int *)iVar1 = iVar1;
  *(int *)(param_2 + 0xc) = iVar1;
  puVar2 = (undefined4 *)(param_2 + 0x10);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_2;
}

