/* Decompiled from Speed.exe @ 0041fe50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0041fe50(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_ESI;
  
  puVar1 = (undefined4 *)*unaff_ESI;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[9] = 0;
  puVar2 = (undefined4 *)FUN_0040a880();
  for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[5] + 4) == 1) {
      unaff_ESI[unaff_ESI[6] + 10] = puVar1;
      unaff_ESI[6] = unaff_ESI[6] + 1;
    }
  }
  unaff_ESI[7] = unaff_ESI[6];
  for (puVar1 = (undefined4 *)*unaff_ESI; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[5] + 4) == 2) {
      unaff_ESI[unaff_ESI[6] + 10] = puVar1;
      unaff_ESI[6] = unaff_ESI[6] + 1;
    }
  }
  puVar1 = (undefined4 *)*unaff_ESI;
  unaff_ESI[8] = unaff_ESI[6];
  for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    if ((*(int *)(puVar1[5] + 4) == 4) || (*(int *)(puVar1[5] + 4) == 5)) {
      unaff_ESI[unaff_ESI[6] + 10] = puVar1;
      unaff_ESI[6] = unaff_ESI[6] + 1;
    }
  }
  unaff_ESI[9] = unaff_ESI[6];
  for (puVar1 = (undefined4 *)*unaff_ESI; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
    if (*(int *)(puVar1[5] + 4) == 3) {
      unaff_ESI[unaff_ESI[6] + 10] = puVar1;
      unaff_ESI[6] = unaff_ESI[6] + 1;
    }
  }
  iVar3 = 0;
  if (0 < (int)unaff_ESI[6]) {
    piVar4 = unaff_ESI + 10;
    do {
      *(short *)(*piVar4 + 8) = (short)iVar3;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < (int)unaff_ESI[6]);
  }
  for (puVar1 = (undefined4 *)unaff_ESI[2]; puVar1 != unaff_ESI + 2; puVar1 = (undefined4 *)*puVar1)
  {
  }
  return;
}

