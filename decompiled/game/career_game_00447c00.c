/* Decompiled from Speed.exe @ 00447c00 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00447c00(int *param_1,uint *param_2,uint *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar3 = (uint *)(param_4 + (int)param_3);
  do {
    if (puVar3 <= param_3) {
      return;
    }
    uVar5 = *param_3;
    uVar7 = *param_2;
    puVar9 = (uint *)(uVar7 + param_7);
    uVar1 = param_3[1];
    puVar6 = (uint *)(*param_1 + param_6);
    if (uVar5 != 0xb3320000) {
      if ((uVar5 & 0x80000000) != 0) {
        if (param_6 != 0) {
          *puVar6 = *param_3;
          puVar6[1] = param_3[1];
        }
        *param_1 = *param_1 + 8;
        goto LAB_00447d30;
      }
      if (param_6 != 0) {
        puVar9 = param_3;
        for (uVar5 = uVar1 + 8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar1 + 8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar6 = (char)*puVar9;
          puVar9 = (uint *)((int)puVar9 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
      }
      *param_1 = *param_1 + uVar1 + 8;
    }
    else {
      if ((uVar7 & 0x7f) != 0) {
        iVar2 = -(uVar7 + 8 & 0x7f);
        uVar7 = iVar2 + 0x80;
        if (param_7 != 0) {
          *puVar9 = 0;
          puVar9[1] = uVar7;
          puVar9 = puVar9 + 2;
          for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar9 = 0x11111111;
            puVar9 = puVar9 + 1;
          }
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar9 = 0x11;
            puVar9 = (uint *)((int)puVar9 + 1);
          }
        }
        uVar7 = *param_2 + iVar2 + 0x88;
        *param_2 = uVar7;
        puVar9 = (uint *)(uVar7 + param_7);
      }
      if (param_7 != 0) {
        puVar8 = param_3;
        for (uVar7 = uVar1 + 8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uVar1 + 8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)puVar9 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar9 = (uint *)((int)puVar9 + 1);
        }
      }
      *param_2 = *param_2 + uVar1 + 8;
LAB_00447d30:
      if (((uVar5 & 0x80000000) != 0) && (uVar5 != 0xb3320000)) {
        iVar2 = *param_1;
        FUN_00447c00(param_1,param_2,param_3 + 2,uVar1,param_5 + 1,param_6,param_7);
        if (param_6 != 0) {
          puVar6[1] = *param_1 - iVar2;
        }
      }
    }
    param_3 = (uint *)((int)param_3 + param_3[1] + 8);
  } while( true );
}

