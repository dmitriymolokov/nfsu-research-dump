/* Decompiled from Speed.exe @ 00668c60 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00668c60(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  if (param_3 < 0) {
    bVar1 = *param_1;
    if (bVar1 != 0) {
      do {
        if (bVar1 != *param_2) {
          return (uint)*param_1 - (uint)*param_2;
        }
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      } while (bVar1 != 0);
      return 0;
    }
  }
  else if (0 < param_3) {
    iVar2 = (int)param_2 - (int)param_1;
    do {
      if ((uint)*param_1 - (uint)param_1[iVar2] != 0) {
        return (uint)*param_1 - (uint)param_1[iVar2];
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (0 < param_3);
  }
  return 0;
}

