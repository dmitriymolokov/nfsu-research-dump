/* spd-match: far pct=14.86 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_005336c0(...);
int __cdecl FUN_005791c0(...);
extern int DAT_0072f5e8;
extern void *PTR_FUN_006be280;
extern void LAB_006852c8(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_005343e0(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_005343e0(undefined4 *param_2) {
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006852c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005336c0(param_2,((int)this));
  *param_2 = (unsigned int)&PTR_FUN_006be280;
  iVar3 = *(int *)(((int)this) + 0x1c);
  local_4 = 0;
  if (*(int *)(iVar3 + 0xe4) != 0) {
    FUN_005791c0();
  }
  uVar4 = DAT_0072f5e8;
  uVar1 = *(undefined4 *)(iVar3 + 0x44);
  uVar2 = *(undefined4 *)(iVar3 + 0x48);
  param_2[0x94] = *(undefined4 *)(iVar3 + 0x40);
  param_2[0x95] = uVar1;
  param_2[0x96] = uVar2;
  uVar1 = *(undefined4 *)(iVar3 + 0x44);
  uVar2 = *(undefined4 *)(iVar3 + 0x48);
  param_2[0x90] = *(undefined4 *)(iVar3 + 0x40);
  param_2[0x91] = uVar1;
  param_2[0x92] = uVar2;
  *(undefined1 *)(param_2 + 0xa0) = 0;
  param_2[0xa1] = uVar4;
  ExceptionList = local_c;
  return param_2;
}
