/* Decompiled from Speed.exe @ 005d91e1 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4
FUN_005d91e1(undefined4 *param_1,uint param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 param_6,int *param_7,undefined4 param_8,int *param_9)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_1c;
  int local_c;
  int local_8;
  
  uVar7 = param_2;
  iVar4 = param_2 * param_3;
  if (iVar4 != 0) {
    if ((param_1 == (undefined4 *)0x2) && (((uint)param_4 & 0x400) == 0)) {
      param_2 = param_3;
      bVar3 = true;
      param_3 = uVar7;
    }
    else {
      bVar3 = false;
    }
    uVar7 = param_3 + 3 >> 2;
    iVar8 = uVar7 * param_2;
    iVar5 = FUN_005f7616(param_6);
    if (iVar5 == 0) {
      return 0x80004005;
    }
    iVar2 = *(int *)(iVar5 + 0x10);
    iVar1 = iVar2 + iVar8;
    *(int *)(iVar5 + 0x10) = iVar1;
    if ((*(byte *)(iVar5 + 4) & 0x20) != 0) {
      *(int *)(iVar5 + 8) = iVar1;
    }
    if (param_2 != 0) {
      local_c = 0;
      local_8 = 0;
      param_4 = param_5;
      local_1c = param_2;
      do {
        uVar9 = 0;
        if (param_3 != 0) {
          param_1 = param_4;
          do {
            if (bVar3) {
              uVar10 = *param_1;
            }
            else {
              uVar10 = param_5[local_8 + uVar9];
            }
            puVar6 = (undefined4 *)FUN_005f762c(uVar10);
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = param_6;
              iVar5 = (uVar9 >> 2) + local_c + iVar2;
              puVar6[2] = iVar5;
              puVar6[0x13] = param_8;
              puVar6[3] = uVar9 & 3;
              puVar6[0x15] = *param_7 + (iVar5 - iVar2) * 4 + (uVar9 & 3);
            }
            param_1 = param_1 + param_2;
            uVar9 = uVar9 + 1;
          } while (uVar9 < param_3);
        }
        param_4 = param_4 + 1;
        local_8 = local_8 + param_3;
        local_c = local_c + uVar7;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
    }
    *param_7 = *param_7 + iVar8 * 4;
  }
  if (param_9 != (int *)0x0) {
    *param_9 = iVar4;
  }
  return 0;
}

