/* Decompiled from Speed.exe @ 004251a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_004251a0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"CarDriver");
  FUN_00571c20(param_2,param_1 + 0x1d0,2,2,0);
  FUN_00571c20(param_2,param_1 + 0x1dc,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1e4,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1e0,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1d4,1,4,1);
  FUN_00571c20(param_2,param_1 + 0x1d8,1,4,1);
  FUN_00458dc0();
  iVar1 = *(char *)(param_2 + 0x40) * 0x10;
  *(int *)(iVar1 + param_2 + 0x58) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0x58 + param_2);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

