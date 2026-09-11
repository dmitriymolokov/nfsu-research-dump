/* spd-match: far pct=5.21 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047F9E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0047f9e0(int * obj, int *param_1)

{

  int *piVar1;
  int iVar2;
  
  iVar2 = *param_1;
  *obj = iVar2;
  obj[1] = (int)(param_1 + 1);
  piVar1 = param_1 + 9;
  if (iVar2 == 0) {
    obj[0x19] = *piVar1;
    obj[0x1a] = param_1[10];
    obj[0x1b] = param_1[0xb];
    obj[0x1c] = param_1[0xc];
    obj[0x1d] = param_1[0xd];
    obj[0x1e] = param_1[0xe];
    obj[0x1f] = param_1[0xf];
    obj[0x20] = param_1[0x10];
    obj[0x21] = param_1[0x11];
    obj[0x22] = param_1[0x12];
    obj[0x23] = param_1[0x13];
    obj[0x24] = param_1[0x14];
    obj[0x25] = param_1[0x15];
    obj[5] = param_1[0x16];
    obj[8] = param_1[0x17];
    obj[10] = param_1[0x18];
    obj[0xb] = param_1[0x19];
    obj[2] = param_1[0x1a];
    obj[3] = param_1[0x1b];
    obj[4] = param_1[0x1c];
    obj[0x10] = param_1[0x1d];
    obj[0x12] = param_1[0x1e];
    obj[0x14] = param_1[0x1f];
    obj[0x26] = param_1[0x20];
    obj[0x27] = param_1[0x21];
    obj[0xc] = param_1[0x22];
    obj[0xd] = param_1[0x23];
    obj[0xe] = param_1[0x24];
    obj[0x28] = param_1[0x25];
    obj[0xf] = (int)(param_1 + 0x28);
    param_1 = param_1 + 0xa8;
    obj[0x15] = (int)param_1;
    param_1 = param_1 + obj[0x14] * 4;
    obj[0x16] = (int)param_1;
    obj[0x11] = (int)(param_1 + obj[0x14] * 4 + obj[0x12] * 4);
    obj[6] = 0;
    obj[0x17] = 0;
    obj[9] = 0;
    obj[0x18] = 0;
    obj[0x13] = (int)(param_1 + obj[0x14] * 4);
    return;
  }
  if (iVar2 == 1) {
    obj[5] = *piVar1;
    obj[6] = param_1[10];
    obj[8] = param_1[0xb];
    obj[9] = param_1[0xc];
    obj[10] = param_1[0xd];
    obj[0xb] = param_1[0xe];
    obj[2] = param_1[0xf];
    obj[3] = param_1[0x10];
    obj[4] = param_1[0x11];
    obj[0x10] = param_1[0x12];
    obj[0x12] = param_1[0x13];
    obj[0x14] = param_1[0x14];
    obj[0x17] = param_1[0x15];
    obj[0xc] = param_1[0x16];
    obj[0xd] = param_1[0x17];
    iVar2 = param_1[0x18];
  }
  else {
    if (iVar2 != 2) {
      return;
    }
    obj[5] = *piVar1;
    obj[6] = param_1[10];
    obj[7] = param_1[0xb];
    obj[8] = param_1[0xc];
    obj[9] = param_1[0xd];
    obj[10] = param_1[0xe];
    obj[0xb] = param_1[0xf];
    obj[2] = param_1[0x10];
    obj[3] = param_1[0x11];
    obj[4] = param_1[0x12];
    obj[0x10] = param_1[0x13];
    obj[0x12] = param_1[0x14];
    obj[0x14] = param_1[0x15];
    obj[0x17] = param_1[0x16];
    obj[0xc] = param_1[0x17];
    obj[0xd] = param_1[0x18];
    iVar2 = param_1[0x19];
  }
  obj[0x28] = 0;
  obj[0x1d] = 0;
  obj[0x1c] = 0;
  obj[0x1b] = 0;
  obj[0x1a] = 0;
  obj[0x19] = 0;
  obj[0xf] = (int)(param_1 + 0x1c);
  param_1 = param_1 + 0x9c;
  obj[0x15] = (int)param_1;
  param_1 = param_1 + obj[0x14] * 4;
  obj[0x16] = (int)param_1;
  param_1 = param_1 + obj[0x14] * 4;
  obj[0x18] = (int)param_1;
  obj[0xe] = iVar2;
  obj[0x11] = (int)(param_1 + obj[0x17] * 4 + obj[0x12] * 4);
  obj[0x13] = (int)(param_1 + obj[0x17] * 4);
  return;
}
