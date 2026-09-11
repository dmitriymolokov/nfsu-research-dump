/* spd-match: far pct=4.96 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0046B070 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00424b70();
extern int DAT_006cc7a4;
extern int DAT_00700090;
extern int DAT_00735ff0;
int unaff_ESI;
void __fastcall FUN_0046b070(int obj, int param_1, float *param_2, int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;

  int iVar4;
  float *pfVar5;
  float *unaff_ESI;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar4 = *(int *)(param_1 + 0x60);
  fVar1 = *(float *)(iVar4 + 0x70);
  fVar2 = *(float *)(iVar4 + 0x74);
  fVar3 = *(float *)(iVar4 + 0x78);
  if (DAT_00735ff0 == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if ((*(char *)(iVar4 + 0x1d0) == '\0') || (*(float *)(iVar4 + 0x1d4) <= DAT_006cc7a4)) {
      pfVar5 = (float *)(iVar4 + 0x1e0);
    }
    else {
      pfVar5 = (float *)(iVar4 + 0x1f0);
    }
    if ((param_2 == (float *)0x0) || (*(char *)(obj + 0x15) == '\0')) {
      param_2 = (float *)(obj + 0x110);
    }
    if (DAT_00700090 != 0) {
      if (*(char *)(obj + 0x15) == '\x01') {
        iVar4 = *(int *)(*(int *)(param_3 + 0x14) + 0x274);
      }
      else {
        iVar4 = 0;
      }
      if (iVar4 == 0) {
        FUN_00424b70();
        if (local_20 * fVar1 + local_1c * fVar2 + local_18 * fVar3 < DAT_006cc7a4) {
          unaff_ESI[2] = -fVar3;
          *unaff_ESI = -fVar1;
          unaff_ESI[1] = -fVar2;
          *(undefined4 *)(*(int *)(param_3 + 0x14) + 0x274) = 2;
          return;
        }
        *unaff_ESI = fVar1;
        unaff_ESI[1] = fVar2;
        unaff_ESI[2] = fVar3;
        *(undefined4 *)(*(int *)(param_3 + 0x14) + 0x274) = 1;
        return;
      }
      if (iVar4 == 1) {
        *unaff_ESI = fVar1;
        unaff_ESI[1] = fVar2;
        unaff_ESI[2] = fVar3;
        return;
      }
      if (iVar4 == 2) {
        unaff_ESI[2] = -fVar3;
        *unaff_ESI = -fVar1;
        unaff_ESI[1] = -fVar2;
        return;
      }
      return;
    }
    if ((*param_2 - *pfVar5) * fVar1 +
        (param_2[1] - pfVar5[1]) * fVar2 + fVar3 * (param_2[2] - pfVar5[2]) < DAT_006cc7a4) {
      unaff_ESI[2] = -fVar3;
      *unaff_ESI = -fVar1;
      unaff_ESI[1] = -fVar2;
      return;
    }
  }
  *unaff_ESI = fVar1;
  unaff_ESI[1] = fVar2;
  unaff_ESI[2] = fVar3;
  return;
}
