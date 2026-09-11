/* spd-match: far pct=5.51 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A6BC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int DAT_0077af30;
extern void LAB_005a6c4a(void);
extern void LAB_005a6c93(void);
float10 __fastcall FUN_005a6bc0(int obj, float param_1, float param_2, int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;

  int iVar5;
  int *piVar6;
  float10 fVar7;
  float fStack_4;
  
  iVar4 = (int)param_1;
  *param_3 = 0x47c34f80;
  piVar6 = (int *)((int)param_1 + 4);
  param_1 = 99999.0;
  if (obj < *piVar6 + -1) {
    piVar6 = (int *)(iVar4 + 0xc + obj * 4);
    do {
      piVar2 = (int *)piVar6[-1];
      piVar3 = (int *)*piVar6;
      if (param_2 < (float)piVar2[0x16]) break;
      cVar1 = (char)piVar3[0x17];
      if ((cVar1 == -1) || (*(short *)((int)piVar3 + 0x5e) == -1)) {
LAB_005a6c4a:
        fStack_4 = 0.0;
      }
      else {
        if (cVar1 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (&DAT_0077af30)[cVar1];
        }
        iVar5 = *(short *)((int)piVar3 + 0x5e) * 0x88 + 0x27c + iVar5;
        if (iVar5 == 0) goto LAB_005a6c4a;
        fVar7 = (**(float10 (**)())(*piVar3 + 0x18))(iVar5);
        fStack_4 = (float)fVar7;
      }
      cVar1 = (char)piVar2[0x17];
      if ((cVar1 == -1) || (*(short *)((int)piVar2 + 0x5e) == -1)) {
LAB_005a6c93:
        fVar7 = (float10)DAT_006cc7a4;
      }
      else {
        if (cVar1 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (&DAT_0077af30)[cVar1];
        }
        iVar5 = *(short *)((int)piVar2 + 0x5e) * 0x88 + 0x27c + iVar5;
        if (iVar5 == 0) goto LAB_005a6c93;
        fVar7 = (**(float10 (**)())(*piVar2 + 0x18))(iVar5);
      }
      if ((float10)fStack_4 - fVar7 < (float10)param_1) {
        param_1 = (float)((float10)fStack_4 - fVar7);
        *param_3 = piVar2[0x16];
      }
      obj = obj + 1;
      piVar6 = piVar6 + 1;
    } while (obj < *(int *)(iVar4 + 4) + -1);
  }
  return (float10)param_1;
}
