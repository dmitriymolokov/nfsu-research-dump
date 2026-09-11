/* Decompiled from Speed.exe @ 0065bc70 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0065bc70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = param_1 * 0x60 + DAT_0071666c;
  if (0 < param_2) {
    if (*(int *)(iVar2 + 0x5c) == 0) {
      iVar1 = FUN_00650fd0(0x58);
      *(int *)(iVar2 + 0x5c) = iVar1;
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0x5c) + 0x18) = 0x50;
      *(undefined1 *)(*(int *)(iVar2 + 0x5c) + 0x1a) = 0;
      FUN_0065bdb0(*(undefined4 *)(iVar2 + 0x5c));
      FUN_006577e0(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x5c));
    }
    local_4 = (uint)DAT_00713d9a << 8;
    local_8 = param_2 << 8;
    FUN_0065bde0(*(undefined4 *)(iVar2 + 0x5c),&local_8);
    return;
  }
  if (*(int *)(iVar2 + 0x5c) != 0) {
    FUN_00657820(iVar2 + 0x40,*(int *)(iVar2 + 0x5c));
    FUN_006510d0(*(undefined4 *)(iVar2 + 0x5c));
    *(undefined4 *)(iVar2 + 0x5c) = 0;
  }
  return;
}

