/* Decompiled from Speed.exe @ 005795a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005795a0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = DAT_007345b8;
  do {
    if (*(int *)(iVar4 + iVar2) == 0) goto LAB_005795bc;
    piVar3 = (int *)(*(int *)(iVar4 + iVar2) + -4);
    while( true ) {
      if (iVar4 + iVar2 == 0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)(iVar4 + iVar2 + -4);
      }
      if (piVar3 == piVar1) break;
      if (piVar3[3] == 0) {
        (**(code **)(*piVar3 + 4))(param_1);
        iVar2 = DAT_007345b8;
      }
      if (piVar3[1] == 0) {
LAB_005795bc:
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(piVar3[1] + -4);
      }
    }
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x40);
  return;
}

