/* spd-match: far pct=66.67 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0061EF30 */
/* Decompiled from Speed.exe @ 0061ef30 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef void (__stdcall *target_fn)(int, int); extern void __fastcall FUN_0061e7d0(void*); extern void __fastcall FUN_0061df90(void*); extern target_fn PTR_FUN_006dfaa0; struct Object { int pad[9]; int field_24; int field_28; }; void __fastcall FUN_0061ef30(struct Object* ecx) { FUN_0061e7d0(ecx); FUN_0061df90(ecx); if (ecx->field_28 != 0) { PTR_FUN_006dfaa0(ecx->field_28, ecx->field_24); } ecx->field_28 = 0; }

