/* spd-match: far pct=9.19 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004FFC30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004f0700();
int __cdecl FUN_004ffbe0();
extern void LAB_004ffd45(void);
extern void LAB_004ffd89(void);
extern void LAB_004ffe44(void);
extern void LAB_004ffe49(void);
void __fastcall FUN_004ffc30(int obj, uint param_1, int param_2, int param_3, uint param_4)

{
  int iVar1;
  uint uVar2;

  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int unaff_ESI;
  
  iVar1 = *(int *)(obj + 0x24);
  if ((int)param_1 <= (int)param_4) {
    if (param_4 == *(uint *)(obj + 0xc)) {
      param_4 = param_4 + 1;
    }
    iVar7 = 0;
    if (0 < iVar1) {
      puVar3 = (uint *)(*(int *)(obj + 0x28) + 8);
      while (*puVar3 < param_1) {
        iVar7 = iVar7 + 1;
        puVar3 = puVar3 + 3;
        if (iVar1 <= iVar7) {
          return;
        }
      }
      if (iVar7 < iVar1) {
        piVar8 = (int *)(*(int *)(obj + 0x28) + iVar7 * 0xc);
        do {
          if (param_4 <= (uint)piVar8[2]) {
            return;
          }
          uVar2 = piVar8[1];
          if (uVar2 < 0xfffffffc) {
            if (uVar2 == 0xfffffffb) {
              iVar4 = *piVar8;
              uVar5 = 0xfffffffb;
            }
            else if (uVar2 == 0) {
              iVar4 = *piVar8;
              if (iVar4 == 0x1b3909aa) {
                iVar4 = FUN_004ffbe0();
                if (*(int *)(unaff_ESI + 0x80) != 0) {
                  FUN_004f0700(0x55d1e635,0,unaff_ESI,*(int *)(unaff_ESI + 0x80),0);
                  FUN_004f0700(0x55d1e635,*(undefined4 *)(unaff_ESI + 0x80),unaff_ESI,0xfffffffb,0);
                }
                if (iVar4 != 0) {
                  FUN_004f0700(0xabc08912,0,unaff_ESI,iVar4,0);
                  FUN_004f0700(0xabc08912,iVar4,unaff_ESI,0xfffffffb,0);
                }
LAB_004ffd45:
                *(int *)(unaff_ESI + 0x80) = iVar4;
                goto LAB_004ffe49;
              }
              uVar5 = 0;
            }
            else {
              if (uVar2 != 0xfffffffa) goto LAB_004ffd89;
              iVar4 = *piVar8;
              uVar5 = 0xfffffffa;
            }
LAB_004ffe44:
            FUN_004f0700(iVar4,param_3,unaff_ESI,uVar5,0);
          }
          else {
            if (uVar2 == 0xfffffffc) {
              iVar4 = *piVar8;
              uVar5 = 0xfffffffc;
              goto LAB_004ffe44;
            }
            if (uVar2 == 0xffffffff) {
              (**(code **)(**(int **)(param_2 + 0x10c) + 0x18))(*piVar8,param_3,0);
            }
            else {
LAB_004ffd89:
              uVar5 = FUN_004ffbe0();
              iVar4 = *piVar8;
              if (iVar4 == 0x1b3909aa) {
                iVar6 = FUN_004ffbe0();
                if (*(int *)(unaff_ESI + 0x80) != 0) {
                  FUN_004f0700(0x55d1e635,0,unaff_ESI,*(int *)(unaff_ESI + 0x80),0);
                  FUN_004f0700(0x55d1e635,*(undefined4 *)(unaff_ESI + 0x80),unaff_ESI,0xfffffffb,0);
                }
                iVar4 = 0;
                if (iVar6 == 0) goto LAB_004ffd45;
                FUN_004f0700(0xabc08912,0,unaff_ESI,iVar6,0);
                FUN_004f0700(0xabc08912,iVar6,unaff_ESI,0xfffffffb,0);
                *(int *)(unaff_ESI + 0x80) = iVar6;
              }
              else if (param_3 != 0) goto LAB_004ffe44;
            }
          }
LAB_004ffe49:
          iVar7 = iVar7 + 1;
          piVar8 = piVar8 + 3;
        } while (iVar7 < iVar1);
      }
    }
  }
  return;
}
