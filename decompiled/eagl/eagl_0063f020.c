/* Decompiled from Speed.exe @ 0063f020 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void FUN_0063f020(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_0070f540;
  do {
    if (piVar1[-4] == param_1) {
LAB_0063f086:
      if ((iVar2 < 0x10) && ((&DAT_0070f530)[iVar2 * 4] == param_1)) {
        (&DAT_0070f530)[iVar2 * 4] = 0;
      }
      return;
    }
    if (*piVar1 == param_1) {
      iVar2 = iVar2 + 1;
      goto LAB_0063f086;
    }
    if (piVar1[4] == param_1) {
      iVar2 = iVar2 + 2;
      goto LAB_0063f086;
    }
    if (piVar1[8] == param_1) {
      iVar2 = iVar2 + 3;
      goto LAB_0063f086;
    }
    if (piVar1[0xc] == param_1) {
      iVar2 = iVar2 + 4;
      goto LAB_0063f086;
    }
    if (piVar1[0x10] == param_1) {
      iVar2 = iVar2 + 5;
      goto LAB_0063f086;
    }
    if (piVar1[0x14] == param_1) {
      iVar2 = iVar2 + 6;
      goto LAB_0063f086;
    }
    if (piVar1[0x18] == param_1) {
      iVar2 = iVar2 + 7;
      goto LAB_0063f086;
    }
    piVar1 = piVar1 + 0x20;
    iVar2 = iVar2 + 8;
    if (0x70f63f < (int)piVar1) {
      return;
    }
  } while( true );
}

