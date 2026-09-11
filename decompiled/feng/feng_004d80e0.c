/* Decompiled from Speed.exe @ 004d80e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004d80e0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (DAT_0073766c != 0) {
    piVar4 = (int *)(DAT_00737668 + 0x24);
    do {
      if ((piVar4[-1] == 1) && (*piVar4 == 3)) {
        iVar3 = uVar2 * 0x34;
        if (*(char *)(iVar3 + 0x30 + DAT_00737668) != '\0') goto LAB_004d816f;
        break;
      }
      uVar2 = uVar2 + 1;
      piVar4 = piVar4 + 0xd;
    } while (uVar2 < DAT_0073766c);
  }
  iVar3 = DAT_007677ac;
  if ((DAT_007677ac == 0) && (iVar3 = 0, DAT_00735ec1 == '\0')) {
    if ((DAT_00735e12 == '\0') &&
       (((cVar1 = FUN_005a1550(&DAT_0075eef8,0), cVar1 == '\0' &&
         (cVar1 = FUN_0059e5c0(), cVar1 == '\0')) && (DAT_00735e11 == '\0')))) {
      return 0;
    }
    return 1;
  }
LAB_004d816f:
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

