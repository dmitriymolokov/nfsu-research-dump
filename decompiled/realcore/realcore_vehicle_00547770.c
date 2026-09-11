/* Decompiled from Speed.exe @ 00547770 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00547770(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_40c [1036];
  
  FUN_004392a0();
  FUN_004389b0(6);
  DAT_00735508 = DAT_00735508 + 1;
  FUN_00548840(DAT_00735508);
  iVar1 = FUN_004388d0();
  iVar2 = FUN_006497c0();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      FUN_004389b0(*(undefined1 *)(iVar3 + iVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_00547910(6,local_40c,0);
  return;
}

