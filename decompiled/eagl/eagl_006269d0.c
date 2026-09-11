/* spd-match: far pct=43.75 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_006269D0 */
/* Decompiled from Speed.exe @ 006269d0 */
/* Module: EAGL */
/* Ghidra DecompileAll */
typedef unsigned int uint; extern void __stdcall FUN_00626820(uint); struct S { uint pad1[5]; uint *a1; uint pad2[1]; uint *a2; }; void __stdcall FUN_006269d0(struct S *ecx_reg, uint idx) { uint *obj = (uint *)ecx_reg->a1; uint off = ecx_reg->pad1[8]; uint *sub = (uint *)obj[off]; uint *ptr = (uint *)sub[3]; FUN_00626820(ptr[idx]); }

