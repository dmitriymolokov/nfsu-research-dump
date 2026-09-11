/* Decompiled from Speed.exe @ 00442200 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint FUN_00442200(float param_1)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (3 < (int)DAT_00736154) {
    uVar3 = 3;
    pfVar2 = (float *)(DAT_00736150 + 0x40);
    do {
      if (param_1 <= pfVar2[-0x10]) goto LAB_00442296;
      if (param_1 <= pfVar2[-8]) {
        uVar1 = uVar1 + 1;
        goto LAB_00442296;
      }
      if (param_1 <= *pfVar2) {
        uVar1 = uVar1 + 2;
        goto LAB_00442296;
      }
      if (param_1 <= pfVar2[8]) {
        uVar1 = uVar1 + 3;
        goto LAB_00442296;
      }
      uVar3 = uVar3 + 4;
      uVar1 = uVar1 + 4;
      pfVar2 = pfVar2 + 0x20;
    } while (uVar3 < DAT_00736154);
  }
  if (uVar1 < DAT_00736154) {
    pfVar2 = (float *)(uVar1 * 0x20 + DAT_00736150);
    while( true ) {
      if (param_1 <= *pfVar2) break;
      uVar1 = uVar1 + 1;
      pfVar2 = pfVar2 + 8;
      if (DAT_00736154 <= uVar1) {
        return 0;
      }
    }
LAB_00442296:
    if (uVar1 < DAT_00736154) {
      return uVar1;
    }
  }
  return 0;
}

