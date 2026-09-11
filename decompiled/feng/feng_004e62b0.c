/* Decompiled from Speed.exe @ 004e62b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004e62b0(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  bVar1 = *(byte *)(unaff_ESI + 0x12);
  if (bVar1 < 0xf) {
LAB_004e635d:
    cVar2 = FUN_004e3d80(bVar1,*(undefined1 *)(unaff_ESI + 0x11),0);
  }
  else {
    if (bVar1 < 0x11) {
      cVar2 = FUN_004aa9d0(&DAT_007588c4,2,*(undefined4 *)(unaff_ESI + 8));
      if (((cVar2 == '\0') && (DAT_00735ec1 == '\0')) &&
         (cVar2 = FUN_005a3570(&DAT_0075f344), cVar2 == '\0')) {
        return 0;
      }
      return 1;
    }
    if (bVar1 != 0x11) goto LAB_004e635d;
    iVar3 = FUN_004e2520();
    if (iVar3 == 0) {
      return 0;
    }
    switch(iVar3 + -1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    default:
      goto switchD_004e62e6_default;
    }
    uVar4 = FUN_00567c70();
    cVar2 = FUN_004aa9d0(&DAT_007588c4,2,uVar4);
  }
  if (cVar2 != '\0') {
    return 1;
  }
switchD_004e62e6_default:
  return 0;
}

