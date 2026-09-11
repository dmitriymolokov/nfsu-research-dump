/* Decompiled from Speed.exe @ 00545ea0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00545ea0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_14;
  
  puVar3 = DAT_00740410;
  puVar4 = (undefined4 *)FUN_0040a880();
  for (; puVar3 != puVar4; puVar3 = (undefined4 *)*puVar3) {
    local_14 = puVar3[4];
    if (0 < local_14) {
      iVar7 = puVar3[2] + 0x24;
      do {
        if (*(int *)(iVar7 + 8) != 0) {
          iVar1 = *(int *)(iVar7 + -8);
          iVar5 = FUN_00674898();
          iVar5 = iVar5 % iVar1;
          if (iVar5 != *(int *)(iVar7 + 0xc)) {
            iVar2 = *(int *)(iVar7 + 4);
            iVar6 = 0;
            *(int *)(iVar7 + 0xc) = iVar5;
            if (0 < iVar1) {
              puVar8 = (undefined4 *)(iVar2 + 4);
              do {
                if (DAT_00700ea4 != 0) {
                  *(undefined4 *)(*(int *)*puVar8 + 0x18) =
                       **(undefined4 **)(((iVar6 + iVar5) % iVar1) * 0x10 + 8 + iVar2);
                }
                puVar8 = puVar8 + 4;
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar1);
            }
          }
        }
        iVar7 = iVar7 + 0x34;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}

