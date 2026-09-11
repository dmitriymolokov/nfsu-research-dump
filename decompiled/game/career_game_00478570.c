/* Decompiled from Speed.exe @ 00478570 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478570(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int unaff_EDI;
  int local_8c;
  float fStack_6c;
  float fStack_68;
  undefined1 local_60 [16];
  undefined1 local_50 [76];
  
  FUN_0046e270();
  cVar1 = *(char *)(*(int *)(*(int *)(unaff_EDI + 0x5c) + 0x3c) + 0x1c);
  local_8c = 4;
  do {
    FUN_00587330(0,(int)cVar1);
    local_8c = local_8c + -1;
  } while (local_8c != 0);
  iVar15 = *(int *)(unaff_EDI + 0x20);
  FUN_00565230();
  thunk_FUN_005abda2(local_60,iVar15 + 0x110,local_50);
  iVar15 = 5;
  do {
    iVar2 = *(int *)(unaff_EDI + 0x38);
    iVar3 = *(int *)(unaff_EDI + 0x28);
    iVar4 = *(int *)(unaff_EDI + 0x3c);
    fVar5 = *(float *)(iVar2 + 0x118) * *(float *)(iVar2 + 0xb0) +
            *(float *)(iVar2 + 0xc0) * *(float *)(iVar2 + 0x11c);
    fVar6 = *(float *)(iVar2 + 0xc4) * *(float *)(iVar2 + 0x11c) +
            *(float *)(iVar2 + 0xb4) * *(float *)(iVar2 + 0x118);
    fVar11 = *(float *)(iVar4 + 0x118) * *(float *)(iVar4 + 0xb0) +
             *(float *)(iVar4 + 0xc0) * *(float *)(iVar4 + 0x11c);
    fVar12 = *(float *)(iVar4 + 0xc4) * *(float *)(iVar4 + 0x11c) +
             *(float *)(iVar4 + 0xb4) * *(float *)(iVar4 + 0x118);
    iVar4 = *(int *)(unaff_EDI + 0x40);
    fVar9 = *(float *)(iVar4 + 0x118) * *(float *)(iVar4 + 0xb0) +
            *(float *)(iVar4 + 0xc0) * *(float *)(iVar4 + 0x11c);
    fVar10 = *(float *)(iVar4 + 0xc4) * *(float *)(iVar4 + 0x11c) +
             *(float *)(iVar4 + 0xb4) * *(float *)(iVar4 + 0x118);
    iVar4 = *(int *)(unaff_EDI + 0x44);
    fVar7 = *(float *)(iVar4 + 0x118) * *(float *)(iVar4 + 0xb0) +
            *(float *)(iVar4 + 0xc0) * *(float *)(iVar4 + 0x11c);
    fVar8 = *(float *)(iVar4 + 0xc4) * *(float *)(iVar4 + 0x11c) +
            *(float *)(iVar4 + 0xb4) * *(float *)(iVar4 + 0x118);
    fVar13 = _DAT_006cc7bc / *(float *)(*(int *)(unaff_EDI + 0x20) + 0x144);
    fVar14 = (fStack_6c + fVar5 + fVar11 + fVar9 + fVar7) * fVar13;
    fVar13 = fVar13 * (fStack_68 + fVar6 + fVar12 + fVar10 + fVar8);
    fVar5 = ((fVar8 * *(float *)(*(int *)(unaff_EDI + 0x34) + 0x90) +
             ((fVar10 * *(float *)(*(int *)(unaff_EDI + 0x30) + 0x90) +
              ((fVar12 * *(float *)(*(int *)(unaff_EDI + 0x2c) + 0x90) +
               (fVar6 * *(float *)(iVar3 + 0x90) - fVar5 * *(float *)(iVar3 + 0x94))) -
              fVar11 * *(float *)(*(int *)(unaff_EDI + 0x2c) + 0x94))) -
             fVar9 * *(float *)(*(int *)(unaff_EDI + 0x30) + 0x94))) -
            fVar7 * *(float *)(*(int *)(unaff_EDI + 0x34) + 0x94)) /
            (_DAT_006cc7bc / *(float *)(*(int *)(unaff_EDI + 0x20) + 0x178));
    if ((*(char *)(iVar2 + 0x154) == '\0') && (*(int *)(iVar2 + 0x10c) == 0)) {
      iVar4 = *(int *)(iVar2 + 0x14);
      *(float *)(iVar2 + 0x118) =
           ((((*(float *)(iVar2 + 0x108) - *(float *)(iVar4 + 0x10) * *(float *)(iVar2 + 0x118)) /
             *(float *)(iVar2 + 0x2c)) * *(float *)(iVar4 + 0x10) -
            ((fVar14 - fVar5 * *(float *)(iVar3 + 0x94)) * *(float *)(iVar2 + 0xb0) +
            (fVar5 * *(float *)(iVar3 + 0x90) + fVar13) * *(float *)(iVar2 + 0xc0))) /
           *(float *)(iVar4 + 0x10)) * *(float *)(iVar2 + 0x2c) + *(float *)(iVar2 + 0x118);
    }
    iVar2 = *(int *)(unaff_EDI + 0x3c);
    if ((*(char *)(iVar2 + 0x154) == '\0') && (*(int *)(iVar2 + 0x10c) == 0)) {
      iVar3 = *(int *)(iVar2 + 0x14);
      *(float *)(iVar2 + 0x118) =
           ((((*(float *)(iVar2 + 0x108) - *(float *)(iVar3 + 0x10) * *(float *)(iVar2 + 0x118)) /
             *(float *)(iVar2 + 0x2c)) * *(float *)(iVar3 + 0x10) -
            ((fVar14 - fVar5 * *(float *)(*(int *)(unaff_EDI + 0x2c) + 0x94)) *
             *(float *)(iVar2 + 0xb0) +
            (fVar5 * *(float *)(*(int *)(unaff_EDI + 0x2c) + 0x90) + fVar13) *
            *(float *)(iVar2 + 0xc0))) / *(float *)(iVar3 + 0x10)) * *(float *)(iVar2 + 0x2c) +
           *(float *)(iVar2 + 0x118);
    }
    iVar2 = *(int *)(unaff_EDI + 0x40);
    if ((*(char *)(iVar2 + 0x154) == '\0') && (*(int *)(iVar2 + 0x10c) == 0)) {
      iVar3 = *(int *)(iVar2 + 0x14);
      *(float *)(iVar2 + 0x118) =
           ((((*(float *)(iVar2 + 0x108) - *(float *)(iVar3 + 0x10) * *(float *)(iVar2 + 0x118)) /
             *(float *)(iVar2 + 0x2c)) * *(float *)(iVar3 + 0x10) -
            ((fVar14 - fVar5 * *(float *)(*(int *)(unaff_EDI + 0x30) + 0x94)) *
             *(float *)(iVar2 + 0xb0) +
            (fVar5 * *(float *)(*(int *)(unaff_EDI + 0x30) + 0x90) + fVar13) *
            *(float *)(iVar2 + 0xc0))) / *(float *)(iVar3 + 0x10)) * *(float *)(iVar2 + 0x2c) +
           *(float *)(iVar2 + 0x118);
    }
    iVar2 = *(int *)(unaff_EDI + 0x44);
    if ((*(char *)(iVar2 + 0x154) == '\0') && (*(int *)(iVar2 + 0x10c) == 0)) {
      iVar3 = *(int *)(iVar2 + 0x14);
      *(float *)(iVar2 + 0x118) =
           ((((*(float *)(iVar2 + 0x108) - *(float *)(iVar3 + 0x10) * *(float *)(iVar2 + 0x118)) /
             *(float *)(iVar2 + 0x2c)) * *(float *)(iVar3 + 0x10) -
            ((fVar14 - fVar5 * *(float *)(*(int *)(unaff_EDI + 0x34) + 0x94)) *
             *(float *)(iVar2 + 0xb0) +
            (fVar5 * *(float *)(*(int *)(unaff_EDI + 0x34) + 0x90) + fVar13) *
            *(float *)(iVar2 + 0xc0))) / *(float *)(iVar3 + 0x10)) * *(float *)(iVar2 + 0x2c) +
           *(float *)(iVar2 + 0x118);
    }
    FUN_0046e360();
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  iVar15 = 0;
  do {
    FUN_00587830(iVar15);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 4);
  FUN_0046e440();
  return;
}

