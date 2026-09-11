/* Decompiled from Speed.exe @ 00657770 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00657770(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    pbVar2 = param_1 + 4;
    do {
      FUN_00656790((int)*(short *)pbVar2);
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 2;
    } while (iVar1 < (int)(uint)*param_1);
  }
  return 0;
}

