/* Decompiled from Speed.exe @ 0064664f */
/* Module: Audio */
/* Ghidra DecompileVAs */


void __thiscall FUN_0064664f(int *param_1,int param_2,uint param_3)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_1c8;
  int *local_18c;
  int local_17c;
  uint local_178;
  int local_174;
  int local_170;
  uint local_16c;
  int local_168;
  int local_164;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  uint local_150;
  int local_14c;
  int local_148;
  undefined4 local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  int local_ec;
  undefined4 local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined1 local_c5;
  int local_c4;
  int local_c0;
  int local_bc;
  size_t local_b8 [13];
  int local_84;
  char local_7d;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined1 local_65;
  int local_64;
  int local_60;
  char *local_5c [13];
  undefined1 local_25;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_18 = param_2;
  local_cc = -1;
  local_24 = 0;
  local_c5 = 9;
  local_65 = 10;
  local_20 = -1;
  local_74 = -1;
  local_84 = -1;
  local_8 = -1;
  local_7c = -1;
  local_78 = -1;
  local_70 = -1;
  local_14 = -1;
  local_c0 = -1;
  local_c4 = -1;
  local_10 = -1;
  local_6c = -1;
  local_60 = -1;
  local_5c[0] = "FRAME";
  local_5c[1] = "STRINGID";
  local_5c[2] = "X";
  local_5c[3] = "Y";
  local_5c[4] = "WIDTH";
  local_5c[5] = "HEIGHT";
  local_5c[6] = "JUSTIFY_X";
  local_5c[7] = "JUSTIFY_Y";
  local_5c[8] = "SHAPE";
  local_5c[9] = "A";
  local_5c[10] = "R";
  local_5c[0xb] = "G";
  local_5c[0xc] = "B";
  for (local_1c = 0; local_1c < 0xd; local_1c = local_1c + 1) {
    sVar1 = _strlen(local_5c[local_1c]);
    local_b8[local_1c] = sVar1;
  }
  local_7d = '\x01';
  local_25 = 0;
  for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
    if (((*(char *)(local_18 + local_1c) == '\t') || (local_7d == '\x01')) &&
       (local_7d = '\0', local_cc == -1)) {
      local_d8 = param_3 - local_1c;
      local_d4 = local_18 + local_1c;
      FUN_00647742(&local_d4,&local_d8,local_5c,local_b8,0xd,&local_bc);
      if (local_bc != -1) {
        local_cc = local_24;
      }
    }
    if (*(char *)(local_18 + local_1c) == '\n') {
      local_24 = local_24 + 1;
      local_7d = '\x01';
    }
  }
  if (local_cc == -1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar2 = (local_24 - local_cc) + -1;
    local_24 = iVar2;
    local_18c = (int *)FUN_00647b20(iVar2 * 0x34 + 4);
    if (local_18c == (int *)0x0) {
      local_18c = (int *)0x0;
    }
    else {
      *local_18c = iVar2;
      FUN_004010a0(local_18c + 1,0x34,iVar2,FUN_006478e3);
      local_18c = local_18c + 1;
    }
    *param_1 = (int)local_18c;
    param_1[1] = local_24;
    local_64 = 0;
    local_c = 0;
    for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
      if (*(char *)(local_18 + local_1c) == '\n') {
        local_c = local_c + 1;
      }
      if (local_cc == local_c) break;
    }
    local_7d = '\x01';
    for (; local_1c < param_3; local_1c = local_1c + 1) {
      if ((*(char *)(local_18 + local_1c) == '\t') || (local_7d == '\x01')) {
        local_7d = '\0';
        local_e0 = param_3 - local_1c;
        local_dc = local_18 + local_1c;
        FUN_00647742(&local_dc,&local_e0,local_5c,local_b8,0xd,&local_bc);
        switch(local_bc) {
        case 0:
          local_20 = local_64;
          break;
        case 1:
          local_74 = local_64;
          break;
        case 2:
          local_14 = local_64;
          break;
        case 3:
          local_c0 = local_64;
          break;
        case 4:
          local_84 = local_64;
          break;
        case 5:
          local_8 = local_64;
          break;
        case 6:
          local_7c = local_64;
          break;
        case 7:
          local_78 = local_64;
          break;
        case 8:
          local_70 = local_64;
          break;
        case 9:
          local_c4 = local_64;
          break;
        case 10:
          local_10 = local_64;
          break;
        case 0xb:
          local_6c = local_64;
          break;
        case 0xc:
          local_60 = local_64;
        }
        local_64 = local_64 + 1;
      }
      if (*(char *)(local_18 + local_1c) == '\n') {
        local_7d = '\x01';
        local_1c = local_1c + 1;
        break;
      }
    }
    local_64 = 0;
    local_c = 0;
    while (local_1c < param_3) {
      if ((*(char *)(local_18 + local_1c) == '\t') || (local_7d == '\x01')) {
        if (local_7d != '\x01') {
          local_1c = local_1c + 1;
        }
        for (local_d0 = 0;
            ((local_1c + local_d0 < param_3 && (*(char *)(local_18 + local_1c + local_d0) != '\t'))
            && (*(char *)(local_18 + local_1c + local_d0) != '\n')); local_d0 = local_d0 + 1) {
        }
        if (local_1c + local_d0 != param_3) {
          local_25 = *(undefined1 *)(local_18 + local_1c + local_d0);
          *(undefined1 *)(local_18 + local_1c + local_d0) = 0;
        }
        local_7d = '\0';
        if (local_64 == local_20) {
          local_ec = param_3 - local_1c;
          local_e4 = local_18 + local_1c;
          local_e8 = FUN_00647b50();
          FUN_00647669(&local_e4,&local_ec,&local_e8);
          FUN_006479f1(local_e8);
        }
        else if (local_64 == local_74) {
          local_f8 = param_3 - local_1c;
          local_f4 = local_18 + local_1c;
          local_f0 = FUN_00647bb0();
          FUN_00647669(&local_f4,&local_f8,&local_f0);
          FUN_006479db(local_f0);
        }
        else if (local_64 == local_84) {
          local_104 = param_3 - local_1c;
          local_fc = local_18 + local_1c;
          local_100 = FUN_00647b70();
          FUN_00647669(&local_fc,&local_104,&local_100);
          FUN_006479af(local_100);
        }
        else if (local_64 == local_8) {
          local_110 = param_3 - local_1c;
          local_108 = local_18 + local_1c;
          local_10c = FUN_00647b90();
          FUN_00647669(&local_108,&local_110,&local_10c);
          FUN_006479c5(local_10c);
        }
        else if (local_64 == local_7c) {
          local_11c = param_3 - local_1c;
          local_114 = local_18 + local_1c;
          local_118 = FUN_006474d4(local_114,local_11c);
          if (local_118 == -1) {
            uVar3 = FUN_00647c50();
            FUN_00647a07(uVar3);
          }
          else {
            FUN_00647a07(local_118);
          }
        }
        else if (local_64 == local_78) {
          local_128 = param_3 - local_1c;
          local_120 = local_18 + local_1c;
          local_124 = FUN_006474d4(local_120,local_128);
          if (local_124 == -1) {
            uVar3 = FUN_00647c70();
            FUN_00647a1d(uVar3);
          }
          else {
            FUN_00647a1d(local_124);
          }
        }
        else if (local_64 == local_70) {
          local_134 = param_3 - local_1c;
          local_130 = local_18 + local_1c;
          local_12c = FUN_00647c90();
          FUN_00647669(&local_130,&local_134,&local_12c);
          FUN_00647a33(local_12c);
        }
        else if (local_64 == local_14) {
          local_140 = param_3 - local_1c;
          local_13c = local_18 + local_1c;
          local_138 = FUN_006460f0();
          FUN_00647669(&local_13c,&local_140,&local_138);
          FUN_00647984(local_138);
        }
        else if (local_64 == local_c0) {
          local_14c = param_3 - local_1c;
          local_148 = local_18 + local_1c;
          local_144 = FUN_00649910();
          FUN_00647669(&local_148,&local_14c,&local_144);
          FUN_00647999(local_144);
        }
        else if (local_64 == local_c4) {
          local_158 = param_3 - local_1c;
          local_154 = local_18 + local_1c;
          local_150 = FUN_00647bd0();
          local_150 = local_150 & 0xff;
          FUN_00647669(&local_154,&local_158,&local_150);
          FUN_00647a49(local_150);
        }
        else if (local_64 == local_10) {
          local_164 = param_3 - local_1c;
          local_15c = local_18 + local_1c;
          local_160 = FUN_00647bf0();
          local_160 = local_160 & 0xff;
          FUN_00647669(&local_15c,&local_164,&local_160);
          FUN_00647a5f(local_160);
        }
        else if (local_64 == local_6c) {
          local_170 = param_3 - local_1c;
          local_168 = local_18 + local_1c;
          local_16c = FUN_00647c10();
          local_16c = local_16c & 0xff;
          FUN_00647669(&local_168,&local_170,&local_16c);
          FUN_00647a75(local_16c);
        }
        else if (local_64 == local_60) {
          local_17c = param_3 - local_1c;
          local_174 = local_18 + local_1c;
          local_178 = FUN_00647c30();
          local_178 = local_178 & 0xff;
          FUN_00647669(&local_174,&local_17c,&local_178);
          FUN_00647a8b(local_178);
        }
        local_64 = local_64 + 1;
        if (local_1c + local_d0 != param_3) {
          *(undefined1 *)(local_18 + local_1c + local_d0) = local_25;
        }
      }
      else {
        if (*(char *)(local_18 + local_1c) == '\n') {
          local_64 = 0;
          uVar4 = local_c + 1;
          if ((param_1[1] < (int)uVar4) && ((int)uVar4 <= param_1[1])) {
            local_c = uVar4;
                    /* WARNING: Subroutine does not return */
            FUN_00642e80("RCMP_ASSERT in %s at %d \n %s\n","src/av/cmn/avsubtitle.cpp",0x22b,
                         "CurRow>((INT32)mNumberOfSubtitle) && \"parser error\"");
          }
          local_7d = '\x01';
          local_1c8 = uVar4;
          if (param_1[1] - 1U <= uVar4) {
            local_1c8 = param_1[1] - 1;
          }
          puVar5 = (undefined4 *)(*param_1 + local_c * 0x34);
          puVar6 = (undefined4 *)(*param_1 + local_1c8 * 0x34);
          for (iVar2 = 0xd; local_c = uVar4, iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
        local_1c = local_1c + 1;
      }
    }
  }
  return;
}

