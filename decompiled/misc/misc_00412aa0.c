/* spd-match: far pct=11.55 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00412AA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00411b70();
int __cdecl FUN_00411ca0();
int __cdecl FUN_00412e30();
int __cdecl FUN_00412ee0();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
extern void LAB_00412be5(void);
extern void LAB_00412c9c(void);
void __fastcall FUN_00412aa0(int * obj, uint param_1)

{
  int *piVar1;
  bool bVar2;

  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)0x0;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  if ((obj != (int *)0x0) && (piVar1 = (int *)*obj, *piVar1 == 0x4d525453)) {
    FUN_0063f190(piVar1 + 1);
    if (((int)(param_1 & 0xff) < piVar1[9]) &&
       (((iVar3 = (param_1 & 0xff) * 0x128, iVar4 = iVar3 + piVar1[8],
         param_1 == *(uint *)(iVar3 + piVar1[8]) && (iVar3 = *(int *)(iVar4 + 4), iVar3 != 0)) &&
        (iVar3 != 4)))) {
      bVar2 = true;
      if (iVar3 == 1) {
        FUN_00411ca0();
      }
      else {
        *(undefined4 *)(iVar4 + 4) = 4;
        local_c = (int *)piVar1[0x1a];
        local_18 = local_c;
        if (iVar4 != piVar1[0x1d]) {
          local_18 = *(int **)(iVar4 + 0x124);
        }
        iVar3 = *(int *)(iVar4 + 0xc);
        if ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 1)) {
          local_14 = (int *)piVar1[0x1b];
          bVar2 = false;
        }
        else {
          local_14 = *(int **)(iVar3 + 0x124);
          bVar2 = false;
        }
      }
    }
    else {
      bVar2 = true;
    }
    FUN_0063f1a0(piVar1 + 1);
    if ((!bVar2) && (local_8 = 0, 0 < piVar1[0xd])) {
      local_10 = 0;
      do {
        iVar3 = piVar1[0xc] + local_10;
        if (0 < *(int *)(piVar1[0xc] + 8 + local_10)) {
          piVar6 = *(int **)(iVar3 + 0xc);
          if (local_18 < local_c) {
            if (piVar6 < local_c) goto joined_r0x00412be3;
LAB_00412be5:
            iVar4 = *(int *)(iVar3 + 4);
            piVar6 = local_18;
            while (piVar6 != local_14) {
              if (*piVar6 == -1) {
                piVar6 = (int *)piVar1[0xf];
              }
              else {
                uVar7 = piVar6[1] & 0xffffff;
                if ((piVar6[1] & 0xff000000U) == iVar4 << 0x18) {
                  FUN_0063f190(piVar1 + 1);
                  *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) - uVar7;
                  FUN_0063f1a0(piVar1 + 1);
                  FUN_00411b70(uVar7);
                  *piVar6 = -2;
                  piVar6[1] = uVar7;
                }
                piVar6 = (int *)((int)piVar6 + uVar7);
              }
            }
          }
          else {
            if (local_c <= piVar6) {
joined_r0x00412be3:
              if (piVar6 < local_18) goto LAB_00412be5;
            }
            if (local_14 < local_18) goto joined_r0x00412c69;
            if (local_18 <= piVar6) {
              do {
                if (local_14 <= piVar6) break;
                do {
                  uVar5 = FUN_00412e30(iVar3);
                  FUN_00412ee0(iVar3,uVar5);
                  if (*(int *)(iVar3 + 8) < 1) goto LAB_00412c9c;
                  piVar6 = *(int **)(iVar3 + 0xc);
                  if (local_18 <= local_14) {
                    if (piVar6 < local_18) goto LAB_00412c9c;
                    break;
                  }
joined_r0x00412c69:;
                } while (local_18 <= piVar6);
              } while( true );
            }
          }
        }
LAB_00412c9c:
        local_8 = local_8 + 1;
        local_10 = local_10 + 0x10;
      } while (local_8 < piVar1[0xd]);
    }
  }
  return;
}
