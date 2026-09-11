/* Decompiled from Speed.exe @ 00604024 */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __fastcall FUN_00604024(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint local_8;
  
  if ((*(byte *)(param_1 + 0x34) & 8) == 0) {
    iVar3 = FUN_005fc336();
    if (-1 < iVar3) {
      local_8 = 0;
      do {
        iVar3 = FUN_00602b94();
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar4 = FUN_005f8040();
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar5 = FUN_005fc5a6();
        if (iVar5 < 0) {
          return iVar5;
        }
        iVar6 = FUN_005fc7c0();
        if (iVar6 < 0) {
          return iVar6;
        }
        iVar7 = FUN_005fca3e();
        if (iVar7 < 0) {
          return iVar7;
        }
        iVar8 = FUN_005fd5b7();
        if (iVar8 < 0) {
          return iVar8;
        }
        iVar9 = FUN_005fe888();
        if (iVar9 < 0) {
          return iVar9;
        }
      } while ((iVar9 == 0 ||
                (((((iVar3 == 0 || iVar4 == 0) || iVar5 == 0) || iVar6 == 0) || iVar7 == 0) ||
                iVar8 == 0)) && (local_8 = local_8 + 1, local_8 < 0x100));
      if (local_8 == 0x100) {
        FUN_005fbf37(param_1,0,0,"internal warning: optimization did not converge");
      }
      *(undefined4 *)(param_1 + 0x3c) = 1;
      iVar3 = FUN_005feb84();
      if (((-1 < iVar3) && (iVar3 = FUN_005f8440(), -1 < iVar3)) &&
         (iVar3 = FUN_005fede4(), -1 < iVar3)) {
        uVar10 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            piVar1 = *(int **)(*(int *)(param_1 + 0x14) + uVar10 * 4);
            uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar1 * 4) + 4);
            if (((char)uVar2 < '\0') && ((uVar2 & 0x200) == 0)) {
              *piVar1 = *(int *)(param_1 + 0x50);
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_1 + 8));
        }
        iVar3 = 0;
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

