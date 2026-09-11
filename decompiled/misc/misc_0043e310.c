/* Decompiled from Speed.exe @ 0043e310 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0043e310(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_10;
  
  iVar2 = FUN_0041e4b0();
  if (iVar2 == 0) {
    FUN_0043ef30();
    FUN_0043ede0();
    fVar3 = (float10)FUN_0043e540(param_2);
    local_10 = FUN_0043e790(param_2);
    fVar4 = (float10)FUN_0043e6e0(param_2);
    fVar5 = (float10)FUN_0043e9d0();
    fVar1 = (float)fVar5;
    if (fVar1 <= _DAT_006b7910) {
      if (DAT_006cc7a4 < (float)fVar3) {
        FUN_00575950();
        FUN_00436720(local_10);
        FUN_00436230(_DAT_006b78fc * (float)fVar3 * (float)fVar4);
        iVar2 = FUN_0041e4c0();
        if (iVar2 == 0) {
          FUN_00417490();
          FUN_00424dd0();
          fVar3 = (float10)FUN_00464ea0();
          fVar1 = (float)fVar3;
          if ((fVar1 * *(float *)(param_1 + 0x5c) < DAT_006cc7a4) &&
             (fVar3 = (float10)FUN_00405600(fVar1),
             (float10)_DAT_006b7930 / (float10)_DAT_006ccc0c < fVar3)) {
            fVar3 = (float10)FUN_00405600(*(undefined4 *)(param_1 + 0x5c));
            if ((float10)_DAT_006b7930 < fVar3) {
              FUN_00417490();
              fVar3 = (float10)FUN_00424e10();
              if ((float10)_DAT_006b792c < fVar3) {
                FUN_00436b20(0x3f800000);
              }
            }
            *(float *)(param_1 + 0x5c) = fVar1;
          }
        }
      }
    }
    else {
      local_10 = 1;
      FUN_00436b40();
      if (_DAT_006b7914 < fVar1) {
        FUN_00432d50();
        FUN_0043f420();
        if (*(char *)(param_1 + 0x11) != '\0') {
          FUN_00436b20(fVar1);
        }
      }
    }
    FUN_0043eb00();
    FUN_00435ff0();
    FUN_004a7c70();
    *(undefined4 *)(param_1 + 0x18) = local_10;
  }
  else {
    iVar2 = FUN_00424ea0();
    if (iVar2 != 0) {
      FUN_0043eb00();
    }
  }
  return;
}

