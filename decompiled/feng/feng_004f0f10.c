/* spd-match: far pct=11.02 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F0F10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004faf30();
int __cdecl FUN_004fb210();
undefined4 __fastcall FUN_004f0f10(uint val, int param_1)

{

  if (val < 0xe10c4afa) {
    if (val == 0xe10c4af9) {
      FUN_004fb210(param_1,param_1 + 0x70,param_1 + 0x78,*(undefined4 *)(param_1 + 0x68),
                   *(undefined4 *)(param_1 + 0x5c),1);
      FUN_004fb210(param_1,param_1 + 0x74,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x6c),
                   *(undefined4 *)(param_1 + 0x60),0);
      return 1;
    }
    if (val == 0x30471ac) {
      FUN_004faf30(1,0);
      return 1;
    }
    if (val == 0xe10814a6) {
      FUN_004faf30(0,1);
      return 1;
    }
  }
  else if (val == 0xfb814f13) {
    FUN_004fb210(param_1,param_1 + 0x70,param_1 + 0x78,*(undefined4 *)(param_1 + 0x68),
                 *(undefined4 *)(param_1 + 0x5c),1);
    FUN_004fb210(param_1,param_1 + 0x74,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x6c),
                 *(undefined4 *)(param_1 + 0x60),0);
    return 1;
  }
  return 0;
}
