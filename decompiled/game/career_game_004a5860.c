/* Decompiled from Speed.exe @ 004a5860 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004a5860(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  byte local_2c;
  byte local_2b [31];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00687e78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x10) = 0x20000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 0;
  uVar4 = FUN_004fd230();
  FUN_0049fe70(uVar4);
  uVar4 = FUN_004fd230();
  FUN_0049fe70(uVar4);
  FUN_004fd230();
  uVar4 = FUN_0049fdb0();
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  FUN_004a5a30(param_1);
  FUN_004fd230();
  uVar4 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  FUN_004fd230();
  uVar4 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  FUN_004fd230();
  uVar4 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  FUN_004fd230();
  uVar4 = FUN_0049fe10();
  *(undefined4 *)(param_1 + 0x50) = uVar4;
  if (DAT_0078a320 == 2) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      FUN_004f68c0(0x20,"back_heat_%d",iVar5);
      iVar9 = -1;
      pbVar8 = &local_2c;
      bVar3 = local_2c;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      if (((*(int *)(param_1 + 8) == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
         (iVar6 = FUN_004ffb70(), iVar6 == 0)) {
        if (DAT_0073578c != 0) {
          iVar6 = FUN_004ef050(iVar9);
          goto LAB_004a59b3;
        }
      }
      else {
LAB_004a59b3:
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) == 1)) {
          if (DAT_007349b4 == 0) {
            FUN_005649f0();
          }
          piVar7 = (int *)FUN_00567160();
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            piVar7[2] = iVar6;
          }
          piVar2 = *(int **)(param_1 + 4);
          *piVar2 = (int)piVar7;
          *(int **)(param_1 + 4) = piVar7;
          piVar7[1] = (int)piVar2;
          *piVar7 = param_1;
        }
      }
    } while (iVar5 < 8);
  }
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x55) = 1;
  FUN_0049fec0(0,0);
  ExceptionList = local_c;
  return param_1;
}

