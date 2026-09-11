/* Decompiled from Speed.exe @ 005b9b78 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005b9b78(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_c = 0;
  local_1c = 0;
  pvVar1 = _malloc(0x1c);
  if (pvVar1 == (void *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_005b2aff();
  }
  if (local_8 == 0) {
LAB_005ba00d:
    iVar2 = -0x7ff8fff2;
LAB_005ba012:
    if (-1 < iVar2) goto LAB_005ba029;
  }
  else {
    pvVar1 = _malloc(0x1c);
    if (pvVar1 == (void *)0x0) {
      local_c = 0;
    }
    else {
      local_c = FUN_005b2aff();
    }
    if (local_c == 0) goto LAB_005ba00d;
    pvVar1 = _malloc(0x1c);
    if (pvVar1 == (void *)0x0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_005b2aff();
    }
    if (local_14 == 0) goto LAB_005ba00d;
    pvVar1 = _malloc(0x1c);
    if (pvVar1 == (void *)0x0) {
      local_18 = 0;
    }
    else {
      local_18 = FUN_005b2aff();
    }
    if (local_18 == 0) goto LAB_005ba00d;
    iVar2 = FUN_005b2b74(&local_1c,4,0);
    if (-1 < iVar2) {
      if ((param_2 == 0) || (*(int *)(param_2 + 4) != 3)) {
LAB_005b9d00:
        iVar2 = -0x7fffbffb;
        goto LAB_005ba016;
      }
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0x108) = 1;
      iVar2 = *(int *)(param_2 + 0x1c);
      if (iVar2 == 0) {
LAB_005b9d0a:
        iVar2 = FUN_005b2b74(param_1 + 0x100,4,0);
        if ((((-1 < iVar2) && (iVar2 = FUN_005b2b74(param_1 + 0xfc,4,0), -1 < iVar2)) &&
            (iVar2 = FUN_005b2b74(param_1 + 0x108,4,0), -1 < iVar2)) &&
           (iVar2 = FUN_005b2d02(local_14), -1 < iVar2)) {
          local_14 = 0;
          iVar2 = FUN_005b2d02(local_18);
          if (-1 < iVar2) {
            local_18 = 0;
            *(undefined4 *)(param_1 + 0x10c) = 0;
            *(undefined4 *)(param_1 + 0x114) = 0;
            iVar2 = FUN_005b2d1d(0,(undefined4 *)(param_1 + 0x10c));
            if ((-1 < iVar2) && (iVar2 = FUN_005b2d1d(0,param_1 + 0x114), -1 < iVar2)) {
              for (iVar2 = *(int *)(param_1 + 0x120); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x34)) {
                *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(*(int *)(iVar2 + 0x40) + 0x18);
                *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(*(int *)(iVar2 + 0x3c) + 0x18);
                *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(*(int *)(iVar2 + 0x44) + 0x18);
                for (iVar3 = *(int *)(iVar2 + 0x30); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x34)) {
                  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(*(int *)(iVar3 + 0x40) + 0x18);
                  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 0x18);
                  *(undefined4 *)(iVar3 + 0x44) = 0;
                }
              }
              for (iVar2 = *(int *)(param_1 + 0x11c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x34)) {
                for (iVar3 = *(int *)(iVar2 + 0x30); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x34)) {
                  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(*(int *)(iVar3 + 0x40) + 0x18);
                  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(*(int *)(iVar3 + 0x3c) + 0x18);
                  *(undefined4 *)(iVar3 + 0x44) = 0;
                }
                for (iVar3 = *(int *)(iVar2 + 0x2c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x2c)) {
                  for (iVar4 = *(int *)(iVar3 + 0x28); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x34)) {
                    *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(*(int *)(iVar4 + 0x40) + 0x18);
                    *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(*(int *)(iVar4 + 0x3c) + 0x18);
                    *(undefined4 *)(iVar4 + 0x44) = 0;
                  }
                }
              }
              for (iVar2 = *(int *)(param_1 + 0x128); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x14)) {
                *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0x18);
                *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x18);
              }
              pvVar1 = _malloc(*(size_t *)(param_1 + 0x10c));
              *(void **)(param_1 + 0x110) = pvVar1;
              if (pvVar1 != (void *)0x0) {
                pvVar1 = _malloc(*(size_t *)(param_1 + 0x114));
                *(void **)(param_1 + 0x118) = pvVar1;
                if (pvVar1 != (void *)0x0) {
                  iVar2 = FUN_005b2d1d(*(undefined4 *)(param_1 + 0x110),0);
                  if ((-1 < iVar2) &&
                     (iVar2 = FUN_005b2d1d(*(undefined4 *)(param_1 + 0x118),0), -1 < iVar2)) {
                    iVar3 = *(int *)(param_1 + 0x120);
LAB_005b9f3e:
                    if (iVar3 == 0) {
                      local_10 = *(int *)(param_1 + 0x11c);
                      while (local_10 != 0) {
                        iVar4 = local_10;
                        for (iVar3 = *(int *)(local_10 + 0x30); local_10 = iVar4, iVar3 != 0;
                            iVar3 = *(int *)(iVar3 + 0x34)) {
                          iVar2 = FUN_005b33cb(*(undefined4 *)(param_1 + 0x118),iVar3);
                          if (iVar2 < 0) {
                            pcVar5 = 
                            "ID3DXEffectCompiler: There was an error initializing technique annotation handles"
                            ;
                            goto LAB_005b9f55;
                          }
                          iVar4 = local_10;
                        }
                        for (local_1c = *(int *)(iVar4 + 0x2c); local_1c != 0;
                            local_1c = *(int *)(local_1c + 0x2c)) {
                          for (iVar3 = *(int *)(local_1c + 0x28); iVar3 != 0;
                              iVar3 = *(int *)(iVar3 + 0x34)) {
                            iVar2 = FUN_005b33cb(*(undefined4 *)(param_1 + 0x118),iVar3);
                            if (iVar2 < 0) {
                              pcVar5 = 
                              "ID3DXEffectCompiler: There was an error initializing pass annotation handles"
                              ;
                              goto LAB_005b9f55;
                            }
                            iVar4 = local_10;
                          }
                        }
                        local_10 = *(int *)(iVar4 + 0x34);
                      }
                      *(int *)(param_1 + 0xf8) = param_2;
                    }
                    else {
                      iVar2 = FUN_005b33cb(*(undefined4 *)(param_1 + 0x118),iVar3);
                      if (-1 < iVar2) goto code_r0x005b9f0f;
                      pcVar5 = 
                      "ID3DXEffectCompiler: There was an error initializing parameter handles";
LAB_005b9f55:
                      FUN_005b1f01(param_1 + 0xc,0,0,pcVar5);
                    }
                    goto LAB_005ba012;
                  }
                  goto LAB_005ba016;
                }
              }
              iVar2 = -0x7ff8fff2;
            }
          }
        }
        goto LAB_005ba016;
      }
      do {
        if ((*(int *)(iVar2 + 4) != 1) || (iVar3 = *(int *)(iVar2 + 8), iVar3 == 0)) {
LAB_005b9ced:
          FUN_005b1f01(param_1 + 0xc,0,0,
                       "ID3DXEffectCompiler: There was an unexpected error in the parse tree");
          goto LAB_005b9d00;
        }
        if (*(int *)(iVar3 + 4) != 0xb) {
          if (*(int *)(iVar3 + 4) != 5) goto LAB_005b9ced;
          iVar4 = *(int *)(iVar3 + 0x10);
          if (iVar4 != 0) {
            if (iVar4 == 1) {
              iVar3 = FUN_005b90e9(iVar3,local_14,local_c);
            }
            else if (iVar4 == 2) {
              iVar3 = FUN_005b6109(iVar3);
            }
            else {
              if (iVar4 != 3) goto LAB_005b9d00;
              iVar3 = FUN_005b98ff(iVar3,local_18,local_c);
            }
            if ((iVar3 < 0) && (-1 < local_10)) {
              local_10 = iVar3;
            }
          }
        }
        iVar2 = *(int *)(iVar2 + 0xc);
      } while (iVar2 != 0);
      iVar2 = local_10;
      if (-1 < local_10) goto LAB_005b9d0a;
      goto LAB_005ba012;
    }
  }
LAB_005ba016:
  FUN_005b1f01(param_1 + 0xc,0,0,"ID3DXEffectCompiler: There was an error initializing the compiler"
              );
LAB_005ba029:
  if (local_14 != 0) {
    FUN_005b2b58(1);
  }
  if (local_18 != 0) {
    FUN_005b2b58(1);
  }
  if (local_8 != 0) {
    FUN_005b2b58(1);
  }
  if (local_c != 0) {
    FUN_005b2b58(1);
  }
  return iVar2;
code_r0x005b9f0f:
  for (local_10 = *(int *)(iVar3 + 0x30); local_10 != 0; local_10 = *(int *)(local_10 + 0x34)) {
    iVar2 = FUN_005b33cb(*(undefined4 *)(param_1 + 0x118),local_10);
    if (iVar2 < 0) {
      pcVar5 = "ID3DXEffectCompiler: There was an error initializing parameter annotation handles";
      goto LAB_005b9f55;
    }
  }
  iVar3 = *(int *)(iVar3 + 0x34);
  goto LAB_005b9f3e;
}

