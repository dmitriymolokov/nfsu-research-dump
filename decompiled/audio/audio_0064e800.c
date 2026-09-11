/* Decompiled from Speed.exe @ 0064e800 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064e800(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_d4 [49];
  undefined1 local_a3;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined2 local_82;
  
  uVar1 = FUN_0064f4b0(local_d4);
  iVar2 = FUN_0064e560(uVar1);
  if (-1 < iVar2) {
    if (DAT_00713cc4 < 1) {
      local_88 = 1;
      local_86 = 0x24;
    }
    else {
      local_88 = 3;
      local_86 = 0x31;
      local_84 = 0x32;
      local_82 = 0x24;
      local_a3 = (undefined1)DAT_00713cc4;
    }
    switch(DAT_006e9b94) {
    case 0:
      local_8d = 1;
      break;
    case 1:
      local_8d = 2;
      break;
    case 2:
      local_8d = 4;
      break;
    case 3:
      local_8d = 5;
      local_8c = 1;
    }
    FUN_0064f530(local_d4);
    FUN_0064f580(DAT_00713cc0,DAT_00713cb0,param_1);
    return 0;
  }
  uVar1 = FUN_0064e560(iVar2);
  return uVar1;
}

