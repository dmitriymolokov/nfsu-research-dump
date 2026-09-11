/* spd-match: far pct=3.04 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A6150 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern void LAB_005a624a(void);
extern void LAB_005a62c5(void);
int __fastcall FUN_005a6150(int obj, float param_1, float *param_2, uint param_3)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int iVar4;

  float *pfVar5;
  int iVar6;
  float10 fVar7;
  int local_8;
  
  iVar4 = (int)param_1;
  local_8 = -1;
  param_1 = 1e+14;
  if (obj < 1) {
    obj = 0;
  }
  if (*(int *)(iVar4 + 4) <= obj) {
    return -1;
  }
  do {
    piVar2 = *(int **)(iVar4 + 8 + obj * 4);
    cVar1 = (char)piVar2[0x17];
    if ((cVar1 == -1) || (*(short *)((int)piVar2 + 0x5e) == -1)) {
      pfVar5 = (float *)0x0;
    }
    else {
      if (cVar1 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (&DAT_0077af30)[cVar1];
      }
      pfVar5 = (float *)(*(short *)((int)piVar2 + 0x5e) * 0x88 + 0x27c + iVar6);
    }
    fVar3 = SQRT((*pfVar5 - *param_2) * (*pfVar5 - *param_2) +
                 (pfVar5[1] - param_2[1]) * (pfVar5[1] - param_2[1]));
    if ((param_3 & 1) == 0) {
LAB_005a624a:
      if ((param_3 & 2) != 0) {
        cVar1 = (char)piVar2[0x17];
        fVar7 = (float10)DAT_006cc7a4;
        if ((cVar1 != -1) && (*(short *)((int)piVar2 + 0x5e) != -1)) {
          if (cVar1 < 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = (&DAT_0077af30)[cVar1];
          }
          iVar6 = *(short *)((int)piVar2 + 0x5e) * 0x88 + 0x27c + iVar6;
          if (iVar6 != 0) {
            fVar7 = (**(float10 (**)())(*piVar2 + 0x20))(iVar6,param_2);
            fVar7 = fVar7 + (float10)(float)piVar2[0x16];
          }
        }
        if (fVar7 <= (float10)(float)piVar2[0x16]) goto LAB_005a62c5;
      }
      if (fVar3 < param_1) {
        param_1 = fVar3;
        local_8 = obj;
      }
    }
    else {
      fVar7 = (float10)DAT_006cc7a4;
      if ((cVar1 != -1) && (*(short *)((int)piVar2 + 0x5e) != -1)) {
        if (cVar1 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = (&DAT_0077af30)[cVar1];
        }
        iVar6 = *(short *)((int)piVar2 + 0x5e) * 0x88 + 0x27c + iVar6;
        if (iVar6 != 0) {
          fVar7 = (**(float10 (**)())(*piVar2 + 0x20))(iVar6,param_2);
          fVar7 = fVar7 + (float10)(float)piVar2[0x16];
        }
      }
      if (fVar7 < (float10)(float)piVar2[0x16]) goto LAB_005a624a;
    }
LAB_005a62c5:
    iVar6 = FUN_00674898();
    if (0 < -2 - iVar6) {
      obj = obj + (-2 - iVar6);
    }
    obj = obj + 1;
    if (*(int *)(iVar4 + 4) <= obj) {
      return local_8;
    }
  } while( true );
}
