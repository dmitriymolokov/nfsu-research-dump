/* Decompiled from Speed.exe @ 004f0700 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f0700(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  puVar3 = _malloc(0x20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0xabadcafe;
    puVar3[2] = 0xabadcafe;
    *puVar3 = &PTR_FUN_006c2c68;
  }
  puVar3[6] = param_1;
  puVar3[3] = param_2;
  puVar3[5] = param_3;
  puVar3[4] = param_4;
  puVar3[7] = param_5;
  if (*(char *)(unaff_EDI + 0x5251) != '\0') {
    (**(code **)(**(int **)(unaff_EDI + 0x10c) + 0x54))(param_1,param_2,param_3,param_4,param_5);
  }
  iVar1 = *(int *)(unaff_EDI + 0x4120);
  if (iVar1 == 0) {
    iVar2 = *(int *)(unaff_EDI + 0x411c);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = 0;
    *(undefined4 **)(unaff_EDI + 0x411c) = puVar3;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
    puVar3[1] = iVar2;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar2 + 8) = puVar3;
    }
    puVar3[2] = iVar1;
    *(undefined4 **)(iVar1 + 4) = puVar3;
  }
  if (*(int *)(unaff_EDI + 0x4120) == iVar1) {
    *(undefined4 **)(unaff_EDI + 0x4120) = puVar3;
  }
  *(int *)(unaff_EDI + 0x4118) = *(int *)(unaff_EDI + 0x4118) + 1;
  return;
}

