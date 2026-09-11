/* Decompiled from Speed.exe @ 004f5beb */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint fn_004f5beb(byte param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  
  func_0x00401c79();
  uVar1 = 0;
  iVar3 = -1;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else if (param_1 == 1) {
    iVar3 = 1;
  }
  else if (param_1 == 2) {
    iVar3 = 2;
  }
  else if (param_1 == 3) {
    iVar3 = 3;
  }
  if ((&DAT_007306c4)[iVar3] == -1) {
    puVar2 = &DAT_006f923c + param_1;
    iVar3 = 0x15;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return 0;
  }
  puVar4 = &DAT_006f9250;
  piVar5 = &DAT_006f9258 + param_1;
  do {
    if (piVar5[-7] != 0) {
      uVar1 = uVar1 | puVar4[-7];
    }
    if (*piVar5 != 0) {
      uVar1 = uVar1 | *puVar4;
    }
    if (piVar5[7] != 0) {
      uVar1 = uVar1 | puVar4[7];
    }
    if (piVar5[0xe] != 0) {
      uVar1 = uVar1 | puVar4[0xe];
    }
    if (piVar5[0x15] != 0) {
      uVar1 = uVar1 | puVar4[0x15];
    }
    if (piVar5[0x1c] != 0) {
      uVar1 = uVar1 | puVar4[0x1c];
    }
    if (piVar5[0x23] != 0) {
      uVar1 = uVar1 | puVar4[0x23];
    }
    puVar4 = puVar4 + 0x31;
    piVar5 = piVar5 + 0x31;
  } while ((int)puVar4 < 0x6f949c);
  return uVar1;
}

