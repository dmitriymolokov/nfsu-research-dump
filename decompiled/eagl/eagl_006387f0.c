/* Decompiled from Speed.exe @ 006387f0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


int FUN_006387f0(int param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)((int)param_2 + 0xb);
  iVar1 = 0;
  if (uVar4 != 0) {
    if ((*(uint *)(param_1 + 0xc) & 0x40000) == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x18) + param_1);
      param_1 = *(int *)(param_1 + 0x18) + param_1;
      iVar3 = 0;
      if (iVar2 < 1) {
        return 0;
      }
      while ((*(ushort *)(param_1 + 4 + iVar3 * 4) != param_3 ||
             ((ushort)*(byte *)(param_1 + 7 + iVar3 * 4) != *param_2))) {
        iVar3 = iVar3 + 1;
        if (iVar2 <= iVar3) {
          return iVar1;
        }
      }
      param_1 = param_1 + 4 + iVar3 * 4;
    }
    else {
      param_1 = *(int *)(param_1 + 0x18) + 4 + (uint)param_2[6] * 4 + param_1;
      iVar2 = 0;
      if (uVar4 == 0) {
        return 0;
      }
      while (*(ushort *)(param_1 + iVar2 * 4) != param_3) {
        iVar2 = iVar2 + 1;
        if ((int)uVar4 <= iVar2) {
          return iVar1;
        }
      }
      param_1 = param_1 + iVar2 * 4;
    }
    if (param_1 != 0) {
      iVar1 = (int)*(char *)(param_1 + 2);
    }
  }
  return iVar1;
}

