/* spd-match: far pct=5.28 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_004561D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880(...);
int __cdecl FUN_004423b0(...);
int __cdecl FUN_00442690(...);
extern int DAT_006cc7a4;
extern int DAT_0077af20;
extern int DAT_0078a2fc;
extern void LAB_00456273(...);
extern void LAB_004562a1(...);
extern void LAB_00456397(...);

struct ThisCallBox {
  undefined4 FUN_004561d0(int val, undefined4 *param_2, uint param_3, undefined4 param_4);
};
undefined4 ThisCallBox::FUN_004561d0(int val, undefined4 *param_2, uint param_3, undefined4 param_4)

{
  float fVar1;
  bool bVar2;

  int *piVar3;
  int iVar4;
  float *pfVar5;
  float *extraout_EDX;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  float local_10;
  int *local_c;
  float *local_8;
  
  piVar6 = (int *)(unsigned int)DAT_0077af20;
  bVar7 = DAT_0078a2fc == 0;
  local_8 = (float *)0x0;
  local_c = (int *)0x0;
  local_10 = 999999.0;
  bVar2 = false;
  if (((val != 0) && (val != 1)) && (bVar2 = true, val == 3)) {
    bVar7 = !bVar7;
  }
  if ((param_3 & 0x800) != 0) {
    local_10 = 48.0;
  }
  piVar3 = (int *)FUN_0040a880();
  if (piVar6 != piVar3) {
    do {
      if (bVar2) {
        iVar4 = 0;
        do {
          if (*(char *)((int)piVar6 + iVar4 + (-(uint)bVar7 & 0xfffffffa) + 0x276) != '\0')
          goto LAB_00456273;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 6);
      }
      else {
LAB_00456273:
        if ((char)param_3 < '\0') {
          iVar4 = 0;
          do {
            if (*(char *)((int)piVar6 + iVar4 + (-(uint)bVar7 & 0xfffffffa) + 0x276) != '\0')
            goto LAB_004562a1;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 6);
        }
        else {
LAB_004562a1:
          if ((param_3 & 0x100) != 0) {
            iVar4 = 0;
            do {
              if (*(char *)((int)piVar6 + iVar4 + (-(uint)bVar7 & 0xfffffffa) + 0x276) != '\0')
              goto LAB_00456397;
              iVar4 = iVar4 + 1;
            } while (iVar4 < 6);
          }
          pfVar5 = (float *)FUN_00442690(piVar6,local_10,param_3,param_4);
          if (pfVar5 != (float *)0x0) {
            if ((param_3 & 0x20) == 0) {
              fVar8 = SQRT(((float10)(unsigned int)(*pfVar5) - (float10)*((float *)this)) *
                           ((float10)(unsigned int)(*pfVar5) - (float10)*((float *)this)) +
                           ((float10)(unsigned int)(pfVar5[1]) - (float10)((float *)this)[1]) *
                           ((float10)(unsigned int)(pfVar5[1]) - (float10)((float *)this)[1]));
            }
            else {
              fVar8 = (float10)FUN_004423b0(param_4);
              pfVar5 = extraout_EDX;
            }
            if ((param_3 & 0x40) != 0) {
              if (bVar7) {
                fVar1 = (*((float *)this) - *pfVar5) * pfVar5[4] - (((float *)this)[1] - pfVar5[1]) * pfVar5[3];
                if (fVar1 <= DAT_006cc7a4) {
                  fVar1 = -(fVar1 + pfVar5[9]);
                }
                else {
                  fVar1 = fVar1 - pfVar5[10];
                }
              }
              else {
                fVar1 = (*((float *)this) - *pfVar5) * pfVar5[6] - (((float *)this)[1] - pfVar5[1]) * pfVar5[5];
                if (DAT_006cc7a4 <= fVar1) {
                  fVar1 = fVar1 - pfVar5[9];
                }
                else {
                  fVar1 = -(fVar1 + pfVar5[10]);
                }
              }
              if (DAT_006cc7a4 <= fVar1) goto LAB_00456397;
            }
            if (fVar8 < (float10)(unsigned int)(local_10)) {
              local_10 = (float)fVar8;
              local_c = piVar6;
              local_8 = pfVar5;
            }
          }
        }
      }
LAB_00456397:
      piVar6 = (int *)(unsigned int)*(unsigned int *)piVar6;
    } while (piVar6 != piVar3);
    if ((local_c != (int *)0x0) && (local_8 != (float *)0x0)) {
      *(unsigned int *)param_2 = (unsigned int)local_c;
      ((unsigned int *)param_2)[1] = (unsigned int)local_8;
      return 1;
    }
  }
  return 0;
}
