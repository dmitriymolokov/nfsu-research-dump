/* Decompiled from Speed.exe @ 00553820 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00553820(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  short *psVar8;
  undefined4 uVar9;
  
  iVar5 = param_1;
  piVar1 = (int *)(param_1 + 0x18);
  param_1 = 0;
  if (0 < *piVar1) {
    do {
      iVar6 = *(int *)(iVar5 + 0x1a0) + param_1;
      if (*(int *)(iVar5 + 0x19c) <= iVar6) {
        return;
      }
      iVar4 = *(int *)(*(int *)(iVar5 + 0x14) + param_1 * 4);
      puVar2 = (undefined4 *)(iVar5 + 0x1c + iVar6 * 0xc);
      if (*(char *)(puVar2 + 2) == '\0') {
        if (*(char *)((int)puVar2 + 9) == '\0') {
          if (*(char *)((int)puVar2 + 10) == '\0') {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = 0xff00ff80;
          }
        }
        else {
          uVar9 = 0xffff8000;
        }
      }
      else {
        uVar9 = 0xffff80ff;
      }
      FUN_004f75b0(uVar9);
      psVar8 = (short *)*puVar2;
      if (psVar8 != (short *)0x0) {
        iVar6 = 0;
        sVar3 = *psVar8;
        while (sVar3 != 0) {
          iVar6 = iVar6 + 1;
          sVar3 = psVar8[iVar6];
        }
        if (*(uint *)(iVar4 + 100) < iVar6 + 1U) {
          FUN_005040e0();
        }
        psVar7 = *(short **)(iVar4 + 0x60);
        if (psVar7 != (short *)0x0) {
          sVar3 = *psVar8;
          while (sVar3 != 0) {
            *psVar7 = sVar3;
            psVar8 = psVar8 + 1;
            psVar7 = psVar7 + 1;
            sVar3 = *psVar8;
          }
          *psVar7 = 0;
        }
      }
      *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      param_1 = param_1 + 1;
    } while (param_1 < *(int *)(iVar5 + 0x18));
  }
  return;
}

