/* Decompiled from Speed.exe @ 005ae18b */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005ae18b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float10 extraout_ST0;
  float10 fVar16;
  float10 extraout_ST0_00;
  float10 fVar17;
  float10 extraout_ST0_01;
  float10 fVar18;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  uVar11 = __ftol();
  fVar16 = (float10)_DAT_006cc7bc;
  uVar12 = __ftol();
  fVar17 = extraout_ST0_00 - (float10)(int)uVar12;
  uVar12 = uVar12 & 0xff;
  uVar15 = uVar12 + 1 & 0xff;
  fVar4 = (float)(fVar17 - (float10)_DAT_006cc7bc);
  fVar21 = extraout_ST1;
  uVar13 = __ftol();
  uVar14 = uVar13 & 0xff;
  fVar18 = extraout_ST0_01 - (float10)(int)uVar13;
  uVar13 = uVar14 + 1 & 0xff;
  fVar5 = (float)fVar18;
  fVar6 = (float)(fVar18 - (float10)_DAT_006cc7bc);
  fVar7 = (float)(((float10)_DAT_006cc7ac - (fVar21 + fVar21)) * fVar21 * fVar21);
  fVar8 = (float)(((float10)_DAT_006cc7ac - (extraout_ST1_00 + extraout_ST1_00)) * extraout_ST1_00 *
                 extraout_ST1_00);
  iVar1 = (*(int *)(&DAT_00697460 + (*(int *)(&DAT_00697460 + (uVar11 & 0xff) * 4) + uVar12) * 4) +
          uVar14) * 0xc;
  fVar19 = fVar21 * (float10)*(float *)(&DAT_00697c68 + iVar1) +
           extraout_ST1_00 * (float10)*(float *)(&DAT_00697c6c + iVar1) +
           fVar18 * (float10)*(float *)(&DAT_00697c70 + iVar1);
  iVar1 = (*(int *)(&DAT_00697460 +
                   (uVar12 + *(int *)(&DAT_00697460 + ((uVar11 & 0xff) + 1 & 0xff) * 4)) * 4) +
          uVar14) * 0xc;
  iVar2 = (*(int *)(&DAT_00697460 + (*(int *)(&DAT_00697460 + (uVar11 & 0xff) * 4) + uVar15) * 4) +
          uVar14) * 0xc;
  iVar3 = (uVar14 + *(int *)(&DAT_00697460 +
                            (*(int *)(&DAT_00697460 + ((uVar11 & 0xff) + 1 & 0xff) * 4) + uVar15) *
                            4)) * 0xc;
  fVar19 = ((fVar17 * (float10)*(float *)(&DAT_00697c68 + iVar1) +
            extraout_ST1_00 * (float10)*(float *)(&DAT_00697c6c + iVar1) +
            fVar18 * (float10)*(float *)(&DAT_00697c70 + iVar1)) - fVar19) * (float10)fVar7 + fVar19
  ;
  fVar20 = fVar21 * (float10)*(float *)(&DAT_00697c68 + iVar2) +
           (float10)fVar4 * (float10)*(float *)(&DAT_00697c6c + iVar2) +
           fVar18 * (float10)*(float *)(&DAT_00697c70 + iVar2);
  iVar1 = (*(int *)(&DAT_00697460 + (*(int *)(&DAT_00697460 + (uVar11 & 0xff) * 4) + uVar12) * 4) +
          uVar13) * 0xc;
  fVar9 = (float)(((((fVar17 * (float10)*(float *)(&DAT_00697c68 + iVar3) +
                     (float10)fVar4 * (float10)*(float *)(&DAT_00697c6c + iVar3) +
                     fVar18 * (float10)*(float *)(&DAT_00697c70 + iVar3)) - fVar20) * (float10)fVar7
                   + fVar20) - fVar19) * (float10)fVar8 + fVar19);
  fVar18 = fVar21 * (float10)*(float *)(&DAT_00697c68 + iVar1) +
           extraout_ST1_00 * (float10)*(float *)(&DAT_00697c6c + iVar1) +
           (float10)fVar6 * (float10)*(float *)(&DAT_00697c70 + iVar1);
  iVar1 = (*(int *)(&DAT_00697460 +
                   (uVar12 + *(int *)(&DAT_00697460 + ((uVar11 & 0xff) + 1 & 0xff) * 4)) * 4) +
          uVar13) * 0xc;
  iVar2 = (*(int *)(&DAT_00697460 + (*(int *)(&DAT_00697460 + (uVar11 & 0xff) * 4) + uVar15) * 4) +
          uVar13) * 0xc;
  iVar3 = (uVar13 + *(int *)(&DAT_00697460 +
                            (*(int *)(&DAT_00697460 + ((uVar11 & 0xff) + 1 & 0xff) * 4) + uVar15) *
                            4)) * 0xc;
  fVar10 = (float)(((fVar17 * (float10)*(float *)(&DAT_00697c68 + iVar1) +
                    extraout_ST1_00 * (float10)*(float *)(&DAT_00697c6c + iVar1) +
                    (float10)fVar6 * (float10)*(float *)(&DAT_00697c70 + iVar1)) - fVar18) *
                   (float10)fVar7 + fVar18);
  fVar21 = fVar21 * (float10)*(float *)(&DAT_00697c68 + iVar2) +
           (float10)fVar4 * (float10)*(float *)(&DAT_00697c6c + iVar2) +
           (float10)fVar6 * (float10)*(float *)(&DAT_00697c70 + iVar2);
  return (((float10)_DAT_006cc7ac - ((float10)fVar5 + (float10)fVar5)) * (float10)fVar5 *
          (float10)fVar5 *
          (((((((float10)(float)((extraout_ST0 - (float10)(int)uVar11) - fVar16) *
                (float10)*(float *)(&DAT_00697c68 + iVar3) +
               (float10)fVar4 * (float10)*(float *)(&DAT_00697c6c + iVar3) +
               (float10)fVar6 * (float10)*(float *)(&DAT_00697c70 + iVar3)) - fVar21) *
              (float10)fVar7 + fVar21) - (float10)fVar10) * (float10)fVar8 + (float10)fVar10) -
          (float10)fVar9) + (float10)fVar9) * (float10)_DAT_006ccc0c;
}

