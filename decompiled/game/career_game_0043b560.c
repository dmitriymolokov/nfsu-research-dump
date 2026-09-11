/* spd-match: far pct=13.29 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);

int __cdecl FUN_00401000(...);
int __cdecl FUN_00438ec0(...);
int __cdecl FUN_00438fe0(...);
int __cdecl FUN_004390d0(...);
int __cdecl FUN_0043b680(...);
int __cdecl FUN_0043b850(...);
extern void LAB_006861ab(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_0043b560(uint param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5);
};
void ThisCallBox::FUN_0043b560(uint param_2, undefined4 param_3, undefined1 param_4, undefined4 param_5) {
  int iVar1;
  undefined4 local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = (unsigned char *)(unsigned int)&LAB_006861ab;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0043b680();
  if (*(int *)(((int)this) + 8 + param_2 * 4) == 0) {
    iVar1 = FUN_00401000("OnlineRacer",0);
    local_8 = 0;
    if (iVar1 == 0) {
      local_2c = 0;
    }
    else {
      local_2c = FUN_00438ec0(param_2 & 0xff,param_4,param_5);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(((int)this) + 8 + param_2 * 4) = local_2c;
    FUN_004390d0(1);
    *(char *)(((int)this) + 0x18) = *(char *)(((int)this) + 0x18) + '\x01';
  }
  else {
    iVar1 = FUN_0043b850(param_2);
    if (*(char *)(iVar1 + 0x18) != '\0') {
      FUN_0043b850(param_2);
      FUN_00438fe0(param_5);
    }
  }
  ExceptionList = local_10;
  return;
}
