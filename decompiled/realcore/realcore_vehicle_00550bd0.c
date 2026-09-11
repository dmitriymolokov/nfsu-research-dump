/* Decompiled from Speed.exe @ 00550bd0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00550bd0(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_004f9f30();
  iVar1 = 0;
  do {
    FUN_00550390(iVar1 < param_1[8],*(undefined1 *)((int)param_1 + 0xd));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  iVar1 = param_1[9];
  if (((*param_1 != iVar1) && (*param_1 = iVar1, *(int *)param_1[iVar1 + 0xe] != 0)) &&
     (DAT_0073578c != 0)) {
    FUN_004f5ed0(DAT_0073578c);
  }
  if (param_1[4] != param_2) {
    param_1[4] = param_2;
    if (param_2 < 7) {
      FUN_004f6910(param_1[0x14]);
    }
    else {
      FUN_004f6970();
    }
    if (6 < param_2) {
      FUN_004f6970();
      return;
    }
    FUN_004f6910(param_1[0x15]);
  }
  return;
}

