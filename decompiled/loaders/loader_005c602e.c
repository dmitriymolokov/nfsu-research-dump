/* Decompiled from Speed.exe @ 005c602e */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005c602e(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),(int *)(param_1 + 0x60));
  if (iVar2 < 0) goto LAB_005c632d;
  if (*(int *)(param_1 + 0x60) == 1) {
    iVar2 = 2;
    bVar11 = true;
    pcVar8 = (char *)(param_1 + 0x68);
    pcVar7 = "(";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar11 = *pcVar8 == *pcVar7;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar11);
    if (bVar11) {
      iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),param_1 + 0x60);
      if (iVar2 < 0) goto LAB_005c632d;
      local_8 = 0;
      do {
        do {
          do {
            iVar2 = *(int *)(param_1 + 0x60);
            if (iVar2 == 1) {
              iVar5 = 2;
              bVar11 = true;
              pcVar8 = (char *)(param_1 + 0x68);
              pcVar7 = ")";
              do {
                if (iVar5 == 0) break;
                iVar5 = iVar5 + -1;
                bVar11 = *pcVar8 == *pcVar7;
                pcVar8 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
              } while (bVar11);
              if (bVar11) {
                iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),(int *)(param_1 + 0x60));
                if (iVar2 < 0) goto LAB_005c632d;
                iVar2 = *(int *)(param_1 + 0x60);
                if ((iVar2 == 0xc) || (iVar2 == 0xd)) {
                  local_18 = 0;
                  if (local_8 == 0) goto LAB_005c632b;
                  puVar3 = local_10;
                  goto LAB_005c6393;
                }
                goto LAB_005c6316;
              }
            }
            if (iVar2 == 9) {
              pcVar8 = *(char **)(param_1 + 0x68);
              iVar2 = 5;
              bVar11 = true;
              pcVar7 = pcVar8;
              pcVar9 = "once";
              do {
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                bVar11 = *pcVar7 == *pcVar9;
                pcVar7 = pcVar7 + 1;
                pcVar9 = pcVar9 + 1;
              } while (bVar11);
              if (bVar11) {
                local_14 = 0x10;
              }
              else {
                iVar2 = 6;
                bVar11 = true;
                pcVar7 = pcVar8;
                pcVar9 = "error";
                do {
                  if (iVar2 == 0) break;
                  iVar2 = iVar2 + -1;
                  bVar11 = *pcVar7 == *pcVar9;
                  pcVar7 = pcVar7 + 1;
                  pcVar9 = pcVar9 + 1;
                } while (bVar11);
                if (bVar11) {
                  local_14 = 0xf;
                }
                else {
                  iVar2 = 8;
                  bVar11 = true;
                  pcVar7 = pcVar8;
                  pcVar9 = "disable";
                  do {
                    if (iVar2 == 0) break;
                    iVar2 = iVar2 + -1;
                    bVar11 = *pcVar7 == *pcVar9;
                    pcVar7 = pcVar7 + 1;
                    pcVar9 = pcVar9 + 1;
                  } while (bVar11);
                  if (bVar11) {
                    local_14 = 0;
                  }
                  else {
                    iVar2 = 8;
                    bVar11 = true;
                    pcVar7 = "default";
                    do {
                      if (iVar2 == 0) break;
                      iVar2 = iVar2 + -1;
                      bVar11 = *pcVar8 == *pcVar7;
                      pcVar8 = pcVar8 + 1;
                      pcVar7 = pcVar7 + 1;
                    } while (bVar11);
                    if (!bVar11) goto LAB_005c6316;
                    local_14 = 0xff;
                  }
                }
              }
            }
            else if ((((iVar2 != 2) && (iVar2 != 3)) && (iVar2 != 4)) ||
                    ((local_14 = *(uint *)(param_1 + 0x68), local_14 == 0 || (4 < local_14))))
            goto LAB_005c6316;
            iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),(int *)(param_1 + 0x60));
            if (iVar2 < 0) goto LAB_005c632d;
            if (*(int *)(param_1 + 0x60) != 1) goto LAB_005c6316;
            iVar2 = 2;
            bVar11 = true;
            pcVar8 = (char *)(param_1 + 0x68);
            pcVar7 = ":";
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar11 = *pcVar8 == *pcVar7;
              pcVar8 = pcVar8 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar11);
            if (!bVar11) goto LAB_005c6316;
            iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),param_1 + 0x60);
            if (iVar2 < 0) goto LAB_005c632d;
            do {
              do {
                iVar2 = *(int *)(param_1 + 0x60);
                if (((iVar2 != 2) && (iVar2 != 3)) && (iVar2 != 4)) goto LAB_005c6316;
                uVar1 = *(undefined4 *)(param_1 + 0x68);
                if (local_8 == (~local_8 + 1 & local_8)) {
                  if (local_8 == 0) {
                    iVar2 = 1;
                  }
                  else {
                    iVar2 = local_8 * 2;
                  }
                  puVar3 = _malloc(iVar2 << 2);
                  if (puVar3 != (undefined4 *)0x0) {
                    puVar4 = local_c;
                    puVar10 = puVar3;
                    for (uVar6 = local_8 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
                      *puVar10 = *puVar4;
                      puVar4 = puVar4 + 1;
                      puVar10 = puVar10 + 1;
                    }
                    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                      *(undefined1 *)puVar10 = *(undefined1 *)puVar4;
                      puVar4 = (undefined4 *)((int)puVar4 + 1);
                      puVar10 = (undefined4 *)((int)puVar10 + 1);
                    }
                    _free(local_c);
                    if (local_8 == 0) {
                      iVar2 = 1;
                    }
                    else {
                      iVar2 = local_8 * 2;
                    }
                    puVar4 = _malloc(iVar2 << 2);
                    local_c = puVar3;
                    if (puVar4 != (undefined4 *)0x0) {
                      puVar3 = local_10;
                      puVar10 = puVar4;
                      for (uVar6 = local_8 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
                        *puVar10 = *puVar3;
                        puVar3 = puVar3 + 1;
                        puVar10 = puVar10 + 1;
                      }
                      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                        *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
                        puVar3 = (undefined4 *)((int)puVar3 + 1);
                        puVar10 = (undefined4 *)((int)puVar10 + 1);
                      }
                      _free(local_10);
                      local_10 = puVar4;
                      goto LAB_005c6269;
                    }
                  }
                  iVar2 = -0x7ff8fff2;
                  goto LAB_005c632d;
                }
LAB_005c6269:
                local_10[local_8] = uVar1;
                local_c[local_8] = local_14;
                local_8 = local_8 + 1;
                iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),(int *)(param_1 + 0x60));
                if (iVar2 < 0) goto LAB_005c632d;
              } while (*(int *)(param_1 + 0x60) != 1);
              iVar2 = 2;
              bVar11 = true;
              pcVar8 = (char *)(param_1 + 0x68);
              pcVar7 = ";";
              do {
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                bVar11 = *pcVar8 == *pcVar7;
                pcVar8 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
              } while (bVar11);
              if (bVar11) break;
              iVar2 = 2;
              bVar11 = true;
              pcVar8 = (char *)(param_1 + 0x68);
              pcVar7 = ")";
              do {
                if (iVar2 == 0) break;
                iVar2 = iVar2 + -1;
                bVar11 = *pcVar8 == *pcVar7;
                pcVar8 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
              } while (bVar11);
            } while (!bVar11);
            iVar2 = 2;
            bVar11 = true;
            pcVar8 = (char *)(param_1 + 0x68);
            pcVar7 = ";";
            do {
              if (iVar2 == 0) break;
              iVar2 = iVar2 + -1;
              bVar11 = *pcVar8 == *pcVar7;
              pcVar8 = pcVar8 + 1;
              pcVar7 = pcVar7 + 1;
            } while (bVar11);
          } while (!bVar11);
          iVar2 = FUN_005b291b(*(undefined4 *)(param_1 + 0x80),(int *)(param_1 + 0x60));
          if (iVar2 < 0) goto LAB_005c632d;
        } while (*(int *)(param_1 + 0x60) != 1);
        iVar2 = 2;
        bVar11 = true;
        pcVar8 = (char *)(param_1 + 0x68);
        pcVar7 = ")";
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar11 = *pcVar8 == *pcVar7;
          pcVar8 = pcVar8 + 1;
          pcVar7 = pcVar7 + 1;
        } while (bVar11);
      } while (!bVar11);
    }
  }
LAB_005c6316:
  if ((*(int *)(param_1 + 0x60) != 0xc) && (*(int *)(param_1 + 0x60) != 0xd)) {
    FUN_005b1a6c();
  }
  goto LAB_005c632b;
  while( true ) {
    local_18 = local_18 + 1;
    puVar3 = puVar3 + 1;
    if (local_8 <= local_18) break;
LAB_005c6393:
    iVar2 = FUN_005b1e99(*puVar3,*(undefined4 *)(((int)local_c - (int)local_10) + (int)puVar3));
    if (iVar2 < 0) goto LAB_005c632d;
  }
LAB_005c632b:
  iVar2 = 0;
LAB_005c632d:
  _free(local_c);
  _free(local_10);
  _free((void *)0x0);
  *(undefined4 *)(param_1 + 0x28) = 1;
  return iVar2;
}

