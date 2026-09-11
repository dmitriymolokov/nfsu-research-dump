/* Decompiled from Speed.exe @ 0059fb80 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0059fb80(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = DAT_0073442c - 1;
  uVar1 = uVar3 >> 1;
  uVar2 = *(uint *)(DAT_00734434 + uVar1 * 8);
  if (uVar2 != param_2) {
    uVar4 = 0;
    do {
      if (uVar3 - uVar4 < 3) {
        if (*(uint *)(DAT_00734434 + uVar4 * 8) == param_2) {
          return *(undefined4 *)(DAT_00734434 + 4 + uVar4 * 8);
        }
        if (uVar2 == param_2) break;
        if (*(uint *)(DAT_00734434 + uVar3 * 8) == param_2) {
          return *(undefined4 *)(DAT_00734434 + 4 + uVar3 * 8);
        }
      }
      if (uVar1 == uVar4) {
        return 0;
      }
      if (param_2 < uVar2) {
        uVar3 = uVar1;
      }
      if (uVar2 < param_2) {
        uVar4 = uVar1;
      }
      uVar1 = uVar3 + uVar4 >> 1;
      uVar2 = *(uint *)(DAT_00734434 + uVar1 * 8);
    } while (uVar2 != param_2);
  }
  return *(undefined4 *)(DAT_00734434 + 4 + uVar1 * 8);
}

