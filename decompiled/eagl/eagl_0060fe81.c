/* spd-match: close pct=82.69 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0060FE81 */
/* Decompiled from Speed.exe @ 0060fe81 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned int uint;struct Container { char pad[80]; uint val_50; unsigned short val_52; };int __stdcall FUN_0060fe81(struct Container *p, uint *target, int *status) { if ((p->val_50 & 0xffff) == 0xffff) { *status = 0; *target = p->val_52; } else { *status = 1; *target = *(uint*)((char*)p + 8); } return 0; }

