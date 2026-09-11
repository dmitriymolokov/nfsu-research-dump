/* spd-match: far pct=8.93 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0062D170 */
/* Decompiled from Speed.exe @ 0062d170 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned short uint16; typedef unsigned int uint; uint __fastcall FUN_0062d170(void* ptr) { uint* p = (uint*)ptr; uint w14 = *(uint16*)((char*)p + 14); uint w12 = *(uint16*)((char*)p + 12); uint b16 = *(unsigned char*)((char*)p + 16); uint edx = (1 << (b16 & 31)) + 1; uint ebp = (w12 >> (b16 & 31)); uint esi = w14; uint eax = (uint)p + ((((edx * esi) * 3 + 1) & ~1) * ebp) + (esi * 9 + 20); uint v = (0x7fffffff >> (31 - (b16 & 31))) & w12; if (v != 0) { uint t = (v + 1) * esi; eax = (eax + t * 3 + 1) & ~1; } if (w14 == 0) { eax = (eax + 1) & ~1; } return eax; }

