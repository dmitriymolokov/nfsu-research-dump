/* Decompiled from Speed.exe @ 005991a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00599205) */
/* WARNING: Removing unreachable block (ram,0x00599216) */
/* WARNING: Removing unreachable block (ram,0x0059920d) */
/* WARNING: Removing unreachable block (ram,0x0059924b) */

undefined4 FUN_005991a0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  do {
    if (99 < local_8) {
      return 0;
    }
    iVar3 = FUN_0042ae10();
    fVar1 = *(float *)(iVar3 + 0xd4 + DAT_0078a2fc * 4);
    cVar2 = *(char *)(param_1 + 1);
    iVar3 = local_8 + -0x32;
    uVar4 = FUN_0059aea0();
    iVar3 = FUN_00599b20(0,0,DAT_0078a2fc,(float)(iVar3 + cVar2) * fVar1,uVar4);
    if ((iVar3 != 0) && (iVar5 = FUN_005995e0(iVar3,uVar4 & 0xff), iVar5 != -1)) {
      local_10 = FUN_0044d3e0();
      local_c = iVar3;
      cVar2 = FUN_0059aa60(&local_10,fVar1,0,1);
      if (cVar2 != '\0') {
        uVar7 = 0;
        fVar6 = (float10)FUN_0042adf0(0);
        uVar7 = FUN_005992f0(param_1,iVar3,iVar5,(float)fVar6,uVar7);
        return uVar7;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

