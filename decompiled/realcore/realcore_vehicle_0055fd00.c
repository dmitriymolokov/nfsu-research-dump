/* Decompiled from Speed.exe @ 0055fd00 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055fd00(void)

{
  int iVar1;
  int unaff_ESI;
  
  FUN_00495f00(*(undefined4 *)(&DAT_006b6280 + *(int *)(unaff_ESI + 0x78) * 4));
  FUN_00495f00(*(undefined4 *)(&DAT_006b6294 + *(int *)(unaff_ESI + 0x88) * 4));
  FUN_00495f00(*(undefined4 *)(&DAT_006b629c + *(int *)(unaff_ESI + 0x88) * 4));
  if (*(int *)(unaff_ESI + 0x88) != 0) {
    if (*(int *)(unaff_ESI + 0xc) == 0) {
LAB_0055fddf:
      if (DAT_0073578c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004ef050(0x9beafbec);
      }
    }
    else {
      iVar1 = FUN_004f65d0();
      if (iVar1 == 0) goto LAB_0055fddf;
      iVar1 = FUN_004ffb70();
      if (iVar1 == 0) goto LAB_0055fddf;
    }
    FUN_004f6910(iVar1);
    goto LAB_0055fe04;
  }
  if (*(int *)(unaff_ESI + 0xc) == 0) {
LAB_0055fd7e:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x9beafbec);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_0055fd7e;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_0055fd7e;
  }
  FUN_004f6970(iVar1);
  FUN_00495f00(*(undefined4 *)(&DAT_006b62a4 + *(int *)(unaff_ESI + 0x88) * 4));
LAB_0055fe04:
  FUN_00495f00(*(undefined4 *)(&DAT_006b62ac + *(int *)(unaff_ESI + 0x88) * 4));
  return;
}

