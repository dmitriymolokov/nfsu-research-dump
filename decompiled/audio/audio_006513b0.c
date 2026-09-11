/* Decompiled from Speed.exe @ 006513b0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_006513b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x8c + DAT_00713f48;
  iVar2 = param_1 * 0x110 + DAT_0071400c;
  if (*(char *)(param_1 * 0x8c + 0x4e + DAT_00713f48) == '\0') {
    FUN_006533c0(*(undefined2 *)(iVar3 + 0x1c),iVar2);
  }
  else {
    iVar1 = 0;
    if (DAT_00713cdc != 0) {
      do {
        *(undefined4 *)(iVar2 + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)DAT_00713cdc);
    }
    *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
  }
  if ((*(byte *)(iVar3 + 0x24) & 0x44) == 0) {
    FUN_00656f20(*(undefined4 *)(iVar2 + 0xbc),*(undefined2 *)(iVar3 + 0x1c),
                 (int)*(short *)(iVar3 + 0x1e));
  }
  FUN_006512f0(param_1);
  return;
}

