/* spd-match: far pct=8.98 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00406020();
extern int DAT_00700fe8;
extern int DAT_0071d888;
extern int DAT_0071d89c;
extern void LAB_00406243(void);
extern char stack0xfffffc4c;
extern char stack0xfffffc50;
int unaff_EBP;

void FUN_004060a0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint unaff_EBP;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  bool bVar11;
  undefined4 *puStack_3c0;
  uint uStack_3ac;
  undefined1 auStack_3a0 [16];
  undefined4 auStack_390 [83];
  undefined4 local_244;
  int aiStack_240 [144];
  
  piVar8 = (int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)];
  if (piVar8 == (int *)0x0) {
    return;
  }
  puStack_3c0 = &local_244;
  local_244 = 0x244;
  (**(code **)(*piVar8 + 0x3c))(piVar8);
  puVar9 = (undefined4 *)&stack0xfffffc4c;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  (**(code **)(*(int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)] + 0xc))
            ((int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)],&stack0xfffffc4c);
  if (unaff_EBP == 0) goto LAB_00406243;
  auStack_390[0] = 0x13c;
  iVar7 = (**(code **)(*(int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)] + 0x38))
                    ((int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)],auStack_390,0x14,1);
  iVar2 = (**(code **)(*(int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)] + 0x38))
                    ((int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)],auStack_3a0,4,1);
  iVar3 = (**(code **)(*(int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)] + 0x38))
                    ((int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)],&stack0xfffffc50,8,1);
  iVar4 = (**(code **)(*(int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)] + 0x38))
                    ((int *)(&DAT_0071d89c)[*(int *)(param_1 + 0x130)],&puStack_3c0,0x18,1);
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x254) = 1;
  *(undefined1 *)(param_1 + 0x264) = 1;
  if (((&DAT_0071d89c)[*(int *)(param_1 + 0x130)] == 0) ||
     ((&DAT_0071d888)[*(int *)(param_1 + 0x130)] == '\0')) {
    iVar7 = 4;
    if (unaff_EBP < 4) {
      *(undefined4 *)(param_1 + 0x250) = 4;
    }
    else {
      bVar11 = true;
      piVar8 = &DAT_00700fe8;
      piVar10 = aiStack_240;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = *piVar8 == *piVar10;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      } while (bVar11);
      *(uint *)(param_1 + 0x250) = (!bVar11 - 1 & 0xfffffff4) + 0x14;
    }
  }
  else if (iVar4 == 0) {
    if ((iVar2 != 0) || (iVar3 == 0)) goto LAB_00406243;
    *(undefined4 *)(param_1 + 0x250) = 0x18;
  }
  else {
    if (((iVar2 != 0) || (iVar7 == 0)) || (iVar3 == 0)) goto LAB_00406243;
    *(undefined4 *)(param_1 + 0x250) = 4;
  }
  *(undefined4 *)(param_1 + 0x260) = 1;
  *(undefined1 *)(param_1 + 0x267) = 1;
  *(undefined1 *)(param_1 + 0x268) = 1;
LAB_00406243:
  puVar9 = (undefined4 *)(param_1 + 0x98);
  iVar7 = 0x10;
  puVar5 = puVar9;
  do {
    puVar5[-0x20] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar5 = (undefined4 *)(param_1 + 0x18);
  cVar1 = FUN_00406020(puVar5,puVar9);
  if (cVar1 == '\0') {
    if (uStack_3ac < 6) {
      *puVar5 = 6;
      *(undefined4 *)(param_1 + 0x1c) = 5;
      *(undefined4 *)(param_1 + 0x20) = 8;
      *(undefined4 *)(param_1 + 0x24) = 7;
      *(undefined4 *)(param_1 + 0x28) = 9;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      *puVar5 = 2;
      if (uStack_3ac < 8) {
        *(undefined4 *)(param_1 + 0x20) = 6;
        *(undefined4 *)(param_1 + 0x24) = 5;
        *(undefined4 *)(param_1 + 0x28) = 8;
        *(undefined4 *)(param_1 + 0x2c) = 7;
        *(undefined4 *)(param_1 + 0x30) = 9;
      }
      else {
        *(undefined4 *)(param_1 + 0x20) = 9;
        *(undefined4 *)(param_1 + 0x24) = 10;
        *(undefined4 *)(param_1 + 0x28) = 6;
        *(undefined4 *)(param_1 + 0x2c) = 5;
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(undefined4 *)(param_1 + 0x34) = 7;
        *(undefined4 *)(param_1 + 0x38) = 0xe;
        *(undefined4 *)(param_1 + 0x3c) = 0xc;
      }
    }
    *puVar9 = 0x14;
    *(undefined4 *)(param_1 + 0x9c) = 0x17;
    *(undefined4 *)(param_1 + 0xa0) = 0x18;
    *(undefined4 *)(param_1 + 0xa4) = 0x19;
    *(undefined4 *)(param_1 + 0xa8) = 0x1a;
  }
  puVar6 = (uint *)(param_1 + 0x5c);
  iVar7 = 4;
  do {
    puVar6[-1] = -(uint)(uStack_3ac < 6) & 2;
    *puVar6 = (uint)(uStack_3ac < 6);
    puVar6[1] = 3;
    puVar6[2] = 4;
    puVar6[0x1f] = 0x11;
    puVar6[0x20] = 0x10;
    puVar6[0x21] = 0x12;
    puVar6[0x22] = 0x13;
    puVar6 = puVar6 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}
