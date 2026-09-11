/* spd-match: far pct=18.42 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_004AB2B0 */
/* Decompiled from Speed.exe @ 004ab2b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */
typedef unsigned int u32; extern u32* DAT_006f1da4; void __cdecl FUN_004aa4d0(int); void __cdecl FUN_004ac460(void*, u32*); void __cdecl FUN_004ac220(void); void __cdecl FUN_005a0a00(void); void FUN_004ab2b0(u32* ebp) { u32* ebx = ebp + 4; int i; ebp[0] = 1; ((unsigned char*)ebp)[4] = 0; ((unsigned char*)ebp)[5] = 1; ebp[0x2ed58/4] = 0; FUN_004aa4d0(1); ebx[0xeeec/4] = 0; ebx[0x210/4] = 0; ((unsigned char*)ebx)[0xeef0] = 1; for(i=0; i<32; i++) ebx[0x214/4 + i] = 0; FUN_004ac460((unsigned char*)ebx + 0x364, DAT_006f1da4); FUN_004ac220(); FUN_005a0a00(); for(i=0; i<0x294; i++) ((u32*)((unsigned char*)ebx + 0xeef4))[i] = 0; }

