/* Decompiled from Speed.exe @ 00460450 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_00460450(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"DragDriver");
  (**(code **)(*(int *)(param_1 + 0x250) + 8))(param_2);
  FUN_0045e1b0(param_2);
  FUN_00571c20(param_2,param_1 + 0x510,1,1,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10;
  *(int *)(iVar1 + param_2 + 0x58) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0x58 + param_2);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

