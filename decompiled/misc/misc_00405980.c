/* spd-match: far pct=14.86 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00405980 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *  FUN_00405980(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = DAT_00736504;
  if (DAT_00736504 == 0) {
    iVar2 = -1;
  }
  *param_1 = iVar2;
  if (param_2 != 0) {
    *param_3 = (undefined4)&DAT_007187b8;
    return (undefined4 *)&DAT_00719780;
  }
  _DAT_007187bc = DAT_00719784;
  _DAT_007187b8 = DAT_00719780;
  _DAT_007187c0 = DAT_00719788;
  _DAT_007187c4 = DAT_0071978c;
  DAT_00719780 = 0xffffffff;
  DAT_00719784 = 0xffffffff;
  DAT_00719788 = 0x80800000;
  if (DAT_00736378 != 0) {
    puVar3 = (undefined *)&DAT_0078daa8;
    do {
      if (*(int *)(puVar3 + 0x130) != -1) {
        FUN_00406580();
      }
      puVar3 = puVar3 + 0x270;
    } while ((int)puVar3 < 0x78e948);
  }
  if ((DAT_007361f0 != (int *)0) && (*(int *)DAT_007361f0 == 4)) {
    *param_3 = (undefined4)&DAT_007187b8;
    return (undefined4 *)&DAT_00719780;
  }
  iVar2 = 0;
  do {
    if ((&DAT_0071d89c)[iVar2] != 0) {
      cVar1 = FUN_0041bc20(DAT_00736500 + 0x24e8);
      if ((cVar1 != '\0') && ((&DAT_0071d890)[iVar2] != 0)) {
        cVar1 = FUN_0041bc20(DAT_00736500 + 0x24e8);
        if (cVar1 != '\0') {
          FUN_0041bb30(iVar2);
        }
      }
      cVar1 = FUN_0041bc20(DAT_00736500 + 0x2538);
      if ((cVar1 != '\0') && ((&DAT_0071d890)[iVar2] != 0)) {
        cVar1 = FUN_0041bc20(DAT_00736500 + 0x2538);
        if (cVar1 != '\0') {
          FUN_0041bb30(iVar2);
        }
      }
      cVar1 = FUN_0041bc20(DAT_00736500 + 0x2498);
      if ((cVar1 != '\0') && ((&DAT_0071d890)[iVar2] != 0)) {
        cVar1 = FUN_0041bc20(DAT_00736500 + 0x2498);
        if (cVar1 != '\0') {
          FUN_0041bb30(iVar2);
        }
      }
      if (*(char *)(DAT_00736500 + 0x2220 + iVar2) == '\x01') {
        FUN_0041b830(DAT_00736500);
      }
      cVar1 = FUN_0041bc20(DAT_00736500 + 0x2498);
      if (cVar1 != '\0') {
        FUN_0041b150(DAT_00736500);
      }
      FUN_0041a250(DAT_00736500,7000,7000);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  *param_3 = (undefined4)&DAT_007187b8;
  return (undefined4 *)&DAT_00719780;
}

