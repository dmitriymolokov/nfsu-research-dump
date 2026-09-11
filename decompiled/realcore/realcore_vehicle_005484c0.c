/* spd-match: far pct=14.85 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_005484C0 */
/* Decompiled from Speed.exe @ 005484c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned char u8; extern void __cdecl FUN_004392a0(void*); extern void __cdecl FUN_004389b0(int); extern int __cdecl FUN_004388d0(void*); extern void* __cdecl FUN_006497c0(void*); extern void __cdecl FUN_005487c0(int, int); void FUN_005484c0(void* arg) { char buf[1024]; int i; int len; void* data; FUN_004392a0(buf); FUN_004389b0(7); FUN_004389b0(7); len = FUN_004388d0(buf); data = FUN_006497c0(buf); for (i = 0; i < len; i++) { FUN_004389b0(((u8*)data)[i]); } FUN_005487c0(7, 1); }

