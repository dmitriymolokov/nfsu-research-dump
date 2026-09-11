/* Decompiled from Speed.exe @ 004b26f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b26f0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_EDX;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_8;
  
  iVar4 = FUN_004b2640();
  if (iVar4 != 0) {
    iVar7 = iVar4 + 8;
    iVar11 = -1;
    bVar2 = *(byte *)(iVar4 + 8);
    while (bVar2 != 0) {
      pbVar1 = (byte *)(iVar7 + 1);
      iVar11 = iVar11 * 0x21 + (uint)bVar2;
      iVar7 = iVar7 + 1;
      bVar2 = *pbVar1;
    }
    iVar7 = FUN_0057cf70();
    if (iVar7 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x448);
      uVar15 = *(undefined4 *)(param_1 + 0x444);
      FUN_0057d160(*(undefined4 *)(iVar7 + 0xc74),0,0);
      piVar9 = (int *)(iVar4 + 0x4c);
      *(undefined4 *)(extraout_EDX + 0x444) = uVar15;
      *(undefined4 *)(extraout_EDX + 0x448) = uVar14;
      local_8 = 0x78;
      do {
        iVar4 = piVar9[-1];
        iVar7 = *piVar9;
        uVar10 = 0;
        if ((((((((iVar4 == 0x1e) || (iVar4 == 0x2a)) || (iVar4 == 0x2b)) ||
               ((iVar4 == 0x2c || (iVar4 == 0x2d)))) || (iVar4 == 0x2e)) ||
             (((iVar4 == 0x2f || (iVar4 == 0x30)) ||
              ((iVar4 == 0x31 || (((iVar4 == 0x32 || (iVar4 == 0x33)) || (iVar4 == 0x34)))))))) ||
            ((iVar4 == 0x35 || (iVar4 == 0x36)))) ||
           ((iVar4 == 0x37 ||
            (((iVar4 == 0x38 || (iVar4 == 0x39)) ||
             ((iVar4 == 0x29 || (((iVar4 == 0x28 || (iVar4 == 0x26)) || (iVar4 == 0x27)))))))))) {
          if (iVar7 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_0057ce10(0,0x1e,iVar7,0,0xffffffff);
          }
LAB_004b2a4b:
          if (((iVar4 != 0x13) && (-1 < iVar4)) && (iVar4 < 0x79)) goto LAB_004b2a59;
        }
        else {
          cVar3 = FUN_004b26b0();
          if (cVar3 != '\0') {
            uVar10 = FUN_004bc790();
            goto LAB_004b2a4b;
          }
          cVar3 = FUN_004b26d0();
          piVar8 = DAT_0073ad40;
          if (cVar3 != '\0') {
            if (iVar7 != 0) {
              uVar10 = FUN_0057ce10(0,0x3a,iVar7,0,0xffffffff);
            }
            goto LAB_004b2a4b;
          }
          if (iVar4 == 0x12) {
            piVar5 = (int *)FUN_0040a880();
            if (piVar8 != piVar5) {
              while( true ) {
                iVar12 = piVar8[4];
                iVar13 = piVar8[3];
                uVar10 = FUN_0053e400(0x7326cf08,iVar13,4);
                if (uVar10 == 0) break;
                for (; uVar10 < (uint)(iVar12 * 0x30 + iVar13); uVar10 = uVar10 + 0x30) {
                  if (*(int *)(uVar10 + 4) != 0x7326cf08) goto LAB_004b290a;
                  if ((*(char *)(uVar10 + 0x10) == '\x12') &&
                     ((iVar7 == 0 || (*(int *)(uVar10 + 8) == iVar7)))) goto LAB_004b2a59;
                }
                piVar8 = (int *)*piVar8;
                if (piVar8 == piVar5) break;
              }
            }
LAB_004b290a:
            uVar10 = 0;
          }
          else if (iVar4 == 6) {
            if (iVar7 != 0) {
              uVar10 = FUN_0057ce10(iVar11,6,iVar7,0,0xffffffff);
            }
          }
          else {
            uVar15 = 0xffffffff;
            uVar14 = 0;
            if (iVar4 == 0x11) {
              iVar12 = iVar4;
              iVar13 = iVar7;
              uVar6 = FUN_00567c70(0x11);
              uVar10 = FUN_0057ce10(uVar6,iVar12,iVar13,uVar14,uVar15);
              if (uVar10 == 0) {
                uVar10 = FUN_0057ce10(iVar11,0x11,iVar7,0,0xffffffff);
              }
            }
            else {
              if (iVar4 == 0xf) {
                uVar10 = FUN_0057ce10(iVar11,0xf,iVar7,0,0xffffffff);
              }
              else if (iVar4 == 0x73) {
                uVar10 = FUN_0057ce10(iVar11,0x73,iVar7,0,0xffffffff);
              }
              else if (iVar4 == 0x10) {
                uVar10 = FUN_0057ce10(iVar11,0x10,iVar7,0,0xffffffff);
              }
              else {
                if (iVar4 != 0x74) {
                  uVar10 = FUN_0057ce10(iVar11,iVar4,iVar7,0,0xffffffff);
                  goto LAB_004b2a4b;
                }
                uVar10 = FUN_0057ce10(iVar11,0x74,iVar7,0,0xffffffff);
              }
              if (uVar10 == 0) {
                uVar15 = 0;
                uVar6 = 0xffffffff;
                iVar12 = iVar4;
                uVar14 = FUN_00567c70(iVar4,iVar7,0,0xffffffff);
                uVar10 = FUN_0057ce10(uVar14,iVar12,iVar7,uVar15,uVar6);
              }
            }
          }
LAB_004b2a59:
          *(uint *)(param_1 + 0x44c + iVar4 * 4) = uVar10;
          *(char *)(iVar4 + 0x62c + param_1) = *(char *)(iVar4 + 0x62c + param_1) + '\x01';
          FUN_0057ea80(param_1);
        }
        piVar9 = piVar9 + 2;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}

