/* Decompiled from Speed.exe @ 00651a50 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00651a50(undefined1 *param_1)

{
  int iVar1;
  char local_8 [4];
  undefined1 local_4 [4];
  
  if (DAT_00714018 == 0) {
    _DAT_00713fe4 = 0;
    _DAT_00713fe8 = 0;
    DAT_00714018 = 1;
    DAT_00713fec = 0;
    iVar1 = FUN_00654880(local_8,local_4,&DAT_00713d75,&DAT_00713fe4);
    if (iVar1 < 0) {
      return iVar1;
    }
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = DAT_00713fe4;
      param_1[1] = DAT_00713fe5;
      param_1[2] = DAT_00713fe6;
      param_1[3] = DAT_00713fe7;
      param_1[4] = DAT_00713fe8;
      param_1[5] = DAT_00713fe9;
      param_1[6] = DAT_00713fea;
      param_1[7] = DAT_00713feb;
      param_1[8] = DAT_00713fec;
    }
  }
  else {
    *param_1 = DAT_00713fe4;
    param_1[1] = DAT_00713fe5;
    param_1[2] = DAT_00713fe6;
    param_1[3] = DAT_00713fe7;
    param_1[4] = DAT_00713fe8;
    param_1[5] = DAT_00713fe9;
    param_1[6] = DAT_00713fea;
    param_1[7] = DAT_00713feb;
    param_1[8] = DAT_00713fec;
  }
  DAT_00713d7c = local_4[0];
  DAT_00713dae = local_4[0];
  DAT_00713d7a = local_8[0];
  DAT_00713d76 = 0x80;
  DAT_00713d70 = 0x2b11;
  DAT_00713d72 = 48000;
  DAT_00713d74 = 1;
  DAT_00713dad = 1;
  DAT_00713d83 = 1;
  _DAT_00713d84 = 0x24;
  if (local_8[0] != '\0') {
    DAT_00713d83 = 3;
    _DAT_00713d86 = 0x91;
    _DAT_00713d88 = 0x92;
  }
  DAT_00713dbc = 1;
  _DAT_00713dbe = 0x24;
  DAT_00713d9e = 0x20;
  DAT_00713da1 = 0;
  DAT_00713db6 = 0x10;
  DAT_00713d9a = 0xac44;
  DAT_00713db7 = 2;
  DAT_00713db0 = 0x19;
  DAT_00713eeb = FUN_00657cd0();
  return 0;
}

