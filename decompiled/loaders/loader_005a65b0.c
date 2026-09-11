/* spd-match: far pct=8.64 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A65B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a7390();
int __cdecl FUN_005a7560();
extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern void LAB_005a66ca(void);
int __fastcall FUN_005a65b0(int obj, undefined4 param_1, float *param_2, float *param_3, undefined4 param_4)

{
  char cVar1;
  int *piVar2;

  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*(int *)(obj + 4) < 1) {
    *param_2 = 0.0;
    *param_3 = 0.0;
    return 0;
  }
  piVar5 = (int *)(obj + 8);
  iVar4 = 0;
  if (0 < *(int *)(obj + 4)) {
    do {
      piVar2 = (int *)*piVar5;
      fVar6 = (float10)DAT_006cc7a4;
      cVar1 = (char)piVar2[0x17];
      if ((cVar1 != -1) && (*(short *)((int)piVar2 + 0x5e) != -1)) {
        if (cVar1 < 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = (&DAT_0077af30)[cVar1];
        }
        iVar3 = *(short *)((int)piVar2 + 0x5e) * 0x88 + 0x27c + iVar3;
        if (iVar3 != 0) {
          fVar6 = (**(float10 (**)())(*piVar2 + 0x20))(iVar3,param_1);
          fVar6 = fVar6 + (float10)(float)piVar2[0x16];
        }
      }
      if (fVar6 < (float10)(float)piVar2[0x16]) {
        fVar6 = (float10)FUN_005a7560(param_1);
        goto LAB_005a66ca;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(obj + 4));
  }
  fVar6 = (float10)DAT_006cc7a4;
  piVar5 = *(int **)(obj + 4 + *(int *)(obj + 4) * 4);
  cVar1 = (char)piVar5[0x17];
  iVar4 = *(int *)(obj + 4) + -1;
  if ((cVar1 != -1) && (*(short *)((int)piVar5 + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (&DAT_0077af30)[cVar1];
    }
    iVar3 = *(short *)((int)piVar5 + 0x5e) * 0x88 + 0x27c + iVar3;
    if (iVar3 != 0) {
      fVar6 = (**(float10 (**)())(*piVar5 + 0x20))(iVar3,param_1);
      fVar6 = fVar6 + (float10)(float)piVar5[0x16];
    }
  }
LAB_005a66ca:
  fVar7 = (float10)FUN_005a7390(param_1,param_4);
  *param_2 = (float)fVar6;
  *param_3 = (float)fVar7;
  return iVar4;
}
