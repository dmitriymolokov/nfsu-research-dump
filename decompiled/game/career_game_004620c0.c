/* spd-match: far pct=9.69 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0044a330();
int __cdecl FUN_0045dbb0();
int __cdecl FUN_00674898();
extern int DAT_007000f4;
extern unsigned char *PTR_FUN_006b9694;
extern unsigned char *PTR_FUN_006c89f0;
extern void LAB_006866fb(void);
void *ExceptionList;

undefined4 * FUN_004620c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006866fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044a330(param_1,unaff_EDI);
  *param_1 = &PTR_FUN_006c89f0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  local_4 = 0;
  param_1[0xfe] = 0;
  param_1[0x134] = 0;
  puVar1 = _malloc(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 4;
    *(undefined1 *)((int)puVar1 + 5) = 5;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 7) = 0;
    *puVar1 = &PTR_FUN_006b9694;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = puVar1 + 5;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  param_1[0x137] = puVar1;
  if (*(int *)(unaff_EDI + 0x24) == 3) {
    pvVar2 = _malloc(0x250);
    local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
    if (pvVar2 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0045dbb0(pvVar2,unaff_EDI);
    }
    param_1[2] = uVar3;
  }
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x135] = 0;
  uVar3 = FUN_00674898();
  param_1[0x136] = uVar3;
  uVar3 = DAT_007000f4;
  param_1[0x138] = 0;
  param_1[0x139] = 0;
  param_1[0x13a] = 0;
  *(undefined4 *)(unaff_EDI + 0x478) = uVar3;
  if (*(int *)(unaff_EDI + 0x28) == 1) {
    *(undefined4 *)(*(int *)(unaff_EDI + 0x34) + 0x78) = DAT_007000f4;
  }
  ExceptionList = local_c;
  return param_1;
}
