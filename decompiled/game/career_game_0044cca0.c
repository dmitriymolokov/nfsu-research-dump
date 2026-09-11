/* spd-match: far pct=3.60 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0044CCA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006cc7a4;
extern int _DAT_006b7800;
extern int _DAT_006cc7b8;
extern int _DAT_006cca18;
extern void LAB_0044ccf0(void);
extern void LAB_0044ccf2(void);
undefined4 __fastcall FUN_0044cca0(int obj)

{
  float fVar1;
  float fVar2;

  int iVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  
  fVar1 = *(float *)(*(int *)(*(int *)(obj + 4) + 0x40) + 0x1c0);
  iVar5 = 0;
  iVar3 = 0;
  pfVar4 = (float *)(*(int *)(obj + 4) + 0x374);
  fVar2 = DAT_006cc7a4;
  do {
    if (fVar1 <= _DAT_006cca18) {
      if ((fVar1 < _DAT_006cc7b8) && (iVar3 != 1)) {
        bVar6 = iVar3 == 0;
        goto LAB_0044ccf0;
      }
LAB_0044ccf2:
      iVar5 = iVar5 + 1;
      fVar2 = ABS(*pfVar4) + fVar2;
    }
    else {
      if (iVar3 == 2) goto LAB_0044ccf2;
      bVar6 = iVar3 == 3;
LAB_0044ccf0:
      if (bVar6) goto LAB_0044ccf2;
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 2;
    if (3 < iVar3) {
      if (0 < iVar5) {
        fVar2 = fVar2 / (float)iVar5;
      }
      if (_DAT_006b7800 < fVar2) {
        return 1;
      }
      return 0;
    }
  } while( true );
}
