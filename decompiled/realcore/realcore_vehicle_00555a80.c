/* Decompiled from Speed.exe @ 00555a80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __thiscall FUN_00555a80(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int local_34;
  int local_2c;
  int local_24;
  int local_1c;
  
  cVar2 = FUN_005494e0();
  if (cVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x60);
    cVar2 = FUN_00452d10(&DAT_0078e948);
    if (cVar2 == '\0') {
      if (param_2 == -0x6edfbf62) {
        local_1c = FUN_00421960();
        if (local_1c == 0) {
          local_1c = 0;
        }
        else {
          local_1c = local_1c + -4;
        }
        if (*(int *)(param_1 + 0x60) != local_1c) {
          local_24 = FUN_00417490();
          if (local_24 == 0) {
            local_24 = 0;
          }
          else {
            local_24 = local_24 + -4;
          }
          *(int *)(param_1 + 0x60) = local_24;
        }
      }
      else if (param_2 == -0x4a68e40f) {
        local_2c = FUN_00417490();
        if (local_2c == 0) {
          local_2c = 0;
        }
        else {
          local_2c = local_2c + -4;
        }
        if (*(int *)(param_1 + 0x60) != local_2c) {
          local_34 = FUN_00421960();
          if (local_34 == 0) {
            local_34 = 0;
          }
          else {
            local_34 = local_34 + -4;
          }
          *(int *)(param_1 + 0x60) = local_34;
        }
      }
      if (*(int *)(param_1 + 0x60) != iVar1) {
        cVar2 = FUN_00554410(param_1);
        if (cVar2 == '\0') {
          FUN_00555fa0();
        }
        FUN_005558d0();
      }
      FUN_00555720();
    }
  }
  return;
}

