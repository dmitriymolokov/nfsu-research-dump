/* Decompiled from Speed.exe @ 005485a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005485a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_004392a0();
  FUN_004389b0(0xe);
  iVar1 = FUN_004388d0();
  iVar2 = FUN_006497c0();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      FUN_004389b0(*(undefined1 *)(iVar3 + iVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_005487c0(0xe,1);
  return;
}

