/* spd-match: far pct=18.92 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/typed_residual_tok_p1/batches/20260724T142335Z_w0_tp1 */
#include "ghidra_compat.h"

/* P3 typed_residual_tok — CRT/SEH/MFC soft types (no WIN32/GHIDRA redefs) */
#ifndef _M375_IOBUF_BODY
#define _M375_IOBUF_BODY
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
#endif
extern FILE _iob[];
#define stdin (&_iob[0])
#define stdout (&_iob[1])
#define stderr (&_iob[2])

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
typedef int _onexit_t;
typedef long __time32_t;
typedef void (__cdecl *_onexit_fn)(void);
typedef void (__cdecl *_func_void_void_ptr)(void *);

typedef struct EHRegistrationNode { unsigned char _[64]; } EHRegistrationNode;
typedef struct _s_HandlerType {
  int adjectives;
  int dispCatchObj;
  unsigned char _[64];
} _s_HandlerType;
typedef struct _s_CatchableType { unsigned char _[64]; } _s_CatchableType;
typedef struct _s_ThrowInfo { unsigned char _[64]; } _s_ThrowInfo;
typedef struct _s_TryBlockMapEntry {
  int tryLow;
  int tryHigh;
  int catchHigh;
  int nCatches;
  void *pHandlerArray;
  unsigned char _[32];
} _s_TryBlockMapEntry, TryBlockMapEntry;
typedef struct _s_FuncInfo {
  int maxState;
  int nTryBlocks;
  _s_TryBlockMapEntry *pTryBlockMap;
  unsigned char _[64];
} _s_FuncInfo;
typedef struct _CRT_DOUBLE { double x; } _CRT_DOUBLE;
typedef struct _LDBL12 { unsigned char _b[12]; } _LDBL12;
typedef int INTRNCVT_STATUS;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
typedef struct _EXCEPTION_RECORD { unsigned char _[80]; } EXCEPTION_RECORD, *PEXCEPTION_RECORD;

void __stdcall RtlUnwind(PVOID, PVOID, PEXCEPTION_RECORD, PVOID);
void __cdecl __lock_file(FILE *);
int __cdecl __stbuf(FILE *);
void __cdecl __ftbuf(int, FILE *);
int __cdecl __write(int, char *, unsigned int);
INTRNCVT_STATUS __cdecl __ld12cvt(_LDBL12 *, _CRT_DOUBLE *, void *);
void __cdecl _inconsistency(void);

int __cdecl FUN_00649810();
int __cdecl FUN_00649b00();
extern unsigned char *PTR_LAB_006a9854;

void * FUN_00648e44(unsigned char *_this)

{
  FUN_00649810();
  *(undefined ***)_this = &PTR_LAB_006a9854;
  FUN_00649b00();
  FUN_00649b00();
  *(undefined4 *)(_this + 0xc) = 1;
  return _this;
}
