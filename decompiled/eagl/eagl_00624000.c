/* spd-match: far pct=8.00 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_00624000 */
/* Decompiled from Speed.exe @ 00624000 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned int uint32; void FUN_00624000(int p1, int p2, float *p3, int p4) { uint32 *idx = (uint32 *)(p1 * 16 + p4); float *m1 = (float *)(((idx[0]) & 0xFF) * 64 + p2); float *m2 = (float *)(((idx[1]) & 0xFF) * 64 + p2); float s1 = ((float*)idx)[0]; float s2 = ((float*)idx)[1]; int i; for (i = 0; i < 16; i += 4) { p3[i+0] = m1[i+0] * s1 + m2[i+0] * s2; p3[i+1] = m1[i+1] * s1 + m2[i+1] * s2; p3[i+2] = m1[i+2] * s1 + m2[i+2] * s2; p3[i+3] = m1[i+3] * s1 + m2[i+3] * s2; } }

