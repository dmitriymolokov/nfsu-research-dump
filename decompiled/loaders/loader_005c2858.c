/* Decompiled from Speed.exe @ 005c2858 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_005c2858(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_1c [4];
  uint local_18;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar4 = param_1 + 0x10;
    local_10 = iVar4;
    iVar1 = FUN_005d7700(*(undefined4 *)(param_1 + 0x18),2,local_1c);
    if (iVar1 < 0) {
      FUN_005ba1d9(local_c,iVar4,0xbe1,"unsupported compiler target \'%s\'",
                   *(undefined4 *)(param_1 + 0x18));
    }
    else {
      if ((local_18 & 0xffff0000) == 0xfffe0000) {
        param_4 = (uint)(param_4 != 0) * 2 + 0x1a;
      }
      else if ((local_18 & 0xffff0000) == 0xffff0000) {
        param_4 = (uint)(param_4 != 0) * 2 + 0x19;
      }
      pvVar2 = _malloc(0x50);
      if (pvVar2 == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = (undefined4 *)FUN_005d8831(0,0x1b,0,0,1,iVar4);
      }
      if (puVar3 != (undefined4 *)0x0) {
        pvVar2 = _malloc(0x24);
        if (pvVar2 == (void *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_005d814c(3,param_4,1,1,0x200);
        }
        puVar3[4] = iVar4;
        if (iVar4 != 0) {
          iVar4 = FUN_005d7885(param_1);
          puVar3[8] = iVar4;
          if (iVar4 != 0) {
            iVar4 = FUN_005c238d(param_2,param_3,1);
            puVar3[9] = iVar4;
            if (iVar4 != 0) {
              pvVar2 = _malloc(0x50);
              if (pvVar2 == (void *)0x0) {
                local_8 = (undefined4 *)0x0;
              }
              else {
                local_8 = (undefined4 *)FUN_005d8831(0,0,0,0,1,local_10);
              }
              if (local_8 != (undefined4 *)0x0) {
                pvVar2 = _malloc(0x24);
                if (pvVar2 == (void *)0x0) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = FUN_005d814c(3,param_4,1,1,0x200);
                }
                local_8[4] = iVar4;
                if (iVar4 != 0) {
                  pvVar2 = _malloc(0x14);
                  if (pvVar2 == (void *)0x0) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = FUN_005d78db(0,0,"Value");
                  }
                  local_8[8] = iVar4;
                  if (iVar4 != 0) {
                    pvVar2 = _malloc(0x40);
                    if (pvVar2 == (void *)0x0) {
                      iVar4 = 0;
                    }
                    else {
                      iVar4 = FUN_005d8a65(4,puVar3,local_10);
                    }
                    *(int *)(local_8[8] + 8) = iVar4;
                    if (iVar4 != 0) {
                      FUN_005bb1eb(local_8);
                      return local_8;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)*puVar3)(1);
        if (local_8 != (undefined4 *)0x0) {
          (**(code **)*local_8)(1);
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

