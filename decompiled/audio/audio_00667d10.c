/* Decompiled from Speed.exe @ 00667d10 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00667d10(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = *param_3;
  iVar4 = 0;
  do {
    if (bVar2 == 0) {
      return iVar4;
    }
    bVar2 = *param_3;
    if (bVar2 < 0x21) {
      param_3 = param_3 + 1;
    }
    else {
      if (bVar2 == 0x3d) {
        return iVar4;
      }
      if (bVar2 == 0x3a) {
        return iVar4;
      }
      iVar3 = FUN_00667300(param_1,param_2,param_3);
      if (0 < iVar3) {
        iVar4 = iVar4 + 1;
      }
      bVar2 = *param_3;
      while (0x1f < bVar2) {
        pbVar1 = param_3 + 1;
        param_3 = param_3 + 1;
        bVar2 = *pbVar1;
      }
    }
    bVar2 = *param_3;
  } while( true );
}

