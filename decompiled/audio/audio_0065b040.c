/* Decompiled from Speed.exe @ 0065b040 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0065b040(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x38) < param_2) {
    iVar6 = param_2 - *(int *)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x30);
    iVar3 = 0;
    iVar2 = 0;
    param_2 = 0;
    if (0 < iVar6) {
      iVar1 = *(int *)(param_1 + 0x2c);
      do {
        if (iVar5 < iVar1) break;
        iVar3 = iVar1 * 2;
        if (iVar5 < iVar3) {
          iVar2 = 0;
          iVar3 = iVar1;
          iVar4 = iVar1;
        }
        else {
          iVar2 = FUN_0065ada0(iVar1,*(undefined4 *)(param_1 + 0x24));
          if (iVar2 < 0) {
            iVar4 = iVar2 + iVar3;
          }
          else {
            iVar4 = iVar1 + iVar2;
            iVar3 = iVar1;
          }
        }
        param_2 = param_2 + iVar3;
        iVar5 = iVar5 - iVar3;
        if (iVar6 <= iVar4) {
          iVar6 = 0;
          break;
        }
        iVar6 = iVar6 - iVar4;
      } while (0 < iVar6);
      iVar3 = param_2;
      if (0 < iVar2) {
        iVar3 = param_2 + iVar1;
      }
      if (0 < iVar6) {
        if (iVar5 < iVar6) {
          iVar3 = iVar3 + iVar5;
        }
        else {
          iVar3 = iVar3 + iVar6;
        }
      }
    }
    if (*(int *)(param_1 + 0x34) < iVar3) {
      return iVar3 - *(int *)(param_1 + 0x34);
    }
  }
  return 0;
}

