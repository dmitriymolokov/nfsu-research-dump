/* spd-match: far pct=3.88 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00482F06 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0047fcc0(...);
extern void *PTR_LAB_00482fa0;
int unaff_EBX;

struct ThisCallBox {
  void FUN_00482f06(int obj, undefined4 param_2, undefined4 param_3, int param_4);
};
void ThisCallBox::FUN_00482f06(int obj, undefined4 param_2, undefined4 param_3, int param_4)

{

  uint uVar1;
  uint unaff_EBX;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (in_ZF || in_OF != in_SF) {
    return;
  }
  uVar1 = unaff_EBX;
  if (*((int *)this) == 0x12345678) {
    uVar1 = ((int *)this)[1];
    if (4 < uVar1) {
      uVar1 = (obj + -8) / 0;
      if (uVar1 == unaff_EBX) {
        return;
      }
      if (0x27 < (int)uVar1) {
        uVar1 = 0x28;
      }
      *(uint *)(param_4 + 0xcb0) = uVar1;
      if ((int)uVar1 <= (int)unaff_EBX) {
        return;
      }
      do {
        FUN_0047fcc0();
        unaff_EBX = unaff_EBX + 1;
      } while ((int)unaff_EBX < *(int *)(param_4 + 0xcb0));
      return;
    }
  }
                    
                    
  (*(code *)(&PTR_LAB_00482fa0)[uVar1])();
  return;
}
