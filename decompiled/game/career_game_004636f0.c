/* Decompiled from Speed.exe @ 004636f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_004636f0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_00571ea0(0,"BeltMover");
  FUN_00571c20(param_2,param_1 + 0x1c,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x20,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x24,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0xc,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x10,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x34,1,1,0);
  FUN_00571c20(param_2,*(undefined4 *)(param_1 + 0x18),0x30,0xffffffff,0);
  FUN_00571c20(param_2,*(undefined4 *)(param_1 + 0x28),0x60,0xffffffff,0);
  FUN_00571c20(param_2,*(undefined4 *)(param_1 + 0x2c),0x60,0xffffffff,0);
  FUN_0059ca70(*(undefined4 *)(param_1 + 0x14),3);
  FUN_005840c0(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10));
  iVar2 = 4;
  do {
    FUN_005869c0();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar2 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar2 + 0xc);
  cVar1 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

