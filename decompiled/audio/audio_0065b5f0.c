/* spd-match: far pct=6.51 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

extern char stack0x00000000;
extern char stack0xffffff30;

ulonglong FUN_0065b5f0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar5;
  undefined1 auStackY_f0 [20];
  _OSVERSIONINFOA local_b8;
  int local_24;
  undefined1 local_20 [16];
  undefined4 local_10;
  
  local_24 = 0;
  local_b8.dwOSVersionInfoSize = 0x94;
  GetVersionExA(&local_b8);
  puVar4 = (undefined1 *)0x1;
  if ((local_b8.dwPlatformId == 1) && (local_b8.dwMinorVersion == 0)) {
    local_24 = 1;
  }
  local_10 = 1;
  uVar5 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xffffff30,0x20) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
          (uint)((int)auStackY_f0 < 0) * 0x80 |
          (uint)(&stack0x00000000 == (undefined1 *)0xf0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT((uint)auStackY_f0 & 0xff) & 1U) == 0) * 4 |
          (uint)(&stack0xffffff30 < (undefined1 *)0x20) | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar3 = uVar5 ^ 0x200000;
  if (((uint)((uVar3 & 0x4000) != 0) * 0x4000 | (uint)((uVar3 & 0x800) != 0) * 0x800 |
       (uint)((uVar3 & 0x200) != 0) * 0x200 | (uint)((uVar3 & 0x100) != 0) * 0x100 |
       (uint)((uVar3 & 0x80) != 0) * 0x80 | (uint)((uVar3 & 0x40) != 0) * 0x40 |
       (uint)((uVar3 & 0x10) != 0) * 0x10 | (uint)((uVar3 & 4) != 0) * 4 | (uint)((uVar3 & 1) != 0)
       | (uint)((uVar3 & 0x200000) != 0) * 0x200000 | (uint)((uVar3 & 0x40000) != 0) * 0x40000) ==
      uVar5) {
    local_10 = 1;
  }
  else {
    piVar1 = (int *)cpuid_basic_info(0);
    if (*piVar1 == 0) {
      return 0x100000001;
    }
    puVar4 = local_20;
    iVar2 = cpuid_Version_info(1);
    if (((*(uint *)(iVar2 + 8) & 0x2000000) != 0) && (local_24 == 0)) {
      local_10 = 3;
    }
    iVar2 = cpuid(0x80000001);
    if (*(int *)(iVar2 + 8) < 0) {
      return CONCAT44(puVar4,local_10) | 4;
    }
  }
  return CONCAT44(puVar4,local_10);
}
