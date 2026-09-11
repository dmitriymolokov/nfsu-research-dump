/* Decompiled from Speed.exe @ 00650040 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00650040(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (&DAT_00713cf0)[param_1 & 0xff];
  iVar2 = FUN_00655000(param_1);
  FUN_00655b40(iVar1 + 0x140,iVar2);
  FUN_00655ab0(iVar1 + 0x14c,iVar2);
  if (*(int *)(iVar1 + 0x158) == iVar2) {
    *(undefined4 *)(iVar1 + 0x158) = 0;
  }
  return;
}

