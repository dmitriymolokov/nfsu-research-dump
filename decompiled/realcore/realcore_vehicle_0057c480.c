/* spd-match: far pct=5.48 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_0057c350(...);
int __cdecl FUN_0057c4f0(...);
int __cdecl FUN_0057c540(...);

struct ThisCallBox {
  undefined4 FUN_0057c480(undefined4 param_2, int param_3);
};
undefined4 ThisCallBox::FUN_0057c480(undefined4 param_2, int param_3) {
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  undefined4 local_4;
  
  if ((((int *)this)[2] - *((int *)this) < 0x100) && (((int *)this)[2] != ((int *)this)[4])) {
    FUN_0057c350();
  }
  iVar2 = FUN_0057c4f0(*((int *)this));
  *((int *)this) = iVar2;
  if (local_c != param_3) {
    FUN_0057c540();
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return local_4;
}
