/* spd-match: far pct=73.33 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00622820 */
/* Decompiled from Speed.exe @ 00622820 */
/* Module: EAGL */
/* Ghidra DecompileAll */
#define DAT_00709D80 (*(void***)0x00709D80)

typedef void (__stdcall *VTableFunc)(void*, void*, void*, void*);

void __stdcall FUN_00622820(void* p1, void* p2, void* p3) {
  void** vtable = *DAT_00709D80;
  VTableFunc func = (VTableFunc)vtable[0x16c / 4];
  func(DAT_00709D80, p1, p2, p3);
}

