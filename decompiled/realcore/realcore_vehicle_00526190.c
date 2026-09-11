/* spd-match: far pct=16.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_1_3 */
#include "ghidra_compat.h"

int __cdecl FUN_00527270();
int __cdecl FUN_005276c0();
int __cdecl FUN_00528c90();
int __cdecl FUN_0052a650();
int __cdecl FUN_0052cbd0();
int __cdecl FUN_00534ab0();
int __cdecl FUN_00535530();
extern unsigned char *PTR_FUN_006b9694;
extern unsigned char *PTR_FUN_006be310;
extern unsigned char *PTR_FUN_006be3b0;
extern unsigned char *PTR_FUN_006beeb0;
extern unsigned char *PTR_LAB_006be7c4;
extern unsigned char *PTR_LAB_006be7d8;
extern unsigned char *PTR_LAB_006bee80;
extern unsigned char *PTR_LAB_006bef4c;
extern unsigned char *PTR_LAB_006bf478;
extern unsigned char *PTR_LAB_006c7d78;
extern void LAB_006857d4(void);
void *ExceptionList;

void __fastcall FUN_00526190(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006857d4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006beeb0;
  param_1[8] = &PTR_LAB_006bee80;
  local_4 = 10;
  param_1[0x7d4] = &PTR_FUN_006b9694;
  if ((undefined4 *)param_1[0x7d8] != param_1 + 0x7d9) {
    _free((undefined4 *)param_1[0x7d8]);
  }
  param_1[0x7d4] = &PTR_LAB_006c7d78;
  param_1[0x7ca] = &PTR_FUN_006b9694;
  if ((undefined4 *)param_1[0x7ce] != param_1 + 1999) {
    _free((undefined4 *)param_1[0x7ce]);
  }
  param_1[0x7ca] = &PTR_LAB_006c7d78;
  FUN_00528c90();
  param_1[0x695] = &PTR_FUN_006b9694;
  if ((undefined4 *)param_1[0x699] != param_1 + 0x69a) {
    _free((undefined4 *)param_1[0x699]);
  }
  param_1[0x695] = &PTR_LAB_006c7d78;
  param_1[0x67d] = &PTR_LAB_006bef4c;
  local_4 = CONCAT31(((unsigned int)(local_4) >> 8),7);
  FUN_0052a650();
  FUN_0052cbd0();
  param_1[0x49f] = &PTR_FUN_006b9694;
  if ((undefined4 *)param_1[0x4a3] != param_1 + 0x4a4) {
    _free((undefined4 *)param_1[0x4a3]);
  }
  param_1[0x49f] = &PTR_LAB_006c7d78;
  (*(unsigned char *)&(local_4)) = 4;
  FUN_005276c0();
  (*(unsigned char *)&(local_4)) = 3;
  FUN_00527270();
  (*(unsigned char *)&(local_4)) = 2;
  param_1[0x328] = &PTR_FUN_006be310;
  FUN_00534ab0();
  (*(unsigned char *)&(local_4)) = 1;
  param_1[0x204] = &PTR_FUN_006be3b0;
  FUN_00534ab0();
  local_4 = (uint)((unsigned int)(local_4) >> 8) << 8;
  FUN_00535530();
  param_1[8] = &PTR_LAB_006be7d8;
  param_1[8] = &PTR_LAB_006be7c4;
  *param_1 = &PTR_LAB_006bf478;
  ExceptionList = local_c;
  return;
}
