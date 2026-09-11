/* Decompiled from Speed.exe @ 004aa970 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004aa970(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EBX;
  
  iVar3 = DAT_00735ebc;
  iVar2 = DAT_007343fc;
  iVar4 = 0;
  piVar5 = DAT_007343f8;
  if (0 < DAT_007343fc) {
    do {
      if (((-1 < iVar4) && (iVar4 < iVar2)) && (piVar5 != (int *)0x0)) {
        iVar1 = param_2;
        if (DAT_00735ec0 != '\0') {
          iVar1 = iVar3;
        }
        if (*piVar5 <= iVar1) {
          *(undefined1 *)(iVar4 + unaff_EBX) = 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 8;
    } while (iVar4 < iVar2);
  }
  return;
}

