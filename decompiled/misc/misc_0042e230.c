/* Decompiled from Speed.exe @ 0042e230 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e230(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x24) != 3)) {
    FUN_00425fe0();
    FUN_00426110();
    iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
    if (iVar7 != 0) {
      *(undefined1 *)(iVar7 + 0x1d) = 1;
    }
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    if ((*(int *)(param_1 + 0x27c) != 0) && (*(int *)(*(int *)(param_1 + 0x27c) + 0xc) != 0x12)) {
      FUN_0042a5c0();
      FUN_0040bc10();
      local_60 = 1.0;
      local_5c = 0.0;
      local_58 = 0.0;
      if (*(int *)(param_1 + 0x1dc) != 0) {
        thunk_FUN_005abda2(&local_60,*(int *)(param_1 + 0x1dc) + 0x60,local_50);
        local_60 = local_60 - _DAT_00706230;
        local_5c = local_5c - _DAT_00706234;
        local_58 = local_58 - _DAT_00706238;
      }
      fVar3 = local_5c * local_5c;
      fVar4 = local_60 * local_60;
      uVar5 = FUN_00564db0(local_60,local_5c);
      uVar2 = DAT_006b7a30;
      *(undefined2 *)(param_1 + 0x1c4) = uVar5;
      uVar6 = FUN_00564db0(SQRT(fVar4 + fVar3),local_58,DAT_006b7a2c,uVar2);
      FUN_00401c80((float)uVar6);
      uVar5 = FUN_00674898();
      *(undefined2 *)(param_1 + 0x1c6) = uVar5;
      uVar2 = *(undefined4 *)(param_1 + 0x1e0);
      iVar7 = *(int *)(param_1 + 4) + 0x70;
      FUN_00483ea0(*(undefined4 *)(param_1 + 0x1e4),iVar7);
      FUN_00483fb0(uVar2,iVar7);
      cVar1 = *(char *)(param_1 + 0x24);
      if (((cVar1 != '\x01') && (cVar1 != '\0')) && (cVar1 != '\x04')) {
        FUN_0042ad90();
        FUN_0042ad90();
      }
    }
  }
  return;
}

