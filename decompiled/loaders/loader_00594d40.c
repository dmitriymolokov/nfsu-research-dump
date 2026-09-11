/* Decompiled from Speed.exe @ 00594d40 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594d40(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  
  if (unaff_ESI != (undefined4 *)0x0) {
    if (0 < (int)unaff_ESI[7]) {
      unaff_ESI[5] = 1;
      return;
    }
    if (-1 < (int)unaff_ESI[1]) {
      if (unaff_ESI[4] == 0) {
        FUN_0063c2c0(unaff_ESI[3],100);
      }
      else {
        piVar1 = (int *)(unaff_ESI[4] + 8);
        *piVar1 = *piVar1 + -1;
      }
      unaff_ESI[1] = 0xffffffff;
    }
    iVar3 = DAT_00734484;
    iVar2 = *(int *)(DAT_00734484 + 0x18);
    *unaff_ESI = *(undefined4 *)(DAT_00734484 + 0x10);
    *(int *)(iVar3 + 0x18) = iVar2 + -1;
    *(undefined4 **)(iVar3 + 0x10) = unaff_ESI;
  }
  return;
}

