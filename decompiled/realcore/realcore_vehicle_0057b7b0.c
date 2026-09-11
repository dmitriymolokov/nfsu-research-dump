/* spd-match: far pct=18.75 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0057B7B0 */
/* Decompiled from Speed.exe @ 0057b7b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef void* pvoid; extern pvoid ExceptionList; extern pvoid _malloc(size_t); extern void FUN_00578060(pvoid, int, int); extern pvoid PTR_FUN_006ba3b4; extern pvoid LAB_00686f03; pvoid __cdecl FUN_0057b7b0(int param_1) { pvoid result = 0; pvoid prev_ex; pvoid handler = &LAB_00686f03; prev_ex = ExceptionList; ExceptionList = &handler; result = _malloc(0x90); if (result) { FUN_00578060(result, param_1, 0); *(pvoid*)result = &PTR_FUN_006ba3b4; } else { result = 0; } ExceptionList = prev_ex; return result; }

