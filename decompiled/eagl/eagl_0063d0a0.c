/* spd-match: far pct=61.29 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063D0A0 */
/* Decompiled from Speed.exe @ 0063d0a0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef struct { char flag; char reserved[35]; } Item; extern int DAT_0070f46c; extern int DAT_0070f488; extern Item *DAT_0070f48c; void __cdecl FUN_0063f190(void*); void __cdecl FUN_0063f1a0(void*); void __cdecl FUN_0063f210(void*, int); int FUN_0063d0a0(void) { int i; FUN_0063f190(&DAT_0070f46c); i = 0; if (DAT_0070f488 > 0) { while (i < DAT_0070f488 && DAT_0070f48c[i].flag != 0) { i++; } if (i < DAT_0070f488) { FUN_0063f210(&DAT_0070f48c[i], 0x24); DAT_0070f48c[i].flag = 1; *(int*)((char*)&DAT_0070f48c[i] + 4) = -1; } } FUN_0063f1a0(&DAT_0070f46c); return i; }

