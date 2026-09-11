/* spd-match: far pct=8.47 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_006388A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00638f00();
int __cdecl FUN_00638f20();
int unaff_EBX;
int __fastcall FUN_006388a0(int val, int param_1, int param_2)

{
  int iVar1;
  undefined1 uVar2;

  int iVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  int local_4;
  
  iVar1 = param_1;
  local_4 = 0;
  if (val == 0) {
    val = 0x20;
  }
  uVar2 = FUN_00638f20(val);
  param_1 = CONCAT31(((unsigned int)(param_1) >> 8),uVar2);
  iVar3 = FUN_00638f00(&param_1);
  param_1 = 0x10;
  if (iVar3 != 0xf) {
    param_1 = iVar3;
  }
  if (((((0 < iVar1) && (iVar1 < 0x10001)) && (0 < unaff_EBX)) &&
      ((unaff_EBX < 0x10001 && (iVar1 * unaff_EBX < 0x3b9aca01)))) &&
     (iVar3 = FUN_00638f20(iVar3), iVar3 != 0)) {
    if (-1 < param_2) {
      iVar3 = 0;
      do {
        iVar5 = iVar1 >> ((byte)iVar3 & 0x1f);
        iVar6 = unaff_EBX >> ((byte)iVar3 & 0x1f);
        if (iVar5 < 1) {
          iVar5 = 1;
        }
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        iVar4 = iVar5 * param_1 + 7;
        local_4 = local_4 + ((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) * iVar6;
      } while (((iVar5 != 1) || (iVar6 != 1)) && (iVar3 = iVar3 + 1, iVar3 <= param_2));
    }
    return local_4;
  }
  return 0;
}
