/* Decompiled from Speed.exe @ 004525b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_004525b0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"AIActionAccidentRecovery");
  FUN_00571c20(param_2,param_1 + 0x200,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x204,1,1,0);
  FUN_0044e370(param_2);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

