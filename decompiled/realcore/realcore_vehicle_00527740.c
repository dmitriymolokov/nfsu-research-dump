/* spd-match: far pct=5.80 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_01/attempt2_symbol_extern */
#include "ghidra_compat.h"

extern const char s_SND__Nitrous_006bf0c0[];

int __cdecl FUN_005256f0();
int __cdecl FUN_00525730();
int __cdecl FUN_00527810();
extern int DAT_006f1dd8;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684d8b(void);
void *ExceptionList;

undefined4  FUN_00527740(int param_1)

{
  undefined4 uVar1;
  undefined4 in_stack_00000010;
  int local_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0xc) != '\0') && (DAT_006f1dd8 == 1)) {
    local_14 = (int)*(short *)(*(int *)(param_1 + 8) + 6);
    ExceptionList = &local_c;
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(&local_14,2);
    *(int *)(param_1 + 0x20) = local_14;
    FUN_00527810();
    PTR_s_CSISSOUND_006f8714 = s_SND__Nitrous_006bf0c0;
    iStack_10 = FUN_005256f0(0x18);
    uVar1 = 0;
    uStack_4 = 0;
    if (iStack_10 != 0) {
      uVar1 = FUN_00525730(in_stack_00000010,0);
    }
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  ExceptionList = local_c;
  return 0;
}
