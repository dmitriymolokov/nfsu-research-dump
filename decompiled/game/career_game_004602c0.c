/* spd-match: far pct=7.07 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_0045dbb0(...);
int __cdecl FUN_00460e70(...);
int __cdecl FUN_00461520(...);
extern unsigned char *DAT_0073619c;
extern void *PTR_FUN_006c8b90;
extern void LAB_006868a9(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_004602c0(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_004602c0(undefined4 *param_2) {
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006868a9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0045dbb0(param_2,((int)this));
  local_4 = 0;
  *param_2 = (unsigned int)&PTR_FUN_006c8b90;
  FUN_00460e70();
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  if (*DAT_0073619c == 4) {
    (**(code **)(param_2[0x94] + 0x20))();
  }
  if (*(int *)(((int)this) + 0x18) != 0) {
    FUN_00461520();
  }
  *(undefined1 *)(param_2 + 0x144) = 0;
  ExceptionList = pvStack_c;
  return param_2;
}
