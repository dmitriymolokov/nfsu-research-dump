/* Decompiled from Speed.exe @ 0043ea50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __thiscall FUN_0043ea50(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00421960(param_1);
  while( true ) {
    iVar2 = FUN_0040a880();
    if (iVar1 == iVar2) {
      return 0;
    }
    if (*(int *)(iVar1 + 8) == param_2) break;
    iVar1 = FUN_00421960();
  }
  return iVar1;
}

