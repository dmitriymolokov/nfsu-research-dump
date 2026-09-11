/* Decompiled from Speed.exe @ 00427930 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00427930(undefined4 param_1)

{
  float fVar1;
  bool bVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  bVar2 = false;
  if (unaff_EDI != *(int *)(unaff_ESI + 0x470)) {
    if (*(int **)(unaff_ESI + 0x878) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_ESI + 0x878) + 0x5c))(1,0,0,param_1);
    }
    *(int *)(unaff_ESI + 0x470) = unaff_EDI;
    if ((*(int *)(unaff_ESI + 0x28) == 1) ||
       (_DAT_006b7bb4 < (float)(DAT_0073ad34 - *(int *)(unaff_ESI + 0x8ec)) * _DAT_006cca38)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    *(int *)(unaff_ESI + 0x8ec) = DAT_0073ad34;
  }
  if (*(int *)(unaff_ESI + 0x28) == 1) {
    if ((*(int *)(unaff_ESI + 0x474) == 0) && (*(int *)(unaff_ESI + 1000) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  fVar1 = (float)*(int *)(*(int *)(unaff_ESI + 0x10) + 0x14);
  if (*(int *)(*(int *)(unaff_ESI + 0x10) + 0x40) != 0) {
    fVar1 = fVar1 + _DAT_006cc7dc;
  }
  if (bVar2) {
    if (_DAT_006ccc00 <= fVar1) {
      FUN_00569a00(unaff_ESI,fVar1 * _DAT_006ccd58,*(undefined4 *)(unaff_ESI + 0x3d8),0);
      *(undefined4 *)(unaff_ESI + 0x474) = *(undefined4 *)(unaff_ESI + 1000);
      return;
    }
    *(undefined4 *)(unaff_ESI + 0x474) = *(undefined4 *)(unaff_ESI + 1000);
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x474) = *(undefined4 *)(unaff_ESI + 1000);
  return;
}

