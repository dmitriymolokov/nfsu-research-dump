/* Decompiled from Speed.exe @ 0066c060 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066c060(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xb0) = 0;
  *(undefined4 *)(unaff_ESI + 0xb4) = 0;
  *(undefined4 *)(unaff_ESI + 0xb8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc0) = 0x65;
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  *(undefined4 *)(unaff_ESI + 0x9c) = 0x65;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 0xc4) = DVar1 - 5000;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 200) = DVar1 - 5000;
  return;
}

