/* Decompiled from Speed.exe @ 004abfc0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004abfc0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar3 = (int *)(param_1 + 0x2040);
  do {
    iVar1 = 0;
    piVar2 = (int *)(DAT_00734588 + 0xd0);
    do {
      if (*piVar2 == *piVar3) {
        iVar1 = iVar1 * 0xc90 + DAT_00734588;
        goto LAB_004abff8;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x324;
    } while (iVar1 < 0x23);
    iVar1 = 0;
LAB_004abff8:
    if (*(int *)(iVar1 + 0xc50) == param_2) {
      return iVar4 * 0x348 + 0x2038 + param_1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0xd2;
    if (0x13 < iVar4) {
      return 0;
    }
  } while( true );
}

