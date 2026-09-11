/* Decompiled from Speed.exe @ 0043af80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043af8f) */
/* WARNING: Removing unreachable block (ram,0x0043b064) */

void __fastcall FUN_0043af80(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 8 + local_8 * 4) != 0) {
      FUN_0043b850(local_8);
      cVar1 = FUN_00432e20();
      if (cVar1 != '\0') {
        uVar3 = 2;
        FUN_0043b850(local_8);
        FUN_004390d0(uVar3);
      }
    }
  }
  FUN_004390d0(6);
  if ((DAT_007361f8 != 0) && (DAT_0073619c != 0)) {
    FUN_00420090(DAT_007361f8);
    FUN_00434b50(DAT_0073619c,3);
    FUN_0043aae0(0,1);
  }
  DAT_00779814 = 0xffffffff;
  iVar2 = FUN_005647d0();
  if (iVar2 != 0x238562c5) {
    FUN_004399a0(0x20);
    FUN_0043a830();
  }
  return;
}

