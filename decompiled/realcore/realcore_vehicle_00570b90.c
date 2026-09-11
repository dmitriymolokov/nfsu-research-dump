/* Decompiled from Speed.exe @ 00570b90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00570b90(int param_1)

{
  int iVar1;
  char cVar2;
  uint extraout_EDX;
  uint uVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(DAT_007361f0 + 0x3c);
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) || (*(int *)(iVar1 + 0x1c) == 0)) &&
     ((*(int *)(DAT_007361f0 + 0x40) == 0 || (*(int *)(*(int *)(DAT_007361f0 + 0x40) + 0x1c) == 0)))
     ) {
    uVar3 = (uint)*(byte *)(unaff_EDI + 0x8a8);
    if ((1 << ((byte)*(undefined4 *)(param_1 + 4) & 0x1f) & *(uint *)(unaff_EDI + 0x530)) == 0) {
      cVar2 = FUN_004280a0();
      if (((cVar2 != '\0') || ((*(uint *)(unaff_EDI + 0x538) & extraout_EDX) != 0)) &&
         (ABS(DAT_0073457c) < _DAT_006cc8bc == (ABS(DAT_0073457c) == _DAT_006cc8bc))) {
        uVar3 = DAT_007364dc & 1;
      }
    }
    return uVar3;
  }
  return 0;
}

