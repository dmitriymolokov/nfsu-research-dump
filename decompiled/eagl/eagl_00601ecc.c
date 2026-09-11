/* spd-match: far pct=16.05 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00601ECC */
/* Decompiled from Speed.exe @ 00601ecc */
/* Module: EAGL */
/* Ghidra DecompileModule */
typedef unsigned int uint; typedef unsigned char undefined1; typedef unsigned int undefined4; extern int __fastcall FUN_005f7a96(void); extern int __fastcall FUN_005f7ad9(void); extern int __fastcall FUN_005f7aeb(void); extern int __fastcall FUN_005f7ac7(void); extern int __fastcall FUN_005f7b0f(void); extern int __fastcall FUN_005f7b21(void); extern int __fastcall FUN_005f7b33(void); extern int __fastcall FUN_005f7b67(void); extern void __fastcall FUN_005fb7cf(unsigned int, void*, unsigned int, unsigned int); int __fastcall FUN_00601ecc(int ecx_this) { int* p_data; uint local_c; local_c = 0; if (*(int*)(ecx_this + 0xc) != 0) { do { p_data = *(int**)(*(int*)(ecx_this + 0x18) + local_c * 4); if (FUN_005f7a96() == 0) { unsigned int mask = (unsigned int)(*(unsigned int*)p_data & 0xffffff); if (FUN_005f7ad9() == 0) { if (FUN_005f7aeb() != 0) { FUN_005fb7cf(p_data[2], (void*)((char*)ecx_this - 48), mask, 1); } } } local_c++; } while (local_c < *(uint*)(ecx_this + 0xc)); } return 0; }

