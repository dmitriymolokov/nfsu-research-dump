/* spd-match: far pct=11.36 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0040ad60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040ad60(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  int iVar8;
  undefined *apuStack_1ac [3];
  int iStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 auStack_e4 [4];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [2];
  undefined1 local_d0 [8];
  undefined4 uStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_98 [20];
  undefined4 local_84;
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  apuStack_1ac[2] = &DAT_007064d0;
  local_e0 = 0;
  local_dc = 0;
  local_d8[0] = 0;
  local_f0 = 0x3f800000;
  local_ec = 0;
  local_e8 = 0;
  apuStack_1ac[1] = (undefined *)0x40add3;
  FUN_0040b780();
  apuStack_1ac[1] = &DAT_007064d0;
  local_44 = 0;
  local_34 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  apuStack_1ac[0] = (undefined *)0x40ae36;
  FUN_0040b780();
  local_84 = 0;
  local_74 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  apuStack_1ac[2] = (undefined *)0x40ae97;
  FUN_00401cd0();
  apuStack_1ac[2] = local_50;
  apuStack_1ac[1] = local_d0;
  apuStack_1ac[0] = (undefined *)0x40aeac;
  FUN_005ac8d8();
  apuStack_1ac[0] = (undefined *)local_d8;
  FUN_005ac68f(local_d8,auStack_98);
  local_d8[0] = 0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0x3f800000;
  FUN_005ac8d8(auStack_e4,auStack_e4);
  uVar3 = DAT_00702aa8;
  uVar2 = DAT_00702aa4;
  iStack_15c = 6;
  piVar4 = (int *)(&DAT_00702ac0 +
                  (DAT_007364dc % *(uint *)(DAT_00700e74 * 4 + 0x702aac) +
                  (DAT_00700e74 * 3 + -3) * 2) * 0x18);
  param_1 = param_1 - (int)piVar4;
  do {
    iVar5 = *(int *)(param_1 + (int)piVar4);
    if (iVar5 != 0) {
      *(bool *)(iVar5 + 8) = *piVar4 != 0;
      iVar8 = *(int *)(iVar5 + 0x40);
      if (iVar8 != 0) {
        puVar1 = *(undefined4 **)(iVar5 + 0x58);
        puVar6 = DAT_00740500;
        ppuVar7 = apuStack_1ac;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *ppuVar7 = (undefined *)*puVar6;
          puVar6 = puVar6 + 1;
          ppuVar7 = ppuVar7 + 1;
        }
        uStack_14c = 0x3f800000;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_13c = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_128 = 0;
        uStack_124 = 0x3f800000;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        uStack_110 = 0x3f800000;
        uStack_138 = 0xbf800000;
        switch(*puVar1) {
        case 5:
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_005ac68f(apuStack_1ac,apuStack_1ac,&uStack_14c);
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          break;
        case 6:
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_005ac68f(apuStack_1ac,apuStack_1ac,&uStack_14c);
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          break;
        case 7:
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_005ac68f(apuStack_1ac,apuStack_1ac,&uStack_14c);
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_0040b990(apuStack_1ac,apuStack_1ac);
          break;
        case 8:
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_005ac68f(apuStack_1ac,apuStack_1ac,&uStack_14c);
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_0040b990(apuStack_1ac,apuStack_1ac);
          break;
        case 9:
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_005ac68f(apuStack_1ac,apuStack_1ac,&uStack_14c);
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          break;
        case 10:
          FUN_0040ba40(apuStack_1ac,apuStack_1ac);
          FUN_005ac68f(apuStack_1ac,apuStack_1ac,&uStack_14c);
          break;
        default:
          ppuVar7 = apuStack_1ac;
          for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *ppuVar7 = (undefined *)0x0;
            ppuVar7 = ppuVar7 + 1;
          }
        }
        FUN_0047d070(iVar8,apuStack_1ac,DAT_0073ad38);
        iVar5 = DAT_00735f5c;
        if (DAT_00735f5c == 0) {
          *(undefined4 *)(iVar8 + 0x284) = 0;
          *(undefined4 *)(iVar8 + 0xb4) = 0;
        }
        *(undefined4 *)(iVar8 + 0xbc) = uVar2;
        *(undefined4 *)(iVar8 + 0xc0) = uVar3;
        if (iVar5 == 0) {
          *(undefined2 *)(iVar8 + 0xc4) = DAT_0078bd40;
        }
      }
    }
    piVar4 = piVar4 + 1;
    iStack_15c = iStack_15c + -1;
  } while (iStack_15c != 0);
  return;
}

