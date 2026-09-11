/* Decompiled from Speed.exe @ 006675e0 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_006675e0(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)FUN_00667530(param_1,param_2);
  pbVar4 = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    return 0xffffffff;
  }
  for (; (pbVar4 != param_1 && (0x20 < pbVar4[-1])); pbVar4 = pbVar4 + -1) {
  }
  bVar2 = *pbVar3;
  while (0x1f < bVar2) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *pbVar3;
  while ((bVar2 != 0 && (bVar2 < 0x20))) {
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *pbVar3;
  while (bVar2 != 0) {
    *pbVar4 = bVar2;
    pbVar1 = pbVar3 + 1;
    pbVar4 = pbVar4 + 1;
    pbVar3 = pbVar3 + 1;
    bVar2 = *pbVar1;
  }
  *pbVar4 = 0;
  return 0;
}

