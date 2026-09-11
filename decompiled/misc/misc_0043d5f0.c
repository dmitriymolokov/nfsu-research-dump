/* Decompiled from Speed.exe @ 0043d5f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043d6a9) */

void __fastcall FUN_0043d5f0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00548820();
    FUN_00548840(*(undefined1 *)(*(int *)(param_1 + 4) + 4));
    FUN_004399f0(1);
    FUN_00436f10();
    cVar1 = FUN_005466e0();
    if (cVar1 != '\0') {
      FUN_00546880();
    }
    iVar2 = FUN_004399f0(0);
    if (iVar2 != *(int *)(param_1 + 0x98)) {
      FUN_004399a0(0x20);
      FUN_0043a830();
    }
  }
  return;
}

