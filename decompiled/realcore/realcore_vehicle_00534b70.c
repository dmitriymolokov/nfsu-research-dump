/* spd-match: far pct=14.56 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00534b70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void  FUN_00534b70(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *pCursor = param_1;
  
  pCursor[4] = (int)param_2;
  pCursor[5] = 0;
  iVar2 = 2;
  do {
    piVar3 = pCursor + 0x8c;
    piVar1 = (int *)*piVar3;
    pCursor[0x8d] = 0;
    pCursor[0x8e] = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&param_2);
      FUN_0064b580();
      (**(code **)(*param_2 + 4))(piVar1);
      FUN_0064b5a0();
      *piVar3 = 0;
    }
    iVar2 = iVar2 + -1;
    pCursor = piVar3;
  } while (iVar2 != 0);
  return;
}

