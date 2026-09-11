/* Decompiled from Speed.exe @ 005368b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall
FUN_005368b0(undefined4 param_1,char param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  if (((param_6 < 4) && (iVar1 = *(int *)(param_3 + 0x3474 + param_6 * 4), iVar1 != param_4)) &&
     ((param_4 == 0 ||
      ((param_2 != '\0' ||
       ((int)(&DAT_00743ca8)[iVar1 * 0x1b] <= (int)(&DAT_00743ca8)[param_4 * 0x1b])))))) {
    *(int *)(param_3 + 0x3484 + param_6 * 4) = iVar1;
    *(int *)(param_3 + 0x3474 + param_6 * 4) = param_4;
    *(undefined1 *)(param_4 + (param_6 * 3 + 0xd11) * 4 + param_3) = 1;
    iVar1 = *(int *)(*(int *)(DAT_007356a8 + 0xa0) + 8);
    uVar3 = FUN_00674898();
    piVar6 = &DAT_00743cb4 + param_4 * 0x1b;
    piVar7 = (int *)(param_6 * 0xd10 + 4 + param_3);
    param_5 = 0xb;
    do {
      iVar2 = *piVar6;
      iVar5 = *piVar7;
      *piVar7 = iVar2;
      FUN_00532640();
      FUN_00532670((float)(iVar5 - iVar2),0,uVar3,0);
      piVar7 = piVar7 + 0x4c;
      piVar6 = piVar6 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
    if ((&DAT_007356b0)[iVar1] == param_6) {
      piVar6 = &DAT_00743ce0 + param_4 * 0x1b;
      puVar8 = (undefined4 *)(param_3 + 0x35b8);
      param_5 = 8;
      do {
        *(int *)(param_3 + 0x3494) = param_4;
        iVar1 = *piVar6;
        iVar2 = puVar8[-0x48];
        puVar8[-0x48] = iVar1;
        puVar8[1] = 0;
        puVar8[-0x1c] = 0;
        *puVar8 = 0;
        puVar8[-1] = 0;
        iVar5 = 0;
        puVar4 = puVar8 + -0xf;
        do {
          puVar4[-6] = 0;
          *puVar4 = 0;
          puVar4[-0xc] = 0;
          *(undefined1 *)((int)puVar8 + iVar5 + -0x24) = 0;
          puVar4[8] = 0;
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar5 < 6);
        *(undefined1 *)(puVar8 + 2) = 0;
        FUN_00532670((float)(iVar2 - iVar1),0,uVar3,0);
        piVar6 = piVar6 + 1;
        puVar8 = puVar8 + 0x4c;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
  }
  return;
}

