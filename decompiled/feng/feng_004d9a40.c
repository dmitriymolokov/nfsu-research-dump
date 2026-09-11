/* Decompiled from Speed.exe @ 004d9a40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d9a40(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_c;
  
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  *(undefined4 *)(param_1 + 0xaec) = 0;
  *(undefined4 *)(param_1 + 0xae8) = 0;
  local_c = 0;
  puVar9 = (undefined4 *)(param_1 + 0x70);
  do {
    iVar6 = *(int *)(param_1 + 0xc);
    iVar4 = local_c + 1;
    uVar5 = FUN_004f42f0("COLORELEMENT_%d",iVar4);
    iVar7 = DAT_0073578c;
    if (iVar6 == 0) {
LAB_004d9b03:
      if ((iVar7 == 0) || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)) goto LAB_004d9b20;
LAB_004d9b1a:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_004d9b20;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar7 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004d9ae6:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar7 = DAT_0073578c, iVar6 == 0))
        goto LAB_004d9b03;
        goto LAB_004d9b1a;
      }
      if (DAT_0073578c != 0) {
        iVar1 = *(int *)(DAT_0073578c + 8);
        if ((iVar1 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar1 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar1 + 0xec), iVar6 == 0)))) goto LAB_004d9b03;
        goto LAB_004d9ae6;
      }
LAB_004d9b20:
      iVar6 = 0;
    }
    puVar9[-2] = iVar6;
    puVar9[4] = 0;
    puVar9[5] = local_c;
    iVar6 = puVar9[-2];
    puVar9[-1] = 0;
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) < 0x100)) {
      cVar3 = FUN_004feb50();
      if (cVar3 == '\0') {
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar6,0,0);
    }
    puVar9 = puVar9 + 0xb;
    local_c = iVar4;
  } while (iVar4 < 10);
  local_c = 0;
  puVar9 = (undefined4 *)(param_1 + 0x228);
  do {
    iVar6 = *(int *)(param_1 + 0xc);
    uVar5 = FUN_004f42f0("COLORELEMENT_%d",local_c + 0xb);
    iVar7 = DAT_0073578c;
    if (iVar6 == 0) {
LAB_004d9c1b:
      if ((iVar7 == 0) || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)) goto LAB_004d9c38;
LAB_004d9c32:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_004d9c38;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar7 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004d9c02:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar7 = DAT_0073578c, iVar6 == 0))
        goto LAB_004d9c1b;
        goto LAB_004d9c32;
      }
      if (DAT_0073578c != 0) {
        iVar4 = *(int *)(DAT_0073578c + 8);
        if ((iVar4 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar4 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar4 + 0xec), iVar6 == 0)))) goto LAB_004d9c1b;
        goto LAB_004d9c02;
      }
LAB_004d9c38:
      iVar6 = 0;
    }
    puVar9[-2] = iVar6;
    iVar6 = local_c + -10;
    if (local_c < 10) {
      iVar6 = local_c;
    }
    puVar9[4] = (9 < local_c) + 1;
    puVar9[5] = iVar6;
    iVar6 = puVar9[-2];
    puVar9[-1] = 0;
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) < 0x100)) {
      cVar3 = FUN_004feb50();
      if (cVar3 == '\0') {
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar6,0,0);
    }
    local_c = local_c + 1;
    puVar9 = puVar9 + 0xb;
  } while (local_c < 0x14);
  local_c = 0;
  piVar8 = (int *)(param_1 + 0x59c);
  do {
    iVar6 = *(int *)(param_1 + 0xc);
    uVar5 = FUN_004f42f0("COLORELEMENT_%d",local_c + 0x1f);
    iVar7 = DAT_0073578c;
    if (iVar6 == 0) {
LAB_004d9d4b:
      if ((iVar7 == 0) || (iVar6 = FUN_004ef050(uVar5), iVar6 == 0)) goto LAB_004d9d68;
LAB_004d9d62:
      if (*(int *)(iVar6 + 0x18) != 1) goto LAB_004d9d68;
    }
    else {
      iVar6 = FUN_004f3f90(&DAT_00746104);
      iVar7 = DAT_0073578c;
      if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_004d9d32:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar7 = DAT_0073578c, iVar6 == 0))
        goto LAB_004d9d4b;
        goto LAB_004d9d62;
      }
      if (DAT_0073578c != 0) {
        iVar4 = *(int *)(DAT_0073578c + 8);
        if ((iVar4 == 0) ||
           ((iVar6 = FUN_004fd1e0(iVar4 + 0xdc), iVar6 == 0 &&
            (iVar6 = FUN_004fd1e0(iVar4 + 0xec), iVar6 == 0)))) goto LAB_004d9d4b;
        goto LAB_004d9d32;
      }
LAB_004d9d68:
      iVar6 = 0;
    }
    piVar8[-3] = iVar6;
    if (local_c < 0x14) {
      iVar6 = (9 < local_c) + 3;
      iVar7 = local_c;
      if (9 < local_c) {
        iVar7 = local_c + -10;
      }
    }
    else {
      iVar6 = 5;
      iVar7 = local_c + -0x14;
    }
    piVar8[4] = iVar7;
    piVar8[3] = iVar6;
    iVar6 = piVar8[-3];
    piVar8[-2] = 0;
    piVar8[1] = 0;
    *piVar8 = 0;
    piVar8[-1] = 0;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x18) < 0x100)) {
      piVar2 = *(int **)(iVar6 + 0x2c);
      if ((piVar8[1] + 1 < piVar2[2]) || (piVar2[2] < piVar8[1] + -1)) {
LAB_004d9e07:
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 0x400000;
      }
      else {
        if ((*piVar8 + 1 < piVar2[1]) || (piVar2[1] < *piVar8 + -1)) goto LAB_004d9e07;
        iVar7 = piVar8[-1];
        if ((iVar7 + 1 < *piVar2) || (*piVar2 < iVar7 + -1)) goto LAB_004d9e07;
        if ((piVar8[2] + 1 < piVar2[3]) || (piVar2[3] < piVar8[2] + -1)) goto LAB_004d9e07;
      }
      FUN_004ff2f0(iVar6,0,0);
    }
    local_c = local_c + 1;
    piVar8 = piVar8 + 0xb;
    if (0x1d < local_c) {
      return;
    }
  } while( true );
}

