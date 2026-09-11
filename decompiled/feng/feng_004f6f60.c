/* Decompiled from Speed.exe @ 004f6f60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6f60(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int unaff_ESI;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_8;
  
  if (unaff_ESI != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x2c);
    local_8 = *(float *)(iVar1 + 0x3c);
    local_10 = *(undefined4 *)(iVar1 + 0x24);
    iVar2 = *(int *)(unaff_ESI + 0x18);
    if (((iVar2 == 1) || (iVar2 == 7)) || (iVar2 == 9)) {
      local_18 = param_1 - *(float *)(iVar1 + 0x38) * _DAT_006cc7dc;
      local_14 = param_2 - local_8 * _DAT_006cc7dc;
    }
    else {
      local_18 = param_1;
      local_14 = param_2;
    }
    if (iVar2 < 0x100) {
      cVar3 = FUN_004fea10();
      if (cVar3 == '\0') {
        *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
      }
      FUN_004ff1f0(unaff_ESI,2,&local_18,0);
    }
  }
  return;
}

