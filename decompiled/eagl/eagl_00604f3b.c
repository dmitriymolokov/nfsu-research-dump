/* Decompiled from Speed.exe @ 00604f3b */
/* Module: EAGL */
/* Ghidra DecompileModule */


undefined4 __thiscall FUN_00604f3b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int local_18 [4];
  undefined4 local_8;
  
  local_8 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  uVar7 = *(uint *)(param_2 + 0xc);
  uVar8 = 0;
  if (uVar7 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    piVar6 = *(int **)(param_2 + 0x10);
    do {
      uVar2 = *(uint *)(*(int *)(iVar1 + *piVar6 * 4) + 0xc);
      if (3 < uVar2) {
        return 0;
      }
      uVar8 = uVar8 + 1;
      piVar6 = piVar6 + 1;
      local_18[uVar2] = 1;
    } while (uVar8 < uVar7);
  }
  uVar7 = 0;
  bVar4 = true;
  bVar5 = false;
  do {
    bVar3 = true;
    if (local_18[uVar7] != 0) {
      bVar4 = false;
      bVar3 = bVar5;
    }
    uVar7 = uVar7 + 1;
    bVar5 = bVar3;
  } while (uVar7 < 3);
  if ((bVar3) && (!bVar4)) {
    local_8 = 1;
  }
  return local_8;
}

