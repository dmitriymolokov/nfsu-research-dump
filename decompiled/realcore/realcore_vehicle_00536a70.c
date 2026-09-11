/* Decompiled from Speed.exe @ 00536a70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00536a70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  iVar2 = param_3;
  if (((param_3 < 4) &&
      (pcVar7 = (char *)(param_2 + (param_3 * 3 + 0xd11) * 4 + param_1), *pcVar7 != '\0')) &&
     (*pcVar7 = '\0', *(int *)(param_1 + 0x3474 + param_3 * 4) == param_2)) {
    pcVar7 = (char *)(param_1 + 0x3445 + param_3 * 0xc);
    iVar6 = 0;
    iVar4 = 0;
    iVar3 = 0;
    param_3 = 0x6c;
    iVar5 = 2;
    do {
      if ((pcVar7[-1] != '\0') &&
         (*(int *)((int)&DAT_00743ca8 + iVar4) < *(int *)((int)&DAT_00743ca8 + iVar3))) {
        iVar6 = iVar5 + -2;
        iVar4 = iVar3;
      }
      if ((*pcVar7 != '\0') &&
         (*(int *)((int)&DAT_00743ca8 + iVar4) < *(int *)((int)&DAT_00743d14 + iVar3))) {
        iVar6 = iVar5 + -1;
        iVar4 = param_3;
      }
      if ((pcVar7[1] != '\0') &&
         (*(int *)((int)&DAT_00743ca8 + iVar4) < *(int *)((int)&DAT_00743d80 + iVar3))) {
        iVar4 = iVar3 + 0xd8;
        iVar6 = iVar5;
      }
      if ((pcVar7[2] != '\0') &&
         (*(int *)((int)&DAT_00743ca8 + iVar4) < *(int *)((int)&DAT_00743dec + iVar3))) {
        iVar6 = iVar5 + 1;
        iVar4 = iVar3 + 0x144;
      }
      if ((pcVar7[3] != '\0') &&
         (*(int *)((int)&DAT_00743ca8 + iVar4) < *(int *)((int)&DAT_00743e58 + iVar3))) {
        iVar6 = iVar5 + 2;
        iVar4 = iVar3 + 0x1b0;
      }
      if ((pcVar7[4] != '\0') &&
         (*(int *)((int)&DAT_00743ca8 + iVar4) < *(int *)((int)&DAT_00743ec4 + iVar3))) {
        iVar6 = iVar5 + 3;
        iVar4 = iVar3 + 0x21c;
      }
      param_3 = param_3 + 0x288;
      iVar1 = iVar5 + 4;
      pcVar7 = pcVar7 + 6;
      iVar3 = iVar3 + 0x288;
      iVar5 = iVar5 + 6;
    } while (iVar1 < 0xc);
    FUN_005368b0(param_1,iVar6,*(undefined4 *)(&DAT_00743cb0 + param_2 * 0x6c),iVar2);
  }
  return;
}

