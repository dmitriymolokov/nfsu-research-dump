/* spd-match: close pct=86.54 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00622720 */
/* Decompiled from Speed.exe @ 00622720 */
/* Module: EAGL */
/* Ghidra DecompileAll */
#define DAT_0070A428 (*(int*)(0x70A428))
#define DAT_00709D80 (*(int**)(0x709D80))
void FUN_00622720(int param_1, int param_2) { int* table = (int*)0x70A428; if (table[param_1] != param_2) { int** vtable_ptr = (int**)DAT_00709D80; void (__stdcall *func)(void*, int, int, int) = (void (__stdcall*)(void*, int, int, int))(*(vtable_ptr[0] + 0x53)); func(vtable_ptr, param_2, *(int*)(param_2 + 4), *(int*)(param_2 + 0x10)); table[param_1] = param_2; } }

