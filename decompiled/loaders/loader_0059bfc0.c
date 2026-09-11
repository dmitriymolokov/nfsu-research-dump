/* spd-match: far pct=5.96 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_00457060(...);
int __cdecl FUN_00460e70(...);
int __cdecl FUN_0059bbc0(...);
int __cdecl FUN_005a5340(...);
extern int DAT_0078a2fc;
extern void *PTR_FUN_006b8968;
extern void LAB_00684a08(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_0059bfc0(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_0059bfc0(undefined4 *param_2) {
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00684a08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bbc0(param_2,((undefined4)this));
  *param_2 = (unsigned int)&PTR_FUN_006b8968;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0xffffffff;
  local_4 = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0xffffffff;
  pvVar1 = _malloc(0x2c0);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00460e70();
  }
  param_2[2] = uVar2;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x15] = DAT_0078a2fc;
  param_2[0x11] = 0;
  FUN_00457060(param_2 + 0x11);
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0xffffffff;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0xffffffff;
  FUN_005a5340();
  ExceptionList = local_c;
  return param_2;
}
