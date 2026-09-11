/* Decompiled from Speed.exe @ 0045b150 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_0045b150(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 char *param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  char local_7a2;
  char local_7a1;
  int *local_7a0;
  int local_79c;
  int local_798;
  int local_794;
  int local_790;
  int local_78c;
  float local_788;
  undefined1 local_784;
  undefined1 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  int local_5b0;
  int local_5ac;
  float local_5a8;
  undefined1 local_5a4;
  undefined4 local_5a0 [112];
  char local_3e0;
  float local_3dc;
  int local_3d8;
  float local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined1 local_3c4;
  undefined4 local_3c0 [112];
  undefined1 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  float local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined4 local_1e0 [112];
  char local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_79c = 0;
  local_7a2 = '\0';
  FUN_0045b860();
  FUN_0045b860();
  FUN_0045b860();
  FUN_0045b860();
  local_5b0 = 0;
  local_5ac = 0;
  local_5a8 = 0.0;
  local_5a4 = 0;
  FUN_00458f10(0,0);
  local_3e0 = '\0';
  local_3dc = -1.0;
  local_3d8 = 0;
  local_3d4 = 99999.0;
  local_790 = 0;
  local_78c = 0;
  local_788 = 0.0;
  local_784 = 0;
  FUN_00458f10(0,0);
  local_5c0 = 0;
  local_5bc = 0xbf800000;
  local_5b8 = 0;
  local_5b4 = 0x47c34f80;
  local_1f0 = 0;
  local_1ec = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  FUN_00458f10(0,0);
  local_20 = '\0';
  local_1c = 0xbf800000;
  local_18 = 0;
  local_14 = 0x47c34f80;
  local_3d0 = 0;
  local_3cc = 0;
  local_3c8 = 0;
  local_3c4 = 0;
  FUN_00458f10(0,0);
  local_200 = 0;
  local_1fc = 0xbf800000;
  local_1f8 = 0;
  local_1f4 = 99999.0;
  local_5b0 = 1;
  local_5ac = 0;
  local_5a4 = 0;
  local_5a8 = 0.0;
  cVar3 = FUN_0045ad30();
  if (cVar3 != '\0') {
    FUN_0044a000();
  }
  if (param_6 == '\0') {
LAB_0045b3bf:
    local_790 = 1;
    local_78c = 0;
    local_784 = 0;
    local_788 = 0.0;
    if (((param_6 == '\0') || (local_5b0 != 1)) ||
       (ABS(-local_5a8) < _DAT_006cc8bc == (ABS(-local_5a8) == _DAT_006cc8bc))) {
      local_5c0 = 0;
      FUN_0045b900(&local_790,param_4,&local_7a2,&local_1f0,&local_3d0,local_79c);
      if (local_7a2 != '\0') goto LAB_0045b71b;
    }
    local_798 = 0;
    if (0 < param_3[1]) {
      local_7a0 = param_3 + 0xf;
      do {
        piVar6 = local_7a0 + -0xd;
        cVar3 = FUN_00456780(piVar6);
        if (cVar3 != '\0') {
          local_7a1 = '\0';
          iVar4 = FUN_0045c0d0(param_1,piVar6);
          if (*local_7a0 != 0) {
            local_790 = 2;
            local_784 = 0;
            local_788 = 0.0;
            local_78c = *local_7a0;
          }
          if ((iVar4 == 2) || (iVar4 == 1)) {
            local_5c0 = 1;
          }
          else {
            local_5c0 = 0;
          }
          local_794 = iVar4;
          if (param_6 == '\0') {
LAB_0045b510:
            cVar3 = FUN_0045b900(&local_790,param_4,&local_7a2,&local_1f0,&local_3d0,local_79c);
            local_7a1 = cVar3 != '\0';
          }
          else if ((local_790 < 2) || (3 < local_790)) {
            if ((local_790 != local_5b0) ||
               (ABS(local_788 - local_5a8) < _DAT_006cc8bc ==
                (ABS(local_788 - local_5a8) == _DAT_006cc8bc))) goto LAB_0045b510;
          }
          else if ((local_78c != local_5ac) || (local_790 != local_5b0)) goto LAB_0045b510;
          if (*local_7a0 != 0) {
            local_790 = 3;
            local_784 = 0;
            local_788 = 0.0;
            local_78c = *local_7a0;
          }
          if ((iVar4 == 3) || (iVar4 == 1)) {
            local_5c0 = 1;
          }
          else {
            local_5c0 = 0;
          }
          if (param_6 == '\0') {
LAB_0045b657:
            cVar3 = FUN_0045b900(&local_790,param_4,&local_7a2,&local_1f0,&local_3d0,local_79c);
            if (local_7a1 != '\0') goto LAB_0045b6f3;
          }
          else {
            cVar3 = local_7a1;
            if ((local_790 < 2) || (3 < local_790)) {
              if ((local_790 != local_5b0) ||
                 (ABS(local_788 - local_5a8) < _DAT_006cc8bc ==
                  (ABS(local_788 - local_5a8) == _DAT_006cc8bc))) goto LAB_0045b657;
            }
            else if ((local_78c != local_5ac) || (local_790 != local_5b0)) goto LAB_0045b657;
          }
          if (cVar3 == '\0') {
            iVar4 = *param_3;
            iVar1 = *(int *)(*(int *)(*local_7a0 + 0x1d4) + 0x1c);
            if (*(int *)(iVar1 + 0xe4) != 0) {
              FUN_005791c0();
            }
            if (*(float *)(iVar1 + 0x90) * *(float *)(iVar4 + 0x70) +
                *(float *)(iVar1 + 0x94) * *(float *)(iVar4 + 0x74) < DAT_006cc7a4) {
              if (local_794 == 2) {
                iVar4 = *local_7a0;
                if (iVar4 != 0) {
                  local_790 = 2;
LAB_0045b6a9:
                  local_784 = 1;
                  local_788 = 0.0;
                  local_78c = iVar4;
                }
              }
              else {
                iVar4 = *local_7a0;
                if (iVar4 != 0) {
                  local_790 = 3;
                  goto LAB_0045b6a9;
                }
              }
              local_5c0 = 1;
              FUN_0045b900(&local_790,param_4,&local_7a2,&local_1f0,&local_3d0,local_79c);
            }
          }
        }
LAB_0045b6f3:
        local_798 = local_798 + 1;
        local_7a0 = local_7a0 + 0xe;
      } while (local_798 < param_3[1]);
      if (local_7a2 != '\0') goto LAB_0045b71b;
    }
    cVar3 = FUN_0045ad30();
    uVar2 = DAT_00700638;
    if ((cVar3 == '\0') ||
       (local_3d4 - _DAT_006cc7b8 < local_1f4 == (local_3d4 - _DAT_006cc7b8 == local_1f4))) {
      if (ABS(local_3dc - _DAT_006cc8a8) < _DAT_006cc8bc ==
          (ABS(local_3dc - _DAT_006cc8a8) == _DAT_006cc8bc)) {
        FUN_0044a000();
        puVar5 = local_5a0;
        for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_2 = *puVar5;
          puVar5 = puVar5 + 1;
          param_2 = param_2 + 1;
        }
        *param_5 = local_3e0;
      }
      else {
        *param_1 = 1;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[2] = 0;
        FUN_0045c370(param_2,param_3,uVar2,2,0,0x47c34f80);
        *param_5 = '\0';
        local_7a2 = '\0';
      }
    }
    else {
      FUN_0044a000();
      puVar5 = local_3c0;
      for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
      *param_5 = '\x01';
    }
  }
  else {
    local_3e0 = '\0';
    if (((1 < local_5b0) && (local_5b0 < 4)) && (iVar4 = FUN_0057b520(), iVar4 != 0)) {
      FUN_0045c0d0(param_1,iVar4);
      local_3e0 = FUN_0045cfb0();
    }
    FUN_0045b900(&local_5b0,param_4,&local_7a2,&local_1f0,&local_3d0,0);
    local_79c = local_3d8;
    if ((local_3e0 != '\0') && (local_5ac == local_3d8)) {
      FUN_0045b8a0();
    }
    if (local_7a2 == '\0') goto LAB_0045b3bf;
LAB_0045b71b:
    FUN_0044a000();
    puVar5 = local_1e0;
    for (iVar4 = 0x70; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
    *param_5 = local_20;
  }
  FUN_0045bfb0(*param_3,*param_5,param_3);
  return local_7a2;
}

