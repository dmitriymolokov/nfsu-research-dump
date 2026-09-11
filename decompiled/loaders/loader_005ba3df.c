/* Decompiled from Speed.exe @ 005ba3df */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005ba3df(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  bool bVar11;
  undefined4 uVar12;
  char *pcVar13;
  byte *local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_005ba278(param_1,0,0,"internal error: scope missing");
    uVar2 = 0x80004005;
  }
  else {
    iVar9 = *(int *)(param_2 + 0x14);
    piVar3 = (int *)(*(int *)(param_1 + 0xc) + 0x18);
    while (iVar6 = *piVar3, iVar6 != 0) {
      iVar8 = *(int *)(iVar6 + 8);
      if ((*(int *)(iVar8 + 0x2c) == 0) &&
         ((*(int *)(param_2 + 0x10) != 2 || (*(int *)(iVar8 + 0x10) != 2)))) {
        local_c = *(byte **)(*(int *)(iVar8 + 0x14) + 0x18);
        pbVar7 = *(byte **)(iVar9 + 0x18);
        do {
          bVar1 = *pbVar7;
          bVar11 = bVar1 < *local_c;
          if (bVar1 != *local_c) {
LAB_005ba469:
            iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_005ba46e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar11 = bVar1 < local_c[1];
          if (bVar1 != local_c[1]) goto LAB_005ba469;
          local_c = local_c + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_005ba46e:
        if (iVar8 == 0) {
          if ((param_3 != 0) &&
             (iVar6 = FUN_005d7866(param_2,*(undefined4 *)(*piVar3 + 8)), iVar6 != 0)) {
            return 0;
          }
          uVar2 = *(undefined4 *)(iVar9 + 0x18);
          pcVar13 = "redefinition of \'%s\'";
          uVar12 = 0xbbb;
          goto LAB_005ba4f1;
        }
      }
      piVar3 = (int *)(iVar6 + 0xc);
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x1c);
    if (((iVar6 != 0) && (*(int *)(*(int *)(param_1 + 0xc) + 0x10) == 3)) &&
       (*(int *)(iVar6 + 0x10) == 2)) {
      for (iVar6 = *(int *)(iVar6 + 0x18); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xc)) {
        pbVar7 = *(byte **)(*(int *)(*(int *)(iVar6 + 8) + 0x14) + 0x18);
        pbVar10 = *(byte **)(iVar9 + 0x18);
        do {
          bVar1 = *pbVar10;
          bVar11 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_005ba534:
            iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_005ba539;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar10[1];
          bVar11 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_005ba534;
          pbVar10 = pbVar10 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar8 = 0;
LAB_005ba539:
        if (iVar8 == 0) {
          uVar2 = *(undefined4 *)(iVar9 + 0x18);
          pcVar13 = "redefinition of formal parameter \'%s\'";
          uVar12 = 0xbdc;
LAB_005ba4f1:
          FUN_005ba1d9(param_1,iVar9 + 0x10,uVar12,pcVar13,uVar2);
          return 0x80004005;
        }
      }
    }
    pvVar4 = _malloc(0x14);
    if (pvVar4 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_005d78db(0,0,"Stmts");
    }
    if (puVar5 != (undefined4 *)0x0) {
      iVar9 = FUN_005d7885(param_2);
      puVar5[2] = iVar9;
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x14);
        *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar5[2] + 0x20);
        *(undefined4 *)(puVar5[2] + 0x24) = *(undefined4 *)(param_1 + 0x4c);
        *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(puVar5[2] + 0x24);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        puVar5[3] = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18);
        *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x18) = puVar5;
        return 0;
      }
      (**(code **)*puVar5)(1);
    }
    uVar2 = 0x8007000e;
  }
  return uVar2;
}

