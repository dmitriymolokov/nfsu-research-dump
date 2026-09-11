/* Decompiled from Speed.exe @ 00565850 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00565850(int param_1,char param_2)

{
  void *pvVar1;
  code *pcVar2;
  BOOL BVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int local_4;
  
  FUN_0063f190(param_1 + 0x3c);
  puVar7 = *(undefined4 **)(param_1 + 4);
  local_4 = 0;
  if (puVar7 != (undefined4 *)(param_1 + 4)) {
    do {
      BVar3 = IsBadReadPtr(puVar7,1);
      if ((BVar3 != 0) && (BVar3 = IsBadWritePtr(puVar7,1), BVar3 != 0)) {
LAB_005659e4:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar1 = (void *)*puVar7;
      BVar3 = IsBadReadPtr(pvVar1,1);
      if ((BVar3 != 0) && (BVar3 = IsBadWritePtr(pvVar1,1), BVar3 != 0)) goto LAB_005659e4;
      pvVar1 = (void *)puVar7[1];
      BVar3 = IsBadReadPtr(pvVar1,1);
      if (((BVar3 != 0) && (BVar3 = IsBadWritePtr(pvVar1,1), BVar3 != 0)) ||
         (puVar7[3] != 0x44443333)) goto LAB_005659e4;
      if (DAT_0078ea8c != '\0') break;
      if ((param_2 != '\0') && (*(char *)(param_1 + 0x38) != '\0')) {
        for (pcVar4 = (char *)(puVar7 + 4); pcVar4 != (char *)(puVar7[2] + (int)puVar7);
            pcVar4 = pcVar4 + 1) {
          if (*pcVar4 != -0x12) {
            DAT_0078ea8c = '\x01';
            goto LAB_005659e4;
          }
        }
      }
      puVar7 = (undefined4 *)*puVar7;
    } while (puVar7 != (undefined4 *)(param_1 + 4));
  }
  puVar7 = *(undefined4 **)(param_1 + 0xc);
  if (puVar7 == (undefined4 *)(param_1 + 0xc)) {
    FUN_0063f1a0(param_1 + 0x3c);
    return;
  }
  while ((BVar3 = IsBadReadPtr(puVar7,1), BVar3 == 0 ||
         (BVar3 = IsBadWritePtr(puVar7,1), BVar3 == 0))) {
    pvVar1 = (void *)*puVar7;
    BVar3 = IsBadReadPtr(pvVar1,1);
    if ((BVar3 != 0) && (BVar3 = IsBadWritePtr(pvVar1,1), BVar3 != 0)) break;
    pvVar1 = (void *)puVar7[1];
    BVar3 = IsBadReadPtr(pvVar1,1);
    if (((BVar3 != 0) && (BVar3 = IsBadWritePtr(pvVar1,1), BVar3 != 0)) ||
       (*(short *)((int)puVar7 + 10) != 0x2222)) break;
    uVar6 = (uint)*(byte *)((int)puVar7 + 9);
    iVar5 = 0;
    if (uVar6 != 0) {
      do {
        if (*(char *)((int)puVar7 + (iVar5 - uVar6)) != -0x23) {
          local_4 = local_4 + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar6);
      if (local_4 != 0) break;
    }
    puVar7 = (undefined4 *)*puVar7;
    if (puVar7 == (undefined4 *)(param_1 + 0xc)) {
      FUN_0063f1a0(param_1 + 0x3c);
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

