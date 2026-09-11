/* spd-match: far pct=42.70 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0054CF80 */
/* Decompiled from Speed.exe @ 0054cf80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
void __fastcall FUN_0054cf80(int this, int *src) { char *dst = (char *)(this + 0x84); *(int *)(this + 0x78) = 0; *(int *)(this + 0x7c) = 0; *(int *)(this + 0x80) = 0; *dst = 0; if (src) { *(int *)(this + 0x78) = src[2]; *(int *)(this + 0x7c) = src[1]; *(int *)(this + 0x80) = src[0]; if (src[3]) { int count = 0x200; int offset = src[3] - (int)dst; do { char c = *(char *)(offset + (int)dst); *dst = c; if (!c) break; dst++; count--; } while (count > 0); } } }

