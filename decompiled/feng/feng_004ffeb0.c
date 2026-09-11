/* Decompiled from Speed.exe @ 004ffeb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __thiscall FUN_004ffeb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_2 + 0x1c);
  if ((uVar4 & 0x1c00000) == 0) {
    *(uint *)(param_2 + 0x1c) = (DAT_006f89ec | 0xfdffffff) & uVar4;
  }
  else {
    *(uint *)(param_2 + 0x1c) = uVar4 | 0x2000000;
  }
  iVar5 = *(int *)(param_2 + 0x54);
  iVar1 = *(int *)(iVar5 + 0x10);
  iVar2 = *(int *)(iVar5 + 0xc);
  iVar3 = *(int *)(param_1 + 0x28) + iVar1;
  *(int *)(iVar5 + 0x10) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  iVar3 = *(int *)(iVar5 + 0x10);
  if (iVar3 < iVar2) {
    if ((*(char *)(param_1 + 0x14) == '\0') || (*(int *)(iVar5 + 0x24) == 0)) goto LAB_0050008b;
    uVar4 = *(uint *)(iVar5 + 0x14) & 3;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        if (iVar3 < iVar1) {
          FUN_004ffc30(param_2,iVar2);
          iVar3 = *(int *)(iVar5 + 0x10);
        }
      }
      else {
        if (uVar4 != 2) goto LAB_0050008b;
        if (iVar1 < iVar2) {
          if (iVar2 <= iVar3) {
            FUN_004ffc30(param_2,iVar2);
            iVar3 = *(int *)(iVar5 + 0x10) - iVar2;
          }
        }
        else if (iVar3 < iVar2) {
          FUN_004ffc30(param_2,0);
          iVar3 = *(int *)(iVar5 + 0x10);
        }
        else {
          iVar3 = iVar3 - iVar2;
        }
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x14) == '\0') goto LAB_0050008b;
    if (*(int *)(iVar5 + 0x18) == 0) {
      uVar4 = *(uint *)(iVar5 + 0x14) & 3;
      if (uVar4 == 0) {
        if (*(int *)(iVar5 + 0x24) != 0) {
          FUN_004ffc30(param_2,iVar2);
        }
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0xc) + 1;
        goto LAB_0050008b;
      }
      if (uVar4 == 1) {
        if (0 < iVar2) {
          if (*(int *)(iVar5 + 0x24) != 0) {
            FUN_004ffc30(param_2,iVar2);
          }
          iVar3 = *(int *)(iVar5 + 0x10) % *(int *)(iVar5 + 0xc);
          *(int *)(iVar5 + 0x10) = iVar3;
          if (*(int *)(iVar5 + 0x24) != 0) {
            FUN_004ffc30(param_2,iVar3);
          }
          FUN_004ff030(param_2);
          goto LAB_0050008b;
        }
      }
      else {
        if (uVar4 != 2) goto LAB_0050008b;
        if (0 < iVar2) {
          *(int *)(iVar5 + 0x10) = iVar3 % (iVar2 * 2);
          goto LAB_0050008b;
        }
      }
      *(undefined4 *)(iVar5 + 0x10) = 0;
      goto LAB_0050008b;
    }
    FUN_005001b0(param_2);
    iVar3 = *(int *)(iVar5 + 0x10) - iVar2;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    if (*(int *)(iVar5 + 0x24) != 0) {
      FUN_004ffc30(param_2,iVar2);
    }
    iVar5 = *(int *)(iVar5 + 0x18);
    *(int *)(param_2 + 0x54) = iVar5;
    if (iVar5 != 0) {
      FUN_004ff030(param_2);
    }
    *(int *)(iVar5 + 0x10) = iVar3;
    if (*(int *)(iVar5 + 0x24) == 0) goto LAB_0050008b;
  }
  FUN_004ffc30(param_2,iVar3);
LAB_0050008b:
  if ((((*(char *)(param_1 + 0x14) == '\0') || (iVar1 != *(int *)(iVar5 + 0x10))) ||
      (iVar1 != *(int *)(iVar5 + 0xc) + 1)) || ((*(uint *)(param_2 + 0x1c) & 0x400000) != 0)) {
    FUN_005001b0(param_2);
  }
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 4:
    FUN_004fdc20((float)param_3);
    break;
  case 5:
    FUN_004ffe70(param_1,param_3);
    break;
  case 6:
    FUN_004faf70((float)param_3);
    break;
  case 7:
    if (*(char *)(param_1 + 0x14) != '\0') {
      *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + param_3;
    }
  }
  uVar4 = DAT_006f89ec;
  if (((*(char *)(param_1 + 0x14) == '\x01') && (iVar1 == *(int *)(iVar5 + 0x10))) &&
     ((iVar1 == *(int *)(iVar5 + 0xc) + 1 && ((*(uint *)(param_2 + 0x1c) & 0x400000) == 0)))) {
    *(uint *)(param_2 + 0x1c) = (DAT_006f89ec | 0xfe7fffff) & *(uint *)(param_2 + 0x1c);
  }
  uVar4 = *(uint *)(param_2 + 0x1c) & (uVar4 | 0xffbfffff);
  *(uint *)(param_2 + 0x1c) = uVar4;
  if ((uVar4 & 0x1c00000) != 0) {
    *(uint *)(param_2 + 0x1c) = uVar4 | 0x2000000;
  }
  return;
}

