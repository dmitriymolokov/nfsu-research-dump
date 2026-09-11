/* Decompiled from Speed.exe @ 0043ef30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0043ef30(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00575950();
  iVar2 = FUN_0041e4c0();
  if (iVar2 == 0) {
    if (1 < *(int *)(param_1 + 0x14)) {
      FUN_00436b20((float)*(int *)(param_1 + 0x14) / _DAT_006ccc00);
    }
    if (*(int *)(param_1 + 0x58) < 7) {
      FUN_00575950();
      fVar3 = (float10)FUN_00432c80();
      iVar2 = FUN_00435fe0();
      if (*(float *)(iVar2 + 8) < (float)fVar3) {
        FUN_00436230(0x3f800000);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        FUN_00435fe0();
        FUN_00435ff0();
        FUN_004a7c80();
      }
    }
    FUN_00417490();
    FUN_00424dd0();
    fVar3 = (float10)FUN_00464ea0();
    fVar1 = (float)fVar3;
    FUN_00417490();
    FUN_00424de0();
    if (*(float *)(param_1 + 0x5c) == DAT_006cc7a4) {
      *(float *)(param_1 + 0x5c) = fVar1;
    }
    else if ((DAT_006cc7a4 < fVar1 * *(float *)(param_1 + 0x5c)) &&
            (((fVar1 < DAT_006cc7a4 && (fVar1 < *(float *)(param_1 + 0x5c))) ||
             ((DAT_006cc7a4 < fVar1 && (*(float *)(param_1 + 0x5c) < fVar1)))))) {
      *(float *)(param_1 + 0x5c) = fVar1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_00436b60();
  }
  return;
}

