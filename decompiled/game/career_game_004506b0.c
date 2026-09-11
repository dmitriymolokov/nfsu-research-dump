/* spd-match: far pct=20.72 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.2-n5/va_004506B0 */
/* Decompiled from Speed.exe @ 004506b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */
struct Data { char pad[0x40]; char val; char pad2[3]; int limit; int pad3[0x43]; int offset150; }; extern void __stdcall fn_571ea0(void* p1, const char* p2); extern void __stdcall fn_571c20(void* p1, void* p2, int p3, int p4, int p5); extern void __stdcall fn_44e370(void* p1, void* p2); void __stdcall FUN_004506b0(int edi_val, int esi_val) { Data* esi = (Data*)esi_val; fn_571ea0(esi, "AIActionPass"); fn_571c20(esi, (void*)(edi_val + 0x208), 4, -1, 0); fn_571c20(esi, (void*)(edi_val + 0x204), 4, -1, 0); fn_44e370((void*)edi_val, esi); int* base = (int*)((char*)esi + (esi->val * 16) + 0x4c); base[3] = esi->offset150 - base[3]; esi->val--; if ((int)esi->val < esi->limit) esi->limit = -1; }

