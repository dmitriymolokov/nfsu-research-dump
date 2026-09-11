/* spd-match: far pct=13.71 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004BC830 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057f2b0();
void __fastcall FUN_004bc830(int obj, int param_1)

{

  int *piVar1;
  int local_d8 [54];
  
  piVar1 = local_d8;
  local_d8[0x34] = 8;
  local_d8[0x10] = 8;
  local_d8[0x22] = 8;
  local_d8[0x24] = 0;
  local_d8[0x25] = 2;
  local_d8[0x26] = 1;
  local_d8[0x27] = 2;
  local_d8[0x28] = 2;
  local_d8[0x29] = 2;
  local_d8[0x2a] = 3;
  local_d8[0x2b] = 2;
  local_d8[0x2c] = 4;
  local_d8[0x2d] = 2;
  local_d8[0x2e] = 5;
  local_d8[0x2f] = 2;
  local_d8[0x30] = 6;
  local_d8[0x31] = 2;
  local_d8[0x32] = 7;
  local_d8[0x33] = 2;
  local_d8[0x35] = 2;
  local_d8[0] = 0;
  local_d8[1] = 2;
  local_d8[2] = 1;
  local_d8[3] = 2;
  local_d8[4] = 2;
  local_d8[5] = 2;
  local_d8[6] = 3;
  local_d8[7] = 2;
  local_d8[8] = 4;
  local_d8[9] = 2;
  local_d8[10] = 5;
  local_d8[0xb] = 2;
  local_d8[0xc] = 6;
  local_d8[0xd] = 2;
  local_d8[0xe] = 7;
  local_d8[0xf] = 2;
  local_d8[0x11] = 2;
  local_d8[0x12] = 0;
  local_d8[0x13] = 2;
  local_d8[0x14] = 1;
  local_d8[0x15] = 2;
  local_d8[0x16] = 2;
  local_d8[0x17] = 2;
  local_d8[0x18] = 3;
  local_d8[0x19] = 2;
  local_d8[0x1a] = 4;
  local_d8[0x1b] = 2;
  local_d8[0x1c] = 5;
  local_d8[0x1d] = 2;
  local_d8[0x1e] = 6;
  local_d8[0x1f] = 2;
  local_d8[0x20] = 7;
  local_d8[0x21] = 2;
  local_d8[0x23] = 2;
  if (param_1 == 3) {
    piVar1 = local_d8 + 0x24;
  }
  else if (param_1 != 6) {
    if (param_1 != 8) {
      return;
    }
    piVar1 = local_d8 + 0x12;
  }
  *(int *)(obj + 8 + *piVar1 * 4) = piVar1[1];
  *(int *)(obj + 8 + piVar1[2] * 4) = piVar1[3];
  *(int *)(obj + 8 + piVar1[4] * 4) = piVar1[5];
  *(int *)(obj + 8 + piVar1[6] * 4) = piVar1[7];
  *(int *)(obj + 8 + piVar1[8] * 4) = piVar1[9];
  *(int *)(obj + 8 + piVar1[10] * 4) = piVar1[0xb];
  *(int *)(obj + 8 + piVar1[0xc] * 4) = piVar1[0xd];
  *(int *)(obj + 8 + piVar1[0xe] * 4) = piVar1[0xf];
  *(int *)(obj + 8 + piVar1[0x10] * 4) = piVar1[0x11];
  FUN_0057f2b0(1);
  return;
}
