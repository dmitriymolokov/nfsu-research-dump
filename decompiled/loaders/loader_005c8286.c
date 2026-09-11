/* Decompiled from Speed.exe @ 005c8286 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005c8286(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar1 = *(int *)(iVar3 + 4);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  if (-1 < iVar1) {
    if (iVar1 < 4) {
      uVar2 = *(uint *)(iVar3 + 0x14);
      iVar1 = *(int *)(iVar3 + 0x18);
      *param_1 = iVar3 + 0x1c;
      return ((uint)(uVar2 % param_2 != 0) + uVar2 / param_2) * iVar1 * iVar4;
    }
    if ((iVar1 != 4) && (iVar1 == 5)) {
      iVar1 = *(int *)(iVar3 + 0x14);
      iVar5 = 0;
      *param_1 = iVar3 + 0x18;
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        iVar3 = FUN_005c8286(param_1,param_2);
        iVar5 = iVar5 + iVar3;
      }
      return iVar5 * iVar4;
    }
  }
  return 0;
}

