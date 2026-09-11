/* Decompiled from Speed.exe @ 0067e2c8 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2003 Release */

uint __get_lc_time(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  int unaff_ESI;
  
  uVar1 = DAT_00717eca;
  uVar46 = (uint)DAT_00717ecc;
  if (unaff_ESI == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00681f42(1,DAT_00717eca,0x31,unaff_ESI + 4);
  uVar3 = FUN_00681f42(1,uVar1,0x32,unaff_ESI + 8);
  uVar4 = FUN_00681f42(1,uVar1,0x33,unaff_ESI + 0xc);
  uVar5 = FUN_00681f42(1,uVar1,0x34,unaff_ESI + 0x10);
  uVar6 = FUN_00681f42(1,uVar1,0x35,unaff_ESI + 0x14);
  uVar7 = FUN_00681f42(1,uVar1,0x36,unaff_ESI + 0x18);
  uVar8 = FUN_00681f42(1,uVar1,0x37);
  uVar9 = FUN_00681f42(1,uVar1,0x2a,unaff_ESI + 0x20);
  uVar10 = FUN_00681f42(1,uVar1,0x2b,unaff_ESI + 0x24);
  uVar11 = FUN_00681f42(1,uVar1,0x2c,unaff_ESI + 0x28);
  uVar12 = FUN_00681f42(1,uVar1,0x2d,unaff_ESI + 0x2c);
  uVar13 = FUN_00681f42(1,uVar1,0x2e,unaff_ESI + 0x30);
  uVar14 = FUN_00681f42(1,uVar1,0x2f,unaff_ESI + 0x34);
  uVar15 = FUN_00681f42(1,uVar1,0x30,unaff_ESI + 0x1c);
  uVar16 = FUN_00681f42(1,uVar1,0x44,unaff_ESI + 0x38);
  uVar17 = FUN_00681f42(1,uVar1,0x45,unaff_ESI + 0x3c);
  uVar18 = FUN_00681f42(1,uVar1,0x46,unaff_ESI + 0x40);
  uVar19 = FUN_00681f42(1,uVar1,0x47,unaff_ESI + 0x44);
  uVar20 = FUN_00681f42(1,uVar1,0x48,unaff_ESI + 0x48);
  uVar21 = FUN_00681f42(1,uVar1,0x49,unaff_ESI + 0x4c);
  uVar22 = FUN_00681f42(1,uVar1,0x4a,unaff_ESI + 0x50);
  uVar23 = FUN_00681f42(1,uVar1,0x4b,unaff_ESI + 0x54);
  uVar24 = FUN_00681f42(1,uVar1,0x4c,unaff_ESI + 0x58);
  uVar25 = FUN_00681f42(1,uVar1,0x4d,unaff_ESI + 0x5c);
  uVar26 = FUN_00681f42(1,uVar1,0x4e,unaff_ESI + 0x60);
  uVar27 = FUN_00681f42(1,uVar1,0x4f,unaff_ESI + 100);
  uVar28 = FUN_00681f42(1,uVar1,0x38,unaff_ESI + 0x68);
  uVar29 = FUN_00681f42(1,uVar1,0x39,unaff_ESI + 0x6c);
  uVar30 = FUN_00681f42(1,uVar1,0x3a,unaff_ESI + 0x70);
  uVar31 = FUN_00681f42(1,uVar1,0x3b,unaff_ESI + 0x74);
  uVar32 = FUN_00681f42(1,uVar1,0x3c,unaff_ESI + 0x78);
  uVar33 = FUN_00681f42(1,uVar1,0x3d,unaff_ESI + 0x7c);
  uVar34 = FUN_00681f42(1,uVar1,0x3e,unaff_ESI + 0x80);
  uVar35 = FUN_00681f42(1,uVar1,0x3f,unaff_ESI + 0x84);
  uVar36 = FUN_00681f42(1,uVar1,0x40,unaff_ESI + 0x88);
  uVar37 = FUN_00681f42(1,uVar1,0x41,unaff_ESI + 0x8c);
  uVar38 = FUN_00681f42(1,uVar1,0x42,unaff_ESI + 0x90);
  uVar39 = FUN_00681f42(1,uVar1,0x43,unaff_ESI + 0x94);
  uVar40 = FUN_00681f42(1,uVar1,0x28,unaff_ESI + 0x98);
  uVar41 = FUN_00681f42(1,uVar1,0x29,unaff_ESI + 0x9c);
  uVar42 = FUN_00681f42(1,uVar46,0x1f,unaff_ESI + 0xa0);
  uVar43 = FUN_00681f42(1,uVar46,0x20,unaff_ESI + 0xa4);
  uVar44 = FUN_00681f42(1,uVar46,0x1003,unaff_ESI + 0xa8);
  uVar45 = FUN_00681f42(0,uVar46,0x1009,unaff_ESI + 0xb0);
  *(uint *)(unaff_ESI + 0xac) = uVar46;
  return uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 | uVar12 |
         uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 | uVar22 |
         uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 | uVar32 |
         uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 | uVar42 |
         uVar43 | uVar44 | uVar45;
}

