/* spd-match: far pct=6.96 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_1 */
#include "ghidra_compat.h"

void FUN_00643b60(int param_1,uint param_2)

{
  byte bVk;
  ushort uVar1;
  DWORD dwFlags;
  DWORD dwFlags_00;
  
  dwFlags_00 = 0;
  dwFlags = 2;
  if (param_1 == 0) {
    bVk = 0x14;
    (*(unsigned char *)&(param_1)) = ':';
  }
  else if (param_1 == 1) {
    bVk = 0x90;
    (*(unsigned char *)&(param_1)) = 'E';
    dwFlags_00 = 1;
    dwFlags = 3;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    bVk = 0x91;
    (*(unsigned char *)&(param_1)) = 'F';
  }
  uVar1 = GetKeyState((uint)bVk);
  if ((uVar1 & 1) != param_2) {
    keybd_event(bVk,(BYTE)param_1,dwFlags_00,0);
    keybd_event(bVk,(BYTE)param_1,dwFlags,0);
  }
  return;
}
