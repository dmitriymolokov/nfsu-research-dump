/* Decompiled from Speed.exe @ 0055a190 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055a190(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_004ebcb0();
  iVar2 = 0;
  if (DAT_00734e21 != '\0') {
    iVar2 = *(int *)(unaff_ESI + 0x40) + 0x66;
  }
  iVar1 = *(int *)(unaff_ESI + 0x40);
  FUN_0054d6b0(iVar1,iVar1 + 0x11,iVar1 + 0x33,iVar2,*(undefined4 *)(iVar1 + 0xd8),
               CONCAT31((int3)((uint)*(int *)(iVar1 + 0xe0) >> 8),*(int *)(iVar1 + 0xe0) == 0),
               *(undefined1 *)(iVar1 + 0xcc),*(undefined1 *)(iVar1 + 0xcd),&LAB_0055a590);
  return;
}

