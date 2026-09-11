/* Decompiled from Speed.exe @ 00447360 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447360(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  local_8 = DAT_00736120 - _DAT_0073611c;
  if (local_8 < 0) {
    local_8 = 0;
  }
  fVar1 = (float)(1 << ((byte)DAT_007349c8 & 0x1f)) * (float)local_8 * _DAT_007301d0;
  if (fVar1 < _DAT_006cc7b8) {
    fVar1 = _DAT_006cc7b8;
  }
  if (((DAT_0078f1d0 ^ DAT_006f0888) & 8) != 0) {
    DAT_0078f1d0 = DAT_006f0888;
    _DAT_00736110 = 0x3dcccccd;
    _DAT_00736118 = 0x461c4000;
    _DAT_0073610c = fVar1;
    _DAT_00736114 = _DAT_006cc844 / fVar1;
  }
  if (DAT_00734964 != 0) {
    iVar4 = DAT_00734964;
    if ((DAT_007361f8 != 0) && (iVar6 = 0, 0 < *(int *)(DAT_007361f8 + 0x18))) {
      iVar5 = 0x28;
      iVar2 = DAT_007361f8;
      iVar3 = DAT_0073619c;
      do {
        if ((iVar4 != 0) || (DAT_007361dc != 0)) {
          if (DAT_006fbf14 == 0) {
            if (DAT_006fbf18 == *(short *)(*(int *)(iVar5 + iVar2) + 10)) {
LAB_00447460:
              if (iVar3 != 0) {
                FUN_00435b30(iVar3);
                iVar2 = DAT_007361f8;
                iVar3 = DAT_0073619c;
                iVar4 = DAT_00734964;
              }
            }
          }
          else if (*(short *)(*(int *)(iVar5 + iVar2) + 10) == 0) goto LAB_00447460;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar6 < *(int *)(iVar2 + 0x18));
    }
    if (iVar4 != 0) {
      FUN_00448590();
      return;
    }
  }
  return;
}

