/* Decompiled from Speed.exe @ 005a34d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005a34d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int iVar3;
  
  uVar1 = FUN_005a03d0();
  if (uVar1 != 0xffffffff) {
    switch(uVar1) {
    case 3:
      uVar2 = FUN_004bbd70();
      break;
    default:
      uVar2 = *(uint *)(extraout_ECX + 8);
      break;
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
      uVar2 = (uint)CONCAT11(*(undefined1 *)(extraout_ECX + 0x11),
                             *(undefined1 *)(extraout_ECX + 0x12)) << 8 | uVar1;
    }
    if ((-1 < (int)uVar1) && ((int)uVar1 < 0x19)) {
      param_1 = uVar1 * 0x90 + 4 + param_1;
      iVar3 = 0;
      while ((uVar1 = *(uint *)(param_1 + iVar3 * 4), uVar1 != 0 && (uVar1 != uVar2))) {
        iVar3 = iVar3 + 1;
        if (0x23 < iVar3) {
          return;
        }
      }
      *(uint *)(param_1 + iVar3 * 4) = uVar2;
    }
  }
  return;
}

