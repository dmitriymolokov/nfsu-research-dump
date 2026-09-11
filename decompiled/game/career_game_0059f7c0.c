/* Decompiled from Speed.exe @ 0059f7c0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_0059f7c0(char param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  piVar1 = &DAT_006ee650;
  do {
    if (*piVar1 == DAT_006ee6f0) {
      puVar3 = &DAT_006ee650 + iVar2 * 4;
      goto LAB_0059f7eb;
    }
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x6ee6f0);
  puVar3 = (undefined4 *)0x0;
LAB_0059f7eb:
  if (param_1 == '\0') {
    FUN_00448370();
    DAT_00734428 = 0;
    if (*(int *)(puVar3[3] + 0x60) != 0) {
      FUN_0053ec90(&DAT_00740420,puVar3[3],8);
      *(undefined4 *)(puVar3[3] + 0x60) = 0;
    }
  }
  if ((param_2 == '\0') && (*(int *)(puVar3[3] + 0x68) != 0)) {
    FUN_0053ec90(&DAT_00740420,puVar3[3] + 0x40,8);
    *(undefined4 *)(puVar3[3] + 0x68) = 0;
  }
  if ((param_3 == '\0') && (*(int *)(puVar3[3] + 100) != 0)) {
    FUN_0053ec90(&DAT_00740420,puVar3[3] + 0x20,8);
    *(undefined4 *)(puVar3[3] + 100) = 0;
  }
  if (param_1 != '\0') {
    if (DAT_00734428 == 0) {
      DAT_00734428 = FUN_004482f0(puVar3[2],7,0,0,0);
      iVar2 = FUN_00594c60(puVar3[2],1,1);
      if (iVar2 != 0) {
        FUN_00594d40();
      }
      if (((&DAT_007301d4)[DAT_006ee4a4] != 0) && (DAT_006ee4a4 != 0)) {
        FUN_00565810();
      }
      FUN_00448070(puVar3[2]);
      FUN_00448110();
      if (param_4 != '\0') {
        while (DAT_007360e8 != 0) {
          FUN_004483c0();
        }
      }
    }
    if (*(int *)(puVar3[3] + 0x60) == 0) {
      FUN_0053e9e0(&DAT_00740420,puVar3[3],8,0,0,DAT_006ee4a4);
      *(undefined4 *)(puVar3[3] + 0x60) = 1;
    }
  }
  if ((param_2 != '\0') && (*(int *)(puVar3[3] + 0x68) == 0)) {
    FUN_0053e9e0(&DAT_00740420,puVar3[3] + 0x40,8,0,0,DAT_006ee4a4);
    *(undefined4 *)(puVar3[3] + 0x68) = 1;
  }
  if ((param_3 != '\0') && (*(int *)(puVar3[3] + 100) == 0)) {
    FUN_0053e9e0(&DAT_00740420,puVar3[3] + 0x20,8,0,0,DAT_006ee4a4);
    *(undefined4 *)(puVar3[3] + 100) = 1;
  }
  if (param_4 != '\0') {
    iVar2 = FUN_0053ed70(&DAT_00740420,"LANGUAGES\\LANGUAGETEXTURES.BIN");
    while (iVar2 != 0) {
      FUN_004483c0();
      iVar2 = FUN_0053ed70(&DAT_00740420,"LANGUAGES\\LANGUAGETEXTURES.BIN");
    }
  }
  return;
}

