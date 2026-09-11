/* Decompiled from Speed.exe @ 004f16d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f16d0(int *param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *local_818;
  int local_814;
  int local_808 [256];
  int local_408 [257];
  
  iVar6 = *param_1;
  iVar1 = iVar6 * 8;
  local_814 = 0;
  piVar3 = param_1 + 0x801;
  local_818 = param_1 + 1;
  do {
    piVar7 = piVar3;
    piVar3 = local_408;
    for (iVar4 = 0x100; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        local_408[*(byte *)((int)local_818 + iVar4 + local_814 + 4)] =
             local_408[*(byte *)((int)local_818 + iVar4 + local_814 + 4)] + 1;
        iVar4 = iVar4 + 8;
      } while (iVar4 < iVar1);
    }
    iVar4 = 0;
    local_808[0] = 0;
    do {
      iVar5 = *(int *)((int)local_808 + iVar4) + *(int *)((int)local_408 + iVar4);
      *(int *)((int)local_808 + iVar4 + 4) = iVar5;
      iVar5 = iVar5 + *(int *)((int)local_408 + iVar4 + 4);
      *(int *)((int)local_808 + iVar4 + 8) = iVar5;
      iVar5 = iVar5 + *(int *)((int)local_408 + iVar4 + 8);
      *(int *)((int)local_808 + iVar4 + 0xc) = iVar5;
      iVar5 = iVar5 + *(int *)((int)local_408 + iVar4 + 0xc);
      *(int *)((int)local_808 + iVar4 + 0x10) = iVar5;
      *(int *)((int)local_808 + iVar4 + 0x14) = *(int *)((int)local_408 + iVar4 + 0x10) + iVar5;
      iVar4 = iVar4 + 0x14;
    } while (iVar4 < 0x3fc);
    iVar4 = 0;
    piVar3 = local_818;
    if (0 < iVar6) {
      do {
        bVar2 = *(byte *)(local_814 + 4 + (int)piVar3);
        iVar6 = local_808[bVar2];
        piVar7[iVar6 * 2] = *piVar3;
        piVar7[iVar6 * 2 + 1] = piVar3[1];
        local_808[bVar2] = iVar6 + 1;
        iVar6 = *param_1;
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar4 < iVar6);
    }
    local_814 = local_814 + 1;
    piVar3 = local_818;
    local_818 = piVar7;
  } while (local_814 < 4);
  return;
}

