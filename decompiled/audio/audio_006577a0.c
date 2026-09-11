/* Decompiled from Speed.exe @ 006577a0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_006577a0(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_1 != 0) {
    pbVar1 = param_1 + 4;
    do {
      FUN_006567e0((int)*(short *)pbVar1);
      FUN_006525f0((int)*(short *)pbVar1);
      iVar2 = iVar2 + 1;
      pbVar1 = pbVar1 + 2;
    } while (iVar2 < (int)(uint)*param_1);
  }
  return;
}

