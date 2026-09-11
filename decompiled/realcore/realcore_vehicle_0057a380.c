/* Decompiled from Speed.exe @ 0057a380 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0057a380(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  FUN_00401cd0();
  iVar2 = *(int *)(unaff_ESI + 0x10);
  FUN_00401cd0();
  if (*(int *)(iVar2 + 0xe4) == 0) {
    FUN_00579190();
  }
  iVar2 = *(int *)(unaff_ESI + 0x14);
  iVar3 = *(int *)(unaff_ESI + 0x10);
  uVar1 = *(undefined4 *)(iVar2 + 0x78);
  uVar4 = *(undefined4 *)(iVar2 + 0x70);
  *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar2 + 0x74);
  *(undefined4 *)(iVar3 + 0xa0) = uVar4;
  *(undefined4 *)(iVar3 + 0xa8) = uVar1;
  if (*(int *)(iVar3 + 0xe4) == 0) {
    FUN_00579190();
  }
  return;
}

