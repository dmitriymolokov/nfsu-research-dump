/* Decompiled from Speed.exe @ 0043e540 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0043e540(int param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_30;
  float local_8;
  
  local_8 = 0.0;
  FUN_004081e0();
  fVar5 = (float10)FUN_00424e80();
  if (fVar5 <= (float10)*(float *)(param_1 + 0x54)) goto LAB_0043e6aa;
  FUN_00424dd0();
  fVar5 = (float10)FUN_00464ea0();
  fVar5 = (float10)FUN_00405600((float)fVar5);
  fVar6 = (float10)FUN_00424e10();
  FUN_0041e4c0();
  cVar3 = FUN_0057f150();
  iVar4 = FUN_00424de0();
  fVar7 = (float10)FUN_00405600(*(undefined4 *)(iVar4 + 8));
  if (fVar7 <= (float10)_DAT_006b790c) {
LAB_0043e60f:
    bVar2 = false;
  }
  else {
    iVar4 = FUN_00424de0();
    FUN_00424dd0();
    fVar7 = (float10)FUN_00464ea0();
    if ((float10)DAT_006cc7a4 <= fVar7 * (float10)*(float *)(iVar4 + 8)) goto LAB_0043e60f;
    bVar2 = true;
  }
  FUN_00575950();
  iVar4 = FUN_0041e4c0();
  if ((iVar4 != 0) || (bVar2)) {
    local_30 = *(float *)(&DAT_006b7880 + cVar3 * 4);
  }
  else {
    local_30 = *(float *)(&DAT_006b7890 + cVar3 * 4);
  }
  iVar4 = FUN_00421a30();
  if (iVar4 == 0) {
    fVar7 = (float10)FUN_004055e0(DAT_006b7908);
    if ((fVar7 < (float10)(float)fVar5) && (local_30 < (float)fVar6)) {
      fVar1 = (float)fVar6 / _DAT_006b788c;
      local_8 = fVar1 * fVar1 * (float)fVar5;
    }
  }
LAB_0043e6aa:
  FUN_004081e0();
  fVar5 = (float10)FUN_00424e80();
  fVar5 = (float10)FUN_00401c40(*(undefined4 *)(param_1 + 0x54),(float)fVar5);
  *(float *)(param_1 + 0x54) = (float)fVar5;
  return (float10)local_8;
}

