/* spd-match: far pct=15.44 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00409cd0 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


void FUN_00409cd0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int *piStack_124;
  undefined4 uStack_120;
  int **ppiStack_11c;
  int *piStack_118;
  int *piStack_114;
  int *piStack_110;
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  int local_f0 [20];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  piStack_104 = (int *)0x409ce7;
  FUN_00408b20();
  piStack_104 = (int *)0x0;
  piStack_108 = (int *)0x409cfc;
  FUN_0040abd0();
  if (DAT_0073640c == (undefined4 *)0x0) {
LAB_00409d27:
    DAT_0073640c = (void *)&DAT_0071abb8;
    piStack_104 = (int *)0x409d37;
    (*DAT_0071ac90)();
    piStack_104 = (int *)DAT_0071abbc;
    piStack_108 = DAT_0073636c;
    piStack_10c = (int *)0x409d4c;
    (**(code **)(*DAT_0073636c + 0x15c))();
    piStack_10c = (int *)0x0;
    piStack_110 = (int *)&stack0xffffff04;
    piStack_114 = DAT_0071abd0;
    piStack_118 = (int *)0x409d61;
    (**(code **)(*DAT_0071abd0 + 0x100))();
    piStack_118 = (int *)0x0;
    ppiStack_11c = (int **)DAT_0071abd0;
    uStack_120 = 0x409d71;
    (**(code **)(*DAT_0071abd0 + 0x104))();
  }
  else if (DAT_0073640c != (void *)&DAT_0071abb8) {
    piStack_104 = (int *)DAT_0073640c[6];
    piStack_108 = (int *)0x409d1b;
    (**(code **)(*piStack_104 + 0x108))();
    piStack_108 = (int *)0x409d27;
    (*(code *)DAT_0073640c[0x37])();
    goto LAB_00409d27;
  }
  piStack_104 = DAT_00740460 + 0x10;
  piStack_108 = DAT_00740460;
  piStack_10c = DAT_00740460 + 0x20;
  local_f0[0] = 0x3f800000;
  local_f0[1] = 0;
  local_f0[2] = 0;
  local_f0[3] = 0;
  local_f0[4] = 0;
  local_f0[5] = 0x3f800000;
  local_f0[6] = 0;
  local_f0[7] = 0;
  local_f0[8] = 0;
  local_f0[9] = 0;
  local_f0[10] = 0x3f800000;
  local_f0[0xb] = 0;
  local_f0[0xc] = 0;
  local_f0[0xd] = 0;
  local_f0[0xe] = 0;
  local_f0[0xf] = 0x3f800000;
  piVar3 = local_f0;
  piVar4 = DAT_00740460;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piStack_110 = (int *)0x409e13;
  FUN_005ac68f();
  piStack_110 = DAT_00740460 + 0x10;
  piStack_114 = DAT_00740460;
  piStack_118 = DAT_00740460 + 0x20;
  piVar3 = (int *)&stack0xffffff04;
  piVar4 = piStack_110;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  ppiStack_11c = (int **)0x409e35;
  FUN_005ac68f();
  ppiStack_11c = &piStack_108;
  uStack_120 = 0x409e41;
  FUN_00410400();
  ppiStack_11c = (int **)0x0;
  uStack_120 = 0xe;
  piStack_124 = DAT_0073636c;
  uStack_128 = 0x409e55;
  (**(code **)(*DAT_0073636c + 0xe4))();
  uStack_128 = 0;
  uStack_12c = 7;
  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c);
  if (param_1 == 0) {
    if ((DAT_006f9228 != 0) && (DAT_0073578c != 0)) {
      puVar1 = (undefined1 *)(DAT_0073578c + 4);
      *puVar1 = 1;
      FUN_004f0390();
      *puVar1 = 0;
      FUN_004f3030(DAT_0070649c,DAT_007064a0);
    }
    iVar2 = 0;
    if (0 < DAT_007361c4) {
      do {
        if ((*(int *)((&DAT_007361bc)[iVar2] + 0x534) != 0) && (DAT_006f9228 != 0)) {
          FUN_0058e810(&DAT_00740460);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_007361c4);
    }
    if (DAT_00740588 != '\0') {
      FUN_0040be70();
      local_f0[8] = 0x43dc0000;
      local_f0[9] = 0x41700000;
      local_f0[0xc] = 0x43480000;
      local_f0[0xd] = 0x41700000;
      local_f0[0x10] = 0x43480000;
      local_f0[0x11] = 0x42be0000;
      uStack_a0 = 0x43dc0000;
      uStack_9c = 0x42be0000;
      (**(code **)(*DAT_0073636c + 0x104))(DAT_0073636c,0,DAT_00736470);
      (**(code **)(*DAT_0073636c + 0x114))(DAT_0073636c,0,1,3);
      (**(code **)(*DAT_0073636c + 0x114))(DAT_0073636c,0,2,3);
      FUN_00410650();
      FUN_00410550(1);
      FUN_0040bef0();
      (**(code **)(*DAT_0073636c + 0x114))(DAT_0073636c,0,1,1);
      (**(code **)(*DAT_0073636c + 0x114))(DAT_0073636c,0,2,1);
    }
  }
  else if ((DAT_006f9228 != 0) && (DAT_0073578c != 0)) {
    FUN_004f5e90();
  }
  if (DAT_0078eb90 != 0) {
    FUN_0040be70();
    uStack_60 = 0x7f7f7f7f;
    uStack_5c = 0x7f7f7f7f;
    uStack_58 = 0x7f7f7f7f;
    uStack_54 = 0x7f7f7f7f;
    local_f0[8] = 0x43000000;
    local_f0[9] = 0;
    local_f0[0xc] = 0x43c00000;
    local_f0[0xd] = 0;
    local_f0[0x10] = 0x43c00000;
    local_f0[0x11] = 0x43800000;
    uStack_a0 = 0x43000000;
    uStack_9c = 0x43800000;
    DAT_00736450 = DAT_0071aa28;
    if (DAT_0078eb8c != '\0') {
      FUN_0040bef0();
    }
    DAT_00736450 = 0;
  }
  if (DAT_0073640c != (undefined4 *)0x0) {
    if (DAT_0073640c == (void *)&DAT_0071abb8) goto LAB_0040a106;
    (**(code **)(*(int *)DAT_0073640c[6] + 0x108))((int *)DAT_0073640c[6]);
    (*(code *)DAT_0073640c[0x37])();
  }
  DAT_0073640c = (void *)&DAT_0071abb8;
  (*DAT_0071ac90)();
  (**(code **)(*DAT_0073636c + 0x15c))(DAT_0073636c,DAT_0071abbc);
  (**(code **)(*DAT_0071abd0 + 0x100))(DAT_0071abd0,&uStack_12c,0);
LAB_0040a106:
  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,7,1);
  (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
  return;
}

