/* Decompiled from Speed.exe @ 00420310 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00420310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_2f8 [190];
  
  iVar2 = 0;
  if (DAT_00779c70 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_00779c70 + -4;
  }
  iVar1 = FUN_0040cb70();
  while (iVar3 != iVar1) {
    if (*(char *)(iVar3 + 0x16) != '\0') {
      aiStack_2f8[iVar2] = iVar3;
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(iVar3 + 4) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4) + -4;
    }
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*(int *)aiStack_2f8[iVar3] + 0x28))(param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

