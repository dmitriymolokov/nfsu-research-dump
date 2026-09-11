/* Decompiled from Speed.exe @ 00583140 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_00583140(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"TrafficController");
  FUN_00571c20(param_2,param_1 + 0x4d4,1,4,1);
  FUN_00571c20(param_2,param_1 + 0x4d0,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x4d1,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x4d2,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x4d8,1,1,1);
  FUN_00571c20(param_2,param_1 + 0x4dc,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x4e4,4,0xffffffff,0);
  FUN_0059b840(param_2,param_1 + 0x4e0);
  FUN_0044a6f0(param_2);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

