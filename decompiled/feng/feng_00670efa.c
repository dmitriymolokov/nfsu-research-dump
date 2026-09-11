/* spd-match: far pct=60.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/typed_seh_crt_types/batches/20260724T142954Z_w0_tc0 */
#include "ghidra_compat.h"

/* P3 typed_seh_crt — complete CRT/SEH soft types without redefining pass_a typedefs */
typedef unsigned int errno_t;

struct _iobuf {
  char *_ptr;
  int _cnt;
  char *_base;
  int _flag;
  int _file;
  int _charbuf;
  int _bufsiz;
  char *_tmpfname;
};
void __stdcall EnterCriticalSection(LPCRITICAL_SECTION);
void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION);

typedef struct m375_localeinfo_s {
  wchar_t *wlocale;
  int refcount;
} m375_localeinfo;
typedef struct m375_pthreadlocinfo_s {
  m375_localeinfo lc_category[6];
} *m375_pthreadlocinfo;

typedef struct _m375_ptiddata_s {
  void *_initaddr;
  void *_initarg;
  void *_translator;
  void *_terminate;
  void *_unexpected;
  void *_purecall;
  void *ptlocinfo;
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
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375

_ptiddata __cdecl __getptd(void);
m375_pthreadlocinfo __cdecl ___updatetlocinfo(void);
void __cdecl __lock(int);

int __cdecl FUN_00675bd0();
extern unsigned char *PTR_DAT_006eb554;

long __cdecl _atol(char *_Str)

{
  _ptiddata p_Var1;
  m375_pthreadlocinfo ptVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  
  p_Var1 = __getptd();
  ptVar2 = (m375_pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (m375_pthreadlocinfo)PTR_DAT_006eb554) {
    ptVar2 = ___updatetlocinfo();
  }
  while( true ) {
    if ((int)ptVar2->lc_category[1].refcount < 2) {
      uVar3 = *(byte *)((int)ptVar2->lc_category[3].refcount + (uint)(byte)*_Str * 2) & 8;
    }
    else {
      uVar3 = FUN_00675bd0(ptVar2,(uint)(byte)*_Str,8);
    }
    if (uVar3 == 0) break;
    _Str = _Str + 1;
  }
  uVar3 = (uint)(byte)*_Str;
  pbVar7 = (byte *)(_Str + 1);
  if ((uVar3 == 0x2d) || (uVar5 = uVar3, uVar3 == 0x2b)) {
    uVar5 = (uint)*pbVar7;
    pbVar7 = (byte *)(_Str + 2);
  }
  iVar4 = 0;
  while( true ) {
    if ((uVar5 < 0x30) || (0x39 < uVar5)) {
      iVar6 = -1;
    }
    else {
      iVar6 = uVar5 - 0x30;
    }
    if (iVar6 == -1) break;
    iVar4 = iVar6 + iVar4 * 10;
    uVar5 = (uint)*pbVar7;
    pbVar7 = pbVar7 + 1;
  }
  if (uVar3 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}
