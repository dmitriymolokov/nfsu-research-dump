/* spd-match: far pct=5.14 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00569a00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __thiscall FUN_00569a00(int param_1,int param_2,float param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *local_e8;
  int local_e4;
  int local_e0;
  undefined1 local_d0 [48];
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [48];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  iVar2 = *(int *)(param_2 + 0x4d4);
  if ((((iVar2 != 0) && (param_3 != DAT_006cc7a4)) && (param_1 != 0)) &&
     (*(int *)(param_2 + 0x530) == 0)) {
    local_e8 = (undefined4 *)(iVar2 + 0x544 + param_1 * 8);
    if (((0 < param_1) && (param_1 < 6)) && (DAT_00734460 != 0)) {
      local_e8 = (undefined4 *)(DAT_00734460 + -0xe8 + (param_1 * 0x1d + (param_4 & 0xffff)) * 8);
    }
    local_e4 = 0;
    if ((((param_1 != 3) && (param_1 != 4)) && ((param_1 != 8 && (param_1 != 9)))) ||
       ((local_e4 = (int)param_4 >> 0x10, local_e4 < 1 ||
        (puVar7 = (undefined4 *)(param_2 + 0x60), 8 < local_e4)))) {
      puVar7 = (undefined4 *)(param_2 + 0x50);
    }
    FUN_00401cd0();
    local_5c = puVar7[1];
    local_60 = *puVar7;
    local_58 = puVar7[2];
    local_54 = 0x3f800000;
    puVar7 = (undefined4 *)(param_2 + 0x70);
    if (param_5 != (undefined4 *)0x0) {
      puVar7 = param_5;
    }
    local_e8 = (undefined4 *)*local_e8;
    puVar5 = (undefined4 *)FUN_0040a880();
    for (; local_e8 != puVar5; local_e8 = (undefined4 *)*local_e8) {
      FUN_00401cd0();
      piVar6 = (int *)(iVar2 + 0x62c + *(int *)(local_e8[7] + 0x58) * 8);
      if (local_e4 != 0) {
        piVar6 = (int *)(iVar2 + 0x62c + local_e4 * 8);
      }
      piVar8 = (int *)*piVar6;
      if (piVar8 != piVar6) {
        do {
          iVar3 = piVar8[4];
          if (iVar3 == 0) {
            local_e0 = piVar8[3];
            local_a0 = piVar8[1];
            local_9c = piVar8[2];
          }
          else {
            local_e0 = *(int *)(iVar3 + 0x48);
            local_a0 = *(int *)(iVar3 + 0x40);
            local_9c = *(int *)(iVar3 + 0x44);
          }
          local_98 = local_e0;
          local_94 = 0x3f800000;
          FUN_005ac68f(local_50,local_d0,local_90);
          FUN_00401cd0();
          uVar1 = puVar7[2];
          uVar4 = *puVar7;
          local_e8[0x1d] = puVar7[1];
          local_e8[0x1e] = uVar1;
          local_e8[0x1c] = uVar4;
          local_e8[0x1f] = 0;
          FUN_00402d30(&DAT_0078e9e0,local_e8,-param_3,param_2);
          piVar8 = (int *)*piVar8;
        } while (piVar8 != piVar6);
      }
      FUN_00401cd0();
    }
  }
  return;
}

