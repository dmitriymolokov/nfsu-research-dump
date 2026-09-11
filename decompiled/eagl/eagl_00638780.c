/* spd-match: far pct=25.00 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00638780 */
/* Decompiled from Speed.exe @ 00638780 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned int uint; typedef unsigned short ushort; int __cdecl FUN_00638780(uint target, int data_ptr, int count, int stride) { if (count == 0) return 0; do { int offset = (count >> 1) * stride; int current_ptr = offset + data_ptr; ushort val = *(ushort*)current_ptr; int diff = (int)target - (int)val; if (diff == 0) return current_ptr; if (diff > 0) data_ptr = current_ptr + stride; count >>= 1; } while (count != 0); return 0; }

