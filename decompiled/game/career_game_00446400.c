/* Decompiled from Speed.exe @ 00446400 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_00446400(undefined4 param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  
  iVar3 = FUN_00446fd0(*(int *)(*(int *)(param_4 + 0x80) + 0x40) + 0x40);
  puVar2 = DAT_0077a978;
  iVar7 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)FUN_0040a880();
    for (; puVar2 != puVar4; puVar2 = (undefined4 *)*puVar2) {
      if (((int)puVar2[3] % 100 < 10) && (iVar7 < param_3)) {
        *(short *)(param_2 + iVar7 * 2) = (short)puVar2[3];
        iVar7 = iVar7 + 1;
      }
    }
  }
  else {
    iVar5 = 0xa28;
    do {
      if ((*(int *)(&DAT_0072a008 + iVar5 * 4) != 0) && (iVar7 < param_3)) {
        *(short *)(param_2 + iVar7 * 2) = (short)iVar5;
        iVar7 = iVar7 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0xa8c);
    iVar5 = 0;
    if (0 < *(int *)(iVar3 + 0x10)) {
      psVar6 = (short *)(iVar3 + 0x14);
      do {
        sVar1 = *psVar6;
        if (((-1 < sVar1) && (*(int *)(&DAT_0072a008 + sVar1 * 4) != 0)) && (iVar7 < param_3)) {
          *(short *)(param_2 + iVar7 * 2) = sVar1;
          iVar7 = iVar7 + 1;
        }
        iVar5 = iVar5 + 1;
        psVar6 = psVar6 + 1;
      } while (iVar5 < *(int *)(iVar3 + 0x10));
    }
  }
  if (*(int *)(*(int *)(param_4 + 0x80) + 4) == 1) {
    iVar5 = -1;
    if (iVar3 != 0) {
      iVar5 = (int)*(short *)(iVar3 + 8);
    }
    if (iVar5 != DAT_00700960) {
      DAT_00700960 = iVar5;
    }
    if (DAT_0073612c != 0) {
      if ((DAT_00736130 != 0) && ((DAT_006f0888 / 5 & 1U) != 0)) {
        iVar3 = 0;
        if (iVar7 < 1) {
LAB_0044655f:
          param_3 = iVar7 % param_3;
          iVar7 = iVar7 + 1;
          *(short *)(param_2 + param_3 * 2) = (short)DAT_00736130;
        }
        else {
          do {
            if (*(short *)(param_2 + iVar3 * 2) == DAT_00736130) {
              if (iVar3 < 0) goto LAB_0044655f;
              *(undefined2 *)(param_2 + iVar3 * 2) = 0xffff;
              goto LAB_00446571;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar7);
          param_3 = iVar7 % param_3;
          iVar7 = iVar7 + 1;
          *(short *)(param_2 + param_3 * 2) = (short)DAT_00736130;
        }
      }
LAB_00446571:
      if (DAT_00736138 != 0) {
        DAT_0077aa6c = 0xffffffff;
        DAT_0077aab0 = 0xffffffff;
        DAT_0077aaf9 = 1;
        DAT_00736138 = 0;
        return iVar7;
      }
    }
  }
  return iVar7;
}

