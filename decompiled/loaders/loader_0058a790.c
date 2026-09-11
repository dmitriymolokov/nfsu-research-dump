/* Decompiled from Speed.exe @ 0058a790 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058a790(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_4;
  
  piVar4 = param_1;
  local_4 = 0;
  if (0 < param_1[4]) {
    param_1 = param_1 + 5;
    iVar5 = DAT_00734508;
    do {
      puVar1 = (undefined4 *)*param_1;
      uVar7 = puVar1[0x10];
      puVar8 = (undefined4 *)((puVar1[0xf] - piVar4[1]) + *piVar4);
      puVar9 = (undefined4 *)puVar1[2];
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      pcVar2 = (code *)puVar1[0x15];
      if (pcVar2 != (code *)0x0) {
        if (puVar1[0x18] == 0) {
          (*pcVar2)(puVar1[0x16],param_2);
          iVar5 = DAT_00734508;
        }
        else {
          (*pcVar2)(puVar1[0x16],param_2,puVar1[0x17]);
          iVar5 = DAT_00734508;
        }
      }
      iVar3 = *(int *)(iVar5 + 0x18);
      *puVar1 = *(undefined4 *)(iVar5 + 0x10);
      *(int *)(iVar5 + 0x18) = iVar3 + -1;
      *(undefined4 **)(iVar5 + 0x10) = puVar1;
      local_4 = local_4 + 1;
      param_1 = param_1 + 1;
    } while (local_4 < piVar4[4]);
  }
  return;
}

