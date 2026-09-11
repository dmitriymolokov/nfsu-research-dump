/* Decompiled from Speed.exe @ 005f657d */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005f657d(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x8876086c;
  }
  else if (((*(uint *)(param_1 + 8) < 0x14) || (puVar1 = *(uint **)(param_1 + 0xc), *puVar1 < 0x14))
          || (*(uint *)(param_1 + 8) <= puVar1[1])) {
    uVar2 = 0x88760b59;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if (puVar1[1] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc) + puVar1[1];
    }
    *param_2 = iVar3;
    param_2[1] = puVar1[2];
    param_2[2] = puVar1[3];
    uVar2 = 0;
  }
  return uVar2;
}

