/* Decompiled from Speed.exe @ 0043e6e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0043e6e0(int param_1)

{
  float10 fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 1.0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  local_c = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    FUN_00424dd0();
    iVar2 = FUN_00424d40();
    if (iVar2 == 3) {
      local_c = local_c + 1;
    }
  }
  if (1 < local_c) {
    FUN_0041e4c0();
    fVar3 = (float10)FUN_00580240();
    fVar1 = (float10)_DAT_006b7920;
    fVar4 = (float10)FUN_00424e10();
    if ((float10)(float)(fVar3 * fVar1) < fVar4) {
      *(int *)(param_1 + 0x14) = local_c;
      local_8 = (float)local_c;
    }
  }
  return (float10)local_8;
}

