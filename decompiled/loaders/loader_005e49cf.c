/* Decompiled from Speed.exe @ 005e49cf */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_005e49cf(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  double dVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  puVar2 = param_3;
  if (param_2 == 0) {
    if (param_3 == (undefined4 *)0x0) {
      return 0;
    }
    uVar5 = 0;
    if (param_4 == 0) {
      return 0;
    }
    do {
      uVar3 = FUN_005f74cf(*(undefined4 *)(*(int *)(param_1 + 8) + 0x60),0,0,0);
      param_3[uVar5] = uVar3;
      iVar4 = FUN_005f762c();
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
    return 0;
  }
  iVar4 = *(int *)(param_2 + 4);
  if (iVar4 != 0xd) {
    if (iVar4 == 0xc) {
      iVar4 = FUN_005e2a38(param_2,param_3);
      return iVar4;
    }
    if (iVar4 == 1) {
      while (iVar4 = *(int *)(param_2 + 8), iVar4 != 0) {
        if (*(int *)(iVar4 + 4) == 0xd) {
          iVar6 = 1;
          if (*(int *)(iVar4 + 0x10) == 6) {
            iVar6 = *(int *)(iVar4 + 0x1c);
          }
          iVar4 = FUN_005e49cf(iVar4,param_3,iVar6);
        }
        else {
          if ((iVar4 == 0) || (*(int *)(iVar4 + 4) != 0xc)) break;
          iVar6 = *(int *)(iVar4 + 0x18) * *(int *)(iVar4 + 0x14);
          iVar4 = FUN_005e2a38(iVar4,param_3);
        }
        if (iVar4 < 0) {
          return iVar4;
        }
        if (param_3 != (undefined4 *)0x0) {
          param_3 = param_3 + iVar6;
        }
        param_2 = *(int *)(param_2 + 0xc);
        if (param_2 == 0) {
          return 0;
        }
      }
    }
    FUN_005d9de1(param_1,0,0,"internal error: unrecognized value");
    return -0x7fffbffb;
  }
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  iVar4 = *(int *)(param_2 + 0x10);
  if (iVar4 == 6) {
    uVar5 = 0;
    if (*(int *)(param_2 + 0x18) != -1) {
      if (param_4 == 0) {
        return 0;
      }
      do {
        param_3[uVar5] =
             *(undefined4 *)(*(int *)(param_1 + 0x18) + (*(int *)(param_2 + 0x18) + uVar5) * 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_4);
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    do {
      param_3[uVar5] = *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
    return 0;
  }
  dVar1 = 0.0;
  param_3 = (undefined4 *)0x0;
  if (iVar4 == 0) {
    if (*(int *)(param_2 + 0x18) == 0) {
      dVar1 = 0.0;
    }
    else {
      dVar1 = 1.0;
    }
    param_3 = (undefined4 *)0x2000017;
  }
  else {
    if (iVar4 == 1) {
      dVar1 = (double)*(int *)(param_2 + 0x18);
    }
    else {
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          dVar1 = *(double *)(param_2 + 0x18);
        }
        goto LAB_005e4ae2;
      }
      dVar1 = (double)*(int *)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x18) < 0) {
        dVar1 = dVar1 + _DAT_0069f210;
      }
    }
    param_3 = (undefined4 *)0x2;
  }
LAB_005e4ae2:
  uVar3 = FUN_005f74cf(*(undefined4 *)(*(int *)(param_1 + 8) + 0x50),0,0,dVar1);
  *puVar2 = uVar3;
  iVar4 = FUN_005f762c();
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) | (uint)param_3;
    *(undefined4 *)(iVar4 + 0x1c) = 0xffffffff;
  }
  return 0;
}

