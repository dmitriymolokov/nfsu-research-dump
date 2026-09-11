/* spd-match: far pct=9.23 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_00514350(...);
extern void LAB_00684ceb(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_005009a0(undefined4 param_2);
};
undefined4 ThisCallBox::FUN_005009a0(undefined4 param_2) {
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00684ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x74);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_00514350(pvVar1,((undefined4)this),param_2);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}
