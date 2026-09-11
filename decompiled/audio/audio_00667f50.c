/* Decompiled from Speed.exe @ 00667f50 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00667f50(byte *param_1,uint param_2)

{
  byte bVar1;
  
  if (param_1 != (byte *)0x0) {
    param_2 = 0;
    while( true ) {
      while( true ) {
        bVar1 = *param_1;
        if (((char)bVar1 < '0') || ('9' < (char)bVar1)) break;
        param_2 = param_2 & 0xffffff00 | (bVar1 & 0xf) + (param_2 & 0xff) * 10;
        param_1 = param_1 + 1;
      }
      if (bVar1 != 0x2e) break;
      param_2 = param_2 << 8;
      param_1 = param_1 + 1;
    }
  }
  return param_2;
}

