/* spd-match: far pct=20.44 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_005259e0();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
extern int DAT_006f1dd8;
extern unsigned char *DAT_00735624;
extern void LAB_00684d8b(void);
void *ExceptionList;

void __fastcall FUN_00530b80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  local_c = ExceptionList;
  if ((param_1[0xc9] == 0) && (DAT_006f1dd8 != 0)) {
    ExceptionList = &local_c;
    local_10 = param_1;
    FUN_0064b510(&local_10);
    FUN_0064b580();
    puVar1 = (**(undefined4 * (**)())*local_10)(0x18,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      local_10 = puVar1;
      uVar2 = FUN_005259e0(param_1[0xcd],param_1[199]);
    }
    param_1[0xc9] = uVar2;
    DAT_00735624 = DAT_00735624 + 1;
  }
  ExceptionList = local_c;
  return;
}
