/* spd-match: far pct=5.88 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p2/buckets/p2_06 */
#include "ghidra_compat.h"

typedef struct m375_p2_cpinfo {
  BYTE MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_p2_cpinfo;
typedef struct m375_p2_mbcinfo { int refcount; } m375_p2_mbcinfo;
typedef struct m375_p2_ptiddata {
  m375_p2_mbcinfo *_tpxcptinfoptrs;
} m375_p2_ptiddata;


uint  FUN_00675bd0(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  LPCSTR _LpSrcStr;
  BOOL BVar1;
  uint local_8;
  
  if (param_3 + 1U < 0x101) {
    param_3 = (param_3 & 0xffffU) | (((unsigned int)(*(ushort *)(*(int *)(param_2 + 0x48) + param_3 * 2)) & 0xffffU) << 16);
  }
  else {
    if ((*(byte *)(*(int *)(param_2 + 0x48) + 1 + (param_3 >> 8 & 0xffU) * 2) & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)param_1 >> 8),(char)param_3) & 0xffff00ff;
      _LpSrcStr = (LPCSTR)0x1;
    }
    else {
      local_8 = CONCAT31(CONCAT21((short)((uint)param_1 >> 0x10),(char)param_3),
                         (char)((uint)param_3 >> 8)) & 0xff00ffff;
      _LpSrcStr = (LPCSTR)0x2;
    }
    BVar1 = ___crtGetStringTypeA
                      ((_locale_t)0x1,(DWORD)&local_8,_LpSrcStr,(int)&param_3 + 2,
                       *(LPWORD *)(param_2 + 4),*(int *)(param_2 + 0x14),1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return ((unsigned int)(param_3) >> 16) & param_4;
}
