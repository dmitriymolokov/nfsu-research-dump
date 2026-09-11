/* spd-match: far pct=15.32 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p2/buckets/p2_05/attempt2 */
#include "ghidra_compat.h"

int __cdecl __isnan(double);
typedef struct m375_ptiddata {
  void *_initaddr;
  int _holdrand;
  int _thandle;
  DWORD _tid;
  unsigned char _pad[128];
} *m375_ptiddata_ptr;
#define _ptiddata m375_ptiddata_ptr
typedef struct m375_lc_category { int refcount; } m375_lc_category;
typedef struct m375_pthreadlocinfo {
  void *_tfpecode;
  m375_lc_category lc_category[4];
} *m375_pthreadlocinfo_ptr;
#define pthreadlocinfo m375_pthreadlocinfo_ptr

extern int DAT_006eb7b8;
extern int DAT_006eb864;
extern void LAB_00675930(void);

_ptiddata __cdecl __getptd(void)

{
  DWORD dwErrCode;
  _ptiddata lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_006eb864);
  if (lpTlsValue == (_ptiddata)0x0) {
    lpTlsValue = _calloc(1,0x88);
    if (lpTlsValue != (_ptiddata)0x0) {
      BVar1 = TlsSetValue(DAT_006eb864,lpTlsValue);
      if (BVar1 != 0) {
        lpTlsValue->_initaddr = &DAT_006eb7b8;
        lpTlsValue->_holdrand = 1;
        DVar2 = GetCurrentThreadId();
        lpTlsValue->_thandle = 0xffffffff;
        lpTlsValue->_tid = DVar2;
        goto LAB_00675930;
      }
    }
    __amsg_exit(0x10);
  }
LAB_00675930:
  SetLastError(dwErrCode);
  return lpTlsValue;
}
