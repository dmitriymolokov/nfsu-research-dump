/* Decompiled from Speed.exe @ 0043d160 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043d160(int param_1)

{
  int iVar1;
  
  FUN_0043d120();
  FUN_00567c70();
  while( true ) {
    do {
      iVar1 = FUN_00577dd0();
      if (iVar1 == 0) {
        return;
      }
    } while ((*(int *)(iVar1 + 0x34) == 0) || (*(int *)(iVar1 + 0x24) != 4));
    if (*(char *)(param_1 + 0x40) == '\b') break;
    *(int *)(param_1 + 0x20 + (uint)*(byte *)(param_1 + 0x40) * 4) = iVar1;
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x40) + '\x01';
  }
  return;
}

