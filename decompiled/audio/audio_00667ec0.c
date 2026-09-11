/* Decompiled from Speed.exe @ 00667ec0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00667ec0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (byte *)0x0) {
    iVar3 = 1;
    if (*param_1 == 0x2b) {
      param_1 = param_1 + 1;
    }
    else if (*param_1 == 0x2d) {
      param_1 = param_1 + 1;
      iVar3 = -1;
    }
    iVar2 = 0;
    bVar1 = *param_1;
    while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
      param_1 = param_1 + 1;
      iVar2 = (bVar1 & 0xf) + iVar2 * 10;
      bVar1 = *param_1;
    }
    return iVar2 * iVar3;
  }
  return param_2;
}

