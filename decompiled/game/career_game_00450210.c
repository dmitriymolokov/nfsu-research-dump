/* Decompiled from Speed.exe @ 00450210 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall career_game_00450210(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int iStack_1e0;
  uint uStack_1dc;
  undefined1 auStack_1d8 [4];
  undefined1 auStack_1d4 [4];
  undefined4 auStack_1d0 [105];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iStack_1f0 = DAT_0073ad34 - *(int *)(param_1 + 0x200);
  piVar1 = param_2 + 0xe6;
  iStack_1ec = param_1;
  if ((float)iStack_1f0 * _DAT_006cca38 < _DAT_006b7624) {
LAB_0045033f:
    param_1 = iStack_1ec;
    if (*piVar1 != 1) {
      iStack_1f0 = *(int *)(*param_2 + 0x10);
      if (*(char *)(iStack_1f0 + 0x424) == -1) {
        FUN_0057f2b0(1);
      }
      param_2[0xe5] = (int)*(char *)(iStack_1f0 + 0x424);
      *piVar1 = 1;
      param_2[0xe7] = 0;
      *(undefined1 *)(param_2 + 0xe9) = 0;
      param_2[0xe8] = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x200) = DAT_0073ad34;
    if (*piVar1 != 1) {
      uStack_2c = 0;
      uStack_28 = 0;
      puVar4 = auStack_1d0;
      for (iVar3 = 0x70; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      FUN_00458f10(0,0);
      iStack_1e4 = 0;
      iStack_1e0 = 0;
      iStack_1e8 = 1;
      uStack_1dc = uStack_1dc & 0xffffff00;
      iStack_1f0 = 0x47c34f80;
      cVar2 = FUN_0045b050(&iStack_1e8,0,auStack_1d4,auStack_1d8,&iStack_1f0,0,DAT_007006ec);
      if (cVar2 != '\0') {
        *piVar1 = iStack_1e8;
        param_2[0xe7] = iStack_1e4;
        param_2[0xe8] = iStack_1e0;
        param_2[0xe9] = uStack_1dc;
        iVar3 = *(int *)(*param_2 + 0x10);
        if (*(char *)(iVar3 + 0x424) == -1) {
          FUN_0057f2b0(1);
        }
        param_2[0xe5] = (int)*(char *)(iVar3 + 0x424);
        puVar4 = auStack_1d0;
        puVar5 = (undefined4 *)(iStack_1ec + 0x20);
        for (iVar3 = 0x70; param_1 = iStack_1ec, iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        goto LAB_00450393;
      }
      goto LAB_0045033f;
    }
  }
  FUN_0045ae10(piVar1,param_1 + 0x20,param_2,0,0);
LAB_00450393:
  *(undefined1 *)(param_1 + 499) = 0;
  if (*(int *)(*(int *)(*param_2 + 0x14) + 4) == 2) {
    piVar1 = *(int **)(*param_2 + 0x2c);
    cVar2 = FUN_00465430();
    if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar1 + 0x78))(param_2), cVar2 != '\0')) {
      *(undefined1 *)(param_1 + 499) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x1f1) = 1;
  *(undefined1 *)(param_1 + 0x1f2) = 1;
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  return;
}

