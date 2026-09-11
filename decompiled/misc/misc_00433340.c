/* Decompiled from Speed.exe @ 00433340 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00433340(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *unaff_ESI;
  float *unaff_EDI;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  uVar1 = FUN_00674898(param_1);
  iVar2 = FUN_00674898(uVar1);
  if (unaff_ESI != (float *)0x0) {
    *unaff_ESI = (float)(extraout_ST1 * (float10)*unaff_EDI +
                         (extraout_ST0 - (float10)iVar2 * (float10)_DAT_006cc8f0) /
                         (float10)unaff_EDI[iVar2 * 2 + 1] + (float10)(unaff_EDI + iVar2 * 2 + 1)[1]
                        );
    return;
  }
  return;
}

