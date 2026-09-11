/* spd-match: far pct=4.72 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00411D00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
extern void LAB_00411da3(void);
extern void LAB_00411e3e(void);
undefined4 __fastcall FUN_00411d00(int obj)

{
  int iVar1;
  uint *puVar2;
  int iVar3;

  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = *(int *)(obj + 0x78);
  if (*(int *)(obj + 0x70) - *(int *)(obj + 0x6c) < 8) {
    return 0;
  }
  do {
    puVar2 = *(uint **)(obj + 0x6c);
    uVar8 = puVar2[1];
    if ((uVar8 & 0xff000000) != 0) {
      uVar8 = 8;
      *puVar2 = *(uint *)(iVar1 + 0x120);
      puVar2[1] = 8;
    }
    if (*(uint *)(obj + 0x70) < *(uint *)(obj + 0x6c) + uVar8) {
      return 0;
    }
    if (*puVar2 == *(uint *)(iVar1 + 0x120)) {
      uVar4 = *(uint *)(obj + 0x6c) & 0x3f;
      uVar8 = (uVar4 + 0x3f + uVar8 & 0xffffffc0) - uVar4;
    }
    iVar6 = 0;
    if (0 < *(int *)(obj + 0x2c)) {
      puVar5 = *(uint **)(obj + 0x28);
      do {
        if ((*puVar5 & *puVar2) == puVar5[1]) {
          uVar4 = puVar5[2];
          if ((int)uVar4 < 0) goto LAB_00411da3;
          puVar2[1] = uVar4 << 0x18 | uVar8;
          FUN_0063f190(obj + 4);
          bVar9 = *(int *)(iVar1 + 4) == 4;
          if (!bVar9) {
            iVar6 = uVar4 * 0x10 + -0x10 + *(int *)(obj + 0x30);
            uVar7 = *(int *)(iVar6 + 8) + uVar8;
            *(uint *)(iVar6 + 8) = uVar7;
            if (uVar7 == uVar8) {
              *(uint **)(iVar6 + 0xc) = puVar2;
            }
            *(uint *)(obj + 0x6c) = *(int *)(obj + 0x6c) + uVar8;
            iVar3 = *(int *)(obj + 100);
            iVar6 = iVar3 + uVar8;
            *(int *)(obj + 100) = iVar6;
            if ((iVar3 < *(int *)(obj + 0x54)) && (*(int *)(obj + 0x54) <= iVar6)) {
              *(undefined4 *)(obj + 0x60) = 0;
            }
          }
          goto LAB_00411e3e;
        }
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 3;
      } while (iVar6 < *(int *)(obj + 0x2c));
    }
    uVar4 = 0xfffffffe;
LAB_00411da3:
    FUN_0063f190(obj + 4);
    bVar9 = *(int *)(iVar1 + 4) == 4;
    if (!bVar9) {
      *puVar2 = 0xfffffffe;
      *(int *)(obj + 0x6c) = *(int *)(obj + 0x6c) + uVar8;
    }
LAB_00411e3e:
    FUN_0063f1a0(obj + 4);
    if (bVar9) {
      if (*puVar2 == *(uint *)(iVar1 + 0x120)) {
        return 0;
      }
      uVar7 = *(uint *)(obj + 0x6c) & 0x3f;
      puVar2[1] = (uVar7 + 0x3f + uVar8 & 0xffffffc0) - uVar7 | uVar4 << 0x18;
      return 0;
    }
    if (*puVar2 == *(uint *)(iVar1 + 0x120)) {
      return 1;
    }
    if (*(int *)(obj + 0x70) - *(int *)(obj + 0x6c) < 8) {
      return 0;
    }
  } while( true );
}
