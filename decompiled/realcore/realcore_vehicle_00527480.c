/* spd-match: far pct=11.28 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p0/buckets/p0_01/attempt6_pointer_overlay */
#include "ghidra_compat.h"

int __cdecl FUN_005272f0();
int __cdecl FUN_00532610();
int __cdecl FUN_005326f0();
int __cdecl FUN_00532840();
int __cdecl FUN_00564a50();
int __cdecl FUN_00564a80();
int __cdecl FUN_00674898();
extern unsigned char *DAT_006b65f8;
extern unsigned char *DAT_006b6600;
extern int DAT_006b6608;
extern int DAT_006b660c;
extern unsigned char *DAT_006b6610;
extern int DAT_006cc7a4;
extern int DAT_0078eae0;
extern int _DAT_006b65ec;
extern int _DAT_006b65f0;
extern int _DAT_006b65f4;
extern int _DAT_00705954;
extern int _DAT_00705958;

void FUN_00527480(int *param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  char cVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  cVar4 = (**(code **)(*param_1 + 0x60))(0);
  if ((cVar4 != '\0') && ((char)param_1[0x452] != '\0')) {
    FUN_005326f0(param_1);
    if (((char)param_1[0x7c4] != '\0') || ((float)(unsigned int)param_1[0x7c7] <= DAT_006b6608)) {
      param_1[0x44d] = 0;
      param_1[0x44e] = 0;
    }
    else {
      iVar5 = param_1[0x44d];
      if (iVar5 == 0) {
        fVar1 = ((int)_DAT_006b65f4) - ((int)_DAT_006b65f0);
        param_1[0x44d] = 1;
        fVar6 = (float10)FUN_00564a80(fVar1);
        param_1[0x44c] = (int)(float)(fVar6 + (float10)((int)_DAT_006b65f0) + (float10)(unsigned int)(_DAT_006b65ec));
        return;
      }
      if (iVar5 == 2) {
        _DAT_00705954 = param_1[0x7c7];
        param_1[0x44d] = 1;
        FUN_00532840();
        fVar7 = (float10)FUN_00564a80(0x3f800000);
        fVar8 = (float10)(unsigned int)(_DAT_006b65f4);
        fVar3 = (float10)(unsigned int)(_DAT_006b65f0);
        fVar6 = (float10)(unsigned int)(_DAT_006b65f0);
        fVar2 = (float10)(unsigned int)(_DAT_00705958);
        param_1[0x44e] = 0;
        param_1[0x44c] = (int)(float)(((fVar8 - fVar3) * fVar7 + fVar6) * fVar2);
        return;
      }
      if ((iVar5 == 1) &&
         (fVar1 = (float)(unsigned int)param_1[0x44c], param_1[0x44c] = (int)(fVar1 - (float)(unsigned int)param_1),
         fVar1 - (float)(unsigned int)param_1 < DAT_006cc7a4)) {
        FUN_00564a50(*(int *)(&DAT_006b6600 + param_1[0x474] * 4) -
                     *(int *)(&DAT_006b65f8 + param_1[0x474] * 4));
        iVar5 = FUN_00674898();
        param_1[0x44e] = iVar5;
        DAT_0078eae0 = (((int)DAT_0078eae0) + 1) % 5;
        param_1[0x44d] = 2;
        FUN_005272f0(param_1 + 0x44f,DAT_0078eae0,param_1[0x44e],0x1000,param_1[0xab]);
        FUN_00532610(DAT_006b660c,0x3f800000,*(undefined4 *)(&DAT_006b6610 + param_1[0x474] * 4));
        return;
      }
    }
  }
  return;
}
