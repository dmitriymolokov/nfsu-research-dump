/* spd-match: far pct=8.00 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_00466920 */
/* Decompiled from Speed.exe @ 00466920 */
/* Module: Career_Game */
/* Ghidra DecompileAll */
typedef struct { int len; unsigned char* data; int cursor; } GameState; void __fastcall FUN_00466920(GameState* esi, int edx, int edi) { if (esi->cursor == edi) { int i = edi + 1; if (i < esi->len) { do { if (!((esi->data[i >> 3] >> (i & 7)) & 1)) break; i++; } while (i < esi->len); esi->cursor = i; } } esi->data[edi >> 3] |= (1 << (edi & 7)); }

