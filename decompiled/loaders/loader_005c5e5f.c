/* Decompiled from Speed.exe @ 005c5e5f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005c5e5f(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x50) + 0x38);
  if (piVar1 == (int *)0x0) {
    pcVar3 = "unexpected #else";
    uVar2 = 0x5e5;
  }
  else {
    if (piVar1[2] == 0) {
      uVar2 = 0;
      if ((*piVar1 == 0) && (piVar1[1] != 0)) {
        uVar2 = 1;
      }
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *piVar1 = 1;
      piVar1[2] = 1;
      return 0;
    }
    pcVar3 = "unexpected #else following #else";
    uVar2 = 0x5ea;
  }
  FUN_005b1f01(param_1 + 4,param_1 + 0x60,uVar2,pcVar3);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  return 0x80004005;
}

