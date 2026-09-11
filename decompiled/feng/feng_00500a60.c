/* spd-match: far pct=3.70 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p2/buckets/p2_02/attempt3_malloc_vtable_bridge */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_004fec30(...);
extern void *PTR_FUN_006c17c0;
extern void LAB_00684ceb(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_00500a60(undefined4 param_2);
};
undefined4 * ThisCallBox::FUN_00500a60(undefined4 param_2) {
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00684ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = (undefined4 *)_malloc(0x5c);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004fec30(puVar1,((int)this),param_2);
    *puVar1 = (unsigned int)&PTR_FUN_006c17c0;
    puVar1[0x16] = *(undefined4 *)(((int)this) + 0x58);
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}
