/* Decompiled from Speed.exe @ 00598b60 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00598b60(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  int local_8;
  
  local_8 = 0;
  do {
    iVar1 = FUN_00408200();
    if (iVar1 <= local_8) {
      return 1;
    }
    uVar2 = FUN_00408210();
    uVar3 = FUN_00417490();
    fVar4 = (float10)FUN_00424e00(uVar3,uVar2);
    if (fVar4 < (float10)_DAT_006b5a50) {
      uVar2 = param_1;
      fVar4 = (float10)FUN_0041f5f0(param_1);
      fVar4 = (float10)FUN_00443d60((float)fVar4,uVar2);
      fVar4 = (float10)FUN_00405600((float)fVar4);
      if (fVar4 < (float10)_DAT_006b5a54) {
        return 0;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

