/* Decompiled from Speed.exe @ 0059a2c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0059a6da) */
/* WARNING: Removing unreachable block (ram,0x0059a77e) */
/* WARNING: Removing unreachable block (ram,0x0059a78f) */
/* WARNING: Removing unreachable block (ram,0x0059a786) */
/* WARNING: Removing unreachable block (ram,0x0059a796) */
/* WARNING: Removing unreachable block (ram,0x0059a7a8) */
/* WARNING: Removing unreachable block (ram,0x0059a79f) */
/* WARNING: Removing unreachable block (ram,0x0059a578) */
/* WARNING: Removing unreachable block (ram,0x0059a4c9) */
/* WARNING: Removing unreachable block (ram,0x0059a4da) */
/* WARNING: Removing unreachable block (ram,0x0059a4d1) */
/* WARNING: Removing unreachable block (ram,0x0059a4e1) */
/* WARNING: Removing unreachable block (ram,0x0059a4f3) */
/* WARNING: Removing unreachable block (ram,0x0059a4ea) */
/* WARNING: Removing unreachable block (ram,0x0059a396) */
/* WARNING: Removing unreachable block (ram,0x0059a345) */
/* WARNING: Removing unreachable block (ram,0x0059a372) */
/* WARNING: Removing unreachable block (ram,0x0059a383) */
/* WARNING: Removing unreachable block (ram,0x0059a37a) */
/* WARNING: Removing unreachable block (ram,0x0059a3d4) */
/* WARNING: Removing unreachable block (ram,0x0059a53b) */
/* WARNING: Removing unreachable block (ram,0x0059a6f5) */
/* WARNING: Removing unreachable block (ram,0x0059a554) */
/* WARNING: Removing unreachable block (ram,0x0059a678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0059a2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  char local_6d;
  float local_3c;
  char local_22;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  uVar1 = FUN_0059aea0();
  fVar6 = (float10)FUN_0041f5f0();
  fVar9 = (float)fVar6;
  fVar6 = (float10)FUN_0041f5f0(fVar9);
  fVar6 = (float10)FUN_00443d60((float)fVar6,fVar9);
  fVar9 = (float)fVar6;
  iVar3 = FUN_0041f5d0();
  local_c = FUN_00428150(0);
  local_8 = FUN_00428160(0);
  cVar2 = FUN_00456c90();
  if (cVar2 != '\0') {
    local_22 = DAT_0078a2fc == 0;
    iVar4 = FUN_00424db0();
    if (iVar4 == 0) {
      local_6d = '\0';
    }
    else {
      FUN_00424db0();
      local_6d = FUN_00424f20();
    }
    fVar6 = (float10)FUN_00424e10();
    if ((float10)_DAT_006cc988 <= fVar6) {
      if (local_6d != '\0') {
        local_22 = '\x01' - local_22;
      }
    }
    else {
      fVar6 = (float10)FUN_004216f0(0x3f800000);
      if (fVar6 < (float10)_DAT_006cc7dc) {
        local_22 = !(bool)local_22;
      }
    }
    local_14 = 0;
    local_10 = FUN_004563d0(&local_c,1,DAT_006b5a38,local_22,0);
    while ((local_10 == 1 && (local_14 != local_8))) {
      fVar6 = (float10)FUN_0041f5f0();
      fVar7 = (float)fVar6;
      fVar6 = (float10)FUN_00442570(fVar7);
      fVar6 = (float10)FUN_00443d60((float)fVar6,fVar7);
      fVar7 = (float)fVar6;
      if (_DAT_006b5a3c < fVar7) {
        return 0;
      }
      iVar4 = FUN_005995e0(local_8,uVar1);
      if (((iVar4 != -1) && (iVar5 = FUN_004420b0(), iVar5 != 0)) &&
         (cVar2 = FUN_0059aa60(&local_c,param_3,param_1,0), cVar2 != '\0')) {
        if (*(char *)(iVar3 + 0x4d1) == '\0') {
          if (local_22 == '\0') {
            if ((fVar9 < DAT_006cc7a4) && (fVar7 < fVar9)) {
              return 0;
            }
          }
          else if ((DAT_006cc7a4 < fVar9) && (fVar9 < fVar7)) {
            return 0;
          }
        }
        FUN_004420b0();
        uVar8 = 0;
        fVar6 = (float10)FUN_0042adf0(0);
        FUN_0059a7c0(param_1,local_8,0,iVar4,0x41c4b127,(float)fVar6,uVar8);
        return 1;
      }
      fVar6 = (float10)FUN_00449fe0();
      fVar6 = (float10)FUN_00401c40(param_3,(float)fVar6);
      iVar4 = local_8;
      local_3c = (float)fVar6;
      while (((iVar4 == local_8 || (local_10 == 0)) && (local_14 != local_8))) {
        local_14 = local_8;
        local_10 = FUN_004563d0(&local_c,1,local_3c,local_22,0);
        local_3c = local_3c + local_3c;
      }
    }
  }
  return 0;
}

