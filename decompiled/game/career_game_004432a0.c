/* Decompiled from Speed.exe @ 004432a0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_004432a0(undefined4 *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  *param_1 = *(undefined4 *)(param_1[3] + 0xc);
  local_c = 0;
  if (0 < (int)param_1[2]) {
    local_8 = 0;
    do {
      iVar9 = param_1[3] + local_8;
      if (*(int *)(param_1[3] + 0x24 + local_8) == 0) {
        iVar7 = 2;
        if (*(char *)(iVar9 + 1) != '\0') {
          iVar7 = 0;
        }
        puVar4 = _malloc(0x2c);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          uVar2 = *(ushort *)(iVar9 + 6);
          *(ushort *)(puVar4 + 7) = uVar2;
          *puVar4 = 0;
          *(undefined1 *)((int)puVar4 + 0x19) = 1;
          pvVar5 = _malloc((uVar2 + 3) * 0x10);
          puVar4[8] = pvVar5;
          puVar4[1] = iVar7;
          puVar4[2] = 0;
          puVar4[10] = &DAT_007376b0;
          puVar4[9] = (int)pvVar5 + 0x10;
          *(undefined1 *)((int)puVar4 + 0x1a) = 2;
          if (iVar7 == 0) {
            *(undefined1 *)((int)puVar4 + 0x1a) = 3;
          }
          puVar4[5] = 0;
          *(undefined1 *)(puVar4 + 6) = 1;
          *(undefined2 *)((int)puVar4 + 0x1e) = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          FUN_0059c850();
        }
        *(undefined4 **)(iVar9 + 0x24) = puVar4;
        FUN_0059cb20();
        iVar7 = 0;
        if (0 < *(short *)(iVar9 + 6)) {
          iVar8 = 0;
          do {
            iVar3 = *(int *)(iVar9 + 0x24);
            puVar4 = (undefined4 *)(param_1[5] + (*(short *)(iVar9 + 2) + iVar7) * 0x14);
            puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x24) + iVar8);
            uVar1 = puVar4[1];
            *puVar6 = *puVar4;
            puVar6[1] = uVar1;
            puVar6[2] = 0;
            puVar6[3] = 0;
            *(undefined1 *)(iVar3 + 0x18) = 1;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0x10;
          } while (iVar7 < *(short *)(iVar9 + 6));
        }
        FUN_0059d9f0(0x10);
      }
      local_c = local_c + 1;
      local_8 = local_8 + 0x28;
    } while (local_c < (int)param_1[2]);
  }
  return;
}

