/* Decompiled from Speed.exe @ 006586b0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_006586b0(undefined4 *param_1,undefined2 *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  short *psVar7;
  undefined4 uVar8;
  undefined4 auStack_41c [68];
  undefined4 uStack_30c;
  undefined4 *puStack_308;
  undefined4 local_2f4;
  int local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0 [7];
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8 [2];
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  int local_280;
  undefined4 local_27c;
  int local_26c;
  undefined *local_264;
  undefined4 local_260;
  undefined4 local_258;
  int local_254;
  undefined4 local_250;
  undefined4 local_24c;
  int local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_214;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1ec;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_164 [18];
  int local_11c;
  int local_108;
  int local_100;
  int local_f0;
  int local_e4;
  undefined4 local_b8 [10];
  undefined4 local_90;
  
  local_2e0[1] = 0;
  local_2e0[2] = 0;
  local_2e0[3] = 0;
  local_2e0[4] = 0;
  local_2e0[5] = 0;
  local_2f4 = *param_1;
  *(undefined4 *)(param_2 + 100) = local_2f4;
  puVar3 = local_164;
  for (iVar5 = 0x2b; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = local_b8;
  for (iVar5 = 0x2e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar5 = 6;
  puVar3 = (undefined4 *)(param_2 + 0x4c);
  puVar6 = param_2 + 0x58;
  do {
    *puVar3 = 0;
    *puVar6 = 0;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar8 = 0;
  local_2c0 = 0x7f;
  local_2b8[0] = 0x7f;
  local_290 = 0x7f;
  local_258 = 0x7f;
  puStack_308 = &local_2f4;
  local_2c4 = 0;
  local_2bc = 0;
  local_2b0 = 0;
  local_2ac = 0x3c;
  local_2a8 = 0xffffffff;
  local_2a4 = 1;
  local_2a0 = 0;
  local_298 = 0x40;
  local_294 = 0;
  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_280 = 0;
  local_27c = 0;
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  local_26c = 0;
  local_264 = &DAT_006ea050;
  local_260 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_254 = 0;
  local_250 = 0;
  local_24c = 0;
  local_248 = 0;
  local_244 = 0;
  local_240 = 0;
  local_23c = 0;
  local_238 = 0;
  local_234 = 1;
  local_21c = 0;
  local_214 = 1;
  local_20c = 0x5622;
  local_208 = 0;
  local_204 = 0xffffffff;
  local_200 = 0xffffffff;
  local_1fc = 0;
  local_1ac = 0;
  local_1f8 = 0;
  local_1a8 = 0;
  local_1cc = 0;
  local_1a4 = 0;
  local_1c8 = 0;
  local_1a0 = 0;
  local_194 = 0;
  local_184 = 0;
  local_190 = 0;
  local_180 = 0;
  local_19c = 10;
  local_1ec = 0;
  uStack_30c = 0x6588be;
  iVar4 = FUN_00659c80();
  iVar5 = local_2f0;
  uVar2 = local_2e8;
  do {
    if (iVar4 == 0) {
LAB_00658a04:
      *(undefined1 *)(param_2 + 4) = (undefined1)local_2c4;
      *(undefined1 *)((int)param_2 + 9) = (undefined1)local_2c0;
      *(undefined1 *)((int)param_2 + 0xb) = (undefined1)local_2b8[0];
      *(undefined1 *)(param_2 + 6) = (undefined1)local_2b0;
      *(undefined1 *)(param_2 + 7) = (undefined1)local_2a8;
      *(undefined1 *)(param_2 + 5) = (undefined1)local_2bc;
      *(undefined1 *)((int)param_2 + 0xf) = (undefined1)local_2a4;
      *(undefined1 *)((int)param_2 + 0x11) = (undefined1)local_298;
      *(undefined1 *)((int)param_2 + 0xd) = (undefined1)local_2ac;
      *(undefined1 *)(param_2 + 9) = (undefined1)local_294;
      *(undefined1 *)((int)param_2 + 0x15) = (undefined1)local_28c;
      *(undefined1 *)(param_2 + 8) = (undefined1)local_2a0;
      param_2[2] = (undefined2)local_288;
      *(undefined1 *)(param_2 + 10) = (undefined1)local_290;
      *(int *)(param_2 + 0x10) = local_11c + local_280;
      param_2[3] = (undefined2)local_284;
      *(undefined1 *)(param_2 + 0xb) = (undefined1)local_27c;
      *(int *)(param_2 + 0x12) = local_108 + local_26c;
      *(undefined **)(param_2 + 0x14) = local_264 + local_100;
      *(undefined4 *)(param_2 + 0x40) = local_260;
      *(undefined4 *)(param_2 + 0x42) = local_230;
      *(undefined4 *)(param_2 + 0x44) = local_22c;
      *(undefined4 *)(param_2 + 0x46) = local_228;
      *(undefined4 *)(param_2 + 0x48) = local_224;
      *(undefined4 *)(param_2 + 0x4a) = local_220;
      *(undefined1 *)(param_2 + 0xd) = (undefined1)local_258;
      *(undefined1 *)((int)param_2 + 0x1b) = (undefined1)local_250;
      *(int *)(param_2 + 0x16) = local_f0 + local_254;
      *(undefined1 *)(param_2 + 0xe) = (undefined1)local_24c;
      *(int *)(param_2 + 0x18) = local_e4 + local_248;
      *(undefined1 *)((int)param_2 + 0x1d) = (undefined1)local_244;
      param_2[0x2a] = (undefined2)local_240;
      *(undefined1 *)(param_2 + 0xf) = (undefined1)local_23c;
      *param_2 = (undefined2)local_238;
      *(undefined1 *)((int)param_2 + 0x1f) = (undefined1)local_234;
      *(undefined1 *)((int)param_2 + 0x13) = (undefined1)local_19c;
      *(undefined1 *)(param_2 + 1) = (undefined1)local_21c;
      *(undefined4 *)(param_2 + 0x2c) = local_208;
      param_2[0x2b] = (undefined2)local_20c;
      *(undefined4 *)(param_2 + 0x30) = local_200;
      *(undefined4 *)(param_2 + 0x2e) = local_204;
      *(undefined4 *)(param_2 + 0x32) = local_90;
      param_2[0xc] = (undefined2)local_1ec;
      local_2e0[0] = local_1ac;
      *(undefined4 *)(param_2 + 0x34) = local_1fc;
      local_2e0[1] = local_1a8;
      *(undefined4 *)(param_2 + 0x36) = local_1f8;
      local_2e0[2] = local_1a4;
      *(undefined4 *)(param_2 + 0x38) = local_1cc;
      local_2e0[3] = local_1a0;
      *(undefined4 *)(param_2 + 0x3a) = local_1c8;
      local_2e0[4] = local_184;
      *(undefined4 *)(param_2 + 0x3c) = local_194;
      local_2e0[5] = local_180;
      iVar5 = 0;
      *(char *)((int)param_2 + 3) = (char)local_214;
      *(undefined4 *)(param_2 + 0x3e) = local_190;
      if ('\0' < (char)local_214) {
        psVar7 = param_2 + 0x5e;
        do {
          if ((DAT_00713ce0 == 1) && (*(char *)((int)param_2 + 3) == '\x02')) {
            local_2e0[iVar5] = 0;
          }
          iVar4 = iVar5 + *(char *)((int)param_2 + 3) * 6;
          psVar1 = (short *)(local_2e0 + iVar5);
          iVar5 = iVar5 + 1;
          *psVar7 = *(short *)(&DAT_00713f70 + iVar4 * 2) + *psVar1;
          psVar7 = psVar7 + 1;
        } while (iVar5 < *(char *)((int)param_2 + 3));
        *param_1 = local_2f4;
        return uVar8;
      }
      *param_1 = local_2f4;
      return uVar8;
    }
    local_2f0 = iVar5;
    local_2e8 = uVar2;
    if (iVar5 < 0x2b) {
      local_2e0[iVar5 + 6] = local_2ec;
      local_164[iVar5] = uVar2;
      if (iVar5 == 0x14) {
        *(undefined4 *)(param_2 + *(char *)((int)param_2 + 0x17) * 2 + 0x1a) = uVar2;
        *(undefined4 *)(param_2 + *(char *)((int)param_2 + 0x17) * 2 + 0x22) = local_2e4;
        *(char *)((int)param_2 + 0x17) = *(char *)((int)param_2 + 0x17) + '\x01';
      }
    }
    else if ((iVar5 < 0x80) || (0xad < iVar5)) {
      if (iVar5 == 0xfe) {
        uVar8 = 1;
        goto LAB_00658a04;
      }
    }
    else {
      auStack_41c[iVar5] = local_2ec;
      local_2b8[iVar5] = uVar2;
      if (iVar5 == 0x98) {
        *(undefined4 *)(param_2 + 0x4c) = uVar2;
        param_2[0x58] = (undefined2)local_2e4;
      }
      else if (iVar5 == 0x99) {
        *(undefined4 *)(param_2 + 0x4e) = uVar2;
        param_2[0x59] = (undefined2)local_2e4;
      }
      else if (iVar5 == 0x9a) {
        *(undefined4 *)(param_2 + 0x50) = uVar2;
        param_2[0x5a] = (undefined2)local_2e4;
      }
      else if (iVar5 == 0x9b) {
        *(undefined4 *)(param_2 + 0x52) = uVar2;
        param_2[0x5b] = (undefined2)local_2e4;
      }
      else if (iVar5 == 0xa4) {
        *(undefined4 *)(param_2 + 0x54) = uVar2;
        param_2[0x5c] = (undefined2)local_2e4;
      }
      else if (iVar5 == 0xa5) {
        *(undefined4 *)(param_2 + 0x56) = uVar2;
        param_2[0x5d] = (undefined2)local_2e4;
      }
    }
    puStack_308 = &local_2f4;
    uStack_30c = 0x6589f2;
    iVar4 = FUN_00659c80();
    iVar5 = local_2f0;
    uVar2 = local_2e8;
  } while( true );
}

