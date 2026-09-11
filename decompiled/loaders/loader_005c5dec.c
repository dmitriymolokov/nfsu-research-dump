/* Decompiled from Speed.exe @ 005c5dec */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005c5dec(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x50) + 0x38);
  if (piVar1 == (int *)0x0) {
    pcVar3 = "unexpected #elif";
    uVar2 = 0x5e4;
  }
  else {
    if (piVar1[2] == 0) {
      if (((param_2 == 0) || (*piVar1 != 0)) || (piVar1[1] == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      if (param_2 != 0) {
        *piVar1 = 1;
      }
      return 0;
    }
    pcVar3 = "unexpected #elif following #else";
    uVar2 = 0x5e9;
  }
  FUN_005b1f01(param_1 + 4,param_1 + 0x60,uVar2,pcVar3);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return 0x80004005;
}

