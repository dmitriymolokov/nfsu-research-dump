/* spd-match: far pct=15.59 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/typed_residual_tok_p1/batches/20260724T142419Z_w0_tc0 */
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

extern void LAB_00671a0f(void);
extern void LAB_00671a4f(void);

uint __fwrite_lk(char *param_1,uint param_2,uint param_3,FILE *param_4)

{
  uint uVar1;
  int iVar2;
  uint _Size;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar5 = param_2 * param_3;
  if (uVar5 == 0) {
    param_3 = 0;
  }
  else {
    uVar4 = uVar5;
    if ((param_4->_flag & 0x10c) == 0) {
      local_8 = 0x1000;
    }
    else {
      local_8 = param_4->_bufsiz;
    }
    do {
      uVar3 = param_4->_flag & 0x108;
      if ((uVar3 == 0) || (uVar1 = param_4->_cnt, uVar1 == 0)) {
        if (local_8 <= uVar4) {
          if ((uVar3 != 0) && (iVar2 = __flush(param_4), iVar2 != 0)) {
LAB_00671a4f:
            return (uVar5 - uVar4) / param_2;
          }
          uVar3 = uVar4;
          if (local_8 != 0) {
            uVar3 = uVar4 - uVar4 % local_8;
          }
          _Size = __write(param_4->_file,param_1,uVar3);
          if ((_Size == 0xffffffff) || (uVar4 = uVar4 - _Size, _Size < uVar3)) {
            param_4->_flag = param_4->_flag | 0x20;
            goto LAB_00671a4f;
          }
          goto LAB_00671a0f;
        }
        iVar2 = __flsbuf((int)*param_1,param_4);
        if (iVar2 == -1) goto LAB_00671a4f;
        param_1 = param_1 + 1;
        local_8 = param_4->_bufsiz;
        uVar4 = uVar4 - 1;
        if ((int)local_8 < 1) {
          local_8 = 1;
        }
      }
      else {
        _Size = uVar4;
        if (uVar1 <= uVar4) {
          _Size = uVar1;
        }
        _memcpy(param_4->_ptr,param_1,_Size);
        param_4->_cnt = param_4->_cnt - _Size;
        param_4->_ptr = param_4->_ptr + _Size;
        uVar4 = uVar4 - _Size;
LAB_00671a0f:
        param_1 = param_1 + _Size;
      }
    } while (uVar4 != 0);
  }
  return param_3;
}
