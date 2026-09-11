/* Decompiled from Speed.exe @ 00453c60 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall career_game_00453C60(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  bool bVar9;
  float10 fVar10;
  float fStack_44;
  float fStack_40;
  int *piStack_3c;
  float fStack_38;
  int *piStack_34;
  int iStack_30;
  int *piStack_2c;
  int *piStack_28;
  float fStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  piStack_3c = param_2 + (char)param_2[0xe2] * 0xe;
  iVar1 = *param_2;
  piStack_28 = *(int **)(iVar1 + 0x2c);
  piStack_34 = param_2 + 0xe6;
  piStack_2c = (int *)param_2[0xea];
  iStack_30 = piStack_2c[piStack_3c[0xe] + 2];
  iVar5 = 0;
  if (0 < param_2[1]) {
    piVar7 = param_2 + 0xf;
    do {
      if (*piVar7 == *(int *)(param_1 + 0x200)) {
        if (iVar5 != -1) {
          pfVar8 = (float *)(param_2 + iVar5 * 0xe + 2);
          goto LAB_00453ccf;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      piVar7 = piVar7 + 0xe;
    } while (iVar5 < param_2[1]);
  }
  pfVar8 = (float *)0x0;
LAB_00453ccf:
  fStack_38 = 0.0;
  bVar3 = false;
  if ((pfVar8 != (float *)0x0) && (-_DAT_006b76e8 < pfVar8[1])) {
    fStack_38 = ((pfVar8[4] - (float)piStack_3c[6]) - pfVar8[3]) - (float)piStack_3c[5];
    if (fStack_38 <= DAT_006cc7a4) {
      fStack_38 = 0.0;
    }
    bVar9 = *pfVar8 <= DAT_006cc7a4;
    fStack_40 = (float)param_2[0xe5];
    if (((int)fStack_40 < 0xb) || (0x10 < (int)fStack_40)) {
      uVar6 = (**(code **)(*piStack_2c + 4))(0xff,0xff);
      FUN_0044a2c0(uVar6);
      fStack_40 = (float)FUN_00456e90(iVar1);
    }
    if (bVar9) {
      iStack_20 = (int)fStack_40 + 1;
      iStack_1c = (int)fStack_40 + -1;
      iStack_18 = (int)fStack_40 + 2;
      iStack_14 = (int)fStack_40 + -2;
    }
    else {
      iStack_20 = (int)fStack_40 + -1;
      iStack_1c = (int)fStack_40 + 1;
      iStack_18 = (int)fStack_40 + -2;
      iStack_14 = (int)fStack_40 + 2;
    }
    fStack_44 = 0.0;
    fStack_24 = fStack_40;
    do {
      cVar4 = FUN_00453ba0(param_1);
      if (cVar4 != '\0') {
        if ((&fStack_24)[(int)fStack_44] != 3.57331e-43) {
          param_2[0xe5] = (int)(&fStack_24)[(int)fStack_44];
          *piStack_34 = 1;
          piStack_34[1] = 0;
          *(undefined1 *)(piStack_34 + 3) = 0;
          piStack_34[2] = 0;
          goto LAB_00453e05;
        }
        break;
      }
      fStack_44 = (float)((int)fStack_44 + 1);
    } while ((int)fStack_44 < 5);
    bVar3 = true;
  }
LAB_00453e05:
  iVar5 = param_2[0xe5];
  if ((iVar5 < 0) || (4 < iVar5)) {
    if ((iVar5 < 0xb) || (0x10 < iVar5)) {
      piStack_3c = (int *)0x0;
    }
    else {
      piStack_3c = (int *)piStack_3c[iVar5 + -3];
    }
  }
  else {
    piStack_3c = (int *)piStack_3c[7];
  }
  fStack_44 = 0.0;
  fStack_40 = 0.0;
  iVar5 = FUN_0044f470(iVar5,piStack_3c,*(undefined4 *)(param_1 + 0x208),&fStack_40,&fStack_44);
  if (iVar5 == 0) {
    if (bVar3) goto LAB_00454051;
  }
  else {
    if (*(int *)(param_1 + 0x200) != iVar5) {
      *(int *)(param_1 + 0x200) = iVar5;
      *(float *)(param_1 + 0x208) = DAT_006b76e0;
    }
    *(float *)(param_1 + 0x204) = fStack_40;
    if (*(float *)(iVar1 + 0x3d4) < _DAT_006cc7dc) {
      fVar2 = *(float *)(param_1 + 0x208);
      if (*(float *)(param_1 + 0x208) <= DAT_006b76e0) {
        fVar2 = DAT_006b76e0;
      }
      if (fVar2 < fStack_44) {
        fVar2 = fStack_44;
      }
      *(float *)(param_1 + 0x208) = fVar2;
      cVar4 = *(char *)(iStack_30 + 0x5c);
      if ((cVar4 == -1) || (*(short *)(iStack_30 + 0x5e) == -1)) {
        iStack_30 = 0;
      }
      else {
        if (cVar4 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (&DAT_0077af30)[cVar4];
        }
        iStack_30 = *(short *)(iStack_30 + 0x5e) * 0x88 + 0x27c + iVar5;
      }
      uVar6 = (**(code **)(*piStack_2c + 4))(0xff,0xff);
      iVar5 = FUN_00456e90(iVar1,uVar6);
      if (iVar5 != -1) {
        param_2[0xe5] = iVar5;
        *piStack_34 = 1;
        piStack_34[1] = 0;
        *(undefined1 *)(piStack_34 + 3) = 0;
        piStack_34[2] = 0;
      }
    }
    if ((fStack_40 < _DAT_006b76dc) ||
       (fStack_38 < *(float *)(param_1 + 0x208) != (fStack_38 == *(float *)(param_1 + 0x208)))) {
LAB_00454051:
      piStack_2c = *(int **)(param_1 + 0x200);
      if (fStack_44 <= _DAT_006b76e4) {
        *(undefined4 *)(param_1 + 0x1e4) = 0;
        *(undefined4 *)(param_1 + 0x1ec) = 0;
        iVar5 = FUN_00647b70();
        if ((iVar5 == 6) && (*(int *)(*(int *)(*(int *)(piStack_2c[0x75] + 0x90) + 0x14) + 4) == 3))
        {
          *(undefined1 *)(iVar1 + 0x88c) = 1;
          *(undefined4 *)(iVar1 + 0x890) = 0x437f0000;
          *(undefined4 *)(iVar1 + 0x898) = 0;
          *(undefined4 *)(iVar1 + 0x894) = 0;
          *(undefined4 *)(iVar1 + 0x89c) = 0;
          *(undefined4 *)(param_1 + 0x1e8) = 0;
          goto LAB_00454009;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1e4) = 0x40c00000;
        *(undefined4 *)(param_1 + 0x1ec) = 0x40000000;
        iVar5 = FUN_00647b70();
        if ((iVar5 == 6) && (*(int *)(*(int *)(*(int *)(piStack_2c[0x75] + 0x90) + 0x14) + 4) == 3))
        {
          *(undefined1 *)(iVar1 + 0x88c) = 1;
          *(undefined4 *)(iVar1 + 0x890) = 0;
          *(undefined4 *)(iVar1 + 0x898) = 0x437f0000;
          *(undefined4 *)(iVar1 + 0x894) = 0;
          *(undefined4 *)(iVar1 + 0x89c) = 0;
          *(undefined4 *)(param_1 + 0x1e8) = 0;
          goto LAB_00454009;
        }
      }
      *(undefined1 *)(iVar1 + 0x88c) = 0;
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      goto LAB_00454009;
    }
  }
  fVar10 = (float10)(**(code **)(*piStack_28 + 0x5c))();
  *(float *)(param_1 + 0x1e4) = (float)fVar10;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0x40000000;
  *(undefined1 *)(iVar1 + 0x88c) = 1;
  *(undefined4 *)(iVar1 + 0x890) = 0;
  *(undefined4 *)(iVar1 + 0x894) = 0x437f0000;
  *(undefined4 *)(iVar1 + 0x898) = 0;
  *(undefined4 *)(iVar1 + 0x89c) = 0;
LAB_00454009:
  FUN_0045ae10(piStack_34,param_1 + 0x20,param_2,0,0);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x1f1) = 1;
  *(undefined1 *)(param_1 + 0x1f2) = 1;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}

