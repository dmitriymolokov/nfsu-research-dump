/* spd-match: far pct=3.53 M4.0.2-CE */
/* Decompiled from Speed.exe @ 004f1810 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004f1810(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  
  uVar3 = 0x3f800000;
  if (((((float)unaff_EDI[10] != DAT_006cc7a4) || ((float)unaff_EDI[0xb] != DAT_006cc7a4)) ||
      ((float)unaff_EDI[0xc] != DAT_006cc7a4)) || (bVar2 = false, unaff_EDI[0xd] != 0x3f800000)) {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_00566a20();
    uVar3 = extraout_EDX;
  }
  *unaff_ESI = uVar3;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = uVar3;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = uVar3;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = uVar3;
  FUN_005ac68f();
  if (&stack0x00000000 != (undefined1 *)0x90) {
    FUN_005ac68f();
  }
  if (unaff_ESI != (undefined4 *)0x0) {
    FUN_005ac68f();
  }
  if (&stack0x00000000 != (undefined1 *)0x90) {
    FUN_005ac68f();
  }
  if (unaff_EBX != 0) {
    FUN_005ac68f();
  }
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 * 0xd0 + 0x20 + param_1);
    param_2[2] = piVar1[2] * unaff_EDI[2] + 0x80 >> 8;
    param_2[1] = piVar1[1] * unaff_EDI[1] + 0x80 >> 8;
    *param_2 = *unaff_EDI * *piVar1 + 0x80 >> 8;
    param_2[3] = piVar1[3] * unaff_EDI[3] + 0x80 >> 8;
    FUN_005ac68f();
    if (piVar1[0x15] != 0) {
      return piVar1 + 0x18;
    }
    return (int *)0x0;
  }
  param_2[3] = unaff_EDI[3];
  param_2[2] = unaff_EDI[2];
  param_2[1] = unaff_EDI[1];
  *param_2 = *unaff_EDI;
  return (int *)0x0;
}

