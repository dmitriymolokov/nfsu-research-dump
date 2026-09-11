/* Decompiled from Speed.exe @ 005b98ff */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005b98ff(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  iVar4 = 0;
  pvVar2 = _malloc(0x1c);
  if (pvVar2 == (void *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_005b2aff();
  }
  if (local_8 != 0) {
    pvVar2 = _malloc(0x1c);
    if (pvVar2 == (void *)0x0) {
      local_c = 0;
    }
    else {
      local_c = FUN_005b2aff();
    }
    if (local_c != 0) {
      pvVar2 = _malloc(0x38);
      if (pvVar2 == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005b5f14();
      }
      if (iVar4 != 0) {
        iVar5 = *(int *)(param_2 + 0x14);
        local_18 = 0;
        if (iVar5 != 0) {
          if ((*(int *)(iVar5 + 4) != 2) || (*(int *)(iVar5 + 0x10) != 9)) {
LAB_005b9b22:
            local_10 = -0x7fffbffb;
            goto LAB_005b9b2e;
          }
          local_18 = *(undefined4 *)(iVar5 + 0x18);
        }
        *(undefined4 *)(iVar4 + 0x24) = 0;
        for (iVar5 = *(int *)(param_2 + 0x1c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
          if (((*(int *)(iVar5 + 4) != 1) || (iVar3 = *(int *)(iVar5 + 8), iVar3 == 0)) ||
             (*(int *)(iVar3 + 4) != 5)) goto LAB_005b9b22;
          if (*(int *)(iVar3 + 0x10) != 1) {
            pcVar6 = "ID3DXEffectCompiler: There was a problem getting annotations";
            goto LAB_005b9b0f;
          }
          iVar3 = FUN_005b710e(iVar3,local_8,param_4,iVar4 + 0x30);
          if ((iVar3 < 0) && (-1 < local_10)) {
            local_10 = iVar3;
          }
          *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x24) + 1;
        }
        piVar1 = (int *)(iVar4 + 0x28);
        *piVar1 = 0;
        iVar5 = *(int *)(param_2 + 0x18);
LAB_005b9a61:
        if (iVar5 != 0) {
          if (((*(int *)(iVar5 + 4) == 1) && (iVar3 = *(int *)(iVar5 + 8), iVar3 != 0)) &&
             (*(int *)(iVar3 + 4) == 5)) {
            if (*(int *)(iVar3 + 0x10) == 4) goto code_r0x005b9a3a;
            pcVar6 = "ID3DXEffectCompiler: Only pass allowed within a technique";
LAB_005b9b0f:
            FUN_005b1f01(param_1 + 0xc,0,0,pcVar6);
          }
          goto LAB_005b9b22;
        }
        if (((((-1 < local_10) && (local_10 = FUN_005b2c29(local_18,&param_4), -1 < local_10)) &&
             (local_10 = FUN_005b2c79(param_4,0), -1 < local_10)) &&
            ((local_10 = FUN_005b2b74(iVar4 + 0x24,4,0), -1 < local_10 &&
             (local_10 = FUN_005b2b74(piVar1,4,0), -1 < local_10)))) &&
           (local_10 = FUN_005b2d02(local_8), -1 < local_10)) {
          local_8 = 0;
          local_10 = FUN_005b2d02(local_c);
          if (-1 < local_10) {
            *(undefined4 *)(iVar4 + 0x20) = local_18;
            *(int *)(iVar4 + 0x34) = *(int *)(param_1 + 0x11c);
            *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
            *(int *)(param_1 + 0x11c) = iVar4;
            return local_10;
          }
        }
        goto LAB_005b9b2e;
      }
    }
  }
  local_10 = -0x7ff8fff2;
LAB_005b9b2e:
  if (iVar4 != 0) {
    FUN_005b9812(1);
  }
  if (local_8 != 0) {
    FUN_005b2b58(1);
  }
  if (local_c != 0) {
    FUN_005b2b58(1);
  }
  return local_10;
code_r0x005b9a3a:
  iVar3 = FUN_005b9598(iVar3,*piVar1,local_c,param_4,iVar4 + 0x2c);
  if ((iVar3 < 0) && (-1 < local_10)) {
    local_10 = iVar3;
  }
  *piVar1 = *piVar1 + 1;
  iVar5 = *(int *)(iVar5 + 0xc);
  goto LAB_005b9a61;
}

