/* Decompiled from Speed.exe @ 005b9598 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b9598(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_8 = 0;
  local_c = 0;
  pvVar2 = _malloc(0x1c);
  if (pvVar2 == (void *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_005b2aff();
  }
  if (local_14 != 0) {
    pvVar2 = _malloc(0x1c);
    if (pvVar2 == (void *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_005b2aff();
    }
    if (local_8 != 0) {
      pvVar2 = _malloc(0x30);
      if (pvVar2 == (void *)0x0) {
        local_c = 0;
      }
      else {
        local_c = FUN_005b5f34();
      }
      iVar5 = local_c;
      if (local_c != 0) {
        iVar4 = *(int *)(param_1 + 0x14);
        local_1c = 0;
        if (iVar4 != 0) {
          if ((*(int *)(iVar4 + 4) != 2) || (*(int *)(iVar4 + 0x10) != 9)) {
LAB_005b96b4:
            iVar5 = -0x7fffbffb;
            goto LAB_005b9788;
          }
          local_1c = *(undefined4 *)(iVar4 + 0x18);
        }
        piVar1 = (int *)(local_c + 0x24);
        *piVar1 = 0;
        for (iVar4 = *(int *)(param_1 + 0x1c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
          if (((*(int *)(iVar4 + 4) != 1) || (iVar3 = *(int *)(iVar4 + 8), iVar3 == 0)) ||
             (*(int *)(iVar3 + 4) != 5)) goto LAB_005b96b4;
          if (*(int *)(iVar3 + 0x10) != 1) {
            FUN_005b1f01(local_18 + 0xc,0,0,
                         "ID3DXEffectCompiler: There was a problem getting annotations");
            goto LAB_005b96b4;
          }
          iVar3 = FUN_005b710e(iVar3,local_8,param_4,iVar5 + 0x28);
          if ((iVar3 < 0) && (-1 < local_10)) {
            local_10 = iVar3;
          }
          *piVar1 = *piVar1 + 1;
        }
        local_20 = 0;
        for (iVar5 = *(int *)(param_1 + 0x18); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
          iVar4 = FUN_005b3b78(iVar5,*(undefined4 *)(local_18 + 0xfc),param_2,&local_20,local_14,
                               param_4,0xffffffff);
          if ((iVar4 < 0) && (-1 < local_10)) {
            local_10 = iVar4;
          }
        }
        iVar5 = local_10;
        if (((((-1 < local_10) && (iVar5 = FUN_005b2c29(local_1c,&param_4), -1 < iVar5)) &&
             (iVar5 = FUN_005b2c79(param_4,0), -1 < iVar5)) &&
            ((iVar5 = FUN_005b2b74(piVar1,4,0), -1 < iVar5 &&
             (iVar5 = FUN_005b2b74(&local_20,4,0), -1 < iVar5)))) &&
           (iVar5 = FUN_005b2d02(local_8), -1 < iVar5)) {
          local_8 = 0;
          iVar5 = FUN_005b2d02(local_14);
          if (-1 < iVar5) {
            *(undefined4 *)(local_c + 0x20) = local_1c;
            *(int *)(local_c + 0x2c) = *param_5;
            *param_5 = local_c;
            return iVar5;
          }
        }
        goto LAB_005b9788;
      }
    }
  }
  iVar5 = -0x7ff8fff2;
LAB_005b9788:
  if (local_c != 0) {
    FUN_005b907a(1);
  }
  if (local_14 != 0) {
    FUN_005b2b58(1);
  }
  if (local_8 != 0) {
    FUN_005b2b58(1);
  }
  return iVar5;
}

