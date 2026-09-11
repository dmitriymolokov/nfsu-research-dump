/* Decompiled from Speed.exe @ 004d9e40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d9e40(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int local_4;
  
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  *(undefined4 *)(param_1 + 0xaec) = 0;
  *(undefined4 *)(param_1 + 0xae8) = 0;
  puVar5 = (undefined4 *)(param_1 + 0x70);
  local_4 = 10;
  do {
    iVar4 = puVar5[-2];
    puVar5[-1] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) < 0x100)) {
      cVar3 = FUN_004feb50();
      if (cVar3 == '\0') {
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar4,0,0);
    }
    puVar5 = puVar5 + 0xb;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  puVar5 = (undefined4 *)(param_1 + 0x228);
  iVar4 = 0x14;
  do {
    iVar1 = puVar5[-2];
    puVar5[-1] = 0;
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) < 0x100)) {
      cVar3 = FUN_004feb50();
      if (cVar3 == '\0') {
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar1,0,0);
    }
    puVar5 = puVar5 + 0xb;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar6 = (int *)(param_1 + 0x59c);
  param_1 = 0x1e;
  do {
    iVar4 = piVar6[-3];
    piVar6[-2] = 0;
    piVar6[1] = 0;
    *piVar6 = 0;
    piVar6[-1] = 0;
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) < 0x100)) {
      piVar2 = *(int **)(iVar4 + 0x2c);
      if ((piVar2[2] < 2) && (-2 < piVar2[2])) {
        if ((*piVar6 + 1 < piVar2[1]) || (piVar2[1] < *piVar6 + -1)) goto LAB_004d9f74;
        iVar1 = piVar6[-1];
        if ((iVar1 + 1 < *piVar2) || (*piVar2 < iVar1 + -1)) goto LAB_004d9f74;
        if ((piVar6[2] + 1 < piVar2[3]) || (piVar2[3] < piVar6[2] + -1)) goto LAB_004d9f74;
      }
      else {
LAB_004d9f74:
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar4,0,0);
    }
    piVar6 = piVar6 + 0xb;
    param_1 = param_1 + -1;
    if (param_1 == 0) {
      return;
    }
  } while( true );
}

