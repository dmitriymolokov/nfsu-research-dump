/* Decompiled from Speed.exe @ 00592d50 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00592d50(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *unaff_ESI;
  int *piVar5;
  float10 fVar6;
  float local_4;
  
  local_4 = (float)unaff_ESI[4] - (float)unaff_ESI[3];
  if ((local_4 < DAT_006ef2c8) &&
     (local_4 = (float)unaff_ESI[2] - (float)unaff_ESI[3], DAT_006ef2c8 <= local_4)) {
    local_4 = DAT_006ef2c8;
  }
  unaff_ESI[3] = (int)(local_4 + (float)unaff_ESI[3]);
  if (unaff_ESI[5] == 1) {
    FUN_00592cb0(unaff_ESI,local_4);
    if ((unaff_ESI[6] != 0) && (FUN_00592fd0(), (char)unaff_ESI[9] != '\0')) {
      iVar1 = *unaff_ESI;
      piVar5 = (int *)unaff_ESI[1];
      *piVar5 = iVar1;
      *(int **)(iVar1 + 4) = piVar5;
      FUN_00592b20();
      iVar3 = DAT_0072cc08;
      fVar6 = (float10)_DAT_006cc8a8;
      iVar1 = *(int *)(DAT_0072cc08 + 0x18);
      *unaff_ESI = *(int *)(DAT_0072cc08 + 0x10);
      *(int *)(iVar3 + 0x18) = iVar1 + -1;
      *(int **)(iVar3 + 0x10) = unaff_ESI;
      return fVar6;
    }
    if ((float)unaff_ESI[3] == (float)unaff_ESI[2]) {
      iVar1 = *unaff_ESI;
      piVar5 = (int *)unaff_ESI[1];
      *piVar5 = iVar1;
      *(int **)(iVar1 + 4) = piVar5;
      *DAT_007377ec = (int)unaff_ESI;
      piVar5 = unaff_ESI;
      unaff_ESI[1] = (int)DAT_007377ec;
      DAT_007377ec = piVar5;
      *unaff_ESI = (int)&DAT_007377e8;
      return (float10)(float)unaff_ESI[3];
    }
  }
  else {
    if (DAT_00779c70 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(DAT_00779c70 + -4);
    }
    piVar4 = (int *)FUN_0040cb70();
    while (piVar2 = piVar5, piVar2 != piVar4) {
      if (piVar2[1] == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)(piVar2[1] + -4);
      }
      if (((int *)piVar2[3] == unaff_ESI) && (*(char *)((int)piVar2 + 0x16) != '\0')) {
        (**(code **)(*piVar2 + 0x28))(local_4);
      }
    }
  }
  return (float10)(float)unaff_ESI[3];
}

