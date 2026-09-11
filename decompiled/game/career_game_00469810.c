/* Decompiled from Speed.exe @ 00469810 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int __fastcall FUN_00469810(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_e0;
  int local_dc;
  int aiStack_cc [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006864db;
  local_c = ExceptionList;
  iVar6 = *(int *)(*(int *)(param_1 + 100) + 0x2a0);
  local_e0 = 0;
  if (0 < iVar6) {
    iVar7 = 0x20;
    ExceptionList = &local_c;
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 100) + iVar7);
      if (((((*(int *)(iVar5 + 0x10) == 0) &&
            (*(float *)(param_1 + 0x24) < *(float *)(iVar5 + 0x1c) !=
             (*(float *)(param_1 + 0x24) == *(float *)(iVar5 + 0x1c)))) &&
           (*(float *)(iVar5 + 0x14) <= *(float *)(param_1 + 0x2c))) &&
          ((*(float *)(param_1 + 0x28) < *(float *)(iVar5 + 0x20) !=
            (*(float *)(param_1 + 0x28) == *(float *)(iVar5 + 0x20)) &&
           (*(float *)(iVar5 + 0x18) <= *(float *)(param_1 + 0x30))))) &&
         ((iVar4 = FUN_00469a00(), iVar4 != 0 && (local_e0 < 0x30)))) {
        aiStack_cc[local_e0] = iVar5;
        local_e0 = local_e0 + 1;
      }
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (local_e0 != 0) {
      do {
        iVar7 = 0;
        iVar6 = 0;
        if (local_e0 + -1 < 1) break;
        do {
          iVar5 = aiStack_cc[iVar6];
          if (*(uint *)(aiStack_cc[iVar6 + 1] + 0xc) < *(uint *)(iVar5 + 0xc)) {
            aiStack_cc[iVar6] = aiStack_cc[iVar6 + 1];
            aiStack_cc[iVar6 + 1] = iVar5;
            iVar7 = iVar7 + 1;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_e0 + -1);
      } while (iVar7 != 0);
      local_dc = 0;
      iVar6 = DAT_0072cbf4;
      if (local_e0 < 1) {
        ExceptionList = local_c;
        return local_e0;
      }
      do {
        if (*(int *)(iVar6 + 0x18) == *(int *)(iVar6 + 0x2c)) {
          ExceptionList = local_c;
          return local_dc;
        }
        uVar2 = *(undefined4 *)(aiStack_cc[local_dc] + 0xc);
        uVar1 = *(undefined2 *)(DAT_00736070 + 8);
        piVar8 = (int *)(iVar6 + 0x10);
        iVar7 = iVar6;
        if ((*piVar8 == 0) && ((*(byte *)(iVar6 + 0x14) & 1) != 0)) {
          FUN_00566e60();
          iVar7 = DAT_0072cbf4;
        }
        piVar3 = (int *)*piVar8;
        iVar5 = *(int *)(iVar6 + 0x18) + 1;
        if (piVar3 != (int *)0x0) {
          iVar4 = *piVar3;
          if (*(int *)(iVar6 + 0x1c) < iVar5) {
            *(int *)(iVar6 + 0x1c) = iVar5;
          }
          *(int *)(iVar6 + 0x18) = iVar5;
          *piVar8 = iVar4;
          if (((*(byte *)(iVar6 + 0x14) & 2) != 0) &&
             (iVar6 = *(int *)(iVar6 + 0x28) >> 2, piVar8 = piVar3, 0 < iVar6)) {
            for (; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = 0;
              piVar8 = piVar8 + 1;
            }
          }
        }
        local_4 = 0;
        if (piVar3 != (int *)0x0) {
          FUN_0046a440(piVar3,uVar1,uVar2);
          iVar7 = DAT_0072cbf4;
        }
        local_dc = local_dc + 1;
        local_4 = 0xffffffff;
        iVar6 = iVar7;
      } while (local_dc < local_e0);
      ExceptionList = local_c;
      return local_e0;
    }
  }
  ExceptionList = local_c;
  return 0;
}

