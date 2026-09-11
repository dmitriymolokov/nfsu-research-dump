/* Decompiled from Speed.exe @ 006391e0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 FUN_006391e0(undefined4 param_1,int param_2)

{
  int iVar1;
  char *unaff_ESI;
  char *local_114;
  int local_108;
  char local_104 [260];
  
  iVar1 = FUN_00672a10();
  local_114 = local_104;
  local_108 = 0;
  if (iVar1 == 0) {
    local_108 = FUN_0063d1c0();
    *local_114 = '\0';
  }
  else {
    _strncpy(local_104,unaff_ESI,iVar1 - (int)unaff_ESI);
    local_114[iVar1 - (int)unaff_ESI] = '\0';
  }
  if ((param_2 != 0) && (local_108 == 0)) {
    FUN_00642330(&DAT_0070f3c8,&LAB_00639040,&local_114);
  }
  return 0;
}

