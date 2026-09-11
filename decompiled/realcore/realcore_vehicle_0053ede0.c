/* Decompiled from Speed.exe @ 0053ede0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


int FUN_0053ede0(int *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_808;
  int local_804;
  undefined4 auStack_800 [512];
  
  iVar4 = 0;
  local_808 = 0;
  local_804 = 0;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      iVar1 = FUN_0053e620(param_1,*(undefined4 *)(param_2 + local_804 * 4));
      if (((iVar1 != 0) && (*(short *)(iVar1 + 0xe) == 0)) && ((*(byte *)(iVar1 + 0xd) & 0x10) == 0)
         ) {
        iVar1 = *(int *)(iVar1 + 8) + *param_1;
        if ((&DAT_007301d4)[param_4] == 0) {
LAB_0053ee60:
          iVar2 = 0;
        }
        else if (param_4 == 0) {
          iVar2 = 0x6300000;
        }
        else {
          iVar2 = FUN_00565810();
          iVar2 = iVar2 + -0x58;
          if (iVar2 < 0) goto LAB_0053ee60;
        }
        if (iVar1 + 0x80 < iVar2) {
          uVar3 = FUN_00565b60(iVar1,0,0,param_4 & 7 | 0x2000);
          auStack_800[iVar4] = uVar3;
          iVar4 = iVar4 + 1;
        }
        else {
          local_808 = local_808 + iVar1;
        }
      }
      local_804 = local_804 + 1;
      iVar1 = local_808;
    } while (local_804 < param_3);
  }
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      FUN_00565ce0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return iVar1;
}

