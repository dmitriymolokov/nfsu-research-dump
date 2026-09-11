/* Decompiled from Speed.exe @ 00683042 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00683042(void)

{
  int iVar1;
  
  iVar1 = FUN_005b0506();
  if (iVar1 == 0) {
    PTR_FUN_006ecd04 = FUN_00682d18;
    PTR_LAB_006ecd08 = FUN_00682e40;
  }
  else {
    PTR_FUN_006ecd04 = FUN_00682f2a;
    PTR_LAB_006ecd08 = FUN_00682f2a;
  }
                    /* WARNING: Could not recover jumptable at 0x00683074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_006ecd04)();
  return;
}

