/* Decompiled from Speed.exe @ 00659c80 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00659c80(int *param_1)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = *(char *)*param_1;
  while (cVar1 == -4) {
    iVar4 = *param_1;
    *param_1 = iVar4 + 1;
    cVar1 = *(char *)(iVar4 + 1);
  }
  pbVar3 = (byte *)*param_1;
  bVar2 = *pbVar3;
  param_1[1] = (uint)bVar2;
  if (bVar2 == 0xff) {
    return 0;
  }
  *param_1 = (int)(pbVar3 + 1);
  if ((param_1[1] != 0xfd) && (param_1[1] != 0xfe)) {
    uVar5 = (uint)pbVar3[1];
    param_1[4] = uVar5;
    if (uVar5 == 0xff) {
      iVar4 = FUN_0065fce0(pbVar3 + 2,4);
      param_1[4] = iVar4;
      *param_1 = *param_1 + 4;
    }
    iVar4 = *param_1 + 1;
    *param_1 = iVar4;
    param_1[3] = iVar4;
    if ((uint)param_1[4] < 5) {
      iVar4 = FUN_0065fce0(iVar4,param_1[4]);
      param_1[2] = iVar4;
    }
    *param_1 = *param_1 + param_1[4];
  }
  return 1;
}

