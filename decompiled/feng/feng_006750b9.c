/* spd-match: far pct=13.11 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
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

extern int DAT_006eb830;
extern unsigned char *DAT_006eb834;
extern int DAT_006eb83c;

int __cdecl FUN_006750b9(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  ulong *puVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  _ptiddata p_Var6;
  int iVar7;
  int iVar8;
  ulong *puVar9;
  
  p_Var6 = __getptd();
  puVar1 = p_Var6->_initaddr;
  puVar9 = puVar1;
  do {
    if (*puVar9 == _ExceptionNum) break;
    puVar9 = puVar9 + 3;
  } while (puVar9 < puVar1 + DAT_006eb83c * 3);
  if ((puVar1 + DAT_006eb83c * 3 <= puVar9) || (*puVar9 != _ExceptionNum)) {
    puVar9 = (ulong *)0x0;
  }
  if ((puVar9 == (ulong *)0x0) || (pcVar2 = (code *)puVar9[2], pcVar2 == (code *)0x0)) {
    iVar7 = UnhandledExceptionFilter(_ExceptionPtr);
  }
  else if (pcVar2 == (code *)0x5) {
    puVar9[2] = 0;
    iVar7 = 1;
  }
  else {
    if (pcVar2 != (code *)0x1) {
      pvVar3 = p_Var6->_initarg;
      p_Var6->_initarg = _ExceptionPtr;
      if (puVar9[1] == 8) {
        if (DAT_006eb830 < DAT_006eb834 + DAT_006eb830) {
          iVar8 = DAT_006eb830 * 0xc;
          iVar7 = DAT_006eb830;
          do {
            *(undefined4 *)(iVar8 + 8 + (int)p_Var6->_initaddr) = 0;
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar7 < DAT_006eb834 + DAT_006eb830);
        }
        uVar4 = *puVar9;
        pvVar5 = p_Var6->_pxcptacttab;
        if (uVar4 == 0xc000008e) {
          p_Var6->_pxcptacttab = (void *)0x83;
        }
        else if (uVar4 == 0xc0000090) {
          p_Var6->_pxcptacttab = (void *)0x81;
        }
        else if (uVar4 == 0xc0000091) {
          p_Var6->_pxcptacttab = (void *)0x84;
        }
        else if (uVar4 == 0xc0000093) {
          p_Var6->_pxcptacttab = (void *)0x85;
        }
        else if (uVar4 == 0xc000008d) {
          p_Var6->_pxcptacttab = (void *)0x82;
        }
        else if (uVar4 == 0xc000008f) {
          p_Var6->_pxcptacttab = (void *)0x86;
        }
        else if (uVar4 == 0xc0000092) {
          p_Var6->_pxcptacttab = (void *)0x8a;
        }
        (*pcVar2)(8,p_Var6->_pxcptacttab);
        p_Var6->_pxcptacttab = pvVar5;
      }
      else {
        puVar9[2] = 0;
        (*pcVar2)(puVar9[1]);
      }
      p_Var6->_initarg = pvVar3;
    }
    iVar7 = -1;
  }
  return iVar7;
}
