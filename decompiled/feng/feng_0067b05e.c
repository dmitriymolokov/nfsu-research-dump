/* spd-match: far pct=1.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
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

int unaff_EDI;
int unaff_ESI;

int __cdecl FUN_0067b05e(_s_HandlerType *param_1,_s_CatchableType *param_2,_s_ThrowInfo *param_3)

{
  int iVar1;
  byte *unaff_ESI;
  byte *unaff_EDI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 8) != '\0')) {
    if ((iVar1 != *(int *)(unaff_EDI + 4)) &&
       (iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(unaff_EDI + 4) + 8)), iVar1 != 0)) {
      return 0;
    }
    if (((((*unaff_EDI & 2) != 0) && ((*unaff_ESI & 8) == 0)) ||
        (((param_1->adjectives & 1) != 0 && ((*unaff_ESI & 1) == 0)))) ||
       (((param_1->adjectives & 2) != 0 && ((*unaff_ESI & 2) == 0)))) {
      return 0;
    }
  }
  return 1;
}
