/* spd-match: far pct=7.56 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042FE60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006b7ae8;
extern int DAT_006b7af0;
extern int _DAT_006b7ae4;
extern int _DAT_006b7aec;
void __fastcall FUN_0042fe60(int obj, undefined4 param_1, int param_2)

{
  float fVar1;
  float fVar2;

  int iVar3;
  
  fVar2 = _DAT_006b7ae4;
  *(undefined4 *)(obj + 0x10) = DAT_006b7ae8;
  *(undefined4 *)(obj + 0x18) = DAT_006b7af0;
  fVar1 = *(float *)(param_2 + 0x14);
  iVar3 = 0;
  if (0 < *(int *)(obj + 0x4c)) {
    do {
      iVar3 = iVar3 + 1;
      *(float *)(obj + 0x4c + iVar3 * 8) = fVar2 / fVar1 + *(float *)(obj + 0x48 + iVar3 * 8);
    } while (iVar3 < *(int *)(obj + 0x4c));
  }
  iVar3 = 0;
  fVar2 = _DAT_006b7ae4 - _DAT_006b7aec;
  fVar1 = *(float *)(param_2 + 0x14);
  if (0 < *(int *)(obj + 0x4c)) {
    do {
      iVar3 = iVar3 + 1;
      *(float *)(obj + 0x78 + iVar3 * 8) = fVar2 / fVar1 + *(float *)(obj + 0x74 + iVar3 * 8);
    } while (iVar3 < *(int *)(obj + 0x4c));
  }
  return;
}
