/* Decompiled from Speed.exe @ 005d8b95 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005d8b95(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_005d7830(param_1);
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 != 0) {
    piVar4 = (int *)(iVar2 + 0x10);
    iVar1 = *piVar4;
    if (iVar1 == *(int *)(param_1 + 0x10)) {
      iVar3 = 4;
      bVar6 = true;
      piVar5 = (int *)(param_1 + 0x10);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if ((bVar6) ||
         ((iVar1 == 4 &&
          (iVar2 = FUN_005d7866(*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(param_1 + 0x18)),
          iVar2 != 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

