/* Decompiled from Speed.exe @ 00547c60 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547c60(void)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined1 local_40c [1036];
  
  if ((((-1 < DAT_006f3d94) && (4 < DAT_007354e0)) && (2 < DAT_007354f4)) &&
     ((0 < DAT_006f3d8c &&
      (fVar1 = (float)(DAT_0073ad3c - _DAT_00740294) * _DAT_006cca38,
      _DAT_006cc7bc / (float)DAT_006f3d8c < fVar1 != (_DAT_006cc7bc / (float)DAT_006f3d8c == fVar1))
      ))) {
    cVar3 = FUN_00438a80(DAT_006f3d94);
    if (cVar3 != '\0') {
      FUN_004392a0();
      FUN_004389b0(2);
      FUN_00548840((float)DAT_0073ad34 * _DAT_006cca38);
      iVar2 = DAT_006f3d94;
      FUN_00436e60();
      FUN_00548840((float)DAT_0073ad3c * _DAT_006cca38);
      FUN_0043d3d0(iVar2,local_40c);
      FUN_005487c0(2,0);
    }
    _DAT_00740294 = DAT_0073ad3c;
  }
  return;
}

