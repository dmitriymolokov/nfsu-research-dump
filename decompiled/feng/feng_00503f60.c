/* spd-match: far pct=9.76 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00503F60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_00503f60(byte * obj)

{

  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(obj + 8) < 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0xff;
    if (*(int *)(obj + 8) < 0x100) {
      uVar3 = (uint)obj[8];
    }
  }
  if (*(int *)(obj + 4) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xff;
    if (*(int *)(obj + 4) < 0x100) {
      uVar2 = (uint)obj[4];
    }
  }
  if (*(int *)obj < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xff;
    if (*(int *)obj < 0x100) {
      uVar1 = (uint)*obj;
    }
  }
  if (*(int *)(obj + 0xc) < 0) {
    return (uVar3 << 8 | uVar2) << 8 | uVar1;
  }
  if (0xff < *(int *)(obj + 0xc)) {
    return ((uVar3 | 0xff00) << 8 | uVar2) << 8 | uVar1;
  }
  return (((uint)obj[0xc] << 8 | uVar3) << 8 | uVar2) << 8 | uVar1;
}
