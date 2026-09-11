/* Decompiled from Speed.exe @ 0061808b */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0061808b(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 uVar10;
  int *local_14;
  uint local_10;
  
  uVar8 = 1;
  bVar9 = param_2 == (uint *)0x0;
  if (bVar9) {
    param_2 = *(uint **)(param_1 + 0x98);
  }
  if ((*param_2 & 0xff000000) == 0x24000000) {
    uVar5 = *param_2 & 0xffffff;
    local_14 = (int *)param_2[2];
    piVar7 = local_14 + uVar5;
    iVar2 = *(int *)(param_1 + 0x14);
    piVar6 = piVar7;
    if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar2 + *piVar7 * 4) * 4) + 4) &
         0x80) == 0) &&
       (iVar1 = *local_14, piVar6 = local_14, local_14 = piVar7,
       (*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar2 + iVar1 * 4) * 4) + 4) & 0x80
       ) == 0)) {
LAB_00618203:
      uVar8 = 1;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x98);
      piVar7 = local_14;
      if (puVar3 != param_2) {
        piVar7 = (int *)puVar3[2];
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      local_10 = 0;
      if (uVar5 != 0) {
        iVar1 = (int)piVar6 - (int)piVar7;
        do {
          if ((*(double *)(*(int *)(iVar2 + *(int *)(iVar1 + (int)piVar7) * 4) + 0x10) !=
               _DAT_006ccb10) ||
             ((bVar9 && ((*(uint *)(*(int *)(iVar2 + *piVar7 * 4) + 0x20) & 0xf0000) != 0x80000))))
          goto LAB_00618203;
          iVar4 = *(int *)(iVar2 + *piVar7 * 4);
          if (((*(byte *)(iVar4 + 0x21) & 2) == 0) &&
             ((*(uint *)(iVar4 + 0x18) & (uint)bVar9 * 4 + 0x14) == 0)) {
            *(undefined4 *)(param_1 + 0xf0) = 1;
          }
          local_10 = local_10 + 1;
          piVar7 = piVar7 + 1;
        } while (local_10 < uVar5);
      }
      if (bVar9) {
        param_2 = (uint *)0x0;
        uVar10 = 0x90000;
        uVar8 = 0x80000;
      }
      else {
        uVar10 = 0x10000;
        local_14 = (int *)puVar3[2];
        uVar8 = 0;
      }
      uVar8 = FUN_0061742a(0x10000,uVar8,local_14,uVar10,param_2);
      if (*(int *)(param_1 + 0xf0) == 2) {
        FUN_005fbf37(param_1,*(undefined4 *)(*(int *)(param_1 + 0x98) + 0x34),0x125e,
                     "complement opportunity missed because input result was not clamped from 0 to 1"
                    );
      }
    }
  }
  return uVar8;
}

