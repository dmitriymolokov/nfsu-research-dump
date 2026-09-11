/* Decompiled from Speed.exe @ 004e7320 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e7320(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int unaff_ESI;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 0;
  if (*(int *)(unaff_ESI + 0x40) < 1) {
    return;
  }
  piVar3 = (int *)(unaff_ESI + 0x44);
  while (((*piVar3 == 0 || (*(char *)(iVar4 + 0x144 + unaff_ESI) != '\x01')) ||
         (cVar2 = FUN_004f7eb0(unaff_ESI), cVar2 == '\0'))) {
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
    if (*(int *)(unaff_ESI + 0x40) <= iVar4) {
      return;
    }
  }
  uVar1 = *(uint *)(*(int *)(unaff_ESI + 0x44 + iVar4 * 4) + 0x10);
  if (uVar1 < 0x4988541a) {
    if (uVar1 != 0x49885419) {
      if (uVar1 == 0x1c7fcf8b) {
        iVar4 = FUN_004f3f90(&DAT_00746104);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) &&
           (cVar2 = FUN_004f6650(), cVar2 == '\0')) {
          FUN_004e77c0(unaff_ESI,0xf2d0d887);
          return;
        }
        FUN_004e77c0(unaff_ESI,0x911ab364);
        return;
      }
      if (uVar1 != 0x46fce6dd) {
        return;
      }
      local_8 = 0;
      local_4 = 0;
      local_24 = 0xfd61c7e0;
      local_1c = 0x3b4ff2d;
      local_20 = 0x639;
      local_14 = 0xcfadb8b4;
      local_18 = 0x541389e5;
      local_10 = 0xcfadb8b4;
      local_c = 0xb8a7c6cd;
      iVar5 = 0;
      iVar4 = FUN_004f6630();
      if (iVar4 == 0) {
        return;
      }
      do {
        if (*(int *)(iVar4 + 0x1c) != 0) {
          iVar5 = iVar4;
        }
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != 0);
      if (iVar5 == 0) {
        return;
      }
      cVar2 = FUN_004f6650();
      iVar4 = DAT_00735e0c;
      if (cVar2 != '\0') {
        FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(DAT_00735e0c + 0xc));
        *(int *)(unaff_ESI + 0x158) = iVar4;
        *(undefined1 *)(unaff_ESI + 0x154) = 1;
        return;
      }
      FUN_004dc6e0(&local_24,"GenericDialog.fng",*(undefined4 *)(iVar5 + 0xc));
      *(undefined1 *)(unaff_ESI + 0x154) = 0;
      return;
    }
LAB_004e75d8:
    FUN_004e7720(unaff_ESI,0xc407210,iVar4);
    FUN_004e7720(unaff_ESI,0xc519bfc5,iVar4);
    return;
  }
  if (uVar1 == 0x93d7df3f) goto LAB_004e75d8;
  if (uVar1 != 0xf17e2c46) {
    return;
  }
  uVar1 = *(uint *)(*(int *)(unaff_ESI + 0x104 + iVar4 * 4) + 0x10);
  if (uVar1 < 0xb04475b3) {
    if (uVar1 != 0xb04475b2) {
      if (uVar1 < 0x7614183f) {
        if (uVar1 == 0x7614183e) {
LAB_004e7525:
          FUN_004c96c0(0xc519bfc0);
          return;
        }
        if (uVar1 == 0x4848c0fd) {
          cVar2 = FUN_004e6ed0(unaff_ESI);
          if (cVar2 != '\0') {
            return;
          }
          goto LAB_004e7525;
        }
        if (uVar1 != 0x608b3c7f) {
          return;
        }
        cVar2 = FUN_004e6ed0(unaff_ESI);
        bVar6 = cVar2 == '\0';
      }
      else {
        if (uVar1 == 0x99cf2125) {
          FUN_004e7720(unaff_ESI,0xc519bfc0,iVar4);
          return;
        }
        bVar6 = uVar1 == 0x9fe0ca88;
      }
      if (!bVar6) {
        return;
      }
LAB_004e74ff:
      FUN_004c96c0(0xc519bfbf);
      return;
    }
  }
  else {
    if (0xc87eef52 < uVar1) {
      if (uVar1 != 0xde780d2b) {
        if (uVar1 != 0xf8e25afe) {
          return;
        }
        FUN_004c96c0(0x1234ddd0);
        return;
      }
      goto LAB_004e74ff;
    }
    if (uVar1 == 0xc87eef52) goto LAB_004e7596;
    if (uVar1 != 0xbae3166c) {
      if (uVar1 != 0xc50f61e1) {
        return;
      }
      FUN_004c96c0(0xc519bfc0);
      return;
    }
  }
  cVar2 = FUN_004e6ed0(unaff_ESI);
  if (cVar2 != '\0') {
    return;
  }
LAB_004e7596:
  FUN_004c96c0(0xc519bfc0);
  return;
}

