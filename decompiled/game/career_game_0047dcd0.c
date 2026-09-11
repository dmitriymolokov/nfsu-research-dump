/* Decompiled from Speed.exe @ 0047dcd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0047dcd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *unaff_ESI;
  
  iVar3 = *param_1;
  if (iVar3 == -0x7ffcbbfb) {
    *unaff_ESI = 0;
    piVar1 = (int *)(param_1[1] + 8 + (int)param_1);
    param_1 = param_1 + 2;
    if (param_1 < piVar1) {
      do {
        if (*param_1 == 0x34440) {
          piVar4 = (int *)((int)param_1 + 0x17U & 0xfffffff0);
          iVar3 = piVar4[1];
          iVar2 = piVar4[2];
          unaff_ESI[0x284] = *piVar4;
          unaff_ESI[0x285] = iVar3;
          unaff_ESI[0x286] = iVar2;
          unaff_ESI[0x288] = piVar4[4];
        }
        else if (*param_1 == 0x34450) {
          unaff_ESI[*unaff_ESI + 1] = (int)param_1 + 0x17U & 0xfffffff0;
          *unaff_ESI = *unaff_ESI + 1;
        }
        param_1 = (int *)((int)param_1 + param_1[1] + 8);
      } while (param_1 < piVar1);
      FUN_0047dc90();
      return 1;
    }
  }
  else if (iVar3 == -0x7ffcbbdb) {
    unaff_ESI[0x201] = 0;
    piVar1 = (int *)(param_1[1] + 8 + (int)param_1);
    param_1 = param_1 + 2;
    if (param_1 < piVar1) {
      do {
        if (*param_1 == 0x34490) {
          unaff_ESI[unaff_ESI[0x201] + 0x202] = (int)param_1 + 0x17U & 0xfffffff0;
          unaff_ESI[0x201] = unaff_ESI[0x201] + 1;
        }
        param_1 = (int *)((int)param_1 + param_1[1] + 8);
      } while (param_1 < piVar1);
      FUN_0047dc90();
      return 1;
    }
  }
  else if (iVar3 == -0x7ffcbbf0) {
    unaff_ESI[0x222] = 0;
    piVar1 = (int *)(param_1[1] + 8 + (int)param_1);
    param_1 = param_1 + 2;
    if (param_1 < piVar1) {
      do {
        if (*param_1 == 0x34460) {
          unaff_ESI[unaff_ESI[0x222] + 0x223] = (int)param_1 + 0x17U & 0xfffffff0;
          unaff_ESI[0x222] = unaff_ESI[0x222] + 1;
        }
        param_1 = (int *)((int)param_1 + param_1[1] + 8);
      } while (param_1 < piVar1);
      FUN_0047dc90();
      return 1;
    }
  }
  else if (iVar3 == -0x7ffcbbeb) {
    unaff_ESI[0x243] = 0;
    piVar1 = (int *)(param_1[1] + 8 + (int)param_1);
    param_1 = param_1 + 2;
    if (param_1 < piVar1) {
      do {
        if (*param_1 == 0x34470) {
          unaff_ESI[unaff_ESI[0x243] + 0x244] = (int)param_1 + 0x17U & 0xfffffff0;
          unaff_ESI[0x243] = unaff_ESI[0x243] + 1;
        }
        param_1 = (int *)((int)param_1 + param_1[1] + 8);
      } while (param_1 < piVar1);
      FUN_0047dc90();
      return 1;
    }
  }
  else if (iVar3 == -0x7ffcbbe0) {
    piVar1 = (int *)(param_1[1] + 8 + (int)param_1);
    param_1 = param_1 + 2;
    if (param_1 < piVar1) {
      do {
        if (*param_1 == 0x34480) {
          unaff_ESI[unaff_ESI[0x264] + 0x265] = (int)param_1 + 0x17U & 0xfffffff0;
          unaff_ESI[0x264] = unaff_ESI[0x264] + 1;
        }
        param_1 = (int *)((int)param_1 + param_1[1] + 8);
      } while (param_1 < piVar1);
      FUN_0047dc90();
      return 1;
    }
  }
  else {
    if (iVar3 != 0x34492) {
      return 0;
    }
    unaff_ESI[0x27f] = (uint)param_1[1] / 0x230;
    unaff_ESI[0x280] = (int)param_1 + 0x17U & 0xfffffff0;
  }
  FUN_0047dc90();
  return 1;
}

