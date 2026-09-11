/* Decompiled from Speed.exe @ 0049c050 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049c050(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0073578c;
  if (param_1 < 0x9120409f) {
    if (param_1 != 0x9120409e) {
      if ((param_1 != 0xc407210) && (param_1 != 0x911ab364)) {
        return;
      }
      if (DAT_0073578c == 0) {
        return;
      }
      iVar2 = FUN_004f3f90(&DAT_00746104);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(iVar2 + 0x18) == 0) {
        return;
      }
      FUN_004f0800(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
      return;
    }
  }
  else if (param_1 != 0xb5971bf1) {
    if (param_1 != 0xc98356ba) {
      return;
    }
    FUN_00563cb0();
    return;
  }
  FUN_0049cbd0();
  return;
}

