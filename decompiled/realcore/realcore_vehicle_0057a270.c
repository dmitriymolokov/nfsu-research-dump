/* spd-match: far pct=5.56 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_005782b0(...);
int __cdecl FUN_00578660(...);
int __cdecl FUN_005796b0(...);
extern void *PTR_FUN_006ba5a8;
extern void LAB_00686f18(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_0057a270(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_0057a270(undefined4 *param_2) {
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00686f18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005782b0(param_2,"CarWorldObject");
  param_2[0x24] = ((undefined4)this);
  local_4 = 0;
  *param_2 = (unsigned int)&PTR_FUN_006ba5a8;
  FUN_005796b0(param_2 + 7,6,((undefined4)this));
  FUN_00578660(1);
  ExceptionList = local_c;
  return param_2;
}
