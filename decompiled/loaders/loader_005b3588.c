/* Decompiled from Speed.exe @ 005b3588 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005b3588(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 == 1) {
    do {
      iVar4 = FUN_005b3588(*(undefined4 *)(*(int *)(*(int *)(param_2 + 8) + 0x18) + 0x20),param_3);
      if (iVar4 < 0) {
        return iVar4;
      }
      param_2 = *(int *)(param_2 + 0xc);
    } while (param_2 != 0);
    return iVar4;
  }
  if (iVar4 == 7) {
    uVar5 = 0;
    if (*(int *)(param_2 + 0x14) == 0) {
      return 0;
    }
    do {
      iVar4 = FUN_005b3588(*(undefined4 *)(param_2 + 0x10),param_3);
      if (iVar4 < 0) {
        return iVar4;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_2 + 0x14));
    return iVar4;
  }
  if ((iVar4 == 8) && (iVar4 = *(int *)(param_2 + 0x10), -1 < iVar4)) {
    if (iVar4 < 3) {
      iVar4 = *(int *)(param_2 + 0x1c) * *(int *)(param_2 + 0x18);
    }
    else {
      if (iVar4 != 3) goto switchD_005b35da_default;
      iVar4 = 1;
    }
    switch(*(undefined4 *)(param_2 + 0x14)) {
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x19:
    case 0x1a:
      piVar1 = (int *)(param_1 + 0x108);
      *(int *)*param_3 = *piVar1;
      *piVar1 = *piVar1 + 1;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x1b:
    case 0x1c:
      iVar3 = 4;
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      iVar3 = 0;
      break;
    default:
      goto switchD_005b35da_default;
    }
    iVar2 = 0;
    *param_3 = *param_3 + iVar3 * iVar4;
  }
  else {
switchD_005b35da_default:
    iVar2 = -0x7fffbffb;
  }
  return iVar2;
}

