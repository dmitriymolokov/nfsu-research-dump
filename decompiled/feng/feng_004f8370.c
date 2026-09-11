/* spd-match: far pct=6.90 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_11/attempt2_thiscall */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_005ac68f();
int __cdecl FUN_005abda2();

int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f6910(...);
int __cdecl FUN_004f7260(...);
int __cdecl FUN_004f7350(...);
int __cdecl FUN_004f8680(...);
int __cdecl FUN_004f86c0(...);
int __cdecl FUN_004fd230(...);
int __cdecl FUN_004ffb70(...);
extern int DAT_0073578c;
extern void *PTR_FUN_006c1870;
extern void LAB_004f8446(...);
extern void LAB_00685aeb(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_004f8370(undefined4 *param_2, undefined4 param_3, undefined4 param_4);
};
undefined4 * ThisCallBox::FUN_004f8370(undefined4 *param_2, undefined4 param_3, undefined4 param_4) {
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00685aeb;
  local_c = ExceptionList;
  puVar1 = param_2 + 1;
  ExceptionList = &local_c;
  *param_2 = (unsigned int)&PTR_FUN_006c1870;
  *puVar1 = (unsigned int)puVar1;
  param_2[2] = (unsigned int)puVar1;
  local_4 = 0;
  puVar1 = (undefined4 *)_malloc(0x30);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[9] = 0x3f800000;
    puVar1[10] = 0x3f800000;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x2e) = 1;
  }
  param_2[4] = (unsigned int)puVar1;
  puVar1[9] = 0x3f000000;
  *(undefined2 *)(param_2[4] + 0x2e) = 0;
  param_2[7] = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[8] = ((int)this);
  param_2[9] = param_4;
  uVar2 = FUN_004fd230();
  if (((int)this) != 0) {
    iVar3 = FUN_004f65d0();
    if (iVar3 != 0) {
      iVar3 = FUN_004ffb70();
      if (iVar3 != 0) goto LAB_004f8446;
    }
  }
  if (DAT_0073578c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004ef050(uVar2);
  }
LAB_004f8446:
  param_2[10] = iVar3;
  FUN_004f7350(param_2 + 0xb,param_2 + 0xc);
  uVar2 = FUN_004f86c0();
  param_2[0xd] = uVar2;
  FUN_004f6910(param_2[10]);
  FUN_004f7260(param_2 + 5,param_2 + 6);
  FUN_004f8680();
  param_2[0xe] = 0;
  ExceptionList = local_c;
  return param_2;
}
