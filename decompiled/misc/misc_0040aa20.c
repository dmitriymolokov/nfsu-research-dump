/* Decompiled from Speed.exe @ 0040aa20 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040aa20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  
  iVar18 = 0;
  uVar13 = DAT_00702a84;
  do {
    (&DAT_0071aa30)[iVar18 * 7] = iVar18;
    uVar12 = DAT_00736478;
    piVar11 = DAT_0073636c;
    uVar10 = DAT_0071ab98;
    uVar9 = DAT_0071ab94;
    uVar8 = DAT_0071ab90;
    uVar7 = DAT_0071ab8c;
    uVar6 = DAT_0071ab88;
    uVar14 = DAT_0071ab84;
    uVar5 = DAT_0071ab80;
    uVar4 = DAT_0071ab7c;
    uVar3 = DAT_0071ab78;
    uVar2 = DAT_0071ab74;
    uVar1 = DAT_0071ab70;
    uVar16 = DAT_0071ab6c;
    uVar17 = DAT_0071ab68;
    uVar15 = DAT_0071ab64;
    switch(iVar18) {
    case 0:
      (&DAT_0071aa38)[iVar18 * 7] = DAT_00736374;
      goto LAB_0040aa55;
    case 1:
      (&DAT_0071aa38)[iVar18 * 7] = DAT_00736464;
LAB_0040aa55:
      (**(code **)(*DAT_0073636c + 0xa0))(DAT_0073636c,&DAT_0071aa3c + iVar18 * 7);
      (&DAT_0071aa34)[iVar18 * 7] = 1;
LAB_0040aa99:
      uVar15 = DAT_00701038;
      (&DAT_0071aa44)[iVar18 * 7] = DAT_00701034;
      uVar13 = DAT_00702a84;
      (&DAT_0071aa48)[iVar18 * 7] = uVar15;
      goto LAB_0040ab92;
    case 2:
      (&DAT_0071aa34)[iVar18 * 7] = 4;
      (&DAT_0071aa44)[iVar18 * 7] = 0x140;
      (&DAT_0071aa48)[iVar18 * 7] = 0xf0;
      goto LAB_0040ab8c;
    case 3:
      (&DAT_0071aa38)[iVar18 * 7] = DAT_00736374;
      (**(code **)(*piVar11 + 0xa0))(piVar11,&DAT_0071aa3c + iVar18 * 7);
      (&DAT_0071aa34)[iVar18 * 7] = 0;
      goto LAB_0040aa99;
    case 4:
      (&DAT_0071aa38)[iVar18 * 7] = DAT_00736474;
      uVar15 = DAT_00702a9c;
      (&DAT_0071aa3c)[iVar18 * 7] = uVar12;
      uVar17 = DAT_00702aa0;
      (&DAT_0071aa34)[iVar18 * 7] = 3;
      (&DAT_0071aa44)[iVar18 * 7] = uVar15;
      (&DAT_0071aa48)[iVar18 * 7] = uVar17;
      goto LAB_0040ab92;
    case 5:
      (&DAT_0071aa34)[iVar18 * 7] = 0xb;
      break;
    case 6:
      (&DAT_0071aa34)[iVar18 * 7] = 0xd;
      uVar14 = uVar6;
      uVar16 = uVar1;
      break;
    case 7:
      (&DAT_0071aa34)[iVar18 * 7] = 0xe;
      uVar14 = uVar7;
      uVar16 = uVar2;
      break;
    case 8:
      (&DAT_0071aa34)[iVar18 * 7] = 0xf;
      uVar14 = uVar8;
      uVar16 = uVar3;
      break;
    case 9:
      (&DAT_0071aa34)[iVar18 * 7] = 10;
      uVar14 = uVar9;
      uVar16 = uVar4;
      break;
    case 10:
      (&DAT_0071aa34)[iVar18 * 7] = 0xc;
      uVar14 = uVar10;
      uVar16 = uVar5;
      break;
    default:
      goto switchD_0040aa46_default;
    }
    (&DAT_0071aa44)[iVar18 * 7] = uVar13;
    (&DAT_0071aa48)[iVar18 * 7] = uVar13;
    uVar15 = uVar14;
    uVar17 = uVar16;
LAB_0040ab8c:
    (&DAT_0071aa38)[iVar18 * 7] = uVar17;
    (&DAT_0071aa3c)[iVar18 * 7] = uVar15;
LAB_0040ab92:
    (&DAT_0071aa40)[iVar18 * 7] = 1;
switchD_0040aa46_default:
    iVar18 = iVar18 + 1;
    if (10 < iVar18) {
      return;
    }
  } while( true );
}

