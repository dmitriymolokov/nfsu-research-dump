/* spd-match: far pct=5.63 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00441380 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 __fastcall FUN_00441380(uint * obj, int *param_1)

{
  uint uVar1;
  uint uVar2;

  int iVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (iVar5 == 0x34130) {
    *obj = (int)param_1 + 0x17U & 0xfffffff0;
    obj[1] = (param_1[1] - ((int)param_1 + 0x17U & 0xfffffff0)) + 8 + (int)param_1 >> 3;
    return 1;
  }
  if (iVar5 == 0x34131) {
    obj[2] = (int)param_1 + 0x17U & 0xfffffff0;
    obj[3] = (param_1[1] - ((int)param_1 + 0x17U & 0xfffffff0)) + 8 + (int)param_1 >> 4;
    return 1;
  }
  if (iVar5 == 0x34132) {
    obj[4] = (uint)(param_1 + 2);
    uVar2 = param_1[1];
    iVar5 = 0;
    obj[5] = uVar2 >> 5;
    if (uVar2 >> 5 != 0) {
      iVar3 = 0;
      do {
        *(undefined2 *)(obj[4] + 6 + iVar3) = 0xffff;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar5 < (int)obj[5]);
    }
    return 1;
  }
  if (iVar5 != 0x34133) {
    if (iVar5 != 0x34134) {
      return 0;
    }
    puVar4 = (uint *)((int)param_1 + 0x17U & 0xfffffff0);
    uVar2 = puVar4[1];
    uVar1 = puVar4[2];
    obj[0xc] = *puVar4;
    obj[0xd] = uVar2;
    obj[0xe] = uVar1;
    uVar2 = puVar4[5];
    uVar1 = puVar4[6];
    obj[0x10] = puVar4[4];
    obj[0x11] = uVar2;
    obj[0x12] = uVar1;
    return 1;
  }
  obj[6] = (uint)(param_1 + 2);
  obj[7] = (uint)param_1[1] >> 1;
  return 1;
}
