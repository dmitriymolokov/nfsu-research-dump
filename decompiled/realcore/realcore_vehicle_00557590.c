/* spd-match: far pct=9.23 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f6910(...);
int __cdecl FUN_004f78e0(...);
int __cdecl FUN_004ffb70(...);
int __cdecl FUN_00674898(...);
extern int DAT_0073578c;
extern void *PTR_FUN_006bcd20;
extern void LAB_0055760d(...);
extern void LAB_00688528(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_00557590(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_00557590(undefined4 *param_2) {
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_2,((int)this));
  *param_2 = (unsigned int)&PTR_FUN_006bcd20;
  param_2[0x11] = 0;
  local_4 = 0;
  param_2[0x10] = *(undefined4 *)(((int)this) + 4);
  if (param_2[3] != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_0055760d;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0x8e801f01);
  }
LAB_0055760d:
  FUN_004f6910(iVar1);
  uVar2 = FUN_00674898();
  param_2[0x11] = uVar2;
  ExceptionList = local_c;
  return param_2;
}
