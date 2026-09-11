/* spd-match: far pct=11.43 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0047FCC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_0047fcc0(undefined4 val, uint *param_1, uint *param_2)

{

  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  int local_4;
  
  switch(val) {
  case 0:
    *(char *)param_2 = (char)*param_1;
    param_2[2] = param_1[1];
    puVar6 = param_1 + 0xe;
    param_1 = param_1 + 8;
    puVar5 = param_2 + 0x11;
    puVar2 = param_2 + 9;
    iVar3 = 2;
    do {
      puVar5[-2] = *puVar6;
      *puVar5 = 0x3f000000;
      puVar2[-6] = param_1[-6];
      *puVar2 = *param_1;
      puVar2[-5] = param_1[-5];
      puVar2[1] = param_1[1];
      puVar2[-4] = param_1[-4];
      puVar2[2] = param_1[2];
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
      param_1 = param_1 + 3;
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined1 *)((int)param_2 + 1) = 0;
    *(undefined1 *)(param_2 + 1) = 1;
    *(undefined1 *)((int)param_2 + 5) = 1;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 7) = 0;
    *(undefined1 *)((int)param_2 + 2) = 1;
    *(undefined1 *)((int)param_2 + 3) = 1;
    return;
  case 1:
    *(char *)param_2 = (char)*param_1;
    param_2[2] = param_1[1];
    puVar6 = param_2 + 0x11;
    puVar5 = param_1 + 0xe;
    puVar2 = param_2 + 9;
    puVar1 = param_1 + 8;
    local_4 = 2;
    do {
      puVar6[-2] = *puVar5;
      *puVar6 = 0x3f000000;
      puVar2[-6] = puVar1[-6];
      *puVar2 = *puVar1;
      puVar2[-5] = puVar1[-5];
      puVar2[1] = puVar1[1];
      puVar2[-4] = puVar1[-4];
      puVar2[2] = puVar1[2];
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    *(byte *)((int)param_2 + 1) = (byte)(*param_1 >> 10) & 1;
    bVar4 = (byte)(*param_1 >> 8) & 1;
    *(byte *)(param_2 + 1) = bVar4;
    *(byte *)((int)param_2 + 5) = (byte)(*param_1 >> 9) & 1;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 7) = 0;
    *(byte *)((int)param_2 + 2) = bVar4;
    *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)param_2 + 5);
    return;
  case 2:
    *(char *)param_2 = (char)*param_1;
    param_2[2] = param_1[1];
    puVar6 = param_2 + 0x11;
    puVar5 = param_1 + 0xe;
    puVar2 = param_2 + 9;
    puVar1 = param_1 + 8;
    local_4 = 2;
    do {
      puVar6[-2] = *puVar5;
      *puVar6 = 0x3f000000;
      puVar2[-6] = puVar1[-6];
      *puVar2 = *puVar1;
      puVar2[-5] = puVar1[-5];
      puVar2[1] = puVar1[1];
      puVar2[-4] = puVar1[-4];
      puVar2[2] = puVar1[2];
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    break;
  case 3:
    *(char *)param_2 = (char)*param_1;
    param_2[2] = param_1[1];
    puVar6 = param_2 + 0x11;
    puVar5 = param_1 + 0xe;
    puVar2 = param_2 + 9;
    puVar1 = param_1 + 8;
    local_4 = 2;
    do {
      puVar6[-2] = *puVar5;
      *puVar6 = 0x3f000000;
      puVar2[-6] = puVar1[-6];
      *puVar2 = *puVar1;
      puVar2[-5] = puVar1[-5];
      puVar2[1] = puVar1[1];
      puVar2[-4] = puVar1[-4];
      puVar2[2] = puVar1[2];
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    break;
  case 4:
    for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  default:
    return;
  }
  *(byte *)((int)param_2 + 1) = (byte)(*param_1 >> 8) & 1;
  *(byte *)(param_2 + 1) = (byte)(*param_1 >> 9) & 1;
  *(byte *)((int)param_2 + 5) = (byte)(*param_1 >> 10) & 1;
  *(byte *)((int)param_2 + 6) = (byte)(*param_1 >> 0xb) & 1;
  *(byte *)((int)param_2 + 7) = (byte)(*param_1 >> 0xc) & 1;
  *(char *)((int)param_2 + 2) = (char)param_2[1];
  *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)param_2 + 5);
  return;
}
