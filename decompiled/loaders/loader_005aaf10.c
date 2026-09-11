/* Decompiled from Speed.exe @ 005aaf10 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005aaf10(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int unaff_ESI;
  char local_4 [4];
  
  iVar1 = *(int *)(unaff_ESI + 0xc);
  if (iVar1 != -1) {
    local_4[0] = '\0';
    local_4[1] = '\0';
    local_4[2] = '\0';
    local_4[3] = '\0';
    pfVar2 = (float *)(unaff_ESI + 0x18);
    iVar3 = 0xb;
    do {
      if ((*(char *)(pfVar2 + -2) != '\0') && (*pfVar2 < DAT_006b5914)) {
        local_4[(int)pfVar2[-1]] = '\x01';
      }
      if ((*(char *)(pfVar2 + 2) != '\0') && (pfVar2[4] < DAT_006b5914)) {
        local_4[(int)pfVar2[3]] = '\x01';
      }
      pfVar2 = pfVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (local_4[iVar1] == '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = 0xffffffff;
    }
  }
  return;
}

