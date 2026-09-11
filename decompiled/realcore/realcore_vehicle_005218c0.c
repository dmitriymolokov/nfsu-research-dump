/* Decompiled from Speed.exe @ 005218c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005218c0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  iVar6 = param_1 + 0xe7c;
  DAT_00735678 = 0;
  puVar3 = &DAT_0072ce54;
  iVar4 = param_1 + -0x6b7ea4;
  do {
    puVar3[-1] = 0xffffffff;
    *puVar3 = 0xffffffff;
    puVar3[1] = 0;
    iVar1 = 0;
    cVar2 = 'N';
    do {
      (&DAT_006b8d20)[iVar4 + iVar1] = cVar2;
      cVar2 = (&DAT_006b8d21)[iVar1];
      iVar1 = iVar1 + 1;
    } while (cVar2 != '\0');
    cVar2 = 'N';
    puVar5 = &DAT_006b8d20;
    do {
      *(char *)(iVar6 + iVar1) = cVar2;
      cVar2 = puVar5[1];
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 1;
    } while (cVar2 != '\0');
    *(undefined1 *)(iVar6 + iVar1) = 0;
    puVar3 = puVar3 + 3;
    iVar6 = iVar6 + 0x40;
    iVar4 = iVar4 + 0x40;
  } while ((int)puVar3 < 0x72cfd4);
  _DAT_0073569c = 0;
  *(undefined4 *)(param_1 + 0x5b8) = 0;
  DAT_006f870c = 0;
  return;
}

