/* spd-match: far pct=29.46 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00536D60 */
/* Decompiled from Speed.exe @ 00536d60 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned char byte; extern byte DAT_00743ce0; extern byte DAT_00743cfc; extern byte DAT_00743d0b; extern byte DAT_00743cb4; extern byte DAT_00743cdc; extern byte DAT_00743d00; extern byte DAT_00743d12; extern byte DAT_00743d0a; void FUN_00536d60(void) { int i, j; for (i = 0; i < 0x510; i += 0x6c) { for (j = 0; j < 8; ++j) { int *ptr = (int*)((byte*)&DAT_00743ce0 + i + j * 4); if (*ptr == -1) { *ptr = *(int*)((byte*)&DAT_00743cfc + i + j * 4); *((byte*)&DAT_00743d0b + i + j) = 1; } else { *((byte*)&DAT_00743d0b + i + j) = 0; } } for (j = 0; j < 11; ++j) { int *ptr = (int*)((byte*)&DAT_00743cb4 + i + j * 4); if (*ptr == -1) { *ptr = *(int*)((byte*)&DAT_00743cdc + i + j * 4); *((byte*)&DAT_00743d00 + i + j) = 1; } else { *((byte*)&DAT_00743d00 + i + j) = 0; } } *((byte*)&DAT_00743d12 + i) = 1; *((byte*)&DAT_00743d0a + i) = 1; } }

