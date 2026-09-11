/* Decompiled from Speed.exe @ 00598fb0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00599070) */
/* WARNING: Removing unreachable block (ram,0x00599089) */
/* WARNING: Removing unreachable block (ram,0x005990b3) */

undefined4 __thiscall FUN_00598fb0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
      uVar1 = FUN_0059aea0();
      FUN_0059b2c0(&local_c,uVar1);
      cVar2 = FUN_00456c90();
      if (((cVar2 != '\0') && (iVar3 = FUN_004420a0(), iVar3 != 0)) &&
         (iVar3 = FUN_004420d0(), iVar3 != 0)) {
        iVar3 = FUN_004420e0();
        iVar4 = FUN_00432e00();
        if (iVar3 <= iVar4 + -2) {
          iVar3 = FUN_0042ae10();
          cVar2 = FUN_0059aa60(&local_c,*(undefined4 *)(iVar3 + 0xd4 + DAT_0078a2fc * 4),0,1);
          if ((cVar2 != '\0') && (iVar3 = FUN_005995e0(local_8,uVar1), iVar3 != -1)) {
            uVar6 = 0;
            fVar5 = (float10)FUN_0042adf0(0);
            uVar6 = FUN_005992f0(param_2,local_8,iVar3,(float)fVar5,uVar6);
            return uVar6;
          }
        }
      }
    }
  }
  return 0;
}

