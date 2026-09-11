/* Decompiled from Speed.exe @ 00592610 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void FUN_00592610(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_006b8d88;
  DAT_0073601c = DAT_0073601c + -1;
  if ((unaff_ESI[0x101] != 0) && ((void *)unaff_ESI[4] != (void *)0x0)) {
    _free((void *)unaff_ESI[4]);
  }
  iVar3 = unaff_ESI[0xf9];
  if (0 < iVar3) {
    piVar2 = unaff_ESI + 0x59;
    do {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
      *(char *)(iVar1 + 8) = *(char *)(iVar1 + 8) + -1;
    } while (iVar3 != 0);
  }
  *unaff_ESI = &PTR_FUN_006c85b8;
  DAT_00736010 = DAT_00736010 + -1;
  FUN_00468410();
  return;
}

