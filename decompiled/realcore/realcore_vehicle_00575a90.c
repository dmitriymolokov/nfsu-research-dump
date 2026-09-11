/* spd-match: far pct=22.52 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_00575A90 */
/* Decompiled from Speed.exe @ 00575a90 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */
typedef unsigned long DWORD; void __fastcall FUN_00575a90(void* p1, int edx, int ecx, int* param_4) { int iVar1; int* p_src_base; int* p_dst_base; int i; iVar1 = param_4[7]; if (iVar1 > 0 && iVar1 < 4) { p_src_base = (int*)((char*)ecx + (iVar1 * 64) + 0x570); p_dst_base = (int*)((char*)edx + 0xd0); for (i = 0; i < 8; i++) { p_dst_base[i] = p_src_base[i]; } p_dst_base = (int*)((char*)edx + 0xf0); p_src_base = (int*)((char*)p_src_base + 32); for (i = 0; i < 8; i++) { p_dst_base[i] = p_src_base[i]; } } if (param_4[18] != 0) { *(float*)((char*)edx + 0xdc) += *(float*)((char*)ecx + 0x830); *(float*)((char*)edx + 0xe0) += *(float*)((char*)ecx + 0x838); *(float*)((char*)edx + 0xfc) += *(float*)((char*)ecx + 0x834); *(float*)((char*)edx + 0x100) += *(float*)((char*)ecx + 0x83c); } }

