/* Decompiled from Speed.exe @ 00647cb0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00647cb0(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,uint param_7,
            uint param_8,uint param_9)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int local_28;
  int local_24;
  int local_18;
  undefined *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (DAT_0070fdd8 == 0) {
    uVar1 = 0;
  }
  else if (param_9 < 8) {
    if ((param_4 & 1) == 0) {
      if (param_9 == 1) {
        if ((param_8 & 7) != 0) {
          return 3;
        }
        local_c = param_7;
        if ((param_7 & 7) != 0) {
          if ((param_7 & 3) != 0) {
            return 4;
          }
          local_c = param_7 + 4;
          param_5 = param_5 - 1;
        }
      }
      else {
        if ((param_8 & 3) != 0) {
          return 3;
        }
        local_c = param_7;
        if ((param_7 & 3) != 0) {
          if ((param_7 & 1) != 0) {
            return 4;
          }
          local_c = param_7 + 2;
          param_5 = param_5 - 1;
        }
      }
      param_5 = param_5 & 0xfffffffe;
      if ((param_9 == 7) && (0x400 < (int)param_5)) {
        uVar1 = 5;
      }
      else if (((int)param_5 < 2) || (param_6 < 1)) {
        uVar1 = 0;
      }
      else {
        local_8 = param_1;
        local_24 = param_2;
        local_18 = param_3;
        iVar2 = (int)param_4 >> 1;
        if (((param_9 == 0) || (param_9 == 2)) || (param_9 == 3)) {
          local_28 = param_5 << 1;
        }
        else {
          local_28 = param_5 << 2;
        }
        switch(param_9) {
        case 0:
          for (local_10 = 0; (int)local_10 < param_6; local_10 = local_10 + 1) {
            FUN_006481be(local_8,local_24,local_18,local_c,local_c + local_28);
            local_8 = local_8 + param_4;
            if ((local_10 & 1) != 0) {
              local_24 = local_24 + iVar2;
              local_18 = local_18 + iVar2;
            }
            local_c = local_c + param_8;
          }
          break;
        case 1:
          FUN_00648517(0);
          for (local_10 = 0; (int)local_10 < param_6; local_10 = local_10 + 1) {
            FUN_00648208(local_8,local_24,local_18,local_c,local_c + local_28);
            local_8 = local_8 + param_4;
            if ((local_10 & 1) != 0) {
              local_24 = local_24 + iVar2;
              local_18 = local_18 + iVar2;
            }
            local_c = local_c + param_8;
          }
          FUN_006481b7();
          break;
        case 2:
        case 3:
          FUN_006485e9(param_9 & 1);
          for (local_10 = 0; (int)local_10 < param_6; local_10 = local_10 + 1) {
            FUN_00648272(local_8,local_24,local_18,local_c,local_c + local_28);
            local_8 = local_8 + param_4;
            if ((local_10 & 1) != 0) {
              local_24 = local_24 + iVar2;
              local_18 = local_18 + iVar2;
            }
            local_c = local_c + param_8;
            DAT_00711008 = DAT_00711008 ^ _DAT_00710ff8;
            DAT_0071100c = DAT_0071100c ^ _DAT_00710ffc;
          }
          FUN_006481b7();
          break;
        case 4:
        case 5:
          FUN_006485e9(param_9 & 1);
          for (local_10 = 0; (int)local_10 < param_6; local_10 = local_10 + 1) {
            FUN_00648318(local_8,local_24,local_18,local_c,local_c + local_28);
            local_8 = local_8 + param_4;
            if ((local_10 & 1) != 0) {
              local_24 = local_24 + iVar2;
              local_18 = local_18 + iVar2;
            }
            local_c = local_c + param_8;
            DAT_00711008 = DAT_00711008 ^ _DAT_00710ff8;
            DAT_0071100c = DAT_0071100c ^ _DAT_00710ffc;
          }
          FUN_006481b7();
          break;
        case 6:
        case 7:
          FUN_006485e9(param_9 & 1);
          puVar4 = &DAT_0070fff0;
          local_14 = &DAT_00711010;
          FUN_00648208(param_1,param_2,param_3,&DAT_0070fff0,&DAT_0070fff0 + local_28);
          for (local_10 = 0; puVar5 = puVar4, (int)local_10 < param_6; local_10 = local_10 + 1) {
            FUN_00648208(local_8,local_24,local_18,local_14,local_14 + local_28);
            FUN_006483e9(puVar5,local_c,local_c + local_28);
            iVar3 = local_c + param_8;
            DAT_00711008 = DAT_00711008 ^ _DAT_00710ff8;
            DAT_0071100c = DAT_0071100c ^ _DAT_00710ffc;
            FUN_0064846b(puVar5,local_14,iVar3,iVar3 + local_28);
            local_c = iVar3 + param_8;
            DAT_00711008 = DAT_00711008 ^ _DAT_00710ff8;
            DAT_0071100c = DAT_0071100c ^ _DAT_00710ffc;
            local_8 = local_8 + param_4;
            if ((local_10 & 1) != 0) {
              local_24 = local_24 + iVar2;
              local_18 = local_18 + iVar2;
            }
            puVar4 = local_14;
            local_14 = puVar5;
          }
          FUN_006481b7(param_9,puVar5);
        }
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

