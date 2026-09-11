/* Decompiled from Speed.exe @ 004e8420 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e8420(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  
  if (((((*(int *)(unaff_EDI + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
       (iVar1 = FUN_004ffb70(), iVar1 == 0)) &&
      ((DAT_0073578c == 0 || (iVar1 = FUN_004ef050(0x58d36da2), iVar1 == 0)))) ||
     (*(int *)(iVar1 + 0x18) != 2)) {
    iVar1 = 0;
  }
  uVar2 = FUN_0059fd70(param_1);
  FUN_004c39d0(uVar2);
  if ((4 < DAT_006ee6f0) && (DAT_006ee6f0 < 9)) {
    if (((*(int *)(unaff_EDI + 0xc) == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
       (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x58d36da2);
      }
    }
    FUN_004f6970(iVar3);
    DAT_00733f2c = iVar1;
    DAT_00733f30 = FUN_005ab550(param_1);
    DAT_00733f28 = 0xffffffff;
    _DAT_00733f40 = timeGetTime();
    FUN_004f68a0(&DAT_006b9172);
    return;
  }
  if ((*(int *)(unaff_EDI + 0xc) == 0) ||
     ((iVar1 = FUN_004f65d0(), iVar1 == 0 || (iVar1 = FUN_004ffb70(), iVar1 == 0)))) {
    if (DAT_0073578c != 0) {
      uVar2 = FUN_004ef050(0x58d36da2);
      FUN_004f6910(uVar2);
      return;
    }
    iVar1 = 0;
  }
  FUN_004f6910(iVar1);
  return;
}

