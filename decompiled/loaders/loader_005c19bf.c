/* Decompiled from Speed.exe @ 005c19bf */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_005c19bf(int param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int extraout_ECX;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *local_50 [4];
  char *local_40;
  char *local_3c;
  char *local_38 [4];
  char *local_28;
  char *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  undefined4 *local_c;
  int local_8;
  
  local_38[0] = "global variables";
  local_38[1] = "structure members";
  local_38[2] = "function parameters";
  local_38[3] = "local variables";
  local_28 = "loop control variables";
  local_24 = "annotation members";
  local_50[0] = "initial value";
  local_50[1] = "initializer";
  local_50[2] = "default value";
  local_50[3] = "initial value";
  local_40 = "initial value";
  local_3c = "value";
  local_20 = FUN_005ba5e2();
  if (local_20 == 0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(extraout_ECX + 0xc) == 0) {
    return (undefined4 *)0x0;
  }
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  local_1c = *(undefined4 **)(local_20 + 0x18);
  pvVar4 = _malloc(0x14);
  if (pvVar4 == (void *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    local_c = (undefined4 *)FUN_005d78db(0,0,"Stmts");
  }
  if (local_c == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  pvVar4 = _malloc(0x30);
  if (pvVar4 == (void *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_005d7db0(1,0,0,0);
  }
  if (local_8 == 0) goto LAB_005c237b;
  local_c[2] = local_8;
  pvVar4 = _malloc(0x3c);
  if (pvVar4 == (void *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_005d844d();
  }
  iVar7 = local_8;
  if (iVar5 == 0) goto LAB_005c237b;
  *(int *)(local_8 + 0x18) = iVar5;
  if (param_3 != 0) {
    iVar6 = FUN_005d7885(param_3);
    *(int *)(iVar7 + 0x1c) = iVar6;
    if (iVar6 == 0) goto LAB_005c237b;
  }
  if (param_2 != (uint *)0x0) {
    iVar7 = FUN_005d7885(param_2);
    *(int *)(iVar5 + 0x30) = iVar7;
    if (iVar7 == 0) goto LAB_005c237b;
    do {
      iVar7 = *(int *)((int)param_2 + 8);
      if ((iVar7 != 0) && (*(int *)(iVar7 + 4) == 2)) {
        iVar7 = FUN_005d7885(iVar7);
        *(int *)(iVar5 + 0x2c) = iVar7;
        if (iVar7 == 0) goto LAB_005c237b;
      }
      param_2 = *(uint **)((int)param_2 + 0xc);
    } while (param_2 != (uint *)0x0);
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 4) != 0xc)) {
    uVar8 = FUN_005bc645();
    *(undefined4 *)(iVar5 + 0x24) = uVar8;
  }
  local_10 = 1;
  param_2 = (uint *)0x0;
  local_18 = (undefined4 *)0x0;
  if (local_1c != (undefined4 *)0x0) {
    iVar7 = FUN_005d7885(local_1c);
    *(int *)(iVar5 + 0x20) = iVar7;
    if (iVar7 == 0) goto LAB_005c237b;
  }
  for (; *(int *)(param_1 + 4) != 2; param_1 = *(int *)(param_1 + 8)) {
    pvVar4 = _malloc(0x18);
    if (pvVar4 == (void *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_005d8044();
    }
    if (iVar7 == 0) goto LAB_005c237b;
    if (param_2 != (uint *)0x0) {
      local_18 = (undefined4 *)0xc01;
    }
    *(undefined4 *)(iVar7 + 0x10) = *(undefined4 *)(iVar5 + 0x20);
    puVar1 = (uint *)(iVar7 + 0x14);
    puVar3 = puVar1;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_005c1bbf:
      param_2 = puVar3;
      *puVar1 = 1;
    }
    else {
      iVar6 = FUN_005c0e2d();
      if (iVar6 < 0) {
        local_18 = (undefined4 *)0xbf2;
        puVar3 = param_2;
        goto LAB_005c1bbf;
      }
    }
    local_10 = *puVar1 * local_10;
    *(int *)(iVar5 + 0x20) = iVar7;
  }
  iVar7 = FUN_005d7885(param_1);
  *(int *)(local_8 + 0x14) = iVar7;
  if (iVar7 == 0) goto LAB_005c237b;
  iVar7 = *(int *)(*(int *)(local_14 + 0xc) + 0x10);
  iVar6 = param_1 + 0x10;
  if (local_18 == (undefined4 *)0xbf2) {
    uVar8 = *(undefined4 *)(param_1 + 0x18);
    uVar13 = 0x69f9d800000bf2;
  }
  else {
    if (local_18 != (undefined4 *)0xc01) {
      uVar10 = local_10;
      if (param_2 != (uint *)0x0) {
        if ((((iVar7 == 0) || (iVar7 == 3)) || (iVar7 == 4)) || (iVar7 == 5)) {
          iVar9 = FUN_005ba80b(local_1c);
          local_1c = (undefined4 *)(iVar9 * local_10);
          if ((undefined4 *)(iVar9 * local_10) == (undefined4 *)0x0) {
            *param_2 = 0;
            uVar10 = 0;
            goto LAB_005c1cd8;
          }
          iVar9 = *(int *)(iVar5 + 0x24);
          if ((iVar9 == 0) || (*(int *)(iVar9 + 4) != 0xc)) {
            pcVar12 = local_50[iVar7];
            uVar13 = CONCAT44(*(undefined4 *)(param_1 + 0x18),"\'%s\': implicit array missing %s");
            uVar8 = 0xc02;
          }
          else {
            uVar10 = FUN_005ba80b(*(undefined4 *)(iVar9 + 0x10));
            if (uVar10 % (uint)local_1c == 0) {
              *param_2 = uVar10 / (uint)local_1c;
              uVar10 = (uVar10 / (uint)local_1c) * local_10;
              goto LAB_005c1cd8;
            }
            pcVar12 = local_50[iVar7];
            uVar13 = CONCAT44(*(undefined4 *)(param_1 + 0x18),
                              "\'%s\': implicit array type does not match %s");
            uVar8 = 0xc03;
          }
        }
        else {
          pcVar12 = local_38[iVar7];
          uVar13 = CONCAT44(*(undefined4 *)(param_1 + 0x18),
                            "\'%s\': array dimensions of %s must be explicit");
          uVar8 = 0xc00;
        }
        FUN_005ba1d9(local_14,iVar6,uVar8,uVar13,pcVar12);
        goto LAB_005c237b;
      }
LAB_005c1cd8:
      if ((uVar10 == 0) || (0x10000 < uVar10)) {
        uVar8 = *(undefined4 *)(param_1 + 0x18);
        uVar13 = 0x69fa4400000bf3;
        goto LAB_005c2371;
      }
      iVar9 = FUN_005ba80b(*(undefined4 *)(iVar5 + 0x20));
      *(int *)(iVar5 + 0x14) = iVar9;
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(*(int *)(local_14 + 0xc) + 0x10);
      if (*(int *)(*(int *)(local_14 + 0xc) + 0x10) == 1) {
        *(undefined4 *)(iVar5 + 0x10) = 0xffffffff;
      }
      else {
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(local_14 + 0x58);
        *(int *)(local_14 + 0x58) = *(int *)(local_14 + 0x58) + iVar9;
      }
      param_2 = *(uint **)(local_20 + 0x10);
      if (*(int *)(local_20 + 0x14) != 0) {
        FUN_005ba1d9(local_14,iVar6,0xbdf,"\'%s\': %s cannot be target specific",
                     *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
      }
      if (((uint)param_2 & 0x100) != 0) {
        FUN_005ba1d9(local_14,iVar6,0xbef,"\'%s\': %s cannot be declared \'inline\'",
                     *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
      }
      if (iVar7 == 1) {
        iVar9 = FUN_005ba70c(*(undefined4 *)(iVar5 + 0x20));
        if (iVar9 != 0) {
          FUN_005ba1d9(local_14,iVar6,0xbdb,"\'%s\': %s cannot be declared \'const\'",
                       *(undefined4 *)(param_1 + 0x18),"structure members");
          goto LAB_005c1d9f;
        }
LAB_005c1e81:
        if (((((uint)param_2 & 2) != 0) && (iVar7 != 3)) && (iVar7 != 4)) {
          FUN_005ba1d9(local_14,iVar6,0xbbf,"\'%s\': %s cannot be declared \'static\'",
                       *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
          param_2 = (uint *)((uint)param_2 & 0xfffffffd);
        }
        if (((uint)param_2 & 0x40) != 0) {
          if (iVar7 != 2) {
            FUN_005ba1d9(local_14,iVar6,0xbe7,"\'%s\': %s cannot be declared \'uniform\'",
                         *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
            param_2 = (uint *)((uint)param_2 & 0xffffffbf);
          }
          if ((((uint)param_2 & 0x40) != 0) && (((uint)param_2 & 0x20) != 0)) {
            FUN_005ba1d9(local_14,iVar6,0xbf6,"\'%s\': %s cannot be declared \'uniform out\'",
                         *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
            param_2 = (uint *)((uint)param_2 & 0xffffffbf);
          }
        }
        if (((uint)param_2 & 1) != 0) {
          FUN_005ba1d9(local_14,iVar6,0xbbe,"\'%s\': %s cannot be declared \'extern\'",
                       *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
          param_2 = (uint *)((uint)param_2 & 0xfffffffe);
        }
        if ((((((uint)param_2 & 4) != 0) && (iVar7 != 3)) && (iVar7 != 4)) && (iVar7 != 2)) {
          FUN_005ba1d9(local_14,iVar6,0xbc0,"\'%s\': %s cannot be declared \'volatile\'",
                       *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
          param_2 = (uint *)((uint)param_2 & 0xfffffffb);
        }
        if (((uint)param_2 & 8) != 0) {
          FUN_005ba1d9(local_14,iVar6,0xbee,"\'%s\': %s cannot be declared \'shared\'",
                       *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
          param_2 = (uint *)((uint)param_2 & 0xfffffff7);
        }
        if (iVar7 == 5) {
          FUN_005ba5ee();
          param_2 = (uint *)((uint)param_2 | 0x40);
        }
      }
      else {
LAB_005c1d9f:
        if (iVar7 == 2) {
          if ((((uint)param_2 & 0x10) != 0) ||
             (iVar9 = FUN_005ba70c(*(undefined4 *)(iVar5 + 0x20)), iVar9 == 0)) goto LAB_005c1e81;
          FUN_005ba1d9(local_14,iVar6,0xbe6,"\'%s\': output paramaters cannot be declared \'const\'"
                       ,*(undefined4 *)(param_1 + 0x18));
        }
        if (((iVar7 == 3) || (iVar7 == 4)) &&
           (iVar9 = FUN_005ba799(*(undefined4 *)(iVar5 + 0x20)), iVar9 == 0)) {
          FUN_005ba1d9(local_14,iVar6,0xbde,"\'%s\': %s must be numeric",
                       *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
        }
        if (iVar7 != 0) goto LAB_005c1e81;
        if (((uint)param_2 & 2) == 0) {
LAB_005c1e78:
          param_2 = (uint *)((uint)param_2 | 0x41);
        }
        else {
          if (((uint)param_2 & 1) != 0) {
            FUN_005ba1d9(local_14,iVar6,0xbbf,"\'%s\': extern %s cannot be declared \'static\'",
                         *(undefined4 *)(param_1 + 0x18),"global variables");
            param_2 = (uint *)((uint)param_2 & 0xfffffffd);
          }
          if (((uint)param_2 & 2) == 0) goto LAB_005c1e78;
          if (((uint)param_2 & 0x40) != 0) {
            FUN_005ba1d9(local_14,iVar6,0xbbf,"\'%s\': uniform %s cannot be declared \'static\'",
                         *(undefined4 *)(param_1 + 0x18),"global variables");
            param_2 = (uint *)((uint)param_2 & 0xfffffffd);
          }
          if (((uint)param_2 & 2) == 0) goto LAB_005c1e78;
        }
      }
      local_18 = (undefined4 *)0x0;
      *(uint **)(iVar5 + 0x1c) = param_2;
      if (param_4 == 0) {
        if (((iVar7 == 3) || (iVar7 == 4)) && (((uint)param_2 & 2) != 0)) {
          uVar8 = FUN_005bc356(5,0,0,iVar6);
          goto LAB_005c205f;
        }
      }
      else if (*(int *)(param_4 + 4) == 0xc) {
        uVar8 = FUN_005beee7(*(undefined4 *)(iVar5 + 0x20),param_4,0,0);
LAB_005c205f:
        *(undefined4 *)(iVar5 + 0x24) = uVar8;
      }
      else {
        local_1c = *(undefined4 **)(iVar5 + 0x24);
        if (local_1c == (undefined4 *)0x0) {
          param_4 = 0;
        }
        else {
          param_4 = local_1c[4];
        }
        iVar9 = FUN_005ba80b(param_4);
        if (*(int *)(iVar5 + 0x14) == iVar9) {
          uVar8 = FUN_005beee7(*(undefined4 *)(iVar5 + 0x20),local_1c,0,1);
          *(undefined4 *)(iVar5 + 0x24) = uVar8;
        }
        else {
          FUN_005bc1ad(iVar6,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0x20),param_4,1
                      );
          *(undefined4 *)(iVar5 + 0x24) = 0;
        }
        if (local_1c != (undefined4 *)0x0) {
          (**(code **)*local_1c)(1);
        }
      }
      if (*(int *)(iVar5 + 0x24) == 0) {
        if (iVar7 == 0) {
          iVar9 = FUN_005ba70c(*(undefined4 *)(iVar5 + 0x20));
          if (iVar9 != 0) {
            if (((uint)param_2 & 2) == 0) goto LAB_005c2238;
            goto LAB_005c2258;
          }
        }
        else {
LAB_005c2238:
          if ((((iVar7 != 3) && (iVar7 != 4)) ||
              (iVar9 = FUN_005ba70c(*(undefined4 *)(iVar5 + 0x20)), iVar9 == 0)) && (iVar7 != 5))
          goto LAB_005c2276;
LAB_005c2258:
          FUN_005ba1d9(local_14,iVar6,0xbc4,"\'%s\': missing %s",*(undefined4 *)(param_1 + 0x18),
                       local_50[iVar7]);
LAB_005c2276:
          if ((((iVar7 != 0) && (iVar7 != 1)) && (iVar7 != 2)) && (*(int *)(iVar5 + 0x2c) != 0)) {
            FUN_005ba1d9(local_14,iVar6,0xbe3,"\'%s\': %s cannot have semantics",
                         *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
            goto LAB_005c22ac;
          }
        }
      }
      else {
        if (iVar7 == 1) {
          pcVar14 = "initializer";
          uVar13 = CONCAT44("structure members",*(undefined4 *)(param_1 + 0x18));
          pcVar12 = "\'%s\': %s cannot have %ss";
        }
        else {
          if ((iVar7 != 2) || (iVar9 = FUN_005ba799(*(undefined4 *)(iVar5 + 0x20)), iVar9 != 0)) {
            local_1c = (undefined4 *)((uint)param_2 & 0x10);
            if (((undefined4 *)((uint)param_2 & 0x10) == (undefined4 *)0x0) &&
               (((uint)param_2 & 0x20) != 0)) {
              FUN_005ba1d9(local_14,iVar6,0xbe5,"\'%s\': output only %s cannot have %ss",
                           *(undefined4 *)(param_1 + 0x18),local_38[iVar7],local_50[iVar7]);
            }
            else if ((((uint)param_2 & 0x50) == 0) ||
                    (iVar9 = FUN_005bb0d5(*(undefined4 *)(iVar5 + 0x24)), iVar9 != 0)) {
              iVar9 = FUN_005bbe7f(*(undefined4 *)(iVar5 + 0x20),
                                   *(undefined4 *)(*(int *)(iVar5 + 0x24) + 0x10),0);
              if (iVar9 != 0) {
                if (((uint)param_2 & 0x40) != 0) {
                  uVar8 = FUN_005c0cfc(*(undefined4 *)(iVar5 + 0x24));
                  *(undefined4 *)(iVar5 + 0x28) = uVar8;
                }
                if ((((uint)param_2 & 0x50) == 0) &&
                   (iVar9 = FUN_005ba70c(*(undefined4 *)(iVar5 + 0x20)), iVar9 != 0)) {
                  uVar8 = FUN_005c0cfc(*(undefined4 *)(iVar5 + 0x24));
                  if (*(undefined4 **)(iVar5 + 0x24) != (undefined4 *)0x0) {
                    (**(code **)**(undefined4 **)(iVar5 + 0x24))(1);
                  }
                  *(undefined4 *)(iVar5 + 0x24) = uVar8;
                }
                else {
                  if ((local_1c == (undefined4 *)0x0) && (((uint)param_2 & 0x40) != 0))
                  goto LAB_005c20f5;
                  puVar2 = *(undefined4 **)(iVar5 + 0x24);
                  *(undefined4 *)(iVar5 + 0x24) = 0;
                  puVar11 = (undefined4 *)FUN_005bedc7();
                  local_18 = (undefined4 *)FUN_005c1473(0x14,puVar11,puVar2,1);
                  if (puVar11 != (undefined4 *)0x0) {
                    (**(code **)*puVar11)(1);
                  }
                  if (puVar2 != (undefined4 *)0x0) {
                    (**(code **)*puVar2)(1);
                  }
                }
                goto LAB_005c2276;
              }
              FUN_005bc1ad(iVar6,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0x20),
                           *(undefined4 *)(*(int *)(iVar5 + 0x24) + 0x10),0);
            }
            else {
              FUN_005ba1d9(local_14,iVar6,0xbc3,"\'%s\': %s must be a literal expression",
                           *(undefined4 *)(param_1 + 0x18),local_50[iVar7]);
            }
LAB_005c20f5:
            if (*(undefined4 **)(iVar5 + 0x24) != (undefined4 *)0x0) {
              (**(code **)**(undefined4 **)(iVar5 + 0x24))(1);
            }
            *(undefined4 *)(iVar5 + 0x24) = 0;
            goto LAB_005c2276;
          }
          pcVar14 = "default value";
          uVar13 = CONCAT44("function parameters",*(undefined4 *)(param_1 + 0x18));
          pcVar12 = "\'%s\': non-numeric uniform %s cannot have %ss";
        }
        FUN_005ba1d9(local_14,iVar6,0xbc1,pcVar12,uVar13,pcVar14);
LAB_005c22ac:
        if (*(undefined4 **)(iVar5 + 0x24) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar5 + 0x24))(1);
        }
        *(undefined4 *)(iVar5 + 0x24) = 0;
      }
      iVar5 = local_8;
      if (((*(int *)(local_8 + 0x1c) != 0) && (iVar7 != 0)) && (iVar7 != 2)) {
        FUN_005ba1d9(local_14,iVar6,0xbe0,"\'%s\': %s cannot have annotations",
                     *(undefined4 *)(param_1 + 0x18),local_38[iVar7]);
        puVar2 = *(undefined4 **)(iVar5 + 0x1c);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(iVar5 + 0x1c) = 0;
      }
      iVar5 = FUN_005ba3df();
      puVar2 = local_18;
      if (iVar5 < 0) {
        if (local_18 != (undefined4 *)0x0) {
          (**(code **)*local_18)(1);
        }
      }
      else {
        if (local_18 == (undefined4 *)0x0) {
          return local_c;
        }
        uVar8 = FUN_005bb22e(local_18);
        puVar11 = local_c;
        local_c[3] = uVar8;
        (**(code **)*puVar2)(1);
        if (puVar11[3] != 0) {
          return puVar11;
        }
      }
      goto LAB_005c237b;
    }
    uVar8 = *(undefined4 *)(param_1 + 0x18);
    uVar13 = 0x69fc7000000c01;
  }
LAB_005c2371:
  FUN_005ba1d9(local_14,iVar6,uVar13,uVar8);
LAB_005c237b:
  (**(code **)*local_c)(1);
  return (undefined4 *)0x0;
}

