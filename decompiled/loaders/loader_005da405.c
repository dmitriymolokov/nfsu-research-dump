/* Decompiled from Speed.exe @ 005da405 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005da405(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
    iVar1 = 0;
    if (iVar3 == 1) {
      do {
        if (*(int *)(param_2 + 4) != 1) break;
        iVar3 = FUN_005da405(*(undefined4 *)(param_2 + 8),param_3 + iVar1);
        param_2 = *(int *)(param_2 + 0xc);
        iVar1 = iVar1 + iVar3;
      } while (param_2 != 0);
      if (param_2 != 0) {
        iVar3 = FUN_005da405(param_2,param_3 + iVar1);
        iVar1 = iVar1 + iVar3;
      }
    }
    else {
      if (iVar3 == 5) {
        uVar2 = *(undefined4 *)(param_2 + 0x18);
      }
      else {
        if (iVar3 == 7) {
          if (*(int *)(param_2 + 0x14) == 0) {
            return 0;
          }
          do {
            iVar3 = FUN_005da405(*(undefined4 *)(param_2 + 0x10),param_3 + iVar1);
            iVar1 = iVar1 + iVar3;
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_2 + 0x14));
          return iVar1;
        }
        if (iVar3 == 8) {
          iVar1 = *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x18);
          uVar2 = 0;
          switch(*(undefined4 *)(param_2 + 0x14)) {
          case 0:
            uVar2 = 0x2000017;
            break;
          case 1:
          case 5:
            uVar2 = 2;
            break;
          case 2:
          case 6:
            uVar2 = 0x2000002;
            break;
          case 3:
          case 7:
            uVar2 = 0x4000002;
            break;
          case 4:
          case 8:
            uVar2 = 0x8000002;
            break;
          case 10:
            uVar2 = 0x2000000;
            break;
          case 0xb:
            uVar2 = 0x4000000;
            break;
          case 0xc:
            uVar2 = 0x8000000;
          }
          iVar3 = iVar1;
          if (iVar1 == 0) {
            return 0;
          }
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *param_3 = uVar2;
            param_3 = param_3 + 1;
          }
          return iVar1;
        }
        if (iVar3 != 10) {
          FUN_005d9de1(param_1,0,0,"internal error: unknown node");
          return 0;
        }
        uVar2 = *(undefined4 *)(param_2 + 0x20);
      }
      iVar1 = FUN_005da405(uVar2,param_3);
    }
  }
  return iVar1;
}

