/* spd-match: far pct=6.31 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_0044e2b0(...);
int __cdecl FUN_00647b70(...);
extern int DAT_0073ad34;
extern int _DAT_006b76c0;
extern void *PTR_FUN_006c911c;
int unaff_EDI;
extern void LAB_00686048(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_00452990(undefined4 *param_2, undefined4 param_3, undefined4 param_4, float param_5);
};
undefined4 * ThisCallBox::FUN_00452990(undefined4 *param_2, undefined4 param_3, undefined4 param_4, float param_5) {
  float fVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00686048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044e2b0(2,((undefined4)this),param_3);
  fVar1 = ((float)(unsigned int)(_DAT_006b76c0)) + param_5;
  *param_2 = (unsigned int)&PTR_FUN_006c911c;
  iVar3 = 0;
  param_2[0x84] = 0;
  param_2[0x85] = fVar1;
  param_2[0x80] = unaff_EDI;
  param_2[0x81] = param_5;
  param_2[0x83] = param_4;
  param_2[0x84] = DAT_0073ad34;
  local_4 = 0;
  iVar2 = FUN_00647b70();
  if ((iVar2 == 6) &&
     (*(int *)(*(int *)(*(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x90) + 0x14) + 4) == 3)) {
    iVar2 = FUN_00647b70();
    if (iVar2 == 6) {
      iVar3 = *(int *)(*(int *)(*(int *)(unaff_EDI + 0x1d4) + 0x90) + 0x2c);
    }
    param_2[0x82] = *(undefined4 *)(iVar3 + 0x4e0);
  }
  else {
    param_2[0x82] = 0;
  }
  ExceptionList = local_c;
  return param_2;
}
