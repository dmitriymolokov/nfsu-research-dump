/* Decompiled from Speed.exe @ 0047c310 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0047c310(int param_1)

{
  int iVar1;
  void *pvVar2;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(*(int *)(param_1 + 0x10) + 0x5c) == 0) ||
     (iVar1 = FUN_005a4d80(DAT_007797c4), iVar1 == 0)) {
    return 0;
  }
  local_14 = 0;
  if (0 < *(int *)(DAT_0073619c + 0x24)) {
    local_10 = 0;
    local_1c = &DAT_007798f4;
    do {
      if (0x779953 < (int)local_1c) break;
      iVar1 = (&DAT_007799d0)[local_14];
      if ((((iVar1 != 0) && ((&DAT_00779960)[local_14] != 0)) && ((&DAT_007799a0)[local_14] != 0))
         && ((&DAT_00779970)[local_14] != 0)) {
        local_18 = 0;
        do {
          pvVar2 = _malloc(0x7c);
          if (pvVar2 == (void *)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = (void *)FUN_0047b040();
          }
          *(uint *)((int)pvVar2 + 0x34) = *(uint *)((int)pvVar2 + 0x34) | 0x20;
          *(int *)((int)pvVar2 + 8) = iVar1;
          *(undefined4 *)((int)pvVar2 + 0x5c) = 0x3f000000;
          FUN_0047b600(0,0);
          FUN_0047b220();
          FUN_0047b220();
          if (*(int *)((int)pvVar2 + 0x78) == 0) {
            FUN_0047b170();
            FUN_0047b1c0();
            FUN_0047b0b0(pvVar2);
            _free(pvVar2);
          }
          else {
            (&DAT_007798f0)[local_10 + local_18] = pvVar2;
          }
          local_18 = local_18 + 1;
        } while (local_18 < 2);
        if (*local_1c != 0) {
          FUN_0047b290(DAT_006b7054);
        }
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + 6;
      local_1c = local_1c + 6;
    } while (local_14 < *(int *)(DAT_0073619c + 0x24));
  }
  *(undefined4 *)(param_1 + 0xe0) = 1;
  return 1;
}

