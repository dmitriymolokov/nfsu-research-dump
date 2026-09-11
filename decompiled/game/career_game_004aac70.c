/* spd-match: far pct=8.79 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_004AAC70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0051cc10(...);
int __cdecl FUN_00674898(...);
extern int DAT_006f1dd8;
extern unsigned char *DAT_007356a8;
extern int _DAT_006f8718;
extern int _DAT_006f871c;
int unaff_EBX;

struct ThisCallBox {
  void FUN_004aac70(int obj, char param_2);
};
void ThisCallBox::FUN_004aac70(int obj, char param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;

  int iVar3;
  undefined4 *unaff_EBX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_160 [7];
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined4 local_140 [7];
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  undefined4 local_120 [7];
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined4 local_100 [7];
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined4 local_e0 [7];
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4 [7];
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_90 [7];
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  
  puVar1 = (undefined4 *)(obj + ((int)this));
  if ((undefined4 *)(obj + 0x11U) <= puVar1) {
    *unaff_EBX = *(undefined4 *)(obj + 4);
    unaff_EBX[1] = *(undefined4 *)(obj + 8);
    unaff_EBX[2] = *(undefined4 *)(obj + 0xc);
    *(undefined1 *)(unaff_EBX + 3) = *(undefined1 *)(obj + 0x10);
  }
  if ((undefined4 *)(obj + 0x39U) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x11U);
    puVar5 = unaff_EBX + 4;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x75U) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x39U);
    puVar5 = unaff_EBX + 0xe;
    for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x91U) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x75U);
    puVar5 = unaff_EBX + 0x1d;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0xadU) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x91U);
    puVar5 = unaff_EBX + 0x24;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0xb5U) <= puVar1) {
    unaff_EBX[0x2b] = *(undefined4 *)(obj + 0xadU);
    unaff_EBX[0x2c] = *(undefined4 *)(obj + 0xb1);
  }
  if ((undefined4 *)(obj + 0xbdU) <= puVar1) {
    unaff_EBX[0x2d] = *(undefined4 *)(obj + 0xb5U);
    unaff_EBX[0x2e] = *(undefined4 *)(obj + 0xb9);
  }
  if ((undefined4 *)(obj + 0x18dU) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0xbdU);
    puVar5 = unaff_EBX + 0xa5;
    for (iVar3 = 0x34; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  local_100[0] = 4;
  local_100[1] = 1;
  local_100[2] = 0xffffffff;
  local_100[3] = 0;
  local_100[4] = 2;
  local_100[5] = 1;
  local_100[6] = 1;
  local_e4 = 1;
  local_e3 = 0;
  local_e2 = 1;
  local_e1 = 1;
  local_120[0] = 4;
  local_120[1] = 1;
  local_120[2] = 0xffffffff;
  local_120[3] = 0;
  local_120[4] = 2;
  local_120[5] = 1;
  local_120[6] = 1;
  local_104 = 1;
  local_103 = 0;
  local_102 = 1;
  local_101 = 1;
  local_160[0] = 4;
  local_160[1] = 1;
  local_160[2] = 0xffffffff;
  local_160[3] = 0;
  local_160[4] = 3;
  local_160[5] = 1;
  local_160[6] = 1;
  local_144 = 1;
  local_143 = 0;
  local_142 = 1;
  local_141 = 1;
  local_b4[0] = 1;
  local_b4[1] = 1;
  local_b4[2] = 0xffffffff;
  local_b4[3] = 0;
  local_b4[4] = 0xffffffff;
  local_b4[5] = 1;
  local_b4[6] = 1;
  local_98 = 1;
  local_97 = 0;
  local_96 = 1;
  local_95 = 0;
  local_90[0] = 4;
  local_90[1] = 1;
  local_90[2] = 0xffffffff;
  local_90[3] = 0;
  local_90[4] = 2;
  local_90[5] = 1;
  local_90[6] = 1;
  local_70 = 3;
  local_74 = 1;
  local_73 = 0;
  local_72 = 1;
  local_71 = 0;
  local_e0[0] = 4;
  local_e0[1] = 1;
  local_b8 = 1;
  local_e0[2] = 0xffffffff;
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[5] = 1;
  local_e0[6] = 1;
  local_c0 = 1;
  local_bc = 0;
  local_c4 = 0;
  local_c3 = 1;
  local_c2 = 1;
  local_c1 = 0;
  local_140[0] = 1;
  local_140[1] = 1;
  local_140[2] = 0xffffffff;
  local_140[3] = 0;
  local_140[4] = 2;
  local_140[5] = 1;
  local_140[6] = 0;
  local_124 = 0;
  local_123 = 0;
  local_122 = 1;
  local_121 = 0;
  if ((undefined4 *)(obj + 0x1adU) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x18dU);
    puVar5 = local_100;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x1cdU) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x1adU);
    puVar5 = local_120;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x1edU) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x1cdU);
    puVar5 = local_160;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x211U) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x1edU);
    puVar5 = local_b4;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x295U) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x211U);
    puVar5 = local_90;
    for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x2c1U) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x295U);
    puVar5 = local_e0;
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if ((undefined4 *)(obj + 0x2e1U) <= puVar1) {
    puVar4 = (undefined4 *)(obj + 0x2c1U);
    puVar5 = local_140;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  puVar4 = local_100;
  puVar5 = unaff_EBX + 0x2f;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_120;
  puVar5 = unaff_EBX + 0x37;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_160;
  puVar5 = unaff_EBX + 0x3f;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_b4;
  puVar5 = unaff_EBX + 0x47;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_90;
  puVar5 = unaff_EBX + 0x50;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_e0;
  puVar5 = unaff_EBX + 0x71;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = local_140;
  puVar5 = unaff_EBX + 0x7c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if ((undefined4 *)(obj + 0x2e5U) <= puVar1) {
    unaff_EBX[0x3bbb] = *(undefined4 *)(obj + 0x2e1U);
  }
  *(undefined1 *)((int)unaff_EBX + 0xd) = 1;
  iVar3 = (unsigned int)(DAT_007356a8);
  if (param_2 != '\0') {
    uVar2 = unaff_EBX[0x17];
    if (DAT_006f1dd8 != 0) {
      *(undefined4 *)(*(int *)(DAT_007356a8 + 0x100) + 0x14) = uVar2;
    }
    unaff_EBX[0x17] = uVar2;
    *(undefined4 **)(iVar3 + 8) = unaff_EBX + 0xe;
    FUN_0051cc10(iVar3);
    _DAT_006f8718 = unaff_EBX[0x14];
    _DAT_006f871c = FUN_00674898();
  }
  return;
}
