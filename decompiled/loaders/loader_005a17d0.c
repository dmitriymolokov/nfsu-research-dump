/* Decompiled from Speed.exe @ 005a17d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005a17d0(uint param_1,int param_2)

{
  uint *puVar1;
  
  if (((0xff < param_1) || ((&DAT_00733ff8)[param_1] == 0)) &&
     ((*(int *)(param_2 + 0x88b0) == 0 ||
      ((puVar1 = (uint *)(*(int *)(param_2 + 0x88b0) + 0x58a0), puVar1 == (uint *)0x0 ||
       (param_1 != *puVar1)))))) {
    return 0;
  }
  return param_1 + 0x34c + param_2;
}

