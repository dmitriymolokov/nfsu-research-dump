/* Decompiled from Speed.exe @ 0048e7b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048e7b0(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *unaff_ESI;
  
  iVar3 = unaff_ESI[0xb];
  while ((iVar3 != 0 && (DAT_006cc7a4 < param_1))) {
    iVar3 = unaff_ESI[0xb];
    fVar2 = *(float *)(iVar3 + 0x60) * (_DAT_006cc7bc / DAT_006ffdbc) * *(float *)(iVar3 + 0x5c);
    fVar1 = (_DAT_006cc7bc / DAT_006ffdbc) * *(float *)(iVar3 + 100) * *(float *)(iVar3 + 0x5c);
    if (param_1 + fVar1 <= fVar2) {
      if (param_2 != 0) {
        (**(code **)(*unaff_ESI + 0x34))();
      }
      iVar3 = FUN_0047b290(param_1);
      if (iVar3 == 0x20) {
        (**(code **)(*unaff_ESI + 0x34))();
        iVar3 = *(int *)unaff_ESI[0xb];
        unaff_ESI[0xb] = iVar3;
        if (iVar3 == unaff_ESI[0xc]) {
          unaff_ESI[0xb] = 0;
        }
        else {
          *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff7f;
        }
      }
      param_1 = 0.0;
    }
    else {
      *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) | 0x20;
      param_1 = param_1 - (fVar2 - fVar1);
      (**(code **)(*unaff_ESI + 0x34))();
      iVar3 = *(int *)unaff_ESI[0xb];
      unaff_ESI[0xb] = iVar3;
      if (iVar3 == unaff_ESI[0xc]) {
        unaff_ESI[0xb] = 0;
      }
      else {
        *(uint *)(iVar3 + 0x34) = *(uint *)(iVar3 + 0x34) & 0xffffff7f;
      }
    }
    iVar3 = unaff_ESI[0xb];
  }
  return;
}

