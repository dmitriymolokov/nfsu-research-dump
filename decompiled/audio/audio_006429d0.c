/* Decompiled from Speed.exe @ 006429d0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_006429d0(void)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  local_104 = 0x3b2c20;
  FUN_00642830(local_100);
  pcVar1 = (char *)FUN_00674b68(local_100,&local_104);
  while (pcVar1 != (char *)0x0) {
    if ((*pcVar1 == '-') || (*pcVar1 == '!')) {
      uVar5 = 0xffffffff;
      iVar2 = 0;
      uVar6 = 0;
      do {
        if (((&PTR_DAT_006e7eb0)[uVar6 * 2] != (undefined *)0x0) &&
           (iVar4 = FUN_006427d0(pcVar1 + 1), iVar2 < iVar4)) {
          uVar5 = uVar6;
          iVar2 = iVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x40);
      if (-1 < (int)uVar5) {
        if (uVar5 == 0) {
          puVar3 = &DAT_006e7eb4;
          do {
            *puVar3 = *puVar3 & 0xfffffffe;
            puVar3 = puVar3 + 2;
          } while ((int)puVar3 < 0x6e80b4);
        }
        else if (uVar5 == 1) {
          puVar3 = &DAT_006e7ebc;
          do {
            if ((puVar3[-2] & 2) != 0) {
              puVar3[-2] = puVar3[-2] & 0xfffffffe;
            }
            if ((*puVar3 & 2) != 0) {
              *puVar3 = *puVar3 & 0xfffffffe;
            }
            if ((puVar3[2] & 2) != 0) {
              puVar3[2] = puVar3[2] & 0xfffffffe;
            }
            if ((puVar3[4] & 2) != 0) {
              puVar3[4] = puVar3[4] & 0xfffffffe;
            }
            if ((puVar3[6] & 2) != 0) {
              puVar3[6] = puVar3[6] & 0xfffffffe;
            }
            if ((puVar3[8] & 2) != 0) {
              puVar3[8] = puVar3[8] & 0xfffffffe;
            }
            if ((puVar3[10] & 2) != 0) {
              puVar3[10] = puVar3[10] & 0xfffffffe;
            }
            if ((puVar3[0xc] & 2) != 0) {
              puVar3[0xc] = puVar3[0xc] & 0xfffffffe;
            }
            puVar3 = puVar3 + 0x10;
          } while ((int)puVar3 < 0x6e80bc);
        }
        else {
          (&DAT_006e7eb4)[uVar5 * 2] = (&DAT_006e7eb4)[uVar5 * 2] & 0xfffffffe;
        }
      }
    }
    else {
      iVar2 = FUN_006428e0(pcVar1);
      if (-1 < iVar2) {
        if (iVar2 == 0) {
          puVar3 = &DAT_006e7eb4;
          do {
            *puVar3 = *puVar3 | 1;
            puVar3 = puVar3 + 2;
          } while ((int)puVar3 < 0x6e80b4);
        }
        else if (iVar2 == 1) {
          puVar3 = &DAT_006e7ebc;
          do {
            if ((puVar3[-2] & 2) != 0) {
              puVar3[-2] = puVar3[-2] | 1;
            }
            if ((*puVar3 & 2) != 0) {
              *puVar3 = *puVar3 | 1;
            }
            if ((puVar3[2] & 2) != 0) {
              puVar3[2] = puVar3[2] | 1;
            }
            if ((puVar3[4] & 2) != 0) {
              puVar3[4] = puVar3[4] | 1;
            }
            if ((puVar3[6] & 2) != 0) {
              puVar3[6] = puVar3[6] | 1;
            }
            if ((puVar3[8] & 2) != 0) {
              puVar3[8] = puVar3[8] | 1;
            }
            if ((puVar3[10] & 2) != 0) {
              puVar3[10] = puVar3[10] | 1;
            }
            if ((puVar3[0xc] & 2) != 0) {
              puVar3[0xc] = puVar3[0xc] | 1;
            }
            puVar3 = puVar3 + 0x10;
          } while ((int)puVar3 < 0x6e80bc);
        }
        else {
          (&DAT_006e7eb4)[iVar2 * 2] = (&DAT_006e7eb4)[iVar2 * 2] | 1;
        }
      }
    }
    pcVar1 = (char *)FUN_00674b68(0,&local_104);
  }
  return;
}

