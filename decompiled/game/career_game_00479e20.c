/* Decompiled from Speed.exe @ 00479e20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479e20(float param_1)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EDI;
  float10 fVar11;
  undefined4 local_8;
  
  iVar2 = *(int *)(*(int *)(unaff_EDI + 0x5c) + 0x14);
  if ((*(int *)(iVar2 + 4) == 1) && (*(char *)(iVar2 + 0x734) == '\0')) {
    cVar5 = FUN_0043a2e0();
    if (cVar5 != '\0') {
      if (*(int *)(unaff_EDI + 0x88) == 0) {
        uVar10 = DAT_006f227c % 0x2ac;
        uVar9 = DAT_006f227c ^ 0x1d872b41;
        uVar6 = uVar9 >> 5 ^ uVar9;
        DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar9;
        iVar2 = *(int *)(unaff_EDI + 0x5c);
        puVar1 = (uint *)(uVar10 + *(int *)(*(int *)(unaff_EDI + 0x5c) + 0x20));
        *(uint **)(unaff_EDI + 0x88) = puVar1;
        iVar7 = FUN_00674898();
        iVar8 = FUN_00674898();
        *(int *)(unaff_EDI + 0x8c) = iVar8 - iVar7;
        bVar4 = *(float *)(unaff_EDI + 0x80) == DAT_006cc7a4;
        *(uint *)(unaff_EDI + 0x84) =
             *puVar1 ^ (uint)(*(float *)(iVar2 + 0x3d0) + (float)(iVar8 - iVar7));
        if (bVar4) {
          iVar2 = *(int *)(iVar2 + 0x20);
          fVar11 = (float10)FUN_0042ab80();
          *(uint *)(unaff_EDI + 0x80) =
               *puVar1 ^ (uint)(float)(((float10)*(float *)(iVar2 + 0x2a0) - fVar11) +
                                      (float10)*(int *)(unaff_EDI + 0x8c));
        }
      }
      local_8 = (float)(**(uint **)(unaff_EDI + 0x88) ^ *(uint *)(unaff_EDI + 0x80)) -
                (float)*(int *)(unaff_EDI + 0x8c);
      cVar5 = FUN_00465430();
      if (cVar5 != '\0') {
        local_8 = local_8 + param_1;
      }
      iVar2 = *(int *)(*(int *)(unaff_EDI + 0x5c) + 0x20);
      if (*(float *)(iVar2 + 0x2a0) + _DAT_006cc7b8 < local_8) {
        local_8 = *(float *)(iVar2 + 0x2a0);
        *(undefined4 *)(*(int *)(unaff_EDI + 0x58) + 0x3b8) = 0;
        FUN_00465530();
      }
      fVar3 = *(float *)(*(int *)(unaff_EDI + 0x5c) + 0x3d0);
      fVar11 = (float10)FUN_00580240();
      if ((fVar11 * (float10)_DAT_006ccc8c < (float10)fVar3) &&
         (*(int *)(*(int *)(unaff_EDI + 0x5c) + 0x18) != 0)) {
        *(undefined4 *)(unaff_EDI + 0x88) = 0;
        FUN_00428080();
        return;
      }
      uVar10 = DAT_006f227c % 0x2ac;
      uVar9 = DAT_006f227c ^ 0x1d872b41;
      uVar6 = uVar9 >> 5 ^ uVar9;
      DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar9;
      puVar1 = (uint *)(uVar10 + *(int *)(*(int *)(unaff_EDI + 0x5c) + 0x20));
      iVar2 = *(int *)(unaff_EDI + 0x5c);
      *(uint **)(unaff_EDI + 0x88) = puVar1;
      iVar7 = FUN_00674898();
      iVar8 = FUN_00674898();
      *(int *)(unaff_EDI + 0x8c) = iVar8 - iVar7;
      *(uint *)(unaff_EDI + 0x84) =
           *puVar1 ^ (uint)(*(float *)(iVar2 + 0x3d0) + (float)(iVar8 - iVar7));
      *(uint *)(unaff_EDI + 0x80) = *puVar1 ^ (uint)((float)*(int *)(unaff_EDI + 0x8c) + local_8);
    }
  }
  return;
}

