/* Decompiled from Speed.exe @ 0066a270 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0066a270(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x80) != 2) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  bVar1 = *param_2;
  while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
    param_2 = param_2 + 1;
    *(uint *)(param_1 + 0x6c) = (bVar1 & 0xf) + *(int *)(param_1 + 0x6c) * 10;
    bVar1 = *param_2;
  }
  iVar3 = FUN_00672a10(param_2,0x3a);
  if (iVar3 != 0) {
    pcVar4 = (char *)(iVar3 + 1);
    iVar3 = (param_1 + 0x88) - (int)pcVar4;
    do {
      cVar2 = *pcVar4;
      pcVar4[iVar3] = cVar2;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    *(undefined4 *)(param_1 + 0x80) = 3;
    FUN_00669b20(*(undefined4 *)(param_1 + 0x6c),2,param_1,0x4000,0,0);
    return 0;
  }
  return 0xfffffffd;
}

