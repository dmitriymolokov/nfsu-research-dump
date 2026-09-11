/* spd-match: far pct=5.92 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_004fec30(...);
extern void *PTR_FUN_006c1834;
extern void *PTR_LAB_006c2c4c;
extern void LAB_00685ad3(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_004fbd00(undefined4 *param_2, char param_3, undefined4 param_4);
};
undefined4 * ThisCallBox::FUN_004fbd00(undefined4 *param_2, char param_3, undefined4 param_4) {
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00685ad3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004fec30(param_2,((int)this),param_4);
  *param_2 = (unsigned int)&PTR_FUN_006c1834;
  param_2[0x16] = (unsigned int)&PTR_LAB_006c2c4c;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x17] = 0;
  local_4 = 1;
  if (param_3 != '\0') {
    for (piVar1 = *(int **)(((int)this) + 0x60); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar4 = (**(code **)(*piVar1 + 4))(param_4);
      iVar2 = param_2[0x19];
      if (iVar4 != 0) {
        if (iVar2 == 0) {
          iVar3 = param_2[0x18];
          *(int *)(iVar4 + 4) = iVar3;
          if (iVar3 != 0) {
            *(int *)(iVar3 + 8) = iVar4;
          }
          *(undefined4 *)(iVar4 + 8) = 0;
          param_2[0x18] = iVar4;
        }
        else {
          iVar3 = *(int *)(iVar2 + 4);
          *(int *)(iVar4 + 4) = iVar3;
          if (iVar3 != 0) {
            *(int *)(iVar3 + 8) = iVar4;
          }
          *(int *)(iVar4 + 8) = iVar2;
          *(int *)(iVar2 + 4) = iVar4;
        }
        if (param_2[0x19] == iVar2) {
          param_2[0x19] = iVar4;
        }
        param_2[0x17] = param_2[0x17] + 1;
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}
