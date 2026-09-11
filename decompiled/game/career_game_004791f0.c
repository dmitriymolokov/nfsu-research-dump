/* Decompiled from Speed.exe @ 004791f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004791f0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_2 + 0x5c) + 0x38);
  if (((iVar1 != 1) && (iVar1 != 2)) && (*(int *)(*(int *)(param_2 + 0x5c) + 0x3cc) < 2)) {
    iVar1 = *(int *)(param_2 + 0x20);
    FUN_00583f20(&PTR_DAT_00705e14,
                 SQRT(*(float *)(iVar1 + 0xc4) * *(float *)(iVar1 + 0xc4) +
                      *(float *)(iVar1 + 0xc0) * *(float *)(iVar1 + 0xc0) +
                      *(float *)(iVar1 + 200) * *(float *)(iVar1 + 200)));
    FUN_00584e00();
  }
  return;
}

