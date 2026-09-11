/* Decompiled from Speed.exe @ 0044d700 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044d700(int param_1)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"AIGoal");
  FUN_0044d670(param_1);
  iVar1 = *(char *)(param_1 + 0x40) * 0x10;
  *(int *)(iVar1 + param_1 + 0x58) = *(int *)(param_1 + 0x150) - *(int *)(iVar1 + 0x58 + param_1);
  cVar2 = *(char *)(param_1 + 0x40) + -1;
  *(char *)(param_1 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_1 + 0x44)) {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  return;
}

