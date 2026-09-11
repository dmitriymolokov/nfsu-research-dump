/* Decompiled from Speed.exe @ 00416a40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00416a40(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  puVar3 = (undefined4 *)(unaff_EDI + 0x230);
  iVar2 = 0x10;
  do {
    uVar1 = puVar3[-0x20];
    if (uVar1 < 0x8c99b2fe) {
      if (uVar1 == 0x8c99b2fd) {
        DAT_00700e9c = *puVar3;
      }
      else if (uVar1 < 0x5d2af1f4) {
        if (uVar1 == 0x5d2af1f3) {
          DAT_00700e94 = *puVar3;
        }
        else if (uVar1 == 0x1f86c18) {
          DAT_00700eb4 = *puVar3;
        }
        else if (uVar1 == 0x9b9cf87) {
          DAT_00700ea0 = *puVar3;
        }
        else if (uVar1 == 0x40f25307) {
          DAT_00700e78 = *puVar3;
        }
      }
      else if (uVar1 == 0x71ad06d5) {
        DAT_00700e90 = *puVar3;
      }
      else if (uVar1 == 0x72e05b95) {
        DAT_00700e74 = FUN_00674898();
      }
      else if (uVar1 == 0x76c8daca) {
        DAT_00700eb0 = FUN_00674898();
      }
    }
    else if (uVar1 < 0xae5c3f42) {
      if (uVar1 == 0xae5c3f41) {
        DAT_00700e98 = *puVar3;
      }
      else if (uVar1 == 0x8df2a852) {
        DAT_00700ea8 = *puVar3;
      }
      else if (uVar1 == 0x99278529) {
        DAT_00700e8c = *puVar3;
      }
      else if (uVar1 == 0x9e8ca9d6) {
        DAT_00700e80 = *puVar3;
      }
    }
    else if (uVar1 == 0xd9869c6c) {
      DAT_00700ea4 = *puVar3;
    }
    else if (uVar1 == 0xdf815d72) {
      DAT_00700e7c = FUN_00674898();
    }
    else if (uVar1 == 0xff2e6b0d) {
      DAT_00700e90 = FUN_00674898();
    }
    puVar3 = puVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

