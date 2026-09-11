/* Decompiled from Speed.exe @ 004aa9d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


bool FUN_004aa9d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar1 = DAT_007343fc;
  if ((DAT_0073494c != 0) || (DAT_00735ec1 != '\0')) {
    return true;
  }
  iVar4 = 0;
  if (0 < DAT_007343fc) {
    psVar3 = (short *)(DAT_007343f8 + 4);
    do {
      if ((((-1 < iVar4) && (iVar4 < iVar1)) && (psVar3 != (short *)0x4)) && (*psVar3 == param_2)) {
        switch((int)*psVar3) {
        case 0:
          if (*(int *)(psVar3 + 2) == param_3) {
            return *(char *)(iVar4 + 0x214 + param_1) == '\x01';
          }
          break;
        case 1:
          iVar2 = FUN_00567da0();
          if (iVar2 == 0) {
            return *(char *)(iVar4 + 0x214 + param_1) == '\x01';
          }
          break;
        case 2:
        case 3:
          if (*(int *)(psVar3 + 2) == param_3) {
            return *(char *)(iVar4 + 0x214 + param_1) == '\x01';
          }
        }
      }
      iVar4 = iVar4 + 1;
      psVar3 = psVar3 + 0x10;
    } while (iVar4 < iVar1);
  }
  if (((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) {
    return true;
  }
  return false;
}

