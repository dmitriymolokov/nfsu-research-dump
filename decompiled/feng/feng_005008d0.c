/* Decompiled from Speed.exe @ 005008d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_005008d0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           ((*(int *)(param_2 + 0x88) * *(int *)(param_2 + 0x5c) + *(int *)(param_2 + 0x84)) * 0x30
            + 0x20 + *(int *)(param_2 + 0x8c));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[3] = param_1[3];
  return;
}

