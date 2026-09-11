/* Decompiled from Speed.exe @ 005d71f8 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d71f8(uint *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  char local_1c [8];
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  puVar7 = param_1;
  if (param_1 == (uint *)0x0) {
    return 0x8876086c;
  }
  param_1 = (uint *)0x0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  local_14 = *puVar7;
  uVar4 = local_14 & 0xffff0000;
  if (uVar4 != 0x46580000) {
    if (uVar4 == 0xfffe0000) {
      bVar3 = *(byte *)((int)puVar7 + 1);
      while( true ) {
        do {
          puVar5 = puVar7;
          puVar7 = puVar5 + 1;
        } while ((int)*puVar7 < 0);
        if (((*puVar7 & 0xffff) == 0x1f) &&
           ((puVar5[3] >> 0x14 & 0x700 | puVar5[3] & 0x1800) == 0x100)) {
          if (param_2 != 0) {
            *(uint *)((int)param_1 * 8 + param_2) = puVar5[2] & 0xffff;
            *(uint *)((int)param_1 * 8 + 4 + param_2) = *(ushort *)((int)puVar5 + 10) & 0x7fff;
          }
          param_1 = (uint *)((int)param_1 + 1);
        }
        uVar4 = *puVar7;
        uVar6 = uVar4 & 0xffff;
        if (uVar6 == 0xffff) break;
        if (uVar6 == 0xfffe) {
          uVar4 = uVar4 >> 0x10 & 0x7fff;
LAB_005d759b:
          puVar7 = puVar7 + uVar4;
        }
        else {
          if (1 < bVar3) {
            uVar4 = uVar4 >> 0x18 & 0xf;
            goto LAB_005d759b;
          }
          if (uVar6 == 0x51) {
            puVar7 = puVar5 + 6;
          }
        }
      }
    }
    else {
      if (uVar4 != 0xffff0000) {
        return 0x88760b59;
      }
      cVar2 = *(char *)((int)puVar7 + 1);
      if (cVar2 == '\x03') {
        while( true ) {
          puVar5 = puVar7 + 1;
          if (((*puVar5 & 0xffff) == 0x1f) &&
             ((puVar7[3] >> 0x14 & 0x700 | puVar7[3] & 0x1800) == 0x100)) {
            if (param_2 != 0) {
              *(uint *)((int)param_1 * 8 + param_2) = puVar7[2] & 0xffff;
              *(uint *)((int)param_1 * 8 + 4 + param_2) = *(ushort *)((int)puVar7 + 10) & 0x7fff;
            }
            param_1 = (uint *)((int)param_1 + 1);
          }
          uVar4 = *puVar5;
          if ((uVar4 & 0xffff) == 0xffff) break;
          if ((uVar4 & 0xffff) == 0xfffe) {
            uVar4 = uVar4 >> 0x10 & 0x7fff;
          }
          else {
            uVar4 = uVar4 >> 0x18 & 0xf;
          }
          puVar7 = puVar5 + uVar4;
        }
      }
      else {
        if (cVar2 == '\x02') {
          do {
            puVar5 = puVar7 + 1;
            if ((*puVar5 & 0xffff) == 0x1f) {
              uVar6 = puVar7[3] & 0x7ff;
              uVar4 = puVar7[3] & 0xf0001800;
              if (param_2 == 0) {
LAB_005d7350:
                if (uVar4 == 0xa0000800) goto LAB_005d735a;
              }
              else if (uVar4 == 0xb0000000) {
                *(undefined4 *)((int)param_1 * 8 + param_2) = 5;
                *(uint *)((int)param_1 * 8 + 4 + param_2) = uVar6;
              }
              else {
                if (uVar4 != 0x90000000) {
                  if (uVar4 != 0xa0000800) {
                    return 0x80004005;
                  }
                  goto LAB_005d7350;
                }
                if (1 < uVar6) {
                  return 0x80004005;
                }
                *(undefined4 *)((int)param_1 * 8 + 4 + param_2) = 0;
                *(undefined4 *)((int)param_1 * 8 + param_2) = 10;
              }
              param_1 = (uint *)((int)param_1 + 1);
            }
LAB_005d735a:
            uVar4 = *puVar5;
            if ((uVar4 & 0xffff) == 0xffff) goto LAB_005d74f4;
            if ((uVar4 & 0xffff) == 0xfffe) {
              uVar4 = uVar4 >> 0x10 & 0x7fff;
            }
            else {
              uVar4 = uVar4 >> 0x18 & 0xf;
            }
            puVar7 = puVar5 + uVar4;
          } while( true );
        }
        if (cVar2 != '\x01') {
          return 0x80004005;
        }
        local_1c[0] = '\0';
        local_1c[1] = '\0';
        local_1c[2] = '\0';
        local_1c[3] = '\0';
        local_1c[4] = '\0';
        local_1c[5] = '\0';
        local_c = 0;
        local_10 = 0;
        local_8 = (uint)((char)local_14 == '\x04');
        while( true ) {
          while( true ) {
            puVar5 = puVar7;
            puVar7 = puVar5 + 1;
            uVar4 = *puVar7;
            if (-1 < (int)uVar4) break;
            if ((uVar4 & 0xf0001800) == 0x90000000) {
              if ((uVar4 & 0x7ff) == 0) {
                local_c = 1;
              }
              else if ((uVar4 & 0x7ff) == 1) {
                local_10 = 1;
              }
            }
            if ((local_8 != 0) && ((uVar4 & 0xf0001800) == 0xb0000000)) {
              local_1c[uVar4 & 0x7ff] = '\x01';
            }
          }
          uVar6 = uVar4 & 0xffff;
          if (uVar6 == 0xffff) break;
          if (uVar6 == 0xfffe) {
            uVar4 = uVar4 >> 0x10 & 0x7fff;
LAB_005d747e:
            puVar7 = puVar7 + uVar4;
          }
          else {
            if ((((local_8 == 0) && (0x3f < uVar6)) &&
                ((uVar6 < 0x4b ||
                 ((0x4b < uVar6 && ((uVar6 < 0x4e || ((0x51 < uVar6 && (uVar6 < 0x58)))))))))) &&
               ((puVar5[2] & 0xf0001800) == 0xb0000000)) {
              local_1c[puVar5[2] & 0x7ff] = '\x01';
            }
            if (0x1ff < (local_14 & 0xffff)) {
              uVar4 = uVar4 >> 0x18 & 0xf;
              goto LAB_005d747e;
            }
            if (uVar6 == 0x51) {
              puVar7 = puVar5 + 6;
            }
          }
        }
        uVar4 = 0;
        do {
          if (local_1c[uVar4] != '\0') {
            if (param_2 != 0) {
              *(undefined4 *)((int)param_1 * 8 + param_2) = 5;
              *(uint *)((int)param_1 * 8 + 4 + param_2) = uVar4;
            }
            param_1 = (uint *)((int)param_1 + 1);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < 6);
        if (local_c != 0) {
          if (param_2 != 0) {
            puVar1 = (undefined4 *)(param_2 + (int)param_1 * 8);
            *puVar1 = 10;
            puVar1[1] = 0;
          }
          param_1 = (uint *)((int)param_1 + 1);
        }
        if (local_10 != 0) {
          if (param_2 != 0) {
            puVar1 = (undefined4 *)(param_2 + (int)param_1 * 8);
            *puVar1 = 10;
            puVar1[1] = 1;
          }
          param_1 = (uint *)((int)param_1 + 1);
        }
      }
    }
LAB_005d74f4:
    if (param_3 != (int *)0x0) {
      *param_3 = (int)param_1;
    }
  }
  return 0;
}

