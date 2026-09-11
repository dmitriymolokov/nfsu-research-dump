/* spd-match: far pct=2.68 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141731Z_w0_tc0 */
#include "ghidra_compat.h"

typedef struct m375_cpinfo_s {
  UINT MaxCharSize;
  BYTE DefaultChar[2];
  BYTE LeadByte[12];
} m375_cpinfo;
typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct m375_pthreadmbcinfo_s {
  int mbulinfo;
  int mbcodepage;
  int ismbcodepage;
  unsigned char mbctype[257];
} *m375_pthreadmbcinfo;
typedef struct m375_ptiddata_s {
  void *_initaddr;
  void *_initarg;
  void *_translator;
  void *_terminate;
  void *_unexpected;
  void *_purecall;
  void *_token;
  m375_pthreadmbcinfo _tpxcptinfoptrs;
  void *_pxcptacttab;
  unsigned int _holdrand;
  int _tfpecode;
  int _terrno;
  int _tdoserrno;
  int _NLG_dwCode;
  int _maxcharsize;
  char _con_ch_buf[32];
  unsigned int _thandle;
  unsigned char _pad[64];
} *m375_ptiddata;
float10 __cdecl __set_exp(unsigned __int64, short, int, int);
void _FindAndUnlinkFrame(FrameInfo *);

int __cdecl FUN_0067b17e();

void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  m375_ptiddata p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  p_Var1 = (m375_ptiddata)__getptd();
  p_Var1->_translator = (void *)((int)p_Var1->_translator + 1);
  while (iVar4 != param_4) {
    if ((iVar4 < 0) || (*(int *)(param_3 + 4) <= iVar4)) {
      _inconsistency();
    }
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(*(int *)(param_3 + 8) + iVar2);
    iVar4 = *piVar3;
    if (piVar3[1] != 0) {
      *(int *)(param_1 + 8) = iVar4;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + iVar2),param_1,0x103);
    }
  }
  FUN_0067b17e();
  if (iVar4 != param_4) {
    _inconsistency();
  }
  *(int *)(param_1 + 8) = iVar4;
  return;
}
