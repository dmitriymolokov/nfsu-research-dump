/* Decompiled from Speed.exe @ 005298e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005298e0(undefined4 param_1)

{
  int iVar1;
  int *unaff_ESI;
  
  if (unaff_ESI[0x794] != 0) {
    FUN_005326f0(param_1);
    FUN_005326f0(param_1);
    if ((char)unaff_ESI[0x774] != '\0') {
      FUN_00529a00();
      return;
    }
    iVar1 = FUN_00674898();
    unaff_ESI[0x693] = iVar1;
    unaff_ESI[0x694] = 0x96;
    iVar1 = FUN_00674898();
    unaff_ESI[0x68f] = iVar1;
    (**(code **)(*unaff_ESI + 0x38))(unaff_ESI + 0x68f,1);
    unaff_ESI[0x690] = *(int *)(&DAT_006b6630 + unaff_ESI[0x755] * 4);
  }
  return;
}

