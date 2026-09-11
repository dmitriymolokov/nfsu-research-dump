/* spd-match: far pct=12.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141750Z_w0_tc0 */
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

int __cdecl FUN_006731e5();
int unaff_EBP;
int unaff_EDI;

void FUN_0067b33e(void)

{
  m375_ptiddata p_Var1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + -4) = *(undefined4 *)(unaff_EBP + -0x24);
  _FindAndUnlinkFrame(*(FrameInfo **)(unaff_EBP + -0x30));
  p_Var1 = (m375_ptiddata)__getptd();
  p_Var1->_terminate = *(void **)(unaff_EBP + -0x34);
  p_Var1 = (m375_ptiddata)__getptd();
  p_Var1->_unexpected = *(void **)(unaff_EBP + -0x38);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) && (unaff_ESI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x20) == 0 && (*(int *)(unaff_EBP + -0x1c) != 0)))) {
    iVar2 = FUN_006731e5(unaff_ESI[6]);
    if (iVar2 != 0) {
      __abnormal_termination();
      ___DestructExceptionObject();
    }
  }
  return;
}
