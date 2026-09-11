/* spd-match: far pct=7.30 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00435CA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361a8;
extern int DAT_0073ad34;
extern int DAT_0078a2f0;
extern int DAT_0078a344;
extern int _DAT_006cca38;
extern int _DAT_00700a9c;
extern int _DAT_00700aa0;
uint __fastcall FUN_00435ca0(undefined4 val, int param_1, int param_2)

{
  float fVar1;
  float fVar2;

  int iVar3;
  uint uVar4;
  
  uVar4 = CONCAT31((int3)((uint)val >> 8),DAT_0078a344);
  if (((DAT_0078a344 != '\0') || (uVar4 = DAT_007361a8, DAT_007361a8 != 0)) ||
     (DAT_0078a2f0 == 1099)) {
    return uVar4 & 0xffffff00;
  }
  iVar3 = (int)*(short *)(param_2 + 10);
  fVar1 = _DAT_00700a9c;
  if ((100 < iVar3) && (iVar3 < 0x96)) {
    fVar1 = (float)(100 - iVar3) * ((int)_DAT_00700aa0) + _DAT_00700a9c;
  }
  fVar2 = (float)(((int)DAT_0073ad34) - *(int *)(param_1 + 0x10)) * ((int)_DAT_006cca38);
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return 1;
  }
  return 0;
}
