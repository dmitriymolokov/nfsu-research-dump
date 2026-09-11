/* spd-match: far pct=8.00 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_2 */
#include "ghidra_compat.h"

int __cdecl FUN_00675bd0();
int unaff_EDI;

uint FUN_00671395(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  LPCSTR _LpSrcStr;
  int iVar3;
  BOOL unaff_EDI;
  undefined4 local_8;
  
  uVar1 = param_2;
  iVar3 = param_1;
  if ((*(int *)(param_1 + 0x14) == 0) || ((*(int *)(param_1 + 0x24) != 0 && (param_2 < 0x80)))) {
    if ((0x40 < (int)param_2) && ((int)param_2 < 0x5b)) {
      return param_2 + 0x20;
    }
  }
  else {
    if (param_2 < 0x100) {
      if (*(int *)(param_1 + 0x28) < 2) {
        uVar2 = *(byte *)(*(int *)(param_1 + 0x48) + param_2 * 2) & 1;
      }
      else {
        uVar2 = FUN_00675bd0(param_1,param_2,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((*(byte *)(*(int *)(iVar3 + 0x48) + 1 + ((int)uVar1 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      (*(unsigned short *)&(param_1)) = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      _LpSrcStr = (LPCSTR)0x2;
    }
    iVar3 = ___crtLCMapStringA(*(_locale_t *)(iVar3 + 0x14),(LPCWSTR)0x100,(DWORD)&param_1,_LpSrcStr
                               ,(int)&local_8,(LPSTR)0x3,*(int *)(iVar3 + 4),1,unaff_EDI);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        return (uint)CONCAT11((undefined1)local_8,(*((unsigned char *)&(local_8) + 1)));
      }
      return local_8 & 0xff;
    }
  }
  return uVar1;
}
