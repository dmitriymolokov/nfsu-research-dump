/* spd-match: far pct=10.90 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00576250 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int _DAT_006cc7bc;
extern int _DAT_006cca6c;
int unaff_EDI;
int unaff_ESI;
void __fastcall FUN_00576250(float * obj)

{
  float fVar1;
  float fVar2;
  float fVar3;

  int iVar4;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar4 = *unaff_EDI;
  fVar1 = _DAT_006cc7bc;
  if ((0 < iVar4) && (iVar4 < 4)) {
    iVar4 = (iVar4 + 0x2a) * 0x10;
    fVar1 = *(float *)(iVar4 + unaff_ESI);
    iVar4 = iVar4 + unaff_ESI;
    *obj = *(float *)(iVar4 + 4) + *obj;
    obj[0x58] = *(float *)(iVar4 + 8);
  }
  if (unaff_EDI[0xb] != 0) {
    fVar1 = fVar1 - *(float *)(unaff_ESI + 0x820);
  }
  obj[0x44] = fVar1 * *(float *)(unaff_ESI + 0x110);
  obj[0x48] = 1.0;
  obj[0x49] = 0.0;
  obj[0x4a] = 0.0;
  obj[0x4b] = 0.0;
  obj[0x4c] = 0.0;
  obj[0x4d] = 1.0;
  obj[0x4e] = 0.0;
  obj[0x4f] = 0.0;
  obj[0x50] = 0.0;
  obj[0x51] = 0.0;
  obj[0x52] = 1.0;
  obj[0x53] = 0.0;
  obj[0x54] = 0.0;
  obj[0x55] = 0.0;
  obj[0x56] = 0.0;
  obj[0x57] = 1.0;
  fVar1 = obj[0x45] * obj[0x45];
  fVar2 = obj[0x46] * obj[0x46];
  fVar3 = obj[0x47] * obj[0x47];
  obj[0x48] = (fVar3 + fVar2) * obj[0x44] * _DAT_006cca6c;
  obj[0x4d] = (fVar3 + fVar1) * obj[0x44] * _DAT_006cca6c;
  obj[0x52] = (fVar2 + fVar1) * obj[0x44] * _DAT_006cca6c;
  return;
}
