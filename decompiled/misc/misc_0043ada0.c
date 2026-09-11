/* Decompiled from Speed.exe @ 0043ada0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043ada0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (DAT_006f1f64 != 0) {
    FUN_0043d220();
    FUN_0043d7e0();
    FUN_00549980();
    FUN_004abc90();
  }
  cVar1 = FUN_0041f600();
  if (cVar1 != '\0') {
    FUN_0043de90(0);
  }
  FUN_004390d0(4);
  cVar1 = FUN_00401d70();
  if (cVar1 == '\0') {
    FUN_00448560();
  }
  else {
    FUN_00448530();
  }
  uVar2 = FUN_004399f0(1);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  return;
}

