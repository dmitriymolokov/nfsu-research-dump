/* Decompiled from Speed.exe @ 0043b4e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043b547) */

void __thiscall FUN_0043b4e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004327d0();
  if ((iVar1 != 0) && (FUN_0043ca70(iVar1,param_3), *(int *)(param_1 + 8 + param_2 * 4) != 0)) {
    FUN_0043b850(param_2);
    FUN_0042ae40();
    FUN_00548a00(param_3);
  }
  return;
}

