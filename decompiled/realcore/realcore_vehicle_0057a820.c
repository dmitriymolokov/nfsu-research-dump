/* spd-match: far pct=9.09 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.5/va_0057A820 */
#include "ghidra_compat.h"

int __cdecl FUN_0044d5f0(void);
int __cdecl FUN_00647b70(void);
extern int DAT_00700680;
extern int _DAT_006b5c1c;

float10 __cdecl FUN_0057a820(int param_1)
{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;

  iVar4 = FUN_00647b70();
  fVar3 = DAT_00700680;
  if ((iVar4 == 6) &&
      (piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x1d4) + 0x90) + 0x2c),
       piVar1 != (int *)0x0)) {
    fVar2 = *(float *)(piVar1[1] + 0x3d4);
    fVar5 = (**(float10 (**)())(*piVar1 + 0x50))();
    fVar5 = fVar5 * (float10)fVar2;
  } else {
    fVar5 = (float10)FUN_0044d5f0();
    fVar5 = fVar5 * (float10)_DAT_006b5c1c;
  }
  if (fVar5 <= (float10)fVar3) {
    fVar5 = (float10)fVar3;
  }
  return fVar5;
}
