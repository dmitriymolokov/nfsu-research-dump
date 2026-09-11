/* Decompiled from Speed.exe @ 005b1022 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b1022(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  
  piVar2 = param_1;
  piVar1 = (int *)*param_1;
  iVar6 = piVar1[1];
  iVar4 = *piVar1;
  iVar8 = piVar1[4];
  iVar3 = 0;
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  if (-1 < iVar6) {
    if (iVar6 < 4) {
      uVar5 = piVar1[6] * piVar1[5] * iVar8;
      if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
        iVar6 = uVar5 * 4;
        puVar7 = (undefined4 *)*param_3;
        puVar9 = (undefined4 *)*param_2;
        for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *param_2 = *param_2 + iVar6;
        *param_3 = *param_3 + iVar6;
        *param_1 = *param_1 + 0x1c;
        return 0;
      }
    }
    else if (iVar6 == 4) {
      switch(iVar4) {
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xf:
      case 0x10:
        *param_2 = *param_2 + iVar8 * 4;
        *param_3 = *param_3 + iVar8 * 4;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x11:
      case 0x12:
        *param_1 = *param_1 + 0x14;
        return 0;
      }
    }
    else if (iVar6 == 5) {
      uVar5 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      do {
        if (iVar8 == 0) {
          return iVar3;
        }
        param_1 = (int *)0x0;
        *piVar2 = (int)(piVar1 + 6);
        if (uVar5 != 0) {
          do {
            iVar3 = FUN_005b1022(piVar2,param_2,param_3);
            if (iVar3 < 0) {
              return iVar3;
            }
            param_1 = (int *)((int)param_1 + 1);
          } while (param_1 < uVar5);
        }
        iVar8 = iVar8 + -1;
      } while( true );
    }
  }
  return -0x7fffbffb;
}

