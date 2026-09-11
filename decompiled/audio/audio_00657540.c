/* Decompiled from Speed.exe @ 00657540 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00657540(byte *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  byte *pbVar3;
  
  fVar1 = *(float *)(param_1 + 0x1c);
  iVar2 = 0;
  if (*param_1 != 0) {
    pbVar3 = param_1 + 4;
    do {
      FUN_0065bab0((int)*(short *)pbVar3,(int)ROUND((float)param_2 * fVar1));
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 2;
    } while (iVar2 < (int)(uint)*param_1);
  }
  return;
}

