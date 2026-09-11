/* spd-match: far pct=22.34 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_005490A0 */
/* Decompiled from Speed.exe @ 005490a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned int uint32; extern uint32 DAT_0073ad3c; extern uint32 DAT_007354d0; extern uint32 DAT_0073ddc0; void FUN_005490a0(int esi_val) { uint32* p = (uint32*)0x73ddc4; int i = 0; while ((unsigned int)p < 0x73de24) { if (*p == (unsigned int)esi_val) { uint32* base = (uint32*)((char*)&DAT_0073ddc0 + (i << 5)); base[1] = 0xffffffff; base[0] = 0xffffffff; base[2] = 0; *(unsigned short*)&base[3] = 0; *(unsigned short*)&base[3] = 0; base[4] = 0; base[5] = 0; base[6] = 0xbf800000; base[7] = DAT_0073ad3c; DAT_007354d0--; return; } p += 8; i++; } }

