/* Decompiled from Speed.exe @ 004ff030 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ff030(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  
  iVar7 = param_1;
  piVar1 = (int *)(param_1 + 0x54);
  param_1 = *(int *)(*piVar1 + 0x1c);
  if (param_1 != 0) {
    pfVar11 = (float *)(*(int *)(*piVar1 + 0x20) + 0x1c);
    do {
      *(byte *)((int)pfVar11 + -0x19) = *(byte *)((int)pfVar11 + -0x19) & 0x7f;
      if ((*(char *)((int)pfVar11 + -0x1a) != '\x03') && (*(char *)((int)pfVar11 + -0x1a) != '\x04')
         ) goto switchD_004ff0a1_default;
      pfVar2 = (float *)(*(int *)(iVar7 + 0x2c) + *(char *)((int)pfVar11 + -0x15) * 4);
      if (*(char *)(pfVar11 + 4) == '\0') {
        fVar8 = pfVar11[5];
      }
      else {
        fVar8 = (float)FUN_004fc0e0();
      }
      if (fVar8 == 0.0) goto switchD_004ff0a1_default;
      switch(*(undefined1 *)(pfVar11 + -7)) {
      case 1:
        iVar10 = (int)*pfVar2 - (int)pfVar11[-1];
        goto LAB_004ff18a;
      case 2:
        *(float *)((int)fVar8 + 0x10) = *pfVar2 - pfVar11[-1];
        break;
      case 3:
        fVar3 = pfVar2[1];
        fVar4 = *pfVar11;
        *(float *)((int)fVar8 + 0x10) = *pfVar2 - pfVar11[-1];
        *(float *)((int)fVar8 + 0x14) = fVar3 - fVar4;
        break;
      case 4:
        fVar3 = pfVar2[1];
        fVar4 = *pfVar11;
        fVar5 = pfVar2[2];
        fVar6 = pfVar11[1];
        *(float *)((int)fVar8 + 0x10) = *pfVar2 - pfVar11[-1];
        *(float *)((int)fVar8 + 0x18) = fVar5 - fVar6;
        *(float *)((int)fVar8 + 0x14) = fVar3 - fVar4;
        break;
      case 5:
        puVar9 = (undefined4 *)FUN_004fbfc0();
        *(undefined4 *)((int)fVar8 + 0x10) = *puVar9;
        *(undefined4 *)((int)fVar8 + 0x14) = puVar9[1];
        *(undefined4 *)((int)fVar8 + 0x18) = puVar9[2];
        *(undefined4 *)((int)fVar8 + 0x1c) = puVar9[3];
        break;
      case 6:
        fVar3 = *pfVar11;
        fVar4 = pfVar2[1];
        fVar5 = pfVar2[3];
        iVar10 = (int)*pfVar2 - (int)pfVar11[-1];
        fVar6 = pfVar11[2];
        *(int *)((int)fVar8 + 0x18) = (int)pfVar2[2] - (int)pfVar11[1];
        *(int *)((int)fVar8 + 0x1c) = (int)fVar5 - (int)fVar6;
        *(int *)((int)fVar8 + 0x14) = (int)fVar4 - (int)fVar3;
LAB_004ff18a:
        *(int *)((int)fVar8 + 0x10) = iVar10;
      }
switchD_004ff0a1_default:
      pfVar11 = pfVar11 + 0xe;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

