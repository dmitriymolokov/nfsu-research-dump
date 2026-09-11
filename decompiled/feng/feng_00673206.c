/* spd-match: far pct=24.19 M4.0.2-CE */
#include "ghidra_compat.h"

typedef struct _m_ptiddata {
    void *_pxcptacttab;
    void *_initaddr;
    void *_initarg;
    void *_con_ch_buf;
    int _thandle;
    void *_terminate;
    void *_unexpected;
    void *_NLG_dwCode;
    void *_purecall;
    unsigned char _[64];
} *ptiddata_fixed;

void __cdecl _FindAndUnlinkFrame(void *param_1)

{
  void *pFVar1;
  ptiddata_fixed p_Var2;
  void *pFVar3;
  
  p_Var2 = (ptiddata_fixed)__getptd();
  if (param_1 == p_Var2->_purecall) {
    p_Var2 = (ptiddata_fixed)__getptd();
    p_Var2->_purecall = *(void **)param_1;
    return;
  }
  p_Var2 = (ptiddata_fixed)__getptd();
  pFVar1 = p_Var2->_purecall;
  do {
    pFVar3 = pFVar1;
    if (*(void **)pFVar3 == (void *)0x0) {
      _inconsistency();
      return;
    }
    pFVar1 = *(void **)pFVar3;
  } while (param_1 != *(void **)pFVar3);
  *(void **)pFVar3 = *(void **)param_1;
  return;
}
