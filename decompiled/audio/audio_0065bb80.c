/* Decompiled from Speed.exe @ 0065bb80 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0065bb80(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  iVar2 = param_1 * 0x60 + DAT_0071666c;
  if (param_2 < _DAT_006cc7bc) {
    if (*(int *)(iVar2 + 0x58) == 0) {
      iVar1 = FUN_00650fd0(0x28);
      *(int *)(iVar2 + 0x58) = iVar1;
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0x58) + 0x18) = 0x28;
      *(undefined1 *)(*(int *)(iVar2 + 0x58) + 0x1a) = 0;
      FUN_00659f30(*(undefined4 *)(iVar2 + 0x58));
      FUN_006577e0(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x58));
    }
    local_8 = (uint)DAT_00713d9a << 8;
    local_c = (int)ROUND((float)DAT_00713d9a * param_2) << 7;
    local_4 = 0x100;
    FUN_00659f60(*(undefined4 *)(iVar2 + 0x58),&local_c);
    return;
  }
  if (*(int *)(iVar2 + 0x58) != 0) {
    FUN_00657820(iVar2 + 0x40,*(int *)(iVar2 + 0x58));
    FUN_006510d0(*(undefined4 *)(iVar2 + 0x58));
    *(undefined4 *)(iVar2 + 0x58) = 0;
  }
  return;
}

