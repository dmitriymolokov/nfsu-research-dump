/* Decompiled from Speed.exe @ 00588d70 */
/* Module: Loader */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 loader_00588D70(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  _DAT_0073ac60 = 0;
  _DAT_0073ac64 = 0;
  DAT_0073ac68 = 0;
  _DAT_0073ac6c = 0;
  DAT_00734534 = 0;
  if (*param_1 == 0x34250) {
    uVar4 = (int)param_1 + 0x17U & 0xfffffff0;
    if (*(int *)(uVar4 + 8) == 2) {
      piVar3 = (int *)(uVar4 + 0x10);
      iVar5 = *(int *)(uVar4 + 0xc);
      if (0 < iVar5) {
        do {
          iVar1 = *piVar3;
          piVar2 = (int *)piVar3[1];
          piVar3 = piVar3 + 0x3a;
          iVar5 = iVar5 + -1;
          *piVar2 = iVar1;
          *(int **)(iVar1 + 4) = piVar2;
        } while (iVar5 != 0);
      }
    }
    return 1;
  }
  return 0;
}

