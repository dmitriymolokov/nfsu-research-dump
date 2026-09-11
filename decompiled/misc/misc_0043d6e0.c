/* Decompiled from Speed.exe @ 0043d6e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043d6e0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_00436d90();
  iVar2 = FUN_00436f20();
  if (*(int *)(param_1 + 8 + cVar1 * 4) != 0) {
    FUN_0043b850((int)cVar1);
    iVar3 = FUN_004399f0(0);
    if (iVar2 != iVar3) {
      FUN_004399a0(0x20);
    }
  }
  return;
}

