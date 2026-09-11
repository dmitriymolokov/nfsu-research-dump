/* Decompiled from Speed.exe @ 0044ca20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


float10 __fastcall FUN_0044ca20(undefined4 param_1,int param_2)

{
  float local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(*(int *)(param_2 + 0x3e4) + 4) != 0) && (**(int **)(param_2 + 0x3d8) != 0)) {
    local_8 = 0.0;
    FUN_005a6700(local_4,&local_8,(*(int **)(param_2 + 0x3d8))[2]);
    return (float10)local_8;
  }
  return (float10)DAT_006cc7a4;
}

