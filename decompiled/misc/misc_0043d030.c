/* Decompiled from Speed.exe @ 0043d030 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043d030(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_00424f10();
  FUN_00432d40();
  FUN_00575950();
  FUN_00432d10();
  uVar2 = FUN_00674898();
  FUN_00439030(uVar2);
  FUN_00548820();
  FUN_00548840(*(undefined1 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 0x1a8) = *(int *)(*(int *)(param_1 + 4) + 0x1a8) + 1;
  FUN_00436f10();
  FUN_004134c0();
  FUN_00436f10();
  cVar1 = FUN_005466e0();
  if (cVar1 != '\0') {
    FUN_00546850();
  }
  return;
}

