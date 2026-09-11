/* spd-match: far pct=21.72 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0062BE20 */
/* Decompiled from Speed.exe @ 0062be20 */
/* Module: EAGL */
/* Ghidra DecompileAll */
void FID_conflict__wprintf(char*); extern int LAB_0062ba70, LAB_0062bab0, LAB_0062bae0, LAB_0062bb70, LAB_0062bc80; void FUN_0062bc20(); void FUN_0062be20(int* p) { int n = p[1]; int* ptr = &p[4]; int i = 0; if (n > 0) do { int sub = *ptr++; i++; if(sub > 0) { i += sub; do { int v = *ptr; if(v == 0) *ptr = (int)&LAB_0062ba70; else if(v == 1) *ptr = (int)FUN_0062bc20; else if(v == 2) *ptr = (int)&LAB_0062bab0; else FID_conflict__wprintf("Bad signature channel type\n"); ptr++; sub--; } while(sub > 0); } } while(i < n); ptr = &p[4 + n]; i = 0; if (n > 0) do { int sub = *ptr++; i++; if(sub > 0) { i += sub; do { int v = *ptr; if(v == 0) *ptr = (int)&LAB_0062bae0; else if(v == 1) *ptr = (int)&LAB_0062bc80; else if(v == 2) *ptr = (int)&LAB_0062bb70; else FID_conflict__wprintf("Bad signature channel type\n"); ptr++; sub--; } while(sub > 0); } } while(i < n); }

