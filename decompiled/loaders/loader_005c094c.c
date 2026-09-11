/* Decompiled from Speed.exe @ 005c094c */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_005c094c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_2c;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_14 = (undefined4 *)0x0;
  iVar1 = FUN_005ba5e2();
  local_1c = iVar1;
  FUN_005d844d();
  if ((iVar1 != 0) && (param_2 != 0)) {
    local_18 = *(int *)(iVar1 + 0x18);
    iVar6 = param_2 + 0x10;
    local_10 = iVar6;
    if ((*(byte *)(iVar1 + 0x10) & 0x40) != 0) {
      FUN_005ba1d9(param_1,iVar6,0xbe7,"\'%s\': functions cannot be declared \'uniform\'",
                   *(undefined4 *)(param_2 + 0x18));
    }
    if ((*(byte *)(iVar1 + 0x10) & 1) != 0) {
      FUN_005ba1d9(param_1,iVar6,0xbbe,"\'%s\': functions cannot be declared \'extern\'",
                   *(undefined4 *)(param_2 + 0x18));
    }
    iVar1 = FUN_005ba799(local_18);
    if (iVar1 == 0) {
      FUN_005ba1d9(param_1,iVar6,0xbde,"\'%s\': function return value must be numeric",
                   *(undefined4 *)(param_2 + 0x18));
    }
    local_c = 0;
    for (iVar1 = param_3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar3 = *(int *)(iVar1 + 8);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 4) == 5)) {
        iVar4 = *(int *)(iVar1 + 0xc);
        if ((iVar4 == 0) || (*(int *)(*(int *)(iVar4 + 8) + 4) != 0xb)) {
          if (local_c != 0) {
            FUN_005ba1d9(param_1,iVar6,0xbe4,"\'%s\': missing default value for parameter \'%s\'",
                         *(undefined4 *)(param_2 + 0x18),
                         *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x18));
          }
        }
        else {
          local_c = 1;
          iVar1 = iVar4;
        }
      }
    }
    pvVar2 = _malloc(0x14);
    if (pvVar2 == (void *)0x0) {
      local_8 = (undefined4 *)0x0;
    }
    else {
      local_8 = (undefined4 *)FUN_005d78db(0,0,"Stmts");
    }
    if (local_8 != (undefined4 *)0x0) {
      pvVar2 = _malloc(0x30);
      iVar1 = 0;
      if (pvVar2 == (void *)0x0) {
        local_c = 0;
      }
      else {
        local_c = FUN_005d7db0(2,0,0,0);
      }
      iVar6 = local_c;
      if (local_c != 0) {
        local_8[2] = local_c;
        iVar3 = FUN_005d7885(param_2);
        *(int *)(iVar6 + 0x14) = iVar3;
        if (iVar3 != 0) {
          pvVar2 = _malloc(0x40);
          if (pvVar2 != (void *)0x0) {
            iVar1 = FUN_005d8213();
          }
          if (iVar1 != 0) {
            *(int *)(iVar6 + 0x18) = iVar1;
            *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(local_1c + 0x10);
            if (*(int *)(local_1c + 0x14) != 0) {
              iVar6 = FUN_005d7885(*(int *)(local_1c + 0x14));
              *(int *)(iVar1 + 0x1c) = iVar6;
              if (iVar6 == 0) goto LAB_005c0c0d;
            }
            if (local_18 != 0) {
              iVar6 = FUN_005d7885(local_18);
              *(int *)(iVar1 + 0x20) = iVar6;
              if (iVar6 == 0) goto LAB_005c0c0d;
            }
            FUN_005ba5ee(*(undefined4 *)(iVar1 + 0x20),1);
            if (param_4 != 0) {
              if (*(int *)(iVar1 + 0x20) == 0) {
                FUN_005ba1d9(param_1,local_10,0xc04,"\'%s\': void function cannot have a semantic",
                             *(undefined4 *)(local_10 + 8));
                param_4 = 0;
              }
              if (param_4 != 0) {
                iVar6 = FUN_005d7885(param_4);
                *(int *)(iVar1 + 0x34) = iVar6;
                if (iVar6 == 0) goto LAB_005c0c0d;
                do {
                  iVar3 = param_4;
                  iVar6 = *(int *)(param_4 + 8);
                  if ((iVar6 != 0) && (*(int *)(iVar6 + 4) == 2)) {
                    iVar6 = FUN_005d7885(iVar6);
                    *(int *)(iVar1 + 0x30) = iVar6;
                    if (iVar6 == 0) goto LAB_005c0c0d;
                  }
                  param_4 = *(int *)(iVar3 + 0xc);
                } while (param_4 != 0);
              }
            }
            if ((param_3 != 0) && (*(int *)(param_3 + 8) != 0)) {
              iVar6 = FUN_005d7885(param_3);
              *(int *)(iVar1 + 0x24) = iVar6;
              if (iVar6 == 0) goto LAB_005c0c0d;
            }
            iVar3 = local_10;
            iVar4 = FUN_005be628(2,local_10,*(undefined4 *)(iVar1 + 0x1c),
                                 *(undefined4 *)(iVar1 + 0x24),
                                 *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1c),10,&param_3,
                                 &local_14);
            iVar6 = param_3;
            if (-1 < iVar4) {
              if (iVar4 == 0) {
                iVar3 = FUN_005ba894(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(param_3 + 0x20));
                if (iVar3 == 0) {
                  uVar5 = *(undefined4 *)(local_10 + 8);
                  pcVar9 = "\'%s\': function return value differs from prototype";
                  uVar8 = 0xbfc;
                  iVar3 = local_10;
                  goto LAB_005c0c04;
                }
                *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
                *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
                *(undefined4 *)(local_c + 0x24) = *(undefined4 *)(local_14[2] + 0x18);
              }
              else {
                *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x58);
                iVar3 = FUN_005ba80b(*(undefined4 *)(iVar1 + 0x20));
                *(int *)(iVar1 + 0x14) = iVar3;
                *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
              }
              local_48 = *(undefined4 *)(iVar1 + 0x10);
              local_44 = *(undefined4 *)(iVar1 + 0x14);
              local_3c = 0;
              local_40 = 3;
              local_38 = FUN_005d7885(*(undefined4 *)(iVar1 + 0x20));
              local_2c = FUN_005d7885(param_4);
              FUN_005ba5ee(local_38,0);
              uVar5 = FUN_005bedc7(param_2,local_58);
              *(undefined4 *)(iVar1 + 0x2c) = uVar5;
              if (iVar6 == 0) {
                iVar6 = *(int *)(param_1 + 0xc);
                *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar6 + 0x1c);
                iVar3 = FUN_005ba3df(local_c,0);
                *(int *)(param_1 + 0xc) = iVar6;
                if (iVar3 < 0) goto LAB_005c0c0d;
                *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
              }
              *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14) = *(undefined4 *)(local_10 + 8);
              *(int *)(param_1 + 0x14) = iVar1;
              puVar7 = local_8;
              if (local_14 != (undefined4 *)0x0) {
                (**(code **)*local_14)(1);
                puVar7 = local_8;
              }
              goto LAB_005c0c25;
            }
            uVar5 = *(undefined4 *)(iVar3 + 8);
            pcVar9 = "redefinition of \'%s\'";
            uVar8 = 0xbbb;
LAB_005c0c04:
            FUN_005ba1d9(param_1,iVar3,uVar8,pcVar9,uVar5);
          }
        }
      }
LAB_005c0c0d:
      (**(code **)*local_8)(1);
      if (local_14 != (undefined4 *)0x0) {
        (**(code **)*local_14)(1);
      }
    }
  }
  puVar7 = (undefined4 *)0x0;
LAB_005c0c25:
  FUN_005d8486();
  return puVar7;
}

