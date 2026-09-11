/* Decompiled from Speed.exe @ 00424680 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424680(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_2dc;
  int local_2d8;
  undefined4 local_2d4;
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  undefined4 local_240 [10];
  undefined4 local_218;
  
  pvVar4 = _malloc(0xa4);
  *(void **)(param_1 + 0x58) = pvVar4;
  pvVar4 = _malloc(0x200);
  *(void **)(param_1 + 0x98) = pvVar4;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 8) = 0;
  FUN_00443a10(&DAT_007372b0,param_1 + 0x70);
  FUN_00443a10(&DAT_007372b0,param_1 + 0x80);
  FUN_00443a10(&DAT_007372b0,param_1 + 0x5c);
  uVar5 = FUN_00565b60(*(int *)(*(int *)(param_1 + 0xa8) + 4) << 4,0,0,0);
  *(undefined4 *)(param_1 + 0x94) = uVar5;
  uVar5 = FUN_00565b60(*(int *)(*(int *)(param_1 + 0xa8) + 4) << 4,0,0,0);
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x50) = *(undefined4 *)(*(int *)(param_1 + 0xa8) + 4);
  local_2d8 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0xa8) + 4)) {
    iVar7 = 0;
    local_2dc = 0;
    do {
      iVar1 = *(int *)(**(int **)(param_1 + 0xa8) + local_2dc + 4);
      if (iVar1 == 0) {
        local_2d4 = 0;
      }
      else {
        local_2d4 = *(undefined4 *)(iVar1 + 0x28);
      }
      FUN_004422b0(0,local_2d4);
      local_278 = local_278 + _DAT_006cc954;
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x94) + iVar7);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      iVar1 = *(int *)(param_1 + 0x90);
      *(float *)(iVar1 + 8 + iVar7) = local_278;
      puVar6 = (undefined4 *)(iVar1 + iVar7);
      puVar6[1] = local_27c;
      *puVar6 = local_280;
      local_2dc = local_2dc + 0x18;
      local_2d8 = local_2d8 + 1;
      iVar7 = iVar7 + 0x10;
    } while (local_2d8 < *(int *)(*(int *)(param_1 + 0xa8) + 4));
  }
  if (DAT_0078a2fc == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x28) =
         *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc);
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x10) = 0;
  }
  else {
    *(float *)(*(int *)(param_1 + 0x58) + 0xc) = _DAT_006cc7bc - 0.0;
    fVar3 = _DAT_006cc7bc - 0.0;
    *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x28) =
         *(undefined4 *)(*(int *)(param_1 + 0x58) + 0xc);
    *(float *)(*(int *)(param_1 + 0x58) + 0x10) = fVar3;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x2c) =
       *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x18) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x20) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x30) = 0x3f000000;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x34) = 0x459c4000;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x38) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x3c) = *(undefined4 *)(param_1 + 0x98);
  iVar7 = 0x30;
  do {
    iVar2 = *(int *)(param_1 + 0x98);
    iVar1 = iVar7 + -0x30;
    *(undefined4 *)(iVar2 + iVar1) = 0x42200000;
    *(undefined4 *)(iVar2 + 4 + iVar1) = 0;
    *(undefined4 *)(iVar2 + 8 + iVar1) = 0;
    iVar2 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(iVar2 + 0x10 + iVar1) = 0x42200000;
    *(undefined4 *)(iVar2 + 0x14 + iVar1) = 0;
    *(undefined4 *)(iVar2 + 0x18 + iVar1) = 0;
    iVar1 = *(int *)(param_1 + 0x98);
    *(undefined4 *)(iVar1 + -0x10 + iVar7) = 0x42200000;
    *(undefined4 *)(iVar1 + -0xc + iVar7) = 0;
    *(undefined4 *)(iVar1 + -8 + iVar7) = 0;
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x98) + iVar7);
    *puVar6 = 0x42200000;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x98) + 0x10 + iVar7);
    *puVar6 = 0x42200000;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x98) + 0x20 + iVar7);
    *puVar6 = 0x42200000;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x98) + 0x30 + iVar7);
    *puVar6 = 0x42200000;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x98) + 0x40 + iVar7);
    iVar7 = iVar7 + 0x80;
    *puVar6 = 0x42200000;
    puVar6[1] = 0;
    puVar6[2] = 0;
  } while (iVar7 < 0x230);
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x54) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x58) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x5c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x60) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 100) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x68) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x6c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x70) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x74) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x78) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x7c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x80) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x84) = 0x3e4ccccd;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x8c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x90) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x94) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x98) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x58) + 0x9c) = 0;
  puVar6 = local_240;
  for (iVar7 = 0x8c; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_218 = 2;
  pvVar4 = _malloc(0x470);
  if (pvVar4 != (void *)0x0) {
    uVar5 = FUN_004854e0(pvVar4,*(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x58),
                         local_240,1);
    *(undefined4 *)(param_1 + 0x54) = uVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}

