/* spd-match: close pct=83.33 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00612628 */
/* Decompiled from Speed.exe @ 00612628 */
/* Module: EAGL */
/* Ghidra DecompileAll */
struct Instance { unsigned char pad1[0x30]; unsigned int val1; unsigned char pad2[0x64]; void* pData; }; typedef struct Instance* PInstance; int __fastcall FUN_00612628(PInstance pThis) { unsigned int u = pThis->val1 & 0xffff; if (u < 0x200) { unsigned char* p = (unsigned char*)pThis->pData; if (p[3] != 0) return 0; } return 0; }

