/* spd-match: far pct=8.97 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
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

typedef void _func_int(void);
int __cdecl FUN_0067b1de();
extern void LAB_0067b41b(void);

void __cdecl
FUN_0067b3a2(EHExceptionRecord *param_1,void *param_2,_s_HandlerType *param_3,
                _s_CatchableType *param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  byte *in_ECX;
  int *in_EDX;
  size_t _Size;
  
  if (*(int *)((int)param_2 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)((int)param_2 + 4) + 8) == '\0') {
    return;
  }
  if ((*(int *)((int)param_2 + 8) == 0) && ((*(byte *)((int)param_2 + 3) & 0x80) == 0)) {
    return;
  }
  if (-1 < (int)*(uint *)param_2) {
    in_EDX = (int *)(*(int *)((int)param_2 + 8) + 0xc + (int)in_EDX);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if ((*(uint *)param_2 & 8) == 0) {
    if ((*in_ECX & 1) == 0) {
      if (*(int *)(in_ECX + 0x18) == 0) {
        iVar1 = FID_conflict__ValidateRead(uVar2,1);
        if ((iVar1 != 0) && (iVar1 = FID_conflict__ValidateRead(in_EDX,1), iVar1 != 0)) {
          _Size = *(size_t *)(in_ECX + 0x14);
          _Src = (void *)FUN_0067b1de();
          _memmove(in_EDX,_Src,_Size);
          return;
        }
      }
      else {
        iVar1 = FID_conflict__ValidateRead(uVar2,1);
        if (((iVar1 != 0) && (iVar1 = FID_conflict__ValidateRead(in_EDX,1), iVar1 != 0)) &&
           (iVar1 = _ValidateExecute(*(_func_int **)(in_ECX + 0x18)), iVar1 != 0)) {
          if ((*in_ECX & 4) != 0) {
            uVar2 = FUN_0067b1de(1);
            FID_conflict__CallMemberFunction1(in_EDX,*(undefined4 *)(in_ECX + 0x18),uVar2);
            return;
          }
          uVar2 = FUN_0067b1de();
          FID_conflict__CallMemberFunction1(in_EDX,*(undefined4 *)(in_ECX + 0x18),uVar2);
          return;
        }
      }
    }
    else {
      iVar1 = FID_conflict__ValidateRead(uVar2,1);
      if ((iVar1 != 0) && (iVar1 = FID_conflict__ValidateRead(in_EDX,1), iVar1 != 0)) {
        _memmove(in_EDX,*(void **)(param_1 + 0x18),*(size_t *)(in_ECX + 0x14));
        if (*(int *)(in_ECX + 0x14) != 4) {
          return;
        }
        if (*in_EDX == 0) {
          return;
        }
        goto LAB_0067b41b;
      }
    }
  }
  else {
    iVar1 = FID_conflict__ValidateRead(uVar2,1);
    if ((iVar1 != 0) && (iVar1 = FID_conflict__ValidateRead(in_EDX,1), iVar1 != 0)) {
      *in_EDX = *(int *)(param_1 + 0x18);
LAB_0067b41b:
      iVar1 = FUN_0067b1de();
      *in_EDX = iVar1;
      return;
    }
  }
  _inconsistency();
  return;
}
