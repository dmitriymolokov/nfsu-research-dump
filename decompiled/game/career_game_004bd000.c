/* Decompiled from Speed.exe @ 004bd000 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004bd000(int param_1)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_00735e34 = DAT_00735e34 | 4;
  local_c = (DAT_00758954 != 0) + 0xb8a7c6cc;
  local_8 = 0;
  local_4 = 0;
  local_24 = 0x30003d27;
  local_1c = 0x1a2826e1;
  local_20 = 0x61cb0720;
  local_14 = 0x5f5e3886;
  local_18 = 0x1b3a2485;
  local_10 = 0xa1c41aef;
  FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(param_1 + 0xc));
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x5a7b4438,0,0,*(int *)(iVar1 + 0x18));
  }
  return;
}

