/* Decompiled from Speed.exe @ 0047aa40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0047aa40(undefined4 param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (((*(float *)(*(int *)(param_3 + 0x30) + 0x1dc) <= _DAT_006cc7b4) ||
      (*(int *)(param_3 + 0x3d8) == 1)) || (*(int *)(param_3 + 0x3cc) < 1)) {
    fVar2 = SQRT(*(float *)(param_2 + 0xa8) * *(float *)(param_2 + 0xa8) +
                 *(float *)(param_2 + 0xa4) * *(float *)(param_2 + 0xa4) +
                 *(float *)(param_2 + 0xa0) * *(float *)(param_2 + 0xa0));
    fVar1 = SQRT(*(float *)(param_2 + 200) * *(float *)(param_2 + 200) +
                 *(float *)(param_2 + 0xc4) * *(float *)(param_2 + 0xc4) +
                 *(float *)(param_2 + 0xc0) * *(float *)(param_2 + 0xc0));
    if (((fVar2 <= _DAT_006b7170) && (fVar1 <= _DAT_006b7174)) &&
       (((ABS(*(float *)(param_2 + 0x38)) <= _DAT_006b7178 &&
         (ABS(*(float *)(param_2 + 0x48)) <= _DAT_006b7178)) || (*(int *)(param_3 + 0x3cc) < 1)))) {
      cVar4 = FUN_004280a0();
      if (cVar4 == '\0') {
        iVar5 = FUN_0042aa70();
        if ((iVar5 != 0) || (param_4 == 2)) {
          iVar5 = 0;
          if (DAT_00735fcc == 0) {
LAB_0047abb7:
            if ((fVar2 <= _DAT_006b7180) && (fVar1 <= _DAT_006b7184)) {
              return 2;
            }
            return 1;
          }
          iVar6 = (int)*(char *)(*(int *)(param_3 + 0x3c) + 0x1c);
          bVar3 = false;
          if (0 < iVar6) {
            do {
              iVar7 = FUN_00468820(iVar5);
              cVar4 = FUN_00466550();
              if (cVar4 != '\0') {
                iVar8 = FUN_0041f5e0();
                if (_DAT_006fff0c < *(float *)(iVar8 + 8) - *(float *)(iVar7 + 0x38)) {
                  bVar3 = true;
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar6);
            if (bVar3) goto LAB_0047abb7;
          }
        }
      }
    }
  }
  return 0;
}

