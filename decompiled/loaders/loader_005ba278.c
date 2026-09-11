/* Decompiled from Speed.exe @ 005ba278 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005ba278(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_104 [255];
  undefined1 local_5;
  
  FUN_006734dd(local_104,0x100,param_4,&stack0x00000014);
  local_5 = 0;
  FUN_005b1f01(*(int *)(param_1 + 4) + 4,param_2,param_3,&DAT_006cc568,local_104);
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  return;
}

