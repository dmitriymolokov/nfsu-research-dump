/* spd-match: far pct=15.57 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern int DAT_00701034;
extern int DAT_00701038;
extern int DAT_00702a80;
extern int DAT_0071a96c;
extern int DAT_0071a970;
extern int DAT_0071b208;
extern int DAT_0071b7a0;
extern int DAT_0073637c;
extern int DAT_00736380;
extern int DAT_007364b8;
extern int _DAT_0071a974;
extern int _DAT_0071a980;
extern int _DAT_0071a984;
extern int _DAT_0071a988;
extern int _DAT_0071a98c;
extern int _DAT_0071a990;
extern int _DAT_0071a994;
int unaff_ESI;

void FUN_004086b0(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  
  puVar2 = &DAT_0071a96c;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_0073637c != 0) {
    GetWindowRect(DAT_00736380,(LPRECT)&DAT_0071b7a0);
    GetClientRect(DAT_00736380,(LPRECT)&DAT_0071b208);
  }
  _DAT_0071a98c = DAT_0073637c;
  _DAT_0071a984 = 1;
  _DAT_0071a990 = 1;
  DAT_0071a96c = param_1;
  DAT_00701034 = param_1;
  DAT_0071a970 = unaff_ESI;
  _DAT_0071a974 = DAT_00702a80;
  _DAT_0071a994 = (-(uint)(DAT_007364b8 != 0) & 5) + 0x4b;
  _DAT_0071a988 = DAT_00736380;
  _DAT_0071a980 = 0;
  DAT_00701038 = unaff_ESI;
  return;
}
