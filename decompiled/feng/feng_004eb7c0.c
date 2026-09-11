/* spd-match: far pct=13.78 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_9/buckets/p09_feng/attempt4_eb7c0_v2 */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_0041f0c0(...);
int __cdecl FUN_0041f160(...);
int __cdecl FUN_004ebf20(...);
int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f78e0(...);
int __cdecl FUN_004ffb70(...);
extern int DAT_0073578c;
extern int DAT_00735ba8;
extern int DAT_00735da4;
extern int DAT_00777c10;
extern void *PTR_LAB_006c2d28;
extern void LAB_006879c3(...);
void *ExceptionList;

struct ThisCallBox {
  undefined4 * FUN_004eb7c0(undefined4 *param_2);
};
undefined4 * ThisCallBox::FUN_004eb7c0(undefined4 *param_2) {
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_006879c3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_2,((int)this));
  local_4 = 0;
  *param_2 = (unsigned int)&PTR_LAB_006c2d28;
  FUN_0041f0c0();
  local_4 = ((local_4 & 0xffffff00u) | 1u);
  param_2[0x11] = *(undefined4 *)(((int)this) + 4);
  FUN_004ebf20(&DAT_00777c10);
  DAT_00735ba8 = 0;
  DAT_00735da4 = (int)(unsigned int)param_2;
  uVar1 = FUN_004f65d0();
  param_2[0x94] = (int)(unsigned int)uVar1;
  FUN_0041f160(0x43225720,0x13bba3b,0,0x32);
  param_2[0x8e] = 0x406415e3;
  param_2[0x90] = 0;
  if (((param_2[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      ExceptionList = local_c;
      return param_2;
    }
    iVar2 = FUN_004ef050(0x43225720);
    if (iVar2 == 0) {
      ExceptionList = local_c;
      return param_2;
    }
  }
  if (*(int *)(iVar2 + 0x18) == 2) {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x20;
  }
  ExceptionList = local_c;
  return param_2;
}
