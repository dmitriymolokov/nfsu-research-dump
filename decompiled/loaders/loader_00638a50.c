/* Decompiled from Speed.exe @ 00638a50 */
/* Module: Loader */
/* Ghidra DecompileModule */


void FUN_00638a50(uint *param_1,undefined4 param_2,undefined2 param_3,int param_4,int param_5,
                 int param_6,uint param_7,int param_8)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (param_4 == 0) {
    param_4 = 0x20;
  }
  uVar1 = FUN_00638f20(param_4);
  FUN_00641a10(param_1,0,0x10);
  *(undefined1 *)param_1 = uVar1;
  *(short *)(param_1 + 1) = (short)param_2;
  *(undefined2 *)((int)param_1 + 6) = param_3;
  param_1[3] = param_1[3] & 0xfffffff | param_6 << 0x1c;
  iVar2 = FUN_006388a0(param_2,param_6);
  puVar4 = (uint *)(iVar2 + 0x10 + (int)param_1);
  puVar6 = param_1;
  if ((param_4 < 9) && (param_5 != 0)) {
    if (param_4 == 4) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = (param_4 != 8) - 1 & 0x100;
    }
    uVar1 = FUN_00638fd0(param_5);
    param_4 = 0x10;
    if (param_5 != 0xf) {
      param_4 = param_5;
    }
    puVar6 = (uint *)(((uint)((int)puVar4 + (0xf - (int)param_1)) & 0xfffffff0) + (int)param_1);
    *param_1 = ((int)puVar6 - (int)param_1) * 0x100 ^ *param_1 & 0xff;
    FUN_00641a10(puVar6,0,0x10);
    *(undefined1 *)puVar6 = uVar1;
    *(short *)(puVar6 + 1) = (short)uVar3;
    *(undefined2 *)((int)puVar6 + 6) = 1;
    if (param_5 < 0x20) {
      if ((puVar6[3] & 0x1000) == 0) {
        puVar4 = puVar6 + 4;
      }
      else {
        puVar4 = (uint *)(puVar6[4] + (int)puVar6);
      }
      FUN_00641a10(puVar4,0xffffffff,
                   (int)(param_4 * uVar3 + ((int)(param_4 * uVar3) >> 0x1f & 7U)) >> 3);
    }
    else {
      if ((puVar6[3] & 0x1000) == 0) {
        puVar4 = puVar6 + 4;
      }
      else {
        puVar4 = (uint *)(puVar6[4] + (int)puVar6);
      }
      iVar2 = 0;
      if (uVar3 != 0) {
        puVar5 = (undefined1 *)((int)puVar4 + 2);
        do {
          uVar1 = (undefined1)iVar2;
          puVar5[-2] = uVar1;
          puVar5[-1] = uVar1;
          *puVar5 = uVar1;
          puVar5[1] = 0xff;
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 4;
        } while (iVar2 < (int)uVar3);
      }
    }
    puVar4 = (uint *)((int)puVar6 +
                     ((int)(param_4 * uVar3 + ((int)(param_4 * uVar3) >> 0x1f & 7U)) >> 3) + 0x10);
  }
  puVar7 = puVar4;
  if (param_7 != 0) {
    *puVar6 = ((int)puVar4 - (int)puVar6) * 0x100 ^ *puVar6 & 0xff;
    FUN_00641a10(puVar4,0,param_7 + 8);
    *(undefined1 *)puVar4 = 0x6f;
    puVar4[1] = param_7;
    puVar7 = (uint *)((int)puVar4 + param_7 + 8);
    puVar6 = puVar4;
  }
  if (param_8 != 0) {
    *puVar6 = ((int)puVar7 - (int)puVar6) * 0x100 ^ *puVar6 & 0xff;
    FUN_00641a10(puVar7,0,param_8 + 0x10);
    *(undefined1 *)puVar7 = 0x69;
    *(undefined2 *)((int)puVar7 + 6) = 0x10;
  }
  return;
}

