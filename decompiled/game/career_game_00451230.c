/* Decompiled from Speed.exe @ 00451230 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall career_game_00451230(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  int iStack_28;
  float fStack_24;
  undefined4 uStack_18;
  
  iVar3 = *param_2;
  piVar2 = *(int **)(iVar3 + 0x2c);
  fStack_24 = DAT_007061e8;
  iStack_28 = 0;
  uStack_18 = 0;
  if ((&DAT_0077a344)[*(char *)(*(int *)(piVar2[1] + 0x14) + 0x736) * 8] != '\0') {
    uStack_18 = DAT_006b7650;
  }
  *(undefined1 *)(iVar3 + 0x88c) = 1;
  *(undefined4 *)(iVar3 + 0x894) = 0;
  *(undefined4 *)(iVar3 + 0x898) = 0;
  *(undefined4 *)(iVar3 + 0x89c) = 0;
  *(undefined4 *)(iVar3 + 0x890) = 0x437f0000;
  iVar3 = FUN_0057b4e0(*(undefined4 *)(param_1 + 0x200));
  if ((iVar3 != -1) && (piVar1 = param_2 + iVar3 * 0xe + 2, piVar1 != (int *)0x0)) {
    iVar3 = param_2[0xe5];
    if ((iVar3 < 0) || (4 < iVar3)) {
      if ((iVar3 < 0xb) || (0x10 < iVar3)) {
        iStack_28 = 0;
      }
      else {
        iStack_28 = piVar1[iVar3 + -5];
      }
    }
    else {
      iStack_28 = piVar1[5];
    }
    param_2[0xe6] = 1;
    param_2[0xe7] = 0;
    *(undefined1 *)(param_2 + 0xe9) = 0;
    param_2[0xe8] = 0;
    FUN_00458f10(0,0);
    if (_DAT_006b764c <= (float)piVar1[4] - (float)param_2[(char)param_2[0xe2] * 0xe + 6]) {
      if (_DAT_006cc8bc < ABS((float)piVar1[1])) {
        fVar4 = (float10)FUN_00583f20(&PTR_DAT_007061f4,
                                      ((float)piVar1[4] -
                                      (float)param_2[(char)param_2[0xe2] * 0xe + 6]) /
                                      (float)piVar1[1]);
        fStack_24 = (float)fVar4;
      }
    }
    else {
      fStack_24 = DAT_007061e8;
    }
  }
  FUN_0045c370(param_1 + 0x20,param_2,uStack_18,1,iStack_28,fStack_24);
  fVar4 = (float10)(**(code **)(*piVar2 + 0x5c))();
  *(float *)(param_1 + 0x1e4) = (float)fVar4;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0x40000000;
  *(undefined1 *)(param_1 + 0x1f1) = 1;
  *(undefined1 *)(param_1 + 0x1f2) = 1;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}

