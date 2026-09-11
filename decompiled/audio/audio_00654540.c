/* Decompiled from Speed.exe @ 00654540 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00654540(undefined1 param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_00714068 != 0) {
    iVar2 = 1;
    piVar1 = &DAT_007140ac;
    while (*piVar1 != 0) {
      piVar1 = piVar1 + 8;
      iVar2 = iVar2 + 1;
      if (0x71608b < (int)piVar1) {
        return 0;
      }
    }
    if (0 < iVar2) {
      iVar3 = iVar2 * 0x20;
      (&DAT_007140aa)[iVar3] = param_1;
      *(undefined2 *)(&DAT_007140a8 + iVar3) = param_2;
      *(undefined4 *)(&DAT_00714098 + iVar3) = param_3;
      *(undefined4 *)(&DAT_0071409c + iVar3) = param_4;
      *(undefined4 *)(&DAT_007140a0 + iVar3) = param_5;
      *(undefined4 *)(&DAT_007140a4 + iVar3) = param_6;
      (&DAT_007140ab)[iVar3] = 8;
      *(undefined4 *)(&DAT_0071408c + iVar3) = param_7;
      *(undefined4 *)(&DAT_00714090 + iVar3) = param_8;
      iVar2 = FUN_00653760(iVar2);
      if (iVar2 < 1) {
        *(undefined4 *)(&DAT_0071408c + iVar3) = 0;
      }
      return iVar2;
    }
  }
  return 0;
}

