/* spd-match: far pct=39.78 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_005557A0 */
/* Decompiled from Speed.exe @ 005557a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
#define G_ADDR (*(int *)0x734f60)
void __cdecl FUN_00424cc0(int);
int __cdecl FUN_004f65d0(void);
void __cdecl FUN_004ec3c0(void);
int __cdecl FUN_004134c0(int, int);
void __cdecl FUN_004ee3a0(int, int, int);
int FUN_005557a0(void) {
  FUN_00424cc0(G_ADDR + 0x14c);
  if (FUN_004f65d0()) {
    FUN_004ec3c0();
    FUN_00424cc0(G_ADDR + 0x154);
  }
  FUN_004ee3a0(0xca9231e9, 0x6b9172, FUN_004134c0(0xaffffa0, 0));
  return 0;
}

