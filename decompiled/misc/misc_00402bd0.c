/* Decompiled from Speed.exe @ 00402bd0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00402c0f) */

void FUN_00402bd0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *unaff_ESI;
  int unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  
  if (unaff_ESI[9] == 0) {
    uVar5 = DAT_00704304 << 0x11 ^ DAT_00704304;
    uVar5 = uVar5 ^ uVar5 >> 0xd;
    DAT_00704304 = uVar5 ^ uVar5 << 5;
    iVar6 = FUN_00674898();
    unaff_ESI[9] = iVar6;
  }
  iVar6 = unaff_ESI[7];
  iVar3 = unaff_ESI[4];
  if ((iVar6 != 0) && (iVar3 != 2)) {
    if ((iVar3 == 0) || (iVar3 == 1)) {
      fVar1 = *(float *)(iVar6 + 0x20);
      fVar2 = *(float *)(iVar6 + 0x24);
      if (iVar3 == 0) {
        fVar1 = *(float *)(iVar6 + 0x28);
        fVar2 = *(float *)(iVar6 + 0x2c);
      }
      fVar8 = (float10)fVar1;
      if (fVar8 != (float10)DAT_006cc7a4) {
        fVar7 = (float10)FUN_00401f30((float)((float10)fVar2 * fVar8));
        fVar8 = ((float10)fVar1 - (float10)(float)((float10)fVar2 * fVar8)) + fVar7;
      }
      unaff_ESI[5] = (int)(float)fVar8;
      unaff_ESI[6] = 0;
      iVar6 = *(int *)(unaff_EDI + 8);
      *(undefined4 *)(unaff_EDI + 8) = unaff_ESI;
      *(int **)(iVar6 + 4) = unaff_ESI;
      unaff_ESI[1] = unaff_EDI + 8;
      *unaff_ESI = iVar6;
      *(int *)(unaff_EDI + 0x50) = *(int *)(unaff_EDI + 0x50) + 1;
      return;
    }
    if (iVar3 == 3) goto LAB_00402cce;
  }
  unaff_ESI[4] = 2;
LAB_00402cce:
  puVar4 = *(undefined4 **)(unaff_EDI + 0xc);
  *puVar4 = unaff_ESI;
  *(int **)(unaff_EDI + 0xc) = unaff_ESI;
  *unaff_ESI = unaff_EDI + 8;
  unaff_ESI[1] = (int)puVar4;
  *(int *)(unaff_EDI + 0x50) = *(int *)(unaff_EDI + 0x50) + 1;
  return;
}

