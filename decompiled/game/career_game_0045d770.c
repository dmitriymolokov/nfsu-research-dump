/* Decompiled from Speed.exe @ 0045d770 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_0045d770(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"DragController");
  FUN_004622c0(param_2);
  FUN_00571c20(param_2,param_1 + 0x500,1,4,1);
  FUN_00571c20(param_2,param_1 + 0x504,4,4,0);
  FUN_00571c20(param_2,param_1 + 0x508,4,4,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

