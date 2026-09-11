/* spd-match: far pct=9.95 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005934A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00592b20();
int __cdecl FUN_00592cb0();
int __cdecl FUN_00593570();
int __cdecl FUN_005936d0();
extern int DAT_006cc7a4;
extern int DAT_0072cc04;
extern unsigned char *DAT_0072cc08;
void __fastcall FUN_005934a0(int obj, int *param_1, char param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float fVar4;

  int iVar5;
  int *piVar6;
  
  if (*(float *)(obj + 0xc) < (float)param_1[3]) {
    FUN_005936d0();
  }
  fVar4 = *(float *)(obj + 0xc) - (float)param_1[3];
  if (DAT_006cc7a4 < fVar4) {
    FUN_00592cb0(param_1,fVar4);
  }
  piVar6 = (int *)param_1[7];
  iVar5 = DAT_0072cc04;
  if (piVar6 != param_1 + 7) {
    do {
      piVar1 = (int *)*piVar6;
      if ((char)piVar6[3] == '\0') {
        FUN_00593570(1);
        iVar5 = DAT_0072cc04;
      }
      iVar2 = *piVar6;
      piVar3 = (int *)piVar6[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      iVar2 = *(int *)(iVar5 + 0x18);
      *piVar6 = *(int *)(iVar5 + 0x10);
      *(int *)(iVar5 + 0x18) = iVar2 + -1;
      *(int **)(iVar5 + 0x10) = piVar6;
      piVar6 = piVar1;
    } while (piVar1 != param_1 + 7);
  }
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 9) = 1;
    return;
  }
  iVar5 = *param_1;
  piVar6 = (int *)param_1[1];
  *piVar6 = iVar5;
  *(int **)(iVar5 + 4) = piVar6;
  FUN_00592b20();
  iVar2 = DAT_0072cc08;
  iVar5 = *(int *)(DAT_0072cc08 + 0x18);
  *param_1 = *(int *)(DAT_0072cc08 + 0x10);
  *(int **)(iVar2 + 0x10) = param_1;
  *(int *)(iVar2 + 0x18) = iVar5 + -1;
  return;
}
