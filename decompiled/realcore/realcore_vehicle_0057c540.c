/* spd-match: far pct=26.23 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0057C540 */
/* Decompiled from Speed.exe @ 0057c540 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned char byte; typedef unsigned int uint; void __fastcall FUN_0057c540(int dummy, int* p) { int esi; int edi; int ebx; int ecx; int eax; esi = p[3]; edi = p[4]; if (esi >= edi) return; eax = esi; ebx = p[0] + 0x20; for (;;) { if (eax >= ebx) break; ecx = p[2]; if ((ecx != 0) && (eax >= ecx)) break; ecx = eax - esi; ecx = *(byte*)((char*)p + ecx + 100); ecx >>= 4; eax += ecx + 1; if (eax >= edi) break; } }

