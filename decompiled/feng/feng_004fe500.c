/* Decompiled from Speed.exe @ 004fe500 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint __fastcall FUN_004fe500(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (param_1 == uVar1 - 1) {
    return uVar1;
  }
  iVar4 = 1;
  iVar3 = *(int *)(param_2 + 0x14) + param_1 * 0xc;
  do {
    uVar2 = *(uint *)(iVar3 + 0xc);
    iVar3 = iVar3 + 0xc;
    param_1 = param_1 + 1;
    if (uVar2 < 0x501) {
      if (uVar2 == 0x500) {
        if (iVar4 == 1) {
          iVar4 = 0;
        }
      }
      else if ((0x2ff < uVar2) && (uVar2 < 0x302)) {
        iVar4 = iVar4 + 1;
      }
    }
    else if (uVar2 == 0x501) {
      iVar4 = iVar4 + -1;
    }
  } while ((param_1 < uVar1) && (iVar4 != 0));
  return param_1;
}

