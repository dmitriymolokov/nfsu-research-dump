/* Decompiled from Speed.exe @ 0054e6b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054e6b0(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_006637b0(unaff_ESI[2]);
  if (iVar1 == 0) {
    if (DAT_007346d4 != 0) {
      _DAT_0078ea94 = _DAT_0078ea94 + 1;
    }
  }
  else {
    iVar2 = FUN_00663fe0(iVar1,0,0x2000);
  }
  unaff_ESI[3] = iVar2;
  if (iVar2 != 0) {
    unaff_ESI[1] = DAT_00730164;
    DAT_00730164 = DAT_00730164 + 1;
    DAT_0073017c = DAT_0073017c + 1;
    *unaff_ESI = 3;
    (*DAT_00730180)(unaff_ESI[1]);
    unaff_ESI[4] = 0;
    return;
  }
  if ((int)unaff_ESI[4] < DAT_0073ad3c) {
    (*DAT_0073016c)();
    unaff_ESI[4] = 0;
  }
  return;
}

