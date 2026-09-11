/* Decompiled from Speed.exe @ 00653440 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00653440(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            undefined4 param_6,int param_7,int param_8,int param_9)

{
  undefined2 uVar1;
  LPVOID lpAddress;
  int iVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  uint local_c;
  undefined4 local_8;
  
  puVar4 = (undefined4 *)0x0;
  lpAddress = VirtualAlloc((LPVOID)0x0,param_7 * 4 + 20000,0x3000,4);
  local_c = (uint)DAT_00713eeb;
  local_28 = param_2;
  local_2c = param_1;
  local_20 = param_7;
  local_24 = 1;
  local_1c = param_4;
  local_18 = param_5;
  local_8 = param_6;
  if (param_3 == 8) {
    FUN_0064e520();
    puVar4 = (undefined4 *)FUN_00650fd0(0x2c);
    local_14 = 1;
    puVar4[1] = 0;
    FUN_006598a0(puVar4,&local_2c);
    FUN_0064e540();
    (*(code *)*puVar4)(puVar4,param_7,0,lpAddress,0);
  }
  else if (param_3 == 9) {
    FUN_0064e520();
    puVar4 = (undefined4 *)FUN_00650fd0(0x2c);
    local_14 = 0;
    puVar4[1] = 0;
    FUN_006598a0(puVar4,&local_2c);
    FUN_0064e540();
    (*(code *)*puVar4)(puVar4,param_7,0,lpAddress,0);
  }
  else if (param_3 == 10) {
    FUN_0064e520();
    if (param_5 < 1) {
      puVar4 = (undefined4 *)FUN_00650fd0(0x2c);
      puVar4[1] = 0;
      FUN_006594e0(puVar4,&local_2c);
    }
    else {
      puVar4 = (undefined4 *)FUN_00650fd0(0x54);
      puVar4[1] = 0;
      FUN_00659740(puVar4,&local_2c);
    }
    lpAddress = (LPVOID)((int)lpAddress + 8);
    FUN_0064e540();
    (*(code *)*puVar4)(puVar4,param_7,0,lpAddress,0);
  }
  else if ((param_3 == 4) || (param_3 == 0x16)) {
    FUN_0064e520();
    if (param_5 < 1) {
      puVar4 = (undefined4 *)FUN_00650fd0(0x2c);
      puVar4[1] = 0;
      FUN_00659250(puVar4,&local_2c);
    }
    else {
      puVar4 = (undefined4 *)FUN_00650fd0(0x30);
      puVar4[1] = 0;
      FUN_006593b0(puVar4,&local_2c);
    }
    FUN_0064e540();
    (*(code *)*puVar4)(puVar4,param_7,0,lpAddress,0);
  }
  else if (param_3 == 0x17) {
    FUN_0064e520();
    if (param_5 < 1) {
      puVar4 = (undefined4 *)FUN_00650fd0(0x24);
      puVar4[1] = 0;
      *(undefined1 *)((int)puVar4 + 0x1a) = 0;
      (*DAT_007164bc)(puVar4,&local_2c);
    }
    else {
      puVar4 = (undefined4 *)FUN_00650fd0(0x38);
      puVar4[1] = 0;
      *(undefined1 *)((int)puVar4 + 0x1a) = 0;
      (*DAT_007164c0)(puVar4,&local_2c);
    }
    FUN_0064e540();
    iVar5 = 0;
    pvVar3 = lpAddress;
    if (0 < param_7) {
      do {
        iVar2 = 0x800;
        if (iVar5 < 0x801) {
          iVar2 = iVar5;
        }
        (*(code *)*puVar4)(puVar4,iVar2,0,pvVar3,0);
        iVar5 = iVar5 + 0x800;
        pvVar3 = (LPVOID)((int)pvVar3 + 0x2000);
      } while (iVar5 < param_7);
    }
  }
  FUN_0064e520();
  if ((code *)puVar4[1] != (code *)0x0) {
    (*(code *)puVar4[1])(puVar4);
  }
  FUN_006510d0(puVar4);
  FUN_0064e540();
  if (0 < param_5) {
    lpAddress = (LPVOID)((int)lpAddress + param_4 * 4);
    param_7 = (param_5 - param_4) + 1;
  }
  if ((param_9 == 8) && (iVar5 = 0, 0 < param_7)) {
    do {
      if (*(float *)((int)lpAddress + iVar5 * 4) <= _DAT_006cc8c8) {
        if (_DAT_006ccce8 <= *(float *)((int)lpAddress + iVar5 * 4)) {
          uVar1 = FUN_00674898();
          *(undefined2 *)(param_8 + iVar5 * 2) = uVar1;
        }
        else {
          *(undefined2 *)(param_8 + iVar5 * 2) = 0x8000;
        }
      }
      else {
        *(undefined2 *)(param_8 + iVar5 * 2) = 0x7fff;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_7);
  }
  if (param_3 == 10) {
    lpAddress = (LPVOID)((int)lpAddress + -8);
  }
  VirtualFree(lpAddress,0,0x8000);
  return 0;
}

