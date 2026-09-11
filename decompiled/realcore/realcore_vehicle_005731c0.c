/* spd-match: far pct=16.07 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_005731C0 */
/* Decompiled from Speed.exe @ 005731c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef struct { char pad1; char flag; int idx; } Vehicle; extern void* PTR_006f1a04[]; extern void FUN_00565da0(const char*, void*); extern int FUN_004482f0(void*, int, int, int, int); extern void __stdcall FUN_00448110(void); void FUN_005731c0(Vehicle *edi) { char local_40[64]; int eax; int ecx; int edx; eax = edi->idx; edi->flag = 1; ecx = (eax < 0 || eax > 1) ? 0 : eax; if (PTR_006f1a04[ecx] != 0) { edx = (eax < 0 || eax > 1) ? 0 : eax; FUN_00565da0("REPLAY\\%s", PTR_006f1a04[edx]); } else { local_40[0] = 0; } FUN_004482f0(local_40, 8, 0, 0, 0); FUN_00448110(); }

