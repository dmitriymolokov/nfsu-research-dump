/* Decompiled from Speed.exe @ 00556250 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00556250(void)

{
  undefined4 uVar1;
  undefined1 local_94 [132];
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)FUN_00549490();
  local_c = *local_8;
  FUN_004134c0();
  FUN_004f6570();
  if ((local_c == 0) || (local_c == 0x75757372)) {
    if (*(char *)(DAT_00734f60 + 0x150) == '\x01') {
      FUN_0059fc00();
      uVar1 = FUN_005500a0();
      FUN_004f68c0(0x80,local_94,uVar1);
      FUN_004134c0(0x911ab364,0);
      FUN_004ee3a0();
    }
    else {
      FUN_004134c0();
      FUN_004f6570();
    }
    *(undefined1 *)(DAT_00734f60 + 0x149) = 0;
    *(undefined1 *)(DAT_00734f60 + 0x150) = 0;
    return;
  }
  local_10 = 0xe22c0b3a;
  if (local_c < 0x696e676e) {
    if (local_c == 0x696e676d) {
      return;
    }
    if (local_c == 0x61737461) {
      return;
    }
    if (local_c == 0x67687374) {
      local_10 = 0x6304ee20;
      goto LAB_005563c4;
    }
  }
  else {
    if (local_c == 0x74696d65) {
      local_10 = 0x9a4320bd;
      goto LAB_005563c4;
    }
    if (local_c == 0x7567616d) {
      local_10 = 0x48072fba;
      goto LAB_005563c4;
    }
  }
  FUN_0054d4a0(&DAT_0073d868,local_c);
LAB_005563c4:
  FUN_004134c0(0,0);
  FUN_004ee3a0();
  return;
}

