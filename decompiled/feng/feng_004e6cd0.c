/* Decompiled from Speed.exe @ 004e6cd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e6cd0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (param_1 = FUN_004ffb70(), param_1 == 0)) {
    if (DAT_0073578c == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_004ef050(param_3);
    }
  }
  if (((*(int *)(iVar1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (local_8 = FUN_004ffb70(), local_8 == 0)) {
    if (DAT_0073578c == 0) {
      local_8 = 0;
    }
    else {
      local_8 = FUN_004ef050(param_4);
    }
  }
  if (((*(int *)(iVar1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (local_4 = FUN_004ffb70(), local_4 == 0)) {
    if (DAT_0073578c == 0) {
      local_4 = 0;
    }
    else {
      local_4 = FUN_004ef050(param_5);
    }
  }
  if (((*(int *)(iVar1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(param_6);
    }
  }
  if (param_1 != 0) {
    if ((DAT_00735780 & param_2) != 0) {
      FUN_00495fc0();
      FUN_00495fc0();
      FUN_00495fc0();
      if (param_6 != 0) {
        FUN_00495fc0();
      }
      *(int *)(iVar1 + 0x44 + *(int *)(iVar1 + 0x40) * 4) = param_1;
      *(int *)(iVar1 + 0x84 + *(int *)(iVar1 + 0x40) * 4) = local_8;
      *(int *)(iVar1 + 0xc4 + *(int *)(iVar1 + 0x40) * 4) = local_4;
      *(int *)(iVar1 + 0x104 + *(int *)(iVar1 + 0x40) * 4) = iVar2;
      *(undefined1 *)(iVar1 + 0x144 + *(int *)(iVar1 + 0x40)) = 1;
      *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + 1;
      return;
    }
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
    if (param_6 != 0) {
      FUN_00495f70();
    }
  }
  return;
}

