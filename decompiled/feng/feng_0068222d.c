/* spd-match: far pct=16.95 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/ghidra_field_overlay_p2/batches/20260724T141750Z_w0_tc0 */
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

int __cdecl FUN_00672a10();
extern int DAT_00792fc4;

uchar * __cdecl __mbschr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  byte bVar2;
  m375_ptiddata p_Var3;
  m375_pthreadmbcinfo ptVar4;
  uchar *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  p_Var3 = (m375_ptiddata)__getptd();
  ptVar4 = p_Var3->_tpxcptinfoptrs;
  if (ptVar4 != DAT_00792fc4) {
    ptVar4 = (m375_pthreadmbcinfo)___updatetmbcinfo();
  }
  if (ptVar4->ismbcodepage == 0) {
    puVar5 = (uchar *)FUN_00672a10();
    return puVar5;
  }
  while( true ) {
    bVar2 = *_Str;
    uVar7 = (uint)bVar2;
    if (bVar2 == 0) break;
    if ((ptVar4->mbctype[uVar7 + 5] & 4) == 0) {
      pbVar6 = _Str;
      if (_Ch == uVar7) break;
    }
    else {
      bVar1 = _Str[1];
      if (bVar1 == 0) {
        return (uchar *)0x0;
      }
      pbVar6 = _Str + 1;
      if (_Ch == CONCAT11(bVar2,bVar1)) {
        return _Str;
      }
    }
    _Str = pbVar6 + 1;
  }
  return (uchar *)(~-(uint)(_Ch != uVar7) & (uint)_Str);
}
