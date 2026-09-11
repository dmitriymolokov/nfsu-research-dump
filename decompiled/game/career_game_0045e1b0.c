/* Decompiled from Speed.exe @ 0045e1b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_0045e1b0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"PsychoDriver");
  FUN_00571c20(param_2,param_1 + 0x1fc,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x200,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x204,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x208,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 500,8,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x20c,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x210,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x218,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x21c,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x228,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x220,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x222,2,2,0);
  FUN_00571c20(param_2,param_1 + 0x224,1,4,1);
  FUN_00571c20(param_2,param_1 + 0x229,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x22c,4,0xffffffff,0);
  FUN_005846a0();
  FUN_005846a0();
  FUN_005846a0();
  FUN_005846a0();
  FUN_005846a0();
  FUN_004251a0(param_2);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10;
  *(int *)(iVar1 + param_2 + 0x58) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0x58 + param_2);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

