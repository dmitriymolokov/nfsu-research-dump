/* spd-match: far pct=13.43 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004F9F30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_004f9f7e(void);
void __fastcall FUN_004f9f30(int * obj, int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_1 < 0) {
    param_1 = 0;
  }
  if (obj[1] < param_1) {
    param_1 = obj[1];
  }
  obj[2] = param_1;
  if (param_1 < obj[7]) {
    obj[7] = param_1;
    obj[6] = param_1 - *obj;
    if (param_1 - *obj < 0) {
      obj[6] = 0;
    }
  }
  iVar1 = *obj;
  if (param_1 < iVar1) {
    obj[7] = param_1;
  }
  else {
    if (iVar1 <= obj[7] - obj[6]) goto LAB_004f9f7e;
    obj[7] = iVar1;
  }
  obj[6] = 0;
LAB_004f9f7e:
  if (param_1 + -1 < obj[5]) {
    obj[5] = param_1 + -1;
  }
  iVar2 = obj[6];
  if (obj[5] < iVar2) {
    obj[5] = iVar2;
  }
  iVar3 = obj[7];
  if (iVar3 < obj[5]) {
    obj[5] = iVar3;
  }
  obj[3] = iVar3 - iVar2;
  obj[4] = obj[5] - iVar2;
  if (iVar1 <= obj[5] - iVar2) {
    obj[4] = iVar1 + -1;
  }
  return;
}
