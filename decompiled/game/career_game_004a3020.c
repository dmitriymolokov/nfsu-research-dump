/* spd-match: far pct=6.79 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004A3020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0041ffe0();
int __cdecl FUN_004f68a0();
int __cdecl FUN_004fd230();
int __cdecl FUN_004ff030();
extern int DAT_006cc568;
extern int DAT_006fbf14;
extern int DAT_00735710;
extern unsigned char *DAT_0073619c;
void __fastcall FUN_004a3020(int obj, int param_1)

{
  char cVar1;
  undefined4 uVar2;

  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_8;
  
  iVar7 = *(int *)(obj + 4);
  if (((DAT_006fbf14 == 0) && (*(int *)(obj + 0x10) == 0)) &&
     (iVar3 = FUN_0041ffe0(), iVar3 != 0)) {
    iVar7 = iVar3;
  }
  if (*(int *)(iVar7 + 0x1c) != 0) {
    cVar1 = *(char *)(*(int *)(iVar7 + 0x1c) + 10);
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0xf0)) {
      piVar5 = (int *)(param_1 + 0xe0);
      puVar6 = DAT_00735710;
      do {
        if (*(int *)(DAT_0073619c + 0x24) <= local_8) {
          return;
        }
        iVar7 = piVar5[0x11];
        if (*(int *)(*piVar5 * 0x30 + 0x20 + param_1) == (int)cVar1) {
          if (iVar7 != 0) {
            for (iVar3 = *(int *)(iVar7 + 0x4c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
              iVar4 = FUN_004fd230();
              if (*(int *)(iVar3 + 0x30) == iVar4) {
                if (iVar3 != 0) {
                  if (iVar3 != *(int *)(iVar7 + 0x54)) {
                    *(int *)(iVar7 + 0x54) = iVar3;
                    FUN_004ff030(iVar7);
                    *(undefined4 *)(*(int *)(iVar7 + 0x54) + 0x10) = 0;
                  }
                  *(undefined4 *)(iVar3 + 0x10) = 0;
                }
                break;
              }
            }
          }
          FUN_004f68a0(&DAT_006cc568,*piVar5 * 0x30 + 0x2c + param_1);
          puVar6 = DAT_00735710;
        }
        else {
          if (iVar7 != 0) {
            for (iVar3 = *(int *)(iVar7 + 0x4c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
              iVar4 = FUN_004fd230();
              if (*(int *)(iVar3 + 0x30) == iVar4) {
                if (iVar3 != 0) {
                  if (iVar3 != *(int *)(iVar7 + 0x54)) {
                    *(int *)(iVar7 + 0x54) = iVar3;
                    FUN_004ff030(iVar7);
                    *(undefined4 *)(*(int *)(iVar7 + 0x54) + 0x10) = 0;
                  }
                  *(undefined4 *)(iVar3 + 0x10) = 0;
                }
                break;
              }
            }
          }
          iVar7 = piVar5[5];
          uVar2 = *(undefined4 *)(*piVar5 * 0x30 + 0x4c + param_1);
          if (iVar7 != 0) {
            *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
            *(undefined4 *)(iVar7 + 0x5c) = uVar2;
            if (puVar6 != (undefined4 *)0x0) {
              (**(code **)*puVar6)(iVar7);
              puVar6 = DAT_00735710;
            }
            *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) & 0xfffffffd | 0x400000;
          }
        }
        local_8 = local_8 + 1;
        piVar5 = piVar5 + 1;
      } while (local_8 < *(int *)(param_1 + 0xf0));
    }
  }
  return;
}
