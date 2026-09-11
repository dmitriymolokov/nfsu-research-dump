/* Decompiled from Speed.exe @ 004462a0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_004462a0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = 0;
  local_94 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar2 = *(int *)(param_1 + 0x20) + iVar1;
      if ((*(ushort *)(iVar2 + 0xe) & 0x400) != 0) {
        FUN_00445580();
        local_20 = 0;
        local_1c = 0;
        local_18 = 0;
        local_14 = 0x3f800000;
        local_8c = 0;
        local_88 = 0;
        local_84 = 0;
        local_80 = 0;
        local_7c = 0x3f800000;
        local_78 = 0;
        local_74 = 0;
        local_70 = 0;
        local_6c = 0;
        local_68 = 0x3f800000;
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = 0x3f800000;
        local_90 = 0xbf800000;
        thunk_FUN_005ac68f(local_50,&local_90,local_50);
        local_1c = *(undefined4 *)(iVar2 + 0x14);
        local_20 = *(undefined4 *)(iVar2 + 0x10);
        local_18 = *(undefined4 *)(iVar2 + 0x18);
        local_14 = 0x3f800000;
        FUN_00445660();
      }
      local_94 = local_94 + 1;
      iVar1 = iVar1 + 0x30;
    } while (local_94 < *(int *)(param_1 + 0x24));
  }
  return;
}

