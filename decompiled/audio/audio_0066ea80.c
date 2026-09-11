/* Decompiled from Speed.exe @ 0066ea80 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_0066ea80(char *param_1,int param_2,byte *param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  byte bVar1;
  int iVar2;
  uint unaff_retaddr;
  byte local_10e;
  byte local_10d;
  undefined1 local_10c [264];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  local_10d = 0;
  FUN_0066e8c0(local_10c,param_4,param_5,param_6);
  FUN_0066e8c0(&DAT_00717968,param_4,param_5,-param_6);
  FUN_0066e8c0(&DAT_00717968,"ru paranoid?",0xffffffff,0xffffffff);
  if (1 < param_2) {
    iVar2 = param_2 + -1;
    param_2 = param_2 - iVar2;
    do {
      if (param_3 == (byte *)0x0) {
        FUN_0066e9c0(&DAT_00717968,&local_10e,1);
        local_10e = (local_10e & 0x3f) + 0x20;
      }
      else {
        local_10e = *param_3;
        param_3 = param_3 + 1;
        if (local_10e == 0) {
          param_3 = (byte *)0x0;
        }
      }
      if ((local_10e < 0x20) || (0x7e < local_10e)) {
        local_10e = 0x7f;
      }
      bVar1 = local_10e;
      FUN_0066e9c0(local_10c,&local_10d,1);
      *param_1 = (char)(((uint)local_10d % 0x60 + 0x40 + (uint)bVar1) % 0x60) + ' ';
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0 < param_2) {
    *param_1 = '\0';
  }
  return 0;
}

