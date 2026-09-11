/* spd-match: far pct=3.85 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00468680 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040cb70();
int __cdecl FUN_004685a0();
extern void LAB_0046876c(void);
void __fastcall FUN_00468680(float * obj, int param_1, float *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;

  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_004685a0(*obj - *param_2);
  fVar2 = *(float *)(param_1 + 0x2c);
  fVar3 = param_2[1];
  *(float *)(param_1 + 0x24) = *param_2;
  *(float *)(param_1 + 0x28) = fVar3;
  fVar3 = *obj;
  *(float *)(param_1 + 0x30) = obj[1];
  *(float *)(param_1 + 0x2c) = fVar3;
  if (fVar2 == *obj) {
    return;
  }
  iVar4 = FUN_0040cb70();
  piVar1 = (int *)(param_1 + 4);
  do {
    while( true ) {
      if (*(int *)(param_1 + 8) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) + -4;
      }
      if (*piVar1 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar1 + -4;
      }
      if (iVar5 != iVar4) break;
LAB_0046876c:
      if (iVar9 == iVar4) {
        return;
      }
      if (iVar9 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar9 + 4;
      }
      iVar8 = param_1;
      if (piVar1 == (int *)0x0) {
        iVar8 = 0;
      }
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + -4;
      }
      if (*(float *)(iVar8 + 0x2c) <= *(float *)(iVar5 + 0x2c)) {
        if (*(float *)(iVar8 + 0x2c) < *(float *)(iVar5 + 0x2c)) {
          return;
        }
        if (*(short *)(iVar8 + 0x18) <= *(short *)(iVar5 + 0x18)) {
          return;
        }
      }
      iVar5 = *piVar1;
      piVar6 = *(int **)(param_1 + 8);
      *piVar6 = iVar5;
      *(int **)(iVar5 + 4) = piVar6;
      if (iVar9 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)(iVar9 + 4);
      }
      iVar5 = *piVar6;
      *piVar6 = (int)piVar1;
      *(int **)(iVar5 + 4) = piVar1;
      *(int **)(param_1 + 8) = piVar6;
      *piVar1 = iVar5;
    }
    if ((iVar5 == 0) || (iVar8 = iVar5, iVar5 == -4)) {
      iVar8 = 0;
    }
    iVar7 = param_1;
    if (piVar1 == (int *)0x0) {
      iVar7 = 0;
    }
    if ((*(float *)(iVar8 + 0x2c) <= *(float *)(iVar7 + 0x2c)) &&
       ((*(float *)(iVar8 + 0x2c) < *(float *)(iVar7 + 0x2c) ||
        (*(short *)(iVar8 + 0x18) <= *(short *)(iVar7 + 0x18))))) goto LAB_0046876c;
    iVar9 = *piVar1;
    piVar6 = *(int **)(param_1 + 8);
    *piVar6 = iVar9;
    *(int **)(iVar9 + 4) = piVar6;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 4;
    }
    piVar6 = *(int **)(iVar5 + 4);
    *piVar6 = (int)piVar1;
    *(int **)(iVar5 + 4) = piVar1;
    *(int **)(param_1 + 8) = piVar6;
    *piVar1 = iVar5;
  } while( true );
}
