/* spd-match: far pct=4.21 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00492E70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00492ff0();
int __cdecl FUN_00493190();
int __cdecl FUN_004932e0();
int __cdecl FUN_00565b60();
int __cdecl FUN_00565ce0();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_00674898();
extern void LAB_00492f7a(void);
int * __fastcall FUN_00492e70(int obj, int *param_1, undefined4 param_2, int param_3)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  char cVar4;

  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 unaff_EBX;
  float fAcc;
  float10 fVar8;
  float10 fVar9;
  float unaff_retaddr;
  
  piVar3 = param_1;
  *param_1 = 0;
  param_1[4] = param_3;
  iVar5 = FUN_00674898();
  param_1[1] = iVar5;
  iVar5 = FUN_00565b60(iVar5 * 0x18,0,0,0);
  *param_1 = iVar5;
  if (obj == -0x800) {
    param_1[2] = 0x3f800000;
    param_1[3] = 0;
  }
  else {
    iVar5 = *(int *)(obj + 0x818);
    param_1[3] = *(int *)(obj + 0x81c);
    param_1[2] = iVar5;
  }
  iVar5 = *(int *)(obj + 0x10);
  if (*(char *)(iVar5 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  fVar7 = (float)(int)*(char *)(iVar5 + 0x424);
  iVar5 = (**(code **)(**(int **)(obj + 0x2c) + 0x14))(1);
  iVar6 = (**(code **)(**(int **)(obj + 0x2c) + 0x18))(1);
  if ((iVar5 == 0) || (iVar6 == 0)) {
    cVar4 = FUN_004932e0(param_1,obj + 0x60,unaff_retaddr,unaff_EBX,0,0);
    if (cVar4 != '\0') goto LAB_00492f7a;
  }
  else {
    fVar8 = (float10)FUN_00493190(param_1,*param_1,iVar5,obj + 0x60,unaff_EBX);
    if (fVar8 < (float10)unaff_retaddr != (fVar8 == (float10)unaff_retaddr)) {
LAB_00492f7a:
      pfVar2 = *(float **)(*param_1 + 4);
      iVar5 = 1;
      piVar1 = param_1 + 1;
      param_1[5] = (int)((*(float *)(obj + 0x60) - *pfVar2) * pfVar2[4] -
                        (*(float *)(obj + 100) - pfVar2[1]) * pfVar2[3]);
      fAcc = fVar7;
      if (1 < *piVar1) {
        iVar6 = 0x18;
        do {
          fVar9 = (float10)FUN_00492ff0(piVar3,iVar5,unaff_retaddr,unaff_EBX);
          fVar8 = (float10)fAcc;
          fAcc = (float)(fVar9 + fVar8);
          if (((float10)(float)piVar3[4] < fVar9 + fVar8) || (*(int *)(iVar6 + 4 + *piVar3) == 0))
          break;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x18;
        } while (iVar5 < piVar3[1]);
      }
      piVar3[1] = iVar5;
      piVar3[4] = *(int *)&fAcc;
      return piVar3;
    }
  }
  FUN_00565ce0();
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}
