/* Decompiled from Speed.exe @ 00479c30 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479c30(void)

{
  int iVar1;
  int unaff_ESI;
  float local_60 [5];
  undefined4 local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  
  if (((_DAT_006b713c != DAT_006cc7a4) &&
      ((((DAT_0078a344 != '\0' || (DAT_007361a8 != 0)) ||
        ((DAT_00735fa0 == 0 && ((DAT_0078a345 == '\0' && (DAT_007361a4 == 0)))))) &&
       (*(float *)(*(int *)(*(int *)(unaff_ESI + 0x4c) + 0x18) + 0x10) < _DAT_006cc960)))) &&
     ((iVar1 = *(int *)(unaff_ESI + 0x5c), *(int *)(iVar1 + 0x3cc) == 4 &&
      (SQRT(*(float *)(iVar1 + 0x78) * *(float *)(iVar1 + 0x78) +
            *(float *)(iVar1 + 0x74) * *(float *)(iVar1 + 0x74) +
            *(float *)(iVar1 + 0x70) * *(float *)(iVar1 + 0x70)) < _DAT_006b7138)))) {
    FUN_00587de0();
    FUN_00587de0();
    if ((DAT_006cc7a4 < local_60[0]) && (DAT_006cc7a4 < local_60[4])) {
      local_60[2] = 0.0;
      local_60[1] = 0.0;
      local_48 = 0.0;
      local_4c = 0;
      thunk_FUN_005abda2(local_60,local_60,*(int *)(unaff_ESI + 0x5c) + 0x90);
      thunk_FUN_005abda2(local_60 + 1,local_60 + 1,*(int *)(unaff_ESI + 0x5c) + 0x90);
      local_60[4] = -*(float *)(*(int *)(*(int *)(unaff_ESI + 0x5c) + 0x20) + 8);
      local_60[2] = 0.0;
      local_60[3] = 0.0;
      FUN_00567540();
      FUN_00567540();
      fStack_30 = fStack_40 + fStack_30;
      local_60[2] = (local_48 + fStack_38) * _DAT_006b7140;
      local_60[3] = (fStack_44 + fStack_34) * _DAT_006b7140;
      local_60[4] = fStack_30 * _DAT_006b7140;
      FUN_00584e00();
    }
  }
  return;
}

