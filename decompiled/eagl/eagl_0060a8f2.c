/* spd-match: far pct=13.68 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_0060A8F2 */
#include <stddef.h>
extern int __cdecl FUN_005fbec8(void* p1, int p2, int p3, const char* msg);
extern int __cdecl FUN_0061a3fb(int a1, int* a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int __fastcall FUN_0060a8f2(int* ecx_reg) {
  int* esi = ecx_reg;
  int eax = *(int*)((char*)esi + 0x98);
  int* piVar1 = *(int**)((char*)eax + 0x10);
  int local_8 = *(int*)((char*)eax + 0xc);
  int* piVar2;
  int i;
  int local_28[4];
  int local_18[4];
  int base_ptr = *(int*)((char*)eax + 8);
  for (i = 0; i < 4; i++) {
    local_28[i] = *(int*)(base_ptr + 0xc);
    local_18[i] = *(int*)(base_ptr + 0x1c);
  }
  piVar2 = *(int**)(*(int*)((char*)esi + 0x14) + (*piVar1 * 4));
  if (*piVar2 == *(int*)((char*)esi + 0x5c)) {
    if (piVar2[0x14] != 1) {
      FUN_005fbec8(esi, *(int*)((char*)eax + 0x34), 0x12cd, "internal error: unexpected output register");
      return -0x7fffbffb;
    }
    for (i = local_8; i > 0; i--) {
      *(int*)(*(int*)(*(int*)((char*)esi + 0x14) + (*piVar1 * 4)) + 8) = 0;
      **(int**)(*(int*)((char*)esi + 0x14) + (*piVar1 * 4)) = *(int*)((char*)esi + 0x60);
    }
  }
  eax = *(int*)(*(int*)((char*)esi + 0x98) + 8);
  eax = FUN_0061a3fb(8, piVar1, local_8, eax, eax + 0x10, 0, 2, 0, 0, 0);
  if (eax >= 0) {
    eax = FUN_0061a3fb(4, piVar1, local_8, (int)local_28, (int)local_18, (int)piVar1, local_8, 0, 0, 0);
  }
  return eax;
}
