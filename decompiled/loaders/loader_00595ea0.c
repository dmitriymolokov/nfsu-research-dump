/* Decompiled from Speed.exe @ 00595ea0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00595ea0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_00595530();
  if (DAT_00734464 != 0) {
    FUN_00567220();
    DAT_00734464 = 0;
  }
  if (DAT_00734468 != 0) {
    FUN_00567220();
    DAT_00734468 = 0;
  }
  puVar4 = DAT_00737778;
  puVar5 = (undefined4 *)FUN_0040a880();
  for (; puVar4 != puVar5; puVar4 = (undefined4 *)*puVar4) {
    piVar1 = (int *)puVar4[0x3e];
    while (piVar1 != puVar4 + 0x3e) {
      piVar2 = (int *)piVar1[1];
      iVar3 = *piVar1;
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      FUN_00401db0();
      _free(piVar1);
      piVar1 = (int *)puVar4[0x3e];
    }
    piVar1 = (int *)puVar4[0x3c];
    while (piVar1 != puVar4 + 0x3c) {
      piVar2 = (int *)piVar1[1];
      iVar3 = *piVar1;
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      FUN_00401db0();
      _free(piVar1);
      piVar1 = (int *)puVar4[0x3c];
    }
  }
  return;
}

