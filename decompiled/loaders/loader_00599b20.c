/* Decompiled from Speed.exe @ 00599b20 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00599bf5) */

int FUN_00599b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  int local_10;
  int local_c;
  float local_8;
  
  local_c = 0;
  local_8 = 999999.0;
  for (local_10 = 0; local_10 < 99; local_10 = local_10 + 1) {
    iVar3 = FUN_00432e10();
    if ((iVar3 != 0) && (iVar4 = FUN_00442950(), iVar4 != 0)) {
      iVar4 = FUN_00442820(iVar3,param_2,param_4,param_3,0);
      if ((iVar4 != 0) && (iVar5 = FUN_004420b0(), iVar5 != 0)) {
        cVar2 = FUN_00599c40(iVar4,iVar3,param_5);
        if (cVar2 != '\0') {
          uVar7 = param_2;
          fVar6 = (float10)FUN_00442570(param_2);
          fVar6 = (float10)FUN_00443d60((float)fVar6,uVar7);
          fVar1 = (float)fVar6;
          if ((DAT_006cc7a4 < fVar1) && (fVar1 < local_8)) {
            local_c = iVar4;
            local_8 = fVar1;
          }
        }
      }
    }
  }
  return local_c;
}

