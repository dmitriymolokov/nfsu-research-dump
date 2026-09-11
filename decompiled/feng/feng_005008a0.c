/* Decompiled from Speed.exe @ 005008a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_005008a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           ((*(int *)(param_1 + 0x88) * *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x84)) * 0x30
            + 4 + *(int *)(param_1 + 0x8c));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  return;
}

