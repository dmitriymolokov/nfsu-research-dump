/* Decompiled from Speed.exe @ 004622c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_004622c0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"AIDriver");
  FUN_0044a6f0(param_2);
  FUN_00571c20(param_2,param_1 + 0x4d4,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x4d8,4,0xffffffff,0);
  FUN_005840c0(*(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x10));
  FUN_00462ee0();
  FUN_00571c20(param_2,param_1 + 0x4e0,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x4e4,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x4e8,4,0xffffffff,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

