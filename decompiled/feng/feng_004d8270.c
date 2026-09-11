/* Decompiled from Speed.exe @ 004d8270 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004d8270(void)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  
  uVar1 = 1;
  if ((DAT_00745e40 == 2) && (uVar2 = 0, DAT_0073766c != 0)) {
    piVar3 = (int *)(DAT_00737668 + 0x24);
    do {
      if ((piVar3[-1] == 1) && (*piVar3 == 2)) {
        if (*(char *)(uVar2 * 0x34 + 0x30 + DAT_00737668) != '\0') {
          return 1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0xd;
    } while (uVar2 < DAT_0073766c);
  }
  if ((((DAT_007677ac == 0) && (DAT_00735e12 == '\0')) && (DAT_00760268 == '\0')) &&
     (DAT_00735ec1 == '\0')) {
    uVar1 = 0;
  }
  return uVar1;
}

