/* Decompiled from Speed.exe @ 00547620 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00547620(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_40c [1036];
  
  FUN_004392a0();
  FUN_004389b0(7);
  iVar1 = FUN_004388d0();
  iVar2 = FUN_006497c0();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      FUN_004389b0(*(undefined1 *)(iVar3 + iVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_00547910(7,local_40c,1);
  return;
}

