/* Decompiled from Speed.exe @ 00555800 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00555848) */

void __fastcall FUN_00555800(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  
  if ((*(char *)(param_1 + 0x148) == '\0') && (iVar2 = FUN_005543d0(), iVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x148) = 1;
    FUN_004134c0(0);
    FUN_004f6340();
    cVar1 = FUN_005494d0();
    if (cVar1 == '\0') {
      pcVar3 = FUN_00556580;
      FUN_005543f0(FUN_00556580);
      FUN_0054a4e0(pcVar3);
    }
    else {
      FUN_0054a370(&DAT_00734718,FUN_005563f0);
    }
  }
  return;
}

