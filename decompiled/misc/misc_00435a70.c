/* Decompiled from Speed.exe @ 00435a70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00435a70(void)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int iVar3;
  
  if ((DAT_0078a30c == 3) && (*(int *)(unaff_ESI + 0x534) == 0)) {
    iVar1 = *(int *)(unaff_ESI + 0x24);
    if (0 < iVar1) {
      piVar2 = (int *)(unaff_ESI + 0x51c + iVar1 * 4);
      do {
        if (*(int *)(unaff_ESI + 0x24) < iVar1) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar2;
        }
        if (*(short *)(iVar3 + 0x10) == 0) {
          FUN_004350d0(iVar1,0,(iVar1 != 1) * '\x02' + '\x01');
          *(char *)(iVar3 + 9) = '\x04' - (char)iVar1;
        }
        iVar1 = iVar1 + -1;
        piVar2 = piVar2 + -1;
      } while (0 < iVar1);
      return;
    }
  }
  else {
    iVar1 = 0;
    if (0 < *(int *)(unaff_ESI + 0x24)) {
      piVar2 = (int *)(unaff_ESI + 0x520);
      do {
        if (*(short *)(*piVar2 + 0x10) == 0) {
          FUN_004350d0(0,0,1);
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar1 < *(int *)(unaff_ESI + 0x24));
    }
    FUN_00434ed0();
    *(undefined4 *)(unaff_ESI + 0x534) = 0;
    *(undefined4 *)(unaff_ESI + 0x538) = 0;
  }
  return;
}

