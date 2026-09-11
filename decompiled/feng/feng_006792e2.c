/* spd-match: far pct=48.72 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141722Z_w0_tc0 */
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

int __cdecl FUN_00680dfe();
extern int DAT_00792fc4;

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  m375_ptiddata p_Var1;
  m375_pthreadmbcinfo ptVar2;
  int iVar3;
  
  p_Var1 = (m375_ptiddata)__getptd();
  ptVar2 = p_Var1->_tpxcptinfoptrs;
  if (ptVar2 != DAT_00792fc4) {
    ptVar2 = (m375_pthreadmbcinfo)___updatetmbcinfo();
  }
  if (_MaxCount == 0) {
    return 0;
  }
  iVar3 = FUN_00680dfe(*(undefined4 *)ptVar2->mbulinfo,1,_Str1,_MaxCount,_Str2,_MaxCount,
                       ptVar2->mbcodepage);
  if (iVar3 == 0) {
    return 0x7fffffff;
  }
  return iVar3 + -2;
}
