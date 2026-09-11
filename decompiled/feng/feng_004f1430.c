/* spd-match: far pct=8.25 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F1430 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004eebf0();
int __cdecl FUN_004eede0();
int __cdecl FUN_004f0700();
extern void LAB_004f1545(void);
extern void LAB_004f156f(void);
extern void LAB_004f1602(void);
void __fastcall FUN_004f1430(int obj)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;

  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  do {
    puVar2 = *(undefined4 **)(obj + 0x412c);
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)(obj + 0x412c) = puVar2[1];
    if (puVar2 == *(undefined4 **)(obj + 0x4130)) {
      *(undefined4 *)(obj + 0x4130) = puVar2[2];
    }
    if (puVar2[2] != 0) {
      *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
    }
    if (puVar2[1] != 0) {
      *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
    }
    puVar2[1] = 0xabadcafe;
    puVar2[2] = 0xabadcafe;
    *(int *)(obj + 0x4128) = *(int *)(obj + 0x4128) + -1;
    iVar7 = puVar2[7];
    if (iVar7 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(iVar7 + 0x18);
    }
    if (((puVar2[5] & 1) != 0) && (-1 < iVar9)) {
      uVar3 = *(undefined4 *)(iVar7 + 0x30);
      uVar5 = uVar3;
      iVar6 = iVar7;
      if ((puVar2[5] & 2) == 0) {
        for (iVar4 = *(int *)(obj + 0xe4); uVar5 = local_8, iVar6 = local_4, iVar4 != 0;
            iVar4 = *(int *)(iVar4 + 4)) {
          if (*(int *)(iVar4 + 0x30) == iVar7) {
            *(undefined4 *)(iVar4 + 0x30) = uVar3;
          }
        }
      }
      local_4 = iVar6;
      local_8 = uVar5;
      if (*(int *)(puVar2[7] + 0x30) != 0) {
        puVar1 = (uint *)(*(int *)(puVar2[7] + 0x30) + 0x1c);
        *puVar1 = *puVar1 | puVar2[6];
      }
      FUN_004eebf0(obj,puVar2[7]);
      iVar9 = iVar9 + -1;
    }
    if ((*(byte *)(puVar2 + 5) & 2) != 0) {
      iVar7 = FUN_004eede0(obj,puVar2[3],(char)iVar9 + '\x01',puVar2[6]);
      if (iVar7 == 0) {
LAB_004f1545:
        if ((*(byte *)(puVar2 + 5) & 1) == 0) goto LAB_004f156f;
      }
      else if ((*(byte *)(puVar2 + 5) & 1) == 0) {
        if (-1 < iVar9) {
          *(undefined4 *)(iVar7 + 0x30) = puVar2[7];
          *(uint *)(puVar2[7] + 0x1c) = *(uint *)(puVar2[7] + 0x1c) & ~puVar2[6];
          goto LAB_004f156f;
        }
        goto LAB_004f1545;
      }
      *(undefined4 *)(iVar7 + 0x30) = local_8;
      for (iVar9 = *(int *)(obj + 0xe4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
        if (*(int *)(iVar9 + 0x30) == local_4) {
          *(int *)(iVar9 + 0x30) = iVar7;
        }
      }
    }
LAB_004f156f:
    if ((*(byte *)(puVar2 + 5) & 4) != 0) {
      iVar7 = puVar2[7];
      iVar9 = *(int *)(iVar7 + 0x30);
      if (iVar9 != 0) {
        uVar8 = *(uint *)(iVar7 + 0x1c) & puVar2[6];
        *(uint *)(iVar7 + 0x1c) = ~uVar8 & *(uint *)(iVar7 + 0x1c);
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | uVar8;
        FUN_004f0700(0x334c5493,0,iVar9,0xfffffffc,puVar2[6]);
      }
    }
    if (((*(byte *)(puVar2 + 5) & 8) == 0) || (iVar7 = *(int *)(obj + 0xe4), iVar7 == 0)) {
LAB_004f1602:
      (**(code **)*puVar2)(1);
    }
    else {
      iVar9 = puVar2[7];
      do {
        if (*(int *)(iVar7 + 0x30) == iVar9) {
          uVar8 = *(uint *)(iVar9 + 0x1c) & puVar2[6];
          *(uint *)(iVar9 + 0x1c) = ~uVar8 & *(uint *)(iVar9 + 0x1c);
          *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | uVar8;
          FUN_004f0700(0x334c5493,0,iVar7,0xfffffffc,puVar2[6]);
          goto LAB_004f1602;
        }
        iVar7 = *(int *)(iVar7 + 4);
      } while (iVar7 != 0);
      (**(code **)*puVar2)(1);
    }
  } while( true );
}
