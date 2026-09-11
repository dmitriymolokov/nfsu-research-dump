/* Decompiled from Speed.exe @ 00423b50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00423b50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float local_258;
  int local_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  float fStack_248;
  undefined4 auStack_240 [10];
  undefined4 uStack_218;
  
  switch(param_2) {
  case 1:
    iVar7 = FUN_00572f20("THE_PRESENT");
    if (iVar7 != 0) {
      iVar7 = *(int *)(param_1 + 0x9c);
      uVar1 = *(undefined4 *)(iVar7 + 0x60);
      uVar6 = *(undefined4 *)(iVar7 + 0x68);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar7 + 100);
      *(undefined4 *)(param_1 + 0x70) = uVar1;
      *(undefined4 *)(param_1 + 0x78) = uVar6;
      iVar7 = FUN_00572cd0();
      if ((iVar7 != 0) && (iVar7 = FUN_00572cd0(), iVar7 != 0)) {
        iVar7 = *(int *)(param_1 + 0x9c);
        uVar1 = *(undefined4 *)(iVar7 + 0x60);
        uVar6 = *(undefined4 *)(iVar7 + 0x68);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar7 + 100);
        *(undefined4 *)(param_1 + 0x80) = uVar1;
        *(undefined4 *)(param_1 + 0x88) = uVar6;
        cVar3 = FUN_00424550();
        iVar7 = DAT_007361c4;
        if (cVar3 != '\0') {
          iVar8 = 0;
          *(undefined4 *)(param_1 + 0x50) = 0;
          if (0 < iVar7) {
            do {
              FUN_0042d3e0();
              iVar8 = iVar8 + 1;
            } while (iVar8 < DAT_007361c4);
          }
          FUN_00424680(param_1);
          return 1;
        }
      }
    }
  case 4:
    FUN_00421ae0(4);
    return 1;
  case 2:
    FUN_00572cd0();
    FUN_00572d20();
    FUN_004244b0();
    iVar7 = 0;
    if (0 < DAT_007361c4) {
      do {
        FUN_0042d350();
        iVar7 = iVar7 + 1;
      } while (iVar7 < DAT_007361c4);
    }
    FUN_00574190();
    return 1;
  case 3:
    break;
  default:
    return 0;
  case 0xd:
    return 1;
  }
  if (*(int *)(DAT_007345d0 + 0x54) - DAT_006f08a4 < 1) {
    iVar7 = *(int *)(param_1 + 0x50) + 1;
    *(int *)(param_1 + 0x50) = iVar7;
    if (2 < iVar7) {
      FUN_00421bc0(4,0);
      return 1;
    }
    if (iVar7 == 1) {
      FUN_00572cd0();
      if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
      }
      iVar7 = 0;
      if (0 < *(int *)(*(int *)(param_1 + 0xa8) + 4)) {
        iVar8 = 0;
        local_254 = 0;
        do {
          iVar2 = *(int *)(**(int **)(param_1 + 0xa8) + local_254 + 4);
          if (iVar2 == 0) {
            local_258 = 0.0;
          }
          else {
            local_258 = -*(float *)(iVar2 + 0x24);
          }
          FUN_004422b0(0,local_258);
          fStack_248 = fStack_248 + _DAT_006cc954;
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x94) + iVar8);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          iVar2 = *(int *)(param_1 + 0x90);
          *(float *)(iVar2 + 8 + iVar8) = fStack_248;
          puVar4 = (undefined4 *)(iVar2 + iVar8);
          *puVar4 = uStack_250;
          puVar4[1] = uStack_24c;
          local_254 = local_254 + 0x18;
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + 0x10;
        } while (iVar7 < *(int *)(*(int *)(param_1 + 0xa8) + 4));
      }
      *(float *)(*(int *)(param_1 + 0x58) + 0x88) = -*(float *)(*(int *)(param_1 + 0x58) + 0x88);
    }
    else {
      FUN_00572cd0();
      if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x54))(1);
      }
      local_258 = 0.0;
      if (0 < *(int *)(*(int *)(param_1 + 0xa8) + 4)) {
        iVar7 = 0;
        do {
          FUN_004422b0(0,0);
          fStack_248 = fStack_248 + _DAT_006cc954;
          puVar4 = (undefined4 *)(*(int *)(param_1 + 0x94) + iVar7);
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          iVar8 = *(int *)(param_1 + 0x90);
          *(float *)(iVar8 + 8 + iVar7) = fStack_248;
          puVar4 = (undefined4 *)(iVar8 + iVar7);
          *puVar4 = uStack_250;
          puVar4[1] = uStack_24c;
          local_258 = (float)((int)local_258 + 1);
          iVar7 = iVar7 + 0x10;
        } while ((int)local_258 < *(int *)(*(int *)(param_1 + 0xa8) + 4));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x88) = 0;
    }
    puVar4 = auStack_240;
    for (iVar7 = 0x8c; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    uStack_218 = 2;
    pvVar5 = _malloc(0x470);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_004854e0(pvVar5,*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x58),
                           auStack_240,1);
      *(undefined4 *)(param_1 + 0x54) = uVar6;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return 1;
}

