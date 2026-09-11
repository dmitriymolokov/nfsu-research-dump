/* spd-match: far pct=7.23 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_0044a330(...);
int __cdecl FUN_00455270(...);
int __cdecl FUN_0045dbb0(...);
int __cdecl FUN_00567160(...);
extern int _DAT_006b5b8c;
extern int _DAT_006ccc2c;
extern void *PTR_FUN_006b96b0;
extern void LAB_006866fb(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_00582f90(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_00582f90(undefined4 *param_2) {
  short sVar1;
  int *piVar2;
  float fVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006866fb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044a330(param_2,((int)this));
  *param_2 = (unsigned int)&PTR_FUN_006b96b0;
  local_4 = 0;
  param_2[0x139] = 0;
  pvVar4 = _malloc(0x250);
  (*(unsigned char *)&(local_4)) = 1;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0045dbb0(pvVar4,((int)this));
  }
  param_2[2] = uVar5;
  sVar1 = *(short *)(((int)this) + 8);
  param_2[0xfe] = 0;
  param_2[0xfd] = 0x14;
  param_2[0x135] = 0;
  fVar3 = (float)(int)sVar1 * _DAT_006b5b8c;
  *(undefined1 *)(param_2 + 0x134) = 0;
  *(undefined1 *)((int)param_2 + 0x4d1) = 0;
  *(undefined1 *)((int)param_2 + 0x4d2) = 0;
  fVar3 = fVar3 * _DAT_006ccc2c;
  *(undefined1 *)(param_2 + 0x136) = 0xff;
  param_2[0x137] = 0x41c4b127;
  param_2[0x138] = 0;
  param_2[0xfc] = fVar3;
  param_2[0x139] = 0;
  piVar2 = (int *)param_2[0xf5];
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  if (piVar2 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar2 + 4))();
    if (iVar6 == 0) {
      ExceptionList = pvStack_c;
      return param_2;
    }
    (**(code **)*piVar2)(1);
  }
  iVar6 = FUN_00567160();
  if (iVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00455270();
  }
  param_2[0xf5] = uVar5;
  ExceptionList = pvStack_c;
  return param_2;
}
