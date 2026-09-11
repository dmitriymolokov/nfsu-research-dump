/* spd-match: far pct=5.77 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_0064e2f0();
int __cdecl FUN_0064e330();
int __cdecl FUN_00655880();
int __cdecl FUN_00656d70();
extern int DAT_00713ca4;
extern int DAT_00713d9a;
extern int DAT_00713db7;
extern int DAT_00713db8;
extern int DAT_00714080;
extern int DAT_00714084;
extern int DAT_00714088;
extern int _DAT_006ccac0;
extern int _DAT_006ea004;
extern int _DAT_00713ff8;

void FUN_00654050(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  param_1 = (int *)*param_1;
  for (uVar2 = param_2; 0 < (int)uVar2; uVar2 = uVar2 - uVar1) {
    if ((int)DAT_00714080 < 1) {
      DAT_00714084 = ((int)DAT_00714084) + 1;
      FUN_0064e330();
      _DAT_006ea004 = ((int)_DAT_00713ff8) + _DAT_006ea004;
      DAT_00713ca4 = (uint)ROUND(_DAT_006ea004);
      if (_DAT_006ccac0 < _DAT_006ea004) {
        _DAT_006ea004 = ((int)_DAT_006ea004) - _DAT_006ccac0;
      }
      param_2 = DAT_00713ca4;
      FUN_0064e2f0();
      DAT_00714080 = (int)((uint)((int)DAT_00713d9a) * ((int)DAT_00714084)) / 100 - ((int)DAT_00714088) & 0xffffff0;
      DAT_00714088 = ((int)DAT_00714088) + DAT_00714080;
      if (30000 < DAT_00714084) {
        DAT_00714084 = 0;
        DAT_00714088 = 0;
      }
    }
    uVar1 = DAT_00714080;
    if ((int)uVar2 <= (int)DAT_00714080) {
      uVar1 = uVar2;
    }
    DAT_00714080 = ((int)DAT_00714080) - uVar1;
    FUN_00656d70(&param_1,uVar1);
    FUN_00655880();
    param_1 = (int *)((int)param_1 + ((uint)((int)DAT_00713db8) + (uint)DAT_00713db7) * uVar1 * 2);
  }
  return;
}
