/* Decompiled from Speed.exe @ 0064b110 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0064b110(void)

{
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  DAT_00713b50 = ((int)DAT_00712c38 >> 0x18) * DAT_00712438;
  FUN_0064b2c7(8);
  local_18 = &DAT_00713b54;
  for (local_8 = 0; local_8 < 9; local_8 = local_8 + 1) {
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0;
    local_18[4] = 0;
    local_18[5] = 0;
    local_18[6] = 0;
    local_18 = local_18 + 7;
  }
  local_c = 1;
  do {
    local_14 = *(uint *)(&DAT_00712c40 + (DAT_00712c38 >> 0x17) * 4);
    local_10 = local_14 & 0xff;
    if (9 < local_10) {
      if ((local_14 & 0x20) == 0) {
        if ((local_14 & 0x10) == 0) {
          FUN_0064b2c7(9);
          local_14 = *(uint *)(&DAT_00712738 + (DAT_00712c38 >> 0x18) * 4);
        }
        else {
          FUN_0064b2c7(6);
          local_14 = *(uint *)(&DAT_00713448 + (DAT_00712c38 >> 0x18) * 4);
        }
        local_10 = local_14 & 0xff;
      }
      else {
        if ((local_14 & 0x10) != 0) {
          FUN_0064b2c7(2);
          return local_c;
        }
        FUN_0064b2c7(6);
        local_14 = DAT_00712c38;
        local_10 = 0x10;
      }
    }
    FUN_0064b2c7(local_10);
    local_c = local_c + ((int)local_14 >> 0x10 & 0x3fU);
    (&DAT_00713b50)[*(int *)(&DAT_006aa8b8 + local_c * 4)] =
         ((int)local_14 >> 0x16) * (&DAT_00712438)[*(int *)(&DAT_006aa8b8 + local_c * 4)];
    local_c = local_c + 1;
  } while( true );
}

