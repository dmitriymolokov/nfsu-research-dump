/* Decompiled from Speed.exe @ 004f4190 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f4190(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int unaff_EDI;
  
  if (DAT_0073578c != 0) {
    FUN_004ef0b0(0);
  }
  if (param_1[1] == 0) goto LAB_004f41b7;
  puVar5 = (undefined4 *)(param_1[1] + -4);
  while( true ) {
    puVar3 = param_1;
    if (param_1 == (undefined4 *)0xfffffffc) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar5 == puVar3) break;
    if (puVar5[4] == unaff_EDI) {
      uVar4 = FUN_004f3cb0();
      FUN_00575940("UNLOAD PACKAGE(%x)\n",uVar4);
      puVar5[10] = 0;
      FUN_004f3bd0();
      iVar1 = puVar5[1];
      piVar2 = (int *)puVar5[2];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      (**(code **)*puVar5)(1);
      return;
    }
    if (puVar5[1] == 0) {
LAB_004f41b7:
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)(puVar5[1] + -4);
    }
  }
  return;
}

