/* Decompiled from Speed.exe @ 00656f20 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00656f20(int param_1,undefined4 param_2,undefined4 param_3)

{
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0065ba20(param_2,param_3,&local_c);
  local_c = local_c * (float)_DAT_006aab30;
  local_8 = local_8 * (float)_DAT_006aab30;
  local_4 = local_4 * (float)_DAT_006aab30;
  (**(code **)(**(int **)(param_1 + 0x40) + 0x4c))
            (*(int **)(param_1 + 0x40),local_c,local_8,local_4,0);
  return;
}

