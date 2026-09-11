/* spd-match: far pct=8.42 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_00 */
#include "ghidra_compat.h"

int __cdecl FUN_00567160();
int __cdecl FUN_0058a4c0();
extern int DAT_00737bbc;
extern unsigned char *DAT_00737bc0;
extern void LAB_006866c8(void);
void *ExceptionList;

undefined4 
FUN_0058aba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006866c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00567160(param_1);
  local_4 = 0;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_0058a4c0(param_3,param_5,param_6,param_7);
  }
  *DAT_00737bc0 = puVar3;
  puVar1 = puVar3;
  puVar3[1] = DAT_00737bc0;
  DAT_00737bc0 = puVar1;
  *puVar3 = &DAT_00737bbc;
  ExceptionList = local_c;
  return puVar3[0x19];
}
