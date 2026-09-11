/* Decompiled from Speed.exe @ 0061858f */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0061858f(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined1 local_1c [8];
  int local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  puVar2 = *(uint **)(param_1 + 0x98);
  uVar10 = *puVar2 & 0xffffff;
  if ((*puVar2 & 0xff000000) == 0xf5000000) {
    local_8 = *(undefined4 *)(param_1 + 0x94);
    local_c = param_1;
    FUN_006157c4(uVar10 | 0x25000000,puVar2,local_1c,2);
    if (local_14 != 0) {
      local_10 = 0;
      if (uVar10 != 0) {
        piVar9 = *(int **)(local_14 + 0x10);
        piVar5 = (int *)(puVar2[2] + uVar10 * 8);
        do {
          if (*piVar5 != *piVar9) {
            return 1;
          }
          local_10 = local_10 + 1;
          piVar5 = piVar5 + 1;
          piVar9 = piVar9 + 1;
        } while (local_10 < uVar10);
      }
      uVar3 = puVar2[2];
      iVar4 = *(int *)(local_14 + 8);
      iVar1 = uVar10 * 4 + uVar3;
      iVar6 = uVar10 * 4 + iVar4;
      iVar7 = FUN_00614e5c(uVar3,iVar1,iVar4,iVar6,local_14,puVar2,local_8);
      if ((((iVar7 != 0) &&
           (iVar7 = FUN_00614e5c(iVar1,uVar3,iVar4,iVar6,local_14,puVar2,local_8), iVar7 != 0)) &&
          (iVar7 = FUN_00614e5c(uVar3,iVar1,iVar6,iVar4,local_14,puVar2,local_8), iVar7 != 0)) &&
         (((iVar7 = FUN_00614e5c(iVar1,uVar3,iVar6,iVar4,local_14,puVar2,local_8), iVar7 != 0 &&
           (iVar7 = FUN_00614e5c(iVar4,iVar6,uVar3,iVar1,local_14,puVar2,local_8), iVar7 != 0)) &&
          ((iVar7 = FUN_00614e5c(iVar6,iVar4,uVar3,iVar1,local_14,puVar2,local_8), iVar7 != 0 &&
           (iVar7 = FUN_00614e5c(iVar4,iVar6,iVar1,uVar3,local_14,puVar2,local_8), iVar7 != 0))))))
      {
        uVar8 = FUN_00614e5c(iVar6,iVar4,iVar1,uVar3,local_14,puVar2,local_8);
        return uVar8;
      }
      return 0;
    }
  }
  return 1;
}

