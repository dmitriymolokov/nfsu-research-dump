/* Decompiled from Speed.exe @ 006099dc */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __thiscall
FUN_006099dc(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  uint local_18;
  uint local_c;
  
  local_c = 0;
  if (param_3 != 0) {
    do {
      iVar1 = *(int *)(param_2 + local_c * 4);
      if ((iVar1 != 0) && (param_5 <= *(uint *)(iVar1 + 0xc))) {
        bVar5 = true;
        local_18 = 0;
        if (param_5 == 0) {
LAB_00609ac7:
          return *(undefined4 *)(param_2 + local_c * 4);
        }
        do {
          iVar2 = *(int *)(param_4 + local_18 * 4);
          iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
          uVar6 = 0;
          if (param_6 == 0) {
            bVar8 = *(int *)(iVar1 + 0xc) == 0;
            if (*(int *)(iVar1 + 0xc) != 0) {
              piVar7 = *(int **)(iVar1 + 0x10);
              do {
                iVar4 = *piVar7;
                if (((iVar4 == iVar2) && (*(int *)(iVar3 + 0x20) == 0)) ||
                   ((iVar4 == *(int *)(iVar3 + 0x24) &&
                    (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar4 * 4) + 0x20) == 0)))) break;
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (uVar6 < *(uint *)(iVar1 + 0xc));
              goto LAB_00609a93;
            }
          }
          else {
            bVar8 = *(int *)(iVar1 + 0xc) == 0;
            if (*(int *)(iVar1 + 0xc) != 0) {
              piVar7 = *(int **)(iVar1 + 0x10);
              do {
                if ((*piVar7 == iVar2) || (*piVar7 == *(int *)(iVar3 + 0x24))) break;
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 1;
              } while (uVar6 < *(uint *)(iVar1 + 0xc));
LAB_00609a93:
              bVar8 = uVar6 == *(uint *)(iVar1 + 0xc);
            }
          }
          if (bVar8) {
            bVar5 = false;
          }
          local_18 = local_18 + 1;
        } while (local_18 < param_5);
        if (bVar5) goto LAB_00609ac7;
      }
      local_c = local_c + 1;
    } while (local_c < param_3);
  }
  return 0;
}

