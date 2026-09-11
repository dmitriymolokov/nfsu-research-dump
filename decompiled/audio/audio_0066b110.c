/* Decompiled from Speed.exe @ 0066b110 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066b110(void)

{
  DWORD DVar1;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  DVar1 = GetTickCount();
  *(DWORD *)(unaff_ESI + 0xb4) = DVar1 - 5000;
  *(undefined4 *)(unaff_ESI + 200) = 0xffffffff;
  return;
}

