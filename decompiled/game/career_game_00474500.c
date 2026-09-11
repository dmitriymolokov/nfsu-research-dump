/* Decompiled from Speed.exe @ 00474500 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_00474500(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int local_14;
  
  FUN_00571ea0(param_1,"MellowMover");
  FUN_00584960();
  FUN_00475240();
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_2 + 0x3d) != '\0' || *(char *)(param_2 + 0x3c) != '\0') {
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined1 *)(iVar1 + 0x30) = 1;
  }
  local_14 = 4;
  do {
    FUN_005869c0();
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

