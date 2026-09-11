/* Decompiled from Speed.exe @ 00480a50 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void __fastcall FUN_00480a50(undefined4 param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char cStack00000009;
  undefined2 uStack0000000a;
  
  if (*(int *)(param_3 + 0xcb0) < 0x28) {
    iVar1 = *(int *)(param_3 + 0xcb0) - param_2;
    iVar2 = iVar1 + -1;
    if ((iVar1 != 1) && (iVar1 = 0, 0 < iVar2)) {
      do {
        iVar3 = (*(int *)(param_3 + 0xcb0) - iVar1) * 0x4c + param_3;
        iVar1 = iVar1 + 1;
        puVar6 = (undefined4 *)(iVar3 + 0x84);
        puVar7 = (undefined4 *)(iVar3 + 0xd0);
        for (iVar4 = 0x13; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      } while (iVar1 < iVar2);
    }
    iVar1 = param_2 * 0x4c + param_3;
    puVar6 = (undefined4 *)(iVar1 + 0xd0);
    puVar7 = (undefined4 *)(iVar1 + 0x11c);
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(iVar1 + 0x124) = *(undefined4 *)(param_3 + 0xcc0);
    *(int *)(param_3 + 0xcb0) = *(int *)(param_3 + 0xcb0) + 1;
    if (param_4 != '\0') {
      cStack00000009 = (char)param_2 + '\x01';
      param_4 = 1;
      uStack0000000a = 4;
      FUN_00481720(&param_4,4);
    }
    iVar1 = *(int *)(param_3 + 0xcb0) + -1;
    if (0 < iVar1) {
      pfVar5 = (float *)(iVar1 * 0x4c + 0xd8 + param_3);
      do {
        if (*pfVar5 < *(float *)(param_3 + 0xcc0) != (*pfVar5 == *(float *)(param_3 + 0xcc0)))
        break;
        iVar1 = iVar1 + -1;
        pfVar5 = pfVar5 + -0x13;
      } while (0 < iVar1);
    }
    *(int *)(param_3 + 0xcb4) = iVar1;
  }
  return;
}

