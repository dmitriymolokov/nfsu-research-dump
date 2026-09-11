/* spd-match: far pct=14.06 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0055E030 */
#include "ghidra_compat.h"
extern int DAT_00777cb4;
int __cdecl FUN_004ab510(void);
int __cdecl FUN_0055dcf0(void);
int __cdecl FUN_0055e320(void);
void __fastcall FUN_0055e030(int val, int esi_ptr) {
  int iVar1;
  int iVar2;
  int* p_eax;
  int* ptr_70;
  int* ptr_obj;
  int* ptr_val;
  if ((DAT_00777cb4 == 0) || (DAT_00777cb4 == 2)) {
    iVar1 = FUN_004ab510();
    if (val == -0x6edfbf62) {
      p_eax = (int*)(iVar1 + 16);
      iVar2 = *p_eax - 1;
      *p_eax = iVar2;
      if (iVar2 < 2) *p_eax = 2;
      iVar1 = FUN_004ab510();
      ptr_70 = *(int**)(esi_ptr + 112);
      ptr_obj = *(int**)(ptr_70 + 3);
      ptr_val = (int*)((char*)ptr_obj + 108);
      *(int*)(iVar1 + 8) = (int)*(short*)ptr_val;
      *(int*)(iVar1 + 12) = *(int*)(ptr_70 + 6);
      FUN_0055dcf0();
      return;
    }
    if (val == -0x4a68e40f) {
      p_eax = (int*)(iVar1 + 16);
      iVar2 = *p_eax + 1;
      *p_eax = iVar2;
      if (10 < iVar2) *p_eax = 10;
      FUN_0055e320();
    }
  }
  FUN_0055dcf0();
}
