/* spd-match: matched pct=100.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/typed_seh_crt_types/batches/20260724T143029Z_w0_tc0 */
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

int __cdecl FUN_0067a11f();
int __cdecl FUN_0067a22f();
int __cdecl FUN_0067a297();

errno_t __cdecl
m375___cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = FUN_0067a11f(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = FUN_0067a22f(arg,buffer,format);
      return eVar1;
    }
    eVar1 = FUN_0067a297(arg,buffer,format,precision);
  }
  return eVar1;
}
