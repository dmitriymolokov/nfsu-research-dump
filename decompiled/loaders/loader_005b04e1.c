/* Decompiled from Speed.exe @ 005b04e1 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005b04ed) */

undefined8 __fastcall FUN_005b04e1(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = cpuid_Version_info(1);
  return CONCAT44(param_2,(uint)((*(uint *)(iVar1 + 8) & 0x800000) != 0));
}

