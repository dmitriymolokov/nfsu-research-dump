/* Decompiled from Speed.exe @ 0066f590 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066f590(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xe4) = 0;
  *(undefined4 *)(unaff_ESI + 0xe8) = 0;
  *(undefined4 *)(unaff_ESI + 0xec) = 0;
  *(undefined4 *)(unaff_ESI + 0xf4) = 0x65;
  *(undefined4 *)(unaff_ESI + 0xcc) = 0;
  *(undefined4 *)(unaff_ESI + 0xd0) = 0;
  *(undefined4 *)(unaff_ESI + 0xd8) = 0x65;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 0x1908) = DVar1 - 5000;
  return;
}

