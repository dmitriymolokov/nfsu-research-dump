/* spd-match: far pct=5.83 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m4g0-s01/va_005BE628 */
/* Decompiled from Speed.exe @ 005be628 */
/* S45 QUARANTINE: Windows/D3D — out of WASM scope (see QUARANTINE.md) */
/* Module: EAGL */
/* Ghidra DecompileModule */
typedef unsigned long DWORD; typedef unsigned int uint; typedef void* PVOID; struct StubClass { int method(PVOID a1, int a2, int a3, PVOID a4, PVOID a5, int a6, uint a7, int* out1, int* out2); }; int StubClass::method(PVOID a1, int a2, int a3, PVOID a4, PVOID a5, int a6, uint a7, int* out1, int* out2) { if (out1) *out1 = 0; if (out2) *out2 = 0; return 0; } int FUN_005be628(void* ecx_val, PVOID p1, int p2, int p3, PVOID p4, PVOID p5, int p6, uint p7, int* out1, int* out2) { StubClass* obj = (StubClass*)&ecx_val; return obj->method(p1, p2, p3, p4, p5, p6, p7, out1, out2); }
