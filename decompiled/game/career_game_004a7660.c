/* Decompiled from Speed.exe @ 004a7660 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a7660(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int unaff_EBX;
  int iVar8;
  float10 fVar9;
  char local_20 [32];
  
  if ((*(uint *)(unaff_EBX + 0x18) & *(uint *)(unaff_EBX + 0x10)) != 0 ||
      (*(uint *)(unaff_EBX + 0x1c) & *(uint *)(unaff_EBX + 0x14)) != 0) {
    FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x6c));
    iVar8 = *(int *)(param_1 + 4);
    if ((DAT_006fbf14 == 0) && (*(int *)(param_1 + 0x10) == 0)) {
      iVar3 = FUN_0041ffe0();
      if (iVar3 != 0) {
        iVar8 = iVar3;
      }
    }
    fVar9 = (float10)FUN_00464ed0();
    FUN_004a7b00((float)(fVar9 * (float10)_DAT_006cc9f4),*(undefined4 *)(iVar8 + 0x3d0));
    if (*(char *)(unaff_EBX + 0xac) == '\0') {
      FUN_004a7b80(*(undefined1 *)(param_1 + 0x9f3));
      if (*(int *)(param_1 + 0x9f4) == 1) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x95c) + 0x50) + 0x50) = 0xffffff00;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x95c) + 0x50) + 0x50) = 0xffff8020;
      }
      iVar8 = *(int *)(param_1 + 0x9fc);
      iVar3 = FUN_00674898();
      if (iVar8 < 1) {
        FUN_004f68a0(&DAT_006c6d7c);
        FUN_004f66f0();
        FUN_004f75b0(0xffffff00);
      }
      else {
        FUN_004f68a0(&DAT_006ca778,iVar8);
        iVar4 = FUN_0059fb80();
        if (iVar4 == 0) {
          iVar4 = FUN_0059fb80();
        }
        iVar7 = 0x20;
        pcVar6 = local_20;
        do {
          cVar1 = pcVar6[iVar4 - (int)local_20];
          iVar7 = iVar7 + -1;
          *pcVar6 = cVar1;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
        } while (iVar7 != 0);
        FUN_004f68c0(0x20,local_20,*(int *)(param_1 + 0x9f8) + 1);
        FUN_004f68a0(&DAT_006cc568,local_20);
        if (iVar3 < iVar8) {
          fVar2 = _DAT_006cc7dc;
          if ((0 < iVar3) &&
             (fVar2 = ((float)iVar8 / (float)iVar3) * *(float *)(unaff_EBX + 0xb4),
             _DAT_006cc7dc < fVar2)) {
            fVar2 = _DAT_006cc7dc;
          }
          if (fVar2 < (float)(DAT_0073ad34 - *(int *)(unaff_EBX + 0xb8)) * _DAT_006cca38) {
            *(bool *)(unaff_EBX + 0xbc) = *(char *)(unaff_EBX + 0xbc) == '\0';
            *(int *)(unaff_EBX + 0xb8) = DAT_0073ad34;
            if (*(char *)(unaff_EBX + 0xbc) == '\0') {
              FUN_004f75b0(0xffffff00);
            }
            else {
              FUN_004f75b0(0xff962020);
            }
          }
        }
        else {
          FUN_004f75b0(0xffffff00);
        }
      }
    }
    FUN_004a7a10();
    FUN_004a7aa0();
    if (((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x960) + 0x10) == 3)) {
      uVar5 = FUN_00674898();
      FUN_004f68a0(&DAT_006ca778,uVar5);
      FUN_004f6b70("Highlight",1);
      FUN_004f6b70("Highlight",1);
    }
  }
  return;
}

