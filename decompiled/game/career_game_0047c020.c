/* Decompiled from Speed.exe @ 0047c020 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0047c020(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  FUN_0047b810();
  iVar6 = *(int *)(param_1 + 0x10);
  if ((iVar6 != 0) && ((*(int *)(iVar6 + 0x60) != 0 || (*(int *)(iVar6 + 0x6c) != 0)))) {
    local_14 = 0;
    if (0 < *(int *)(iVar6 + 8)) {
      iVar7 = 0x20;
      do {
        uVar1 = *(undefined4 *)(iVar6 + -0x14 + iVar7);
        pvVar4 = _malloc(0x7c);
        if (pvVar4 == (void *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)FUN_0047b040();
        }
        uVar2 = DAT_007797c4;
        puVar5[2] = uVar1;
        puVar5[0x17] = 0x3f800000;
        iVar6 = FUN_005a4d80(uVar2);
        if (iVar6 != 0) {
          FUN_0047b600(0,0);
          puVar5[0xd] = puVar5[0xd] | 0x24;
        }
        FUN_0047b220();
        FUN_0047b220();
        FUN_0047b220();
        if ((puVar5[0x1e] != 0) && (iVar6 != 0)) {
          *DAT_007797fc = puVar5;
          puVar3 = puVar5;
          puVar5[1] = DAT_007797fc;
          DAT_007797fc = puVar3;
          *puVar5 = &DAT_007797f8;
        }
        iVar6 = *(int *)(param_1 + 0x10);
        local_14 = local_14 + 1;
        iVar7 = iVar7 + 4;
      } while (local_14 < *(int *)(iVar6 + 8));
    }
    return 1;
  }
  return 0;
}

