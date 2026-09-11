/* spd-match: far pct=15.19 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_004134a0(...);
int __cdecl FUN_00554360(...);
int __cdecl FUN_005543a0(...);
int __cdecl FUN_00567270(...);
extern void LAB_00684cd3(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_00555ce0(undefined4 param_2, undefined4 param_3);
};
void ThisCallBox::FUN_00555ce0(undefined4 param_2, undefined4 param_3) {
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = (unsigned char *)(unsigned int)&LAB_00684cd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004134a0("OnlineSelectableTrack",0);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_00554360(param_2,param_3);
  }
  local_8 = 0xffffffff;
  FUN_00567270();
  *(int *)(((int)this) + 100) = *(int *)(((int)this) + 100) + 1;
  FUN_005543a0();
  ExceptionList = local_10;
  return;
}
