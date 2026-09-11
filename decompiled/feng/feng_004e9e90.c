/* Decompiled from Speed.exe @ 004e9e90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e9e90(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_EDX;
  int iVar7;
  int local_8;
  
  iVar2 = (int)param_1;
  iVar7 = *(int *)((int)param_1 + 0x4c);
  iVar3 = FUN_005a2690(iVar7);
  iVar4 = FUN_005a1340(iVar7);
  FUN_00495f00(*(undefined4 *)(&DAT_006fa18c + iVar7 * 4));
  param_1 = (char *)(iVar3 + 9);
  iVar7 = 1;
  local_8 = 10;
  do {
    FUN_004f42f0("RANK_DATA_%02d",iVar7);
    FUN_004f42f0("PLAYERNAME_DATA_%02d",iVar7);
    FUN_004f42f0("CARNAME_DATA_%02d",iVar7);
    FUN_004f6850(&PTR_LAB_006c7968,iVar7);
    if (iVar7 == iVar4) {
      FUN_004f6850(&DAT_007588c4);
    }
    else {
      piVar1 = (int *)(DAT_00734410 + *param_1 * 0xc);
      piVar5 = piVar1 + 1;
      if (*piVar1 != (int)*param_1) {
        piVar5 = (int *)&DAT_006b9172;
      }
      FUN_004f6850(&DAT_006cc568,piVar5);
    }
    iVar7 = iVar7 + 1;
    param_1 = param_1 + -1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (iVar4 == -1) {
    if (((((*(int *)(iVar2 + 0xc) != 0) && (iVar7 = FUN_004f65d0(), iVar7 != 0)) &&
         (iVar7 = FUN_004ffb70(), iVar7 != 0)) ||
        ((DAT_0073578c != 0 && (iVar7 = FUN_004ef050(0x212f91c3), iVar7 != 0)))) &&
       (*(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar7 + 0x18) == 5)) {
      uVar6 = *(undefined4 *)(iVar7 + 0x60);
      iVar7 = *(int *)(iVar7 + 0x5c);
      if (0 < iVar7) {
        do {
          FUN_004f6970(uVar6);
          uVar6 = *(undefined4 *)(extraout_EDX + 4);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    FUN_004f6850(&DAT_006cc568,&DAT_007588c4);
    return;
  }
  if (((*(int *)(iVar2 + 0xc) == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) ||
     (iVar7 = FUN_004ffb70(), iVar7 == 0)) {
    if (DAT_0073578c != 0) {
      uVar6 = FUN_004ef050(0x212f91c3);
      FUN_004f6910(uVar6);
      return;
    }
    iVar7 = 0;
  }
  FUN_004f6910(iVar7);
  return;
}

