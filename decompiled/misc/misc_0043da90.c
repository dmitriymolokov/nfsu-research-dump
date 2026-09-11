/* Decompiled from Speed.exe @ 0043da90 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0043da90(int *param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  undefined4 local_14;
  
  if (*param_1 == 7) {
    cVar1 = FUN_00432e20();
    if ((cVar1 == '\0') && (*(int *)param_1[1] != 5)) {
      iVar2 = FUN_00421a30();
      if (iVar2 != 0) {
        FUN_0041f0b0(param_1 + 0x15);
        fVar3 = (float10)FUN_0040ed00();
        if ((float10)_DAT_006b796c < fVar3) {
          return 1;
        }
      }
      local_14 = 0;
    }
    else {
      local_14 = 1;
    }
  }
  else if (*param_1 == 0) {
    local_14 = 1;
  }
  else {
    local_14 = 0;
  }
  return local_14;
}

