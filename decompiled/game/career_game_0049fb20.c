/* spd-match: far pct=7.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_0043a2e0();
int __cdecl FUN_0049f8b0();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f78e0();
extern int DAT_006cc568;
extern int DAT_007361b4;
extern unsigned char *DAT_0077b244;
extern unsigned char *PTR_LAB_006c7598;
extern void LAB_00688473(void);
void *ExceptionList;

undefined4 * FUN_0049fb20(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688473;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_LAB_006c7598;
  FUN_0049f8b0(param_1 + 0x10,param_1[3]);
  iVar2 = DAT_007361b4;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),1);
  cVar1 = FUN_0043a2e0();
  if (cVar1 == '\0') {
    iVar2 = iVar2 + 0x34;
  }
  else {
    iVar2 = DAT_0077b244 + 0x19;
  }
  FUN_004f6850(&DAT_006cc568,iVar2);
  ExceptionList = local_c;
  return param_1;
}
