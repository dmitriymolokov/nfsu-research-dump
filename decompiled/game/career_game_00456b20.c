/* Decompiled from Speed.exe @ 00456b20 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456b20(float param_1)

{
  float fVar1;
  float fVar2;
  int unaff_ESI;
  float *unaff_EDI;
  float local_34;
  float local_20;
  float local_1c;
  float local_18;
  
  if (_DAT_006cc954 <= param_1) {
    local_34 = param_1;
  }
  else {
    local_34 = 5.0;
  }
  FUN_005673e0(local_34);
  fVar1 = *(float *)(unaff_ESI + 0x60);
  fVar2 = *(float *)(unaff_ESI + 100);
  unaff_EDI[2] = local_18 + *(float *)(unaff_ESI + 0x68);
  *unaff_EDI = fVar1 + local_20;
  unaff_EDI[1] = local_1c + fVar2;
  return;
}

