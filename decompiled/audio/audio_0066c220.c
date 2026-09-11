/* Decompiled from Speed.exe @ 0066c220 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_0066c220(uint param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x84);
  while (uVar2 == 0) {
    DVar1 = GetTickCount();
    uVar2 = DVar1 ^ param_1;
    *(uint *)(param_1 + 0x84) = uVar2;
  }
  FUN_0066c0c0();
  return;
}

