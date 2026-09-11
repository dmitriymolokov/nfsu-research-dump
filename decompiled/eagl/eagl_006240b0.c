/* spd-match: far pct=6.36 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_006240B0 */
/* Decompiled from Speed.exe @ 006240b0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
void FUN_006240b0(int idx, float* table, float* out, float* src) { unsigned int* p = (unsigned int*)((char*)src + (idx * 16)); float* w = (float*)p; float* base = table; float* r1 = base + ((p[0] & 0xFF) * 16); float* r2 = base + ((p[1] & 0xFF) * 16); float* r3 = base + ((p[2] & 0xFF) * 16); float w1 = w[0], w2 = w[1], w3 = w[2]; int i; for(i=0; i<16; i++) { out[i] = r1[i]*w1 + r2[i]*w2 + r3[i]*w3; } }

