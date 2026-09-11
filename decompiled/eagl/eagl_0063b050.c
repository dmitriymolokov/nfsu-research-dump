/* spd-match: far pct=6.60 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/typed_residual_tok_p1/batches/20260724T142419Z_w0_tc0 */
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

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_0063f1b0();
int __cdecl FUN_0063f210();
extern code *DAT_006e75ec;
extern code *DAT_006e75f0;
extern unsigned char *DAT_0070f490;
extern unsigned int uRam0070f435;

extern code *DAT_006e75ec;






int FUN_0063b050(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *_Str2;
  
  iVar5 = 1;
  FUN_0063f190(0x70f438);
  iVar2 = DAT_0070f490;
  if (DAT_0070f490 != 0) {
    iVar5 = *(int *)(DAT_0070f490 + 0xc) + 1;
  }
  iVar4 = iVar5 * 0x105 + 0x230;
  DAT_0070f490 = (*DAT_006e75ec)("FCache Info",iVar4,0);
  FUN_0063f210(DAT_0070f490,iVar4);
  *(int *)(DAT_0070f490 + 0xc) = iVar5;
  if (iVar2 != 0) {
    *(undefined4 *)(DAT_0070f490 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(DAT_0070f490 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
  }
  iVar4 = 0;
  iVar5 = DAT_0070f490 + 0x128;
  _Str2 = (char *)(iVar2 + 0x128);
  if (*(int *)(DAT_0070f490 + 0xc) != 1 && -1 < *(int *)(DAT_0070f490 + 0xc) + -1) {
    do {
      iVar3 = __stricmp(param_1,_Str2);
      if (iVar3 < 1) break;
      FUN_0063f1b0(iVar5,_Str2,0x105);
      iVar5 = iVar5 + 0x105;
      _Str2 = _Str2 + 0x105;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_0070f490 + 0xc) + -1);
  }
  iVar3 = iVar5 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar3] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  *(undefined1 *)(iVar5 + 0x104) = 0;
  FUN_0063f1b0(iVar5 + 0x105,_Str2,((*(int *)(DAT_0070f490 + 0xc) - iVar4) + -1) * 0x105);
  if (iVar2 != 0) {
    (*DAT_006e75f0)(iVar2);
  }
  FUN_0063f1a0(0x70f438);
  uRam0070f435 = 1;
  return iVar5;
}
