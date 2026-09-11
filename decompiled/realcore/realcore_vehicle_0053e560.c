/* Decompiled from Speed.exe @ 0053e560 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int * FUN_0053e560(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x18);
  piVar1 = (int *)*piVar4;
  while( true ) {
    if (piVar1 == piVar4) {
      return (int *)0x0;
    }
    if (((*(char *)((int)piVar1 + 0x8b) == '\0') && (piVar1[0x27] != 0)) &&
       (iVar3 = FUN_0053e400(param_2,piVar1[0x27],0), iVar3 != 0)) break;
    piVar1 = (int *)*piVar1;
  }
  iVar3 = *piVar1;
  piVar2 = (int *)piVar1[1];
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
  iVar3 = *piVar4;
  *piVar4 = (int)piVar1;
  *(int **)(iVar3 + 4) = piVar1;
  *piVar1 = iVar3;
  piVar1[1] = (int)piVar4;
  return piVar1;
}

