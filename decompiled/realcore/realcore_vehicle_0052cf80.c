/* spd-match: far pct=54.89 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0052CF80 */
/* Decompiled from Speed.exe @ 0052cf80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
typedef float float32; extern const float32 _DAT_006b6488; extern const float32 _DAT_006b648c; extern const float32 _DAT_006cc7dc; struct S { char pad0[0x9c]; float32 arr[4]; float32 a0; float32 a4; float32 a8; float32 pad1[0x9]; float32 bc; float32 c0; float32 c4; }; void __fastcall FUN_0052cf80(struct S *p) { float32 *pf = &p->arr[0]; int i = 4; p->bc = 0.0f; p->c0 = 0.0f; p->c4 = 0.0f; do { float32 val = _DAT_006b6488 * pf[4]; *pf = val; if (val > _DAT_006b648c) *pf = _DAT_006b648c; pf++; } while (--i != 0); p->bc = (p->a4 + p->a0) * _DAT_006cc7dc; p->c0 = (p->a8 + p->arr[0]) * _DAT_006cc7dc; p->c4 = (p->c0 + p->bc) * _DAT_006cc7dc; }

