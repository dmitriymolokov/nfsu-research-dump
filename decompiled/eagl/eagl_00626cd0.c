/* spd-match: far pct=75.76 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00626CD0 */
typedef unsigned int undefined4;
extern void __stdcall FUN_00628eb0();
void* __fastcall FUN_00626cd0(void* ecx) {
  void* esi = ecx;
  FUN_00628eb0();
  *(undefined4*)((char*)esi + 0x10) = 0;
  *(undefined4*)((char*)esi + 0x14) = 0;
  *(unsigned int*)esi = 0x006a7ae0;
  *(undefined4*)((char*)esi + 0x08) = 1;
  return esi;
}
