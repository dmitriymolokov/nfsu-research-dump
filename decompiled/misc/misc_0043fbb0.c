/* Decompiled from Speed.exe @ 0043fbb0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0043fbb0(int param_1,float param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *unaff_EDI;
  
  iVar1 = (int)param_2;
  if (((_DAT_006b7840 <= *(float *)((int)param_2 + 0x60)) &&
      (iVar3 = DAT_0073ad34 - *(int *)((int)param_2 + 8),
      (float)iVar3 * _DAT_006cca38 <= _DAT_006b7834)) &&
     ((cVar2 = FUN_00466500(), cVar2 != '\0' ||
      (((cVar2 = FUN_004663a0(), cVar2 != '\0' || (*(int *)(*(int *)(*unaff_EDI + 4) + 0x3cc) < 1))
       || (*(float *)(*(int *)(*unaff_EDI + 4) + 0xb8) <= _DAT_006cca18)))))) {
    if (_DAT_006b7830 < *(float *)((int)param_2 + 0x60)) {
      *(undefined1 *)((int)unaff_EDI + 9) = 0;
      *(undefined1 *)((int)unaff_EDI + 10) = 0;
      *(undefined1 *)(unaff_EDI + 2) = 0;
    }
    if ((*(char *)(*(int *)(*(int *)((int)param_2 + 100) + 600) + 0x15) == '\0') &&
       (*(char *)(*(int *)(*(int *)((int)param_2 + 100) + 0x25c) + 0x15) == '\0')) {
      FUN_00466410();
      if ((*(int *)(*(int *)(iVar3 + 0x14) + 4) == 3) ||
         (*(int *)(*(int *)(param_1 + 0x14) + 4) == 3)) {
        param_2 = *(float *)((int)param_2 + 0x60) / _DAT_006b783c;
        if (_DAT_006cc7bc < param_2) {
          param_2 = 1.0;
        }
        if ((*(short *)(*(int *)(*(int *)(*unaff_EDI + 4) + 0x1c) + 0x10) == 0) &&
           (*(char *)(*(int *)(unaff_EDI[1] + 0x3c) + 0x14) != '\0')) {
          FUN_00436230(param_2);
        }
      }
      if (*(char *)(*(int *)(unaff_EDI[1] + 0x58) + 0x14) != '\0') {
        FUN_00436780();
      }
      unaff_EDI[0xb] = 0;
    }
    else {
      unaff_EDI[0xb] = 3;
    }
    unaff_EDI[9] = DAT_0073ad34;
    unaff_EDI[10] = *(int *)(iVar1 + 0x60);
  }
  return;
}

