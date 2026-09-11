/* Decompiled from Speed.exe @ 00476fa0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void __thiscall FUN_00476fa0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iStack_1c;
  int local_18;
  
  FUN_00571ea0(0,"PhysicsMover");
  FUN_00571c20(param_2,param_1 + 0x78,4,0xffffffff,0);
  FUN_00584960();
  (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(param_2);
  local_18 = 4;
  do {
    FUN_005869c0();
    FUN_00588470();
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  FUN_0046c950();
  FUN_0046d510();
  iVar1 = *(int *)(iStack_1c + 0x50);
  if (*(char *)(param_2 + 0x3d) != '\0' || *(char *)(param_2 + 0x3c) != '\0') {
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x30) = 1;
  }
  FUN_00571c20(param_2,iStack_1c + 0x7c,4,0xffffffff,0);
  FUN_00571c20(param_2,iStack_1c + 0x60,4,0xffffffff,0);
  FUN_00571c20(param_2,iStack_1c + 100,4,0xffffffff,0);
  FUN_00571c20(param_2,iStack_1c + 0x68,1,1,0);
  FUN_00571c20(param_2,iStack_1c + 0x69,1,1,0);
  FUN_00571c20(param_2,iStack_1c + 0x6c,4,4,1);
  FUN_00571c20(param_2,iStack_1c + 0x70,4,0xffffffff,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

