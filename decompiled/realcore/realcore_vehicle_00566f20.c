/* Decompiled from Speed.exe @ 00566f20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_00566f20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar3 = (undefined4 *)FUN_00565b60(*(undefined4 *)(param_1 + 0x2c),0,0,0);
  uVar7 = *(uint *)(param_1 + 0x2c);
  puVar8 = puVar3;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar8 = 0x1010101;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = 1;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  for (puVar8 = *(undefined4 **)(param_1 + 0x10); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    iVar4 = FUN_00566ed0(puVar8);
    *(undefined1 *)(iVar4 + (int)puVar3) = 0;
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    iVar4 = 0;
    do {
      if (*(char *)(iVar4 + (int)puVar3) != '\0') {
        iVar5 = param_1;
        if (param_2 == 0) goto LAB_00566fb0;
        param_2 = param_2 + -1;
      }
      iVar4 = iVar4 + 1;
      if (*(int *)(param_1 + 0x2c) <= iVar4) {
        FUN_00565ce0();
        return 0;
      }
    } while( true );
  }
LAB_00566fc7:
  FUN_00565ce0();
  return 0;
LAB_00566fb0:
  do {
    if ((-1 < iVar4) && (iVar4 < *(int *)(iVar5 + 0x24))) {
      iVar2 = *(int *)(param_1 + 0x28);
      FUN_00565ce0();
      return iVar2 * iVar4 + 0x30 + iVar5;
    }
    piVar1 = (int *)(iVar5 + 8);
    iVar4 = iVar4 - *(int *)(iVar5 + 0x24);
    iVar5 = *piVar1;
  } while (*piVar1 != 0);
  goto LAB_00566fc7;
}

