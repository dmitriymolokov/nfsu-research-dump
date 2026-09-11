/* spd-match: far pct=41.67 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00622940 */
/* Decompiled from Speed.exe @ 00622940 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef struct { void** vptr; } Base; extern int DAT_006e2a48; extern Base* DAT_00709d80; void FUN_00622940(int param_1) { if (DAT_006e2a48 != param_1) { void* obj = DAT_00709d80; void** vtbl = *(void***)obj; DAT_006e2a48 = param_1; ((void (__stdcall *)(void*, int, int))(*(void***)obj)[0x32])(obj, 0x3c, param_1); } }

