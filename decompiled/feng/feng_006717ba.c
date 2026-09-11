/* spd-match: close pct=87.30 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/typed_seh_crt_types/batches/20260724T143009Z_w0_tc0 */
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

int __cdecl _isgraph(int _C)

{
  _ptiddata p_Var1;
  m375_pthreadlocinfo ptVar2;
  int iVar3;
  
  p_Var1 = __getptd();
  ptVar2 = (m375_pthreadlocinfo)p_Var1->_tfpecode;
  if (ptVar2 != (m375_pthreadlocinfo)PTR_DAT_006eb554) {
    ptVar2 = ___updatetlocinfo();
  }
  if (1 < (int)ptVar2->lc_category[1].refcount) {
    iVar3 = FUN_00675bd0(ptVar2,_C,0x117);
    return iVar3;
  }
  return *(ushort *)((int)ptVar2->lc_category[3].refcount + _C * 2) & 0x117;
}
