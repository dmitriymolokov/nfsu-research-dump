/* spd-match: far pct=4.43 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.4-float/va_006299A0 */
/* Decompiled from Speed.exe @ 006299a0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
typedef unsigned short ushort; extern float DAT_006cc7a4; extern float _DAT_006a7eb0; int __stdcall FUN_006299a0(int this_ptr, float param_2) { float fVar; int iVar; int *p_i10 = (int*)(this_ptr + 0x10); int *p_i12 = (int*)(this_ptr + 0xc); ushort *pu = *(ushort **)(*p_i12 + 8); if (param_2 < DAT_006cc7a4) fVar = param_2 + _DAT_006a7eb0; else fVar = param_2 - _DAT_006a7eb0; iVar = (int)fVar; if (param_2 < (float)*pu) return 0; int idx = (*p_i10 < 1) ? 0 : (*p_i10 - 1); if (iVar < (int)pu[idx]) { while (idx > 0 && iVar < (int)pu[idx]) idx--; } else { int limit = *(ushort *)(*p_i12 + 0xc) - 2; if (idx < limit) { while ((int)pu[idx + 1] <= iVar) { idx++; if (idx >= limit) return idx + 1; } } } return idx + 1; }

