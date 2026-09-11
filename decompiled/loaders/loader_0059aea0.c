/* Decompiled from Speed.exe @ 0059aea0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0059aea0(void)

{
  float10 fVar1;
  undefined4 local_8;
  
  fVar1 = (float10)FUN_004216f0(0x3f800000);
  if ((float10)_DAT_0078a304 <= fVar1) {
    if (DAT_0078a2fc == 0) {
      local_8 = 1;
    }
    else {
      local_8 = 0;
    }
  }
  else {
    local_8 = DAT_0078a2fc;
  }
  return local_8 == 0;
}

