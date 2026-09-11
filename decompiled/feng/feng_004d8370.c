/* Decompiled from Speed.exe @ 004d8370 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004d8370(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int unaff_EDI;
  
  if ((DAT_00745e40 == 2) && (uVar2 = 0, DAT_0073766c != 0)) {
    puVar4 = (uint *)(DAT_00737668 + 0x24);
    do {
      if ((puVar4[-1] == 1) && (*puVar4 == (uint)*(byte *)(unaff_EDI + 0x11))) {
        iVar3 = uVar2 * 0x34;
        if (*(char *)(iVar3 + 0x30 + DAT_00737668) != '\0') goto LAB_004d840c;
        break;
      }
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0xd;
    } while (uVar2 < DAT_0073766c);
  }
  iVar3 = DAT_007677ac;
  if ((DAT_007677ac == 0) && (iVar3 = 0, DAT_00735ec1 == '\0')) {
    cVar1 = *(char *)(unaff_EDI + 0x11);
    iVar3 = 0;
    if ((cVar1 != '\0') && (cVar1 != '\x01')) {
      if (cVar1 == '\x02') {
        if (DAT_00735e12 != '\0') {
          return 1;
        }
        cVar1 = FUN_004d8270();
      }
      else {
        if (cVar1 != '\x03') {
          return 0;
        }
        if (DAT_00735e12 != '\0') {
          return 1;
        }
        cVar1 = FUN_004d82f0();
      }
      if (cVar1 != '\0') {
        return 1;
      }
      return 0;
    }
  }
LAB_004d840c:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

