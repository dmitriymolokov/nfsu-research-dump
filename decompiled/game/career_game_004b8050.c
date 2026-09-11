/* Decompiled from Speed.exe @ 004b8050 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_004b8050(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 < 0xabc08913) {
    if (param_2 == 0xabc08912) {
      if (*(int *)(param_3 + 0x10) != 0x5b9d88b9) {
        FUN_004c96c0(0x1122aacc);
        return;
      }
      FUN_004c96c0(0x1122aabb);
      return;
    }
    if (param_2 == 0xc407210) {
      FUN_004b5c00();
      return;
    }
    if (param_2 == 0x911ab364) {
      FUN_004c96c0(0x1122aabb);
      FUN_004f6430(*(undefined4 *)(param_1 + 0xc));
      return;
    }
    if (param_2 != 0x9120409e) {
      return;
    }
  }
  else if (param_2 != 0xb5971bf1) {
    if (param_2 != 0xc98356ba) {
      return;
    }
    FUN_004b8c30(param_1);
    return;
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  if (uVar1 < 0x4caa28d3) {
    if (uVar1 == 0x4caa28d2) {
      (**(code **)(param_1 + 0x70))(param_2);
      return;
    }
    if (uVar1 < 0x4c85f7d1) {
      if (uVar1 == 0x4c85f7d0) {
        (**(code **)(param_1 + 0x68))(param_2);
        return;
      }
      if (uVar1 == 0x4c61c6ce) {
        (**(code **)(param_1 + 0x60))(param_2);
        return;
      }
      if (uVar1 == 0x4c73df4f) {
        (**(code **)(param_1 + 100))(param_2);
        return;
      }
    }
    else if (uVar1 == 0x4c981051) {
      (**(code **)(param_1 + 0x6c))(param_2);
      return;
    }
  }
  else if (uVar1 < 0x4ce07256) {
    if (uVar1 == 0x4ce07255) {
      (**(code **)(param_1 + 0x7c))(param_2);
      return;
    }
    if (uVar1 == 0x4cbc4153) {
      (**(code **)(param_1 + 0x74))(param_2);
      return;
    }
    if (uVar1 == 0x4cce59d4) {
      (**(code **)(param_1 + 0x78))(param_2);
      return;
    }
  }
  else if (uVar1 == 0x4cf28ad6) {
    (**(code **)(param_1 + 0x80))(param_2);
  }
  return;
}

