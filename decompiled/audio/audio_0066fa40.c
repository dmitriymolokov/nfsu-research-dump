/* Decompiled from Speed.exe @ 0066fa40 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0066fa40(void)

{
  DWORD DVar1;
  uint uVar2;
  uint unaff_ESI;
  
  uVar2 = *(uint *)(unaff_ESI + 0xc0);
  while (uVar2 == 0) {
    DVar1 = GetTickCount();
    uVar2 = DVar1 ^ unaff_ESI;
    *(uint *)(unaff_ESI + 0xc0) = uVar2;
  }
  FUN_0066f830();
  return;
}

