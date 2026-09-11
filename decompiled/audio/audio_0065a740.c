/* Decompiled from Speed.exe @ 0065a740 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_0065a740(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  
  DAT_00716470 = (undefined1 *)0x0;
  FUN_0065a130();
  DAT_0071646f = 0;
  DAT_007172ec = 1;
  puVar5 = param_2;
  puVar7 = &DAT_007172ac;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar3 = DAT_00716465 - 1;
  puVar4 = &DAT_007172b4 + iVar3 * 4;
  pbVar6 = (byte *)(param_2 + 0xe);
  iVar1 = FUN_0065fce0(puVar4,4);
  if (iVar1 == 0) {
    iVar1 = FUN_0065fce0(puVar4,4);
    while (iVar1 == 0) {
      puVar4 = puVar4 + -4;
      iVar3 = iVar3 + -1;
      iVar1 = FUN_0065fce0(puVar4,4);
    }
    DAT_0071729c = iVar3 + 1;
  }
  else {
    DAT_0071729c = (uint)DAT_00716465;
  }
  DAT_007172e8 = DAT_0071729c;
  if (0 < iVar3) {
    puVar4 = &DAT_007172cc;
    iVar1 = iVar3;
    do {
      iVar2 = FUN_0065fce0(puVar4 + -0x18,4);
      if (0 < iVar2) {
        do {
          pbVar6 = pbVar6 + *(int *)(&DAT_006ea668 + (uint)*pbVar6 * 4);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = FUN_0065fce0(puVar4,4);
      puVar4 = puVar4 + 4;
      iVar1 = iVar1 + -1;
      pbVar6 = pbVar6 + iVar2 * 0xc;
    } while (iVar1 != 0);
  }
  DAT_007172a4 = pbVar6;
  iVar3 = FUN_0065fce0(&DAT_007172b4 + iVar3 * 4,4);
  if (0 < iVar3) {
    do {
      pbVar6 = pbVar6 + *(int *)(&DAT_006ea668 + (uint)*pbVar6 * 4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  DAT_007172a0 = pbVar6;
  FUN_0065a240(param_1,param_2);
  DAT_00716470 = &LAB_00659fa0;
  DAT_0071646f = 1;
  return;
}

