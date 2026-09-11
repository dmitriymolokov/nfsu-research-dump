/* spd-match: far pct=15.38 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_00567160(...);
int __cdecl FUN_005966d0(...);
extern void LAB_00686af8(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 FUN_00595230(undefined4 param_2, undefined4 param_3, undefined4 param_4);
};
undefined4 ThisCallBox::FUN_00595230(undefined4 param_2, undefined4 param_3, undefined4 param_4) {
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00686af8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_00567160(((undefined4)this));
  local_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005966d0(iVar1,param_2,param_3,param_4);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}
