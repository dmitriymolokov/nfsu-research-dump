/* spd-match: far pct=10.23 flags=/Og /Gr /c /nologo /TC method=m39 source=m39/m4g0-s01/va_0061E6D0 */
/* Decompiled from Speed.exe @ 0061e6d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned char byte; extern void __stdcall FUN_0061e4d0(void* p1, int p2); int FUN_0061e6d0(int* p1, byte* p2, int* p3, int* p4) { int iVar4; int iVar2; int local[4]; while(1) { iVar4 = (*p1) ? *(int*)(*p1 + 0x10) : 0; iVar2 = *p3; if (iVar4 <= iVar2) return 0; FUN_0061e4d0(local, iVar2); { byte* s1 = (byte*)p2; byte* s2 = (byte*)local[1]; int diff = 0; while (1) { byte c1 = *s1; byte c2 = *s2; if (c1 != c2) { diff = (c1 < c2) ? -1 : 1; break; } if (c1 == 0) break; c1 = s1[1]; c2 = s2[1]; if (c1 != c2) { diff = (c1 < c2) ? -1 : 1; break; } s1 += 2; s2 += 2; if (c1 == 0) break; } if (diff == 0) { p4[0] = local[0]; p4[1] = local[1]; p4[2] = local[2]; p4[3] = local[3]; (*p3)++; return 1; } } *p3 = iVar2 + 1; } }

