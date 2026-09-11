/* spd-match: far pct=13.68 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
#include "ghidra_compat.h"

/* C2143 attempt3 — sized CRT/SEH/MFC soft types */
typedef struct EHExceptionRecord { unsigned char _[64]; } EHExceptionRecord;
typedef struct EHRegistrationNode { unsigned char _[64]; } EHRegistrationNode;
typedef struct _s_HandlerType {
  int adjectives;
  int dispCatchObj;
  unsigned char _[64];
} _s_HandlerType;
typedef struct _s_CatchableType { unsigned char _[64]; } _s_CatchableType;
typedef struct _s_ThrowInfo { unsigned char _[64]; } _s_ThrowInfo;
typedef struct _s_FuncInfo {
  int maxState;
  int nTryBlocks;
  unsigned char _[64];
} _s_FuncInfo;
typedef struct _s_TryBlockMapEntry {
  int tryLow;
  int tryHigh;
  int nCatches;
  void *pHandlerArray;
  unsigned char _[32];
} _s_TryBlockMapEntry;
typedef struct TypeDescriptor { unsigned char _[32]; } TypeDescriptor;
typedef struct _CONTEXT { unsigned char _[716]; } _CONTEXT;
typedef struct _EXCEPTION_POINTERS { void *ExceptionRecord; void *ContextRecord; } _EXCEPTION_POINTERS;
typedef struct _CRT_DOUBLE { double x; } _CRT_DOUBLE;
typedef struct _LDBL12 { unsigned char _b[12]; } _LDBL12;
typedef struct threadlocinfo { unsigned char _[256]; } threadlocinfo;
typedef void __cdecl _StartAddress(void *);
#ifdef __cplusplus
struct CGlobalUtils { unsigned char _pad[16]; };
struct COleDataObject { unsigned char _pad[16]; };
#else
typedef struct CGlobalUtils { unsigned char _pad[16]; } CGlobalUtils;
typedef struct COleDataObject { unsigned char _pad[16]; } COleDataObject;
#endif
typedef unsigned int undefined5;
/* Override thin CRT _ptiddata placeholder with fields these leaves touch. */
typedef struct _m375_ptiddata {
  void *_pxcptacttab;
  void *_initaddr;
  void *_initarg;
  void *_con_ch_buf;
  int _thandle;
  void *_terminate;
  void *_unexpected;
  void *_NLG_dwCode;
  unsigned char _[64];
} *_ptiddata_m375;
#define _ptiddata _ptiddata_m375

int __cdecl FUN_0067b1fb();
int unaff_EBP;
int unaff_EBX;
int unaff_EDI;
int unaff_ESI;
int unaff_retaddr;

void __cdecl
FUN_0067b51e(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
       _s_FuncInfo *param_5,_s_HandlerType *param_6,_s_CatchableType *param_7,
       _s_TryBlockMapEntry *param_8,int param_9,EHRegistrationNode *param_10,uchar param_11)

{
  void *pvVar1;
  int in_ECX;
  void *unaff_EBX;
  _s_HandlerType *unaff_EBP;
  _s_HandlerType *unaff_ESI;
  int unaff_EDI;
  _s_CatchableType *unaff_retaddr;
  
  if (in_ECX != 0) {
    BuildCatchObject(param_1,unaff_EBX,unaff_EBP,unaff_retaddr);
  }
  if (param_6 == (_s_HandlerType *)0x0) {
    param_6 = unaff_ESI;
  }
  _UnwindNestedFrames((EHRegistrationNode *)param_6,param_1);
  ___FrameUnwindToState();
  unaff_ESI->dispCatchObj = *(int *)(unaff_EDI + 4) + 1;
  pvVar1 = (void *)FUN_0067b1fb(param_1);
  if (pvVar1 != (void *)0x0) {
    _JumpToContinuation(pvVar1,(EHRegistrationNode *)unaff_ESI);
  }
  return;
}
