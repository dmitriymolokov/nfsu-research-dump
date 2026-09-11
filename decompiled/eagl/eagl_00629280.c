/* spd-match: far pct=34.55 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00629280 */
/* Decompiled from Speed.exe @ 00629280 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef void (__stdcall *target_fn)(void*); extern void* DAT_0070d364; extern void* PTR_FUN_006a7b70; void __stdcall FUN_00628ed0(void); void __fastcall FUN_00629280(void* esi) { void** obj = (void**)esi; obj[0] = &PTR_FUN_006a7b70; if (obj[5]) { void** vtable = *(void***)DAT_0070d364; ((target_fn)(vtable[6]))(obj[5]); } if (obj[7]) { void** vtable = *(void***)DAT_0070d364; ((target_fn)(vtable[6]))(obj[7]); } FUN_00628ed0(); }

