/* Decompiled from Speed.exe @ 0060de13 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_0060de13(uint param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1 - (int)param_2;
  param_1 = 0;
  piVar3 = &DAT_006df5c8;
  while( true ) {
    bVar1 = true;
    iVar5 = 4;
    piVar2 = param_2;
    do {
      if ((*(int *)(iVar4 + (int)piVar2) != *piVar3) && (*piVar2 != -1)) {
        bVar1 = false;
      }
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (bVar1) break;
    param_1 = param_1 + 0x10;
    if (0x7f < param_1) {
      return 0;
    }
  }
  return 1;
}

