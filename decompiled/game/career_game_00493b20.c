/* spd-match: far pct=3.01 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00493B20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

undefined4 *puRam00000000;
undefined4 *puRam00000004;
int iRam00000000;

extern int _DAT_006b6c38;
int unaff_EDI;
undefined2 __fastcall FUN_00493b20(int obj, char param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;

  undefined4 *puVar4;
  undefined4 *puVar5;
  float *unaff_EDI;
  
  puVar5 = (undefined4 *)(obj + 8);
  for (puVar4 = *(undefined4 **)(obj + 8); puVar4 != puVar5; puVar4 = (undefined4 *)*puVar4) {
    if (_DAT_006b6c38 <
        SQRT((*unaff_EDI - (float)puVar4[4]) * (*unaff_EDI - (float)puVar4[4]) +
             (unaff_EDI[1] - (float)puVar4[5]) * (unaff_EDI[1] - (float)puVar4[5]) +
             (unaff_EDI[2] - (float)puVar4[6]) * (unaff_EDI[2] - (float)puVar4[6]))) {
      return 0;
    }
  }
  if (param_1 != '\0') {
    puVar4 = _malloc(0x20);
    if (puVar4 != (undefined4 *)0x0) {
      fVar1 = unaff_EDI[1];
      fVar2 = unaff_EDI[2];
      puVar4[4] = *unaff_EDI;
      puVar4[5] = fVar1;
      puVar4[6] = fVar2;
      puVar3 = *(undefined4 **)(obj + 0xc);
      *puVar3 = puVar4;
      *(undefined4 **)(obj + 0xc) = puVar4;
      *puVar4 = puVar5;
      puVar4[1] = puVar3;
      return 1;
    }
    puRam00000004 = *(undefined4 **)(obj + 0xc);
    *puRam00000004 = 0;
    *(undefined4 *)(obj + 0xc) = 0;
    puRam00000000 = puVar5;
  }
  return 1;
}
