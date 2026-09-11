/* Decompiled from Speed.exe @ 0043d220 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043d220(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(char *)(param_1 + 0x5c + local_8 * 0xd) != '\0') {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        iVar1 = FUN_0043b850(local_c);
        if (iVar1 != 0) {
          FUN_0042ae40();
          iVar2 = FUN_00567da0();
          if (iVar2 == 0) {
            *(undefined1 *)(iVar1 + 5) = (undefined1)local_8;
          }
        }
      }
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x5c);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

