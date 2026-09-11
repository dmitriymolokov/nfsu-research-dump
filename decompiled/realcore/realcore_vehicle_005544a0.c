/* spd-match: far pct=13.22 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/buckets/p0_04/attempt2_005544a0_thiscall */
#include "ghidra_compat.h"

extern unsigned char p08_DAT_006b9172;
extern char *p08_s_tsmiInvalid_master_account_name_006f2f38;
extern undefined4 *p08_DAT_00734f60;

int __cdecl FUN_00405550(...);
int __cdecl FUN_004134c0(...);
int __cdecl FUN_004174a0(...);
int __cdecl FUN_00452d10(...);
int __cdecl FUN_004ab510(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f78e0(...);
int __cdecl FUN_00549480(...);
int __cdecl FUN_00554730(...);
int __cdecl FUN_005556e0(...);
int __cdecl FUN_00555720(...);
int __cdecl FUN_005647b0(...);
int __cdecl FUN_00589260(...);
extern int DAT_00734f5c;
extern int DAT_0078e948;
extern void *PTR_LAB_006bcdec;
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_005544a0(undefined4 param_2);
};
undefined4 * ThisCallBox::FUN_005544a0(undefined4 param_2) {
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = (undefined1 *)(uintptr_t)0x006881b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f78e0(((undefined4 *)this),param_2);
  local_8 = 0;
  *((undefined4 *)this) = (undefined4)(uintptr_t)(&PTR_LAB_006bcdec);
  FUN_00589260(((undefined4 *)this),((undefined4 *)this) + 0x16);
  local_8 = ((local_8 & 0xffffff00u) | 1u);
  ((undefined4 *)this)[0x1a] = 0x33650b60;
  FUN_00405550();
  FUN_00405550();
  iVar2 = FUN_00549480();
  if (iVar2 == 0) {
    cVar1 = FUN_00452d10(&DAT_0078e948);
    if (cVar1 != '\0') {
      iVar2 = FUN_004ab510();
      *(undefined4 *)(iVar2 + 0x10) = 1;
    }
  }
  FUN_00554730();
  FUN_00555720();
  FUN_004174a0();
  for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
    ((undefined4 *)this)[local_18 + 0x10] = 0;
  }
  FUN_005556e0(0xda9a39d5,0);
  FUN_005556e0(0xda9a39d4,1);
  FUN_005556e0(0xda96ef8f,2);
  FUN_005556e0(0xda96ef8e,3);
  FUN_004134c0();
  uVar3 = FUN_004f65d0();
  p08_DAT_00734f60 = ((undefined4 *)this);
  p08_DAT_00734f60[0x14] = uVar3;
  DAT_00734f5c = 0;
  puVar4 = p08_DAT_00734f60;
  FUN_005647b0();
  *(undefined1 *)(puVar4 + 0x15) = 0;
  ExceptionList = local_10;
  return puVar4;
}
