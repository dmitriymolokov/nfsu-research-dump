/* Decompiled from Speed.exe @ 0059b490 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_0059b490(void)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  int local_14;
  int local_10;
  float local_c;
  int local_8;
  
  local_8 = 0;
  if (((DAT_00734454 == 0) || (DAT_006fbf14 != 0)) || (local_8 = FUN_0041ff50(), local_8 == 0)) {
    local_c = 99999.0;
    local_10 = 0;
    for (local_14 = 0; iVar1 = FUN_00408200(), local_14 < iVar1; local_14 = local_14 + 1) {
      iVar1 = FUN_00408210();
      FUN_00417490();
      fVar2 = (float10)FUN_0041f5f0();
      fVar5 = (float)fVar2;
      fVar2 = (float10)FUN_0041f5f0(fVar5);
      fVar2 = (float10)FUN_00443d60((float)fVar2,fVar5);
      fVar3 = (float10)FUN_00405600((float)fVar2);
      fVar4 = (float10)FUN_00405600(local_c);
      if ((float10)(float)fVar3 < fVar4) {
        local_10 = iVar1;
        local_c = (float)fVar2;
      }
    }
    if (local_10 != 0) {
      local_8 = FUN_00417490();
    }
  }
  return local_8;
}

