/* Decompiled from Speed.exe @ 0064e330 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0064e330(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int local_4;
  
  DAT_00713eec = DAT_00713eec + 1;
  FUN_0040a880();
  iVar7 = 0;
  if ('\0' < DAT_00713ee6) {
    do {
      (*(code *)(&DAT_00713ef0)[iVar7])();
      iVar7 = iVar7 + 1;
    } while (iVar7 < DAT_00713ee6);
  }
  iVar7 = 0;
  if (0 < DAT_00713ee8) {
    local_4 = 0;
    do {
      piVar8 = (int *)(local_4 + DAT_00713f48);
      if (*(char *)(local_4 + 0x69 + DAT_00713f48) == '\x01') {
        if ((-1 < *piVar8) && (piVar8[0x1f] != 0)) {
          bVar5 = (char)piVar8[0x1a] + 1;
          *(byte *)(piVar8 + 0x1a) = bVar5;
          if (*(byte *)((int)piVar8 + 0x66) <= bVar5) {
            *(undefined1 *)(piVar8 + 0x1a) = 0;
          }
          *(undefined2 *)((int)piVar8 + 0x86) = 0;
          FUN_00652ca0(iVar7);
          FUN_00651260(iVar7);
        }
        bVar4 = false;
        if (piVar8[0x1e] != 0) {
          bVar5 = *(char *)((int)piVar8 + 0x67) + 1;
          *(byte *)((int)piVar8 + 0x67) = bVar5;
          bVar4 = true;
          if (*(byte *)((int)piVar8 + 0x65) <= bVar5) {
            *(undefined1 *)((int)piVar8 + 0x67) = 0;
          }
        }
        if ((float)piVar8[0xc] != DAT_006cc7a4) {
          bVar4 = true;
          fVar3 = (float)piVar8[0xe] + (float)piVar8[0xc];
          piVar8[0xe] = (int)fVar3;
          fVar1 = (float)piVar8[0xd];
          if (DAT_006cc7a4 <= (float)piVar8[0xc]) {
            if (fVar3 >= fVar1) {
              piVar8[0xe] = piVar8[0xd];
              goto LAB_0064e434;
            }
          }
          else if (fVar3 < fVar1 != (fVar3 == fVar1)) {
            piVar8[0xe] = piVar8[0xd];
LAB_0064e434:
            piVar8[0xc] = 0;
          }
          if ((float)piVar8[0xe] < DAT_006cc7a4) {
            FUN_00652030(*piVar8);
            goto LAB_0064e4cd;
          }
        }
        iVar2 = piVar8[0x11];
        piVar8[0x11] = iVar2 + -1;
        if (piVar8[0xf] != 0) {
          piVar8[0x10] = piVar8[0x10] + piVar8[0xf];
          bVar4 = true;
        }
        if (iVar2 + -1 == 0) {
          cVar6 = *(char *)((int)piVar8 + 0x5d) + '\x01';
          *(char *)((int)piVar8 + 0x5d) = cVar6;
          if ((char)piVar8[0x17] <= cVar6) {
            FUN_00652030(*piVar8);
            goto LAB_0064e4cd;
          }
          iVar2 = *(int *)(piVar8[0x1b] + cVar6 * 8);
          piVar8[0x11] = iVar2;
          if (iVar2 < 0) {
            piVar8[0x11] = 0x7fffffff;
          }
          piVar8[0xf] = (*(int *)(piVar8[0x1b] + cVar6 * 8 + 4) * 0x10000 - piVar8[0x10]) /
                        piVar8[0x11];
        }
        if (bVar4) {
          FUN_00652b60(iVar7);
          FUN_006512f0(iVar7);
        }
      }
LAB_0064e4cd:
      iVar7 = iVar7 + 1;
      local_4 = local_4 + 0x8c;
    } while (iVar7 < DAT_00713ee8);
  }
  return;
}

