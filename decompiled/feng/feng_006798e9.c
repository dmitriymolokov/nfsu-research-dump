/* spd-match: far pct=11.76 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p2/buckets/p2_06 */
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

int __cdecl FUN_0067994f();
extern int DAT_00792fc4;

pthreadmbcinfo __cdecl ___updatetmbcinfo(void)

{
  m375_p2_ptiddata *p_Var1;
  m375_p2_mbcinfo *_Memory;
  
  __lock(0xd);
  p_Var1 = __getptd();
  _Memory = p_Var1->_tpxcptinfoptrs;
  if (_Memory != ((m375_p2_mbcinfo *)DAT_00792fc4)) {
    if ((_Memory != (pthreadmbcinfo)0x0) &&
       (_Memory->refcount = _Memory->refcount + -1, _Memory->refcount == 0)) {
      _free(_Memory);
    }
    p_Var1->_tpxcptinfoptrs = ((m375_p2_mbcinfo *)DAT_00792fc4);
    _Memory = ((m375_p2_mbcinfo *)DAT_00792fc4);
    ((m375_p2_mbcinfo *)DAT_00792fc4)->refcount = ((m375_p2_mbcinfo *)DAT_00792fc4)->refcount + 1;
  }
  FUN_0067994f();
  return _Memory;
}
