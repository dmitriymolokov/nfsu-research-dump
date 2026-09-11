/* Decompiled from Speed.exe @ 005e4bb7 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005e4bb7(int param_1,int param_2)

{
  void *_Memory;
  undefined4 *puVar1;
  uint uVar2;
  uint local_8;
  
  if (*(int *)(param_2 + 4) == 0xc) {
    uVar2 = *(int *)(param_2 + 0x18) * *(int *)(param_2 + 0x14);
    _Memory = _malloc(uVar2 * 4);
    if (_Memory == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    else {
      local_8 = FUN_005d91c9(_Memory,uVar2);
      if (((-1 < (int)local_8) && (local_8 = FUN_005e2a38(param_2,_Memory), -1 < (int)local_8)) &&
         (local_8 = FUN_005d9fa1(param_2,uVar2 & 0xffffff | 0x10000000,_Memory,_Memory,0,0),
         -1 < (int)local_8)) {
        local_8 = 0;
        if (uVar2 != 0) {
          do {
            puVar1 = (undefined4 *)FUN_005f762c(*(undefined4 *)((int)_Memory + local_8 * 4));
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x5c);
            }
            local_8 = local_8 + 1;
          } while (local_8 < uVar2);
        }
        local_8 = FUN_005dc613(*(undefined4 *)(param_2 + 0x10),_Memory,
                               *(undefined4 *)(*(int *)(param_1 + 8) + 0x5c),1,1,0,0);
      }
    }
    _free(_Memory);
    if (*(int *)(param_1 + 0x34) != 0) {
      local_8 = -0x7fffbffb;
    }
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

