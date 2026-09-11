/* spd-match: far pct=10.85 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
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

int __cdecl FUN_00681f42();
extern int DAT_006ec184;
extern int DAT_00717e60;
extern int DAT_00717e94;
extern int DAT_00717e98;
extern int DAT_00717ec6;
extern unsigned char *DAT_00792fb0;
extern unsigned char *DAT_00792fb4;
extern int _DAT_006ec188;
extern unsigned char *PTR_DAT_006eb554;
extern unsigned char *PTR_DAT_006ec13c;
extern unsigned char *PTR_DAT_006ec140;
extern unsigned char *PTR_DAT_006ec144;
extern unsigned char *PTR_PTR_006ec16c;
extern void LAB_0067e988(void);
extern void LAB_0067e9b4(void);
extern void LAB_0067ea2a(void);

int __cdecl FUN_0067e87d(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int *_Memory;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined **_Memory_00;
  undefined4 *puVar8;
  char *pcVar9;
  undefined **ppuVar10;
  
  if ((DAT_00717e98 == 0) && (DAT_00717e94 == 0)) {
    if (((DAT_00792fb0 != (int *)0x0) && (*DAT_00792fb0 == 0)) &&
       (DAT_00792fb0 != *(int **)(PTR_DAT_006eb554 + 0x2c))) {
      _free(DAT_00792fb0);
      _free(DAT_00717e60);
    }
    DAT_00792fb4 = (undefined4 *)0x0;
    DAT_00792fb0 = (int *)0x0;
    _Memory_00 = &PTR_DAT_006ec13c;
    DAT_00717e60 = (undefined **)0x0;
    ppuVar10 = DAT_00717e60;
    _Memory = DAT_00792fb0;
LAB_0067ea2a:
    DAT_00792fb0 = _Memory;
    DAT_00717e60 = ppuVar10;
    DAT_006ec184 = **_Memory_00;
    _DAT_006ec188 = 1;
    iVar7 = 0;
    PTR_PTR_006ec16c = (undefined *)_Memory_00;
  }
  else {
    _Memory_00 = _calloc(1,0x30);
    if (_Memory_00 != (undefined **)0x0) {
      puVar8 = (undefined4 *)PTR_PTR_006ec16c;
      ppuVar10 = _Memory_00;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppuVar10 = (undefined *)*puVar8;
        puVar8 = puVar8 + 1;
        ppuVar10 = ppuVar10 + 1;
      }
      _Memory = _malloc(4);
      if (_Memory != (int *)0x0) {
        *_Memory = 0;
        if (DAT_00717e98 == 0) {
          DAT_00792fb4 = (undefined4 *)0x0;
          *_Memory_00 = PTR_DAT_006ec13c;
          _Memory_00[1] = PTR_DAT_006ec140;
          _Memory_00[2] = PTR_DAT_006ec144;
        }
        else {
          DAT_00792fb4 = _malloc(4);
          if (DAT_00792fb4 == (undefined4 *)0x0) {
            iVar7 = 1;
LAB_0067e988:
            _free(_Memory_00);
            _free(_Memory);
            return iVar7;
          }
          *DAT_00792fb4 = 0;
          uVar3 = DAT_00717ec6;
          iVar7 = FUN_00681f42(1,DAT_00717ec6,0xe,_Memory_00);
          iVar4 = FUN_00681f42(1,uVar3,0xf,_Memory_00 + 1);
          iVar5 = FUN_00681f42(1,uVar3,0x10,_Memory_00 + 2);
          if (iVar5 != 0 || (iVar7 != 0 || iVar4 != 0)) {
            ___free_lconv_num(_Memory_00);
            iVar7 = -1;
            goto LAB_0067e988;
          }
          pcVar6 = _Memory_00[2];
          while (*pcVar6 != '\0') {
            cVar2 = *pcVar6;
            if ((cVar2 < '0') || ('9' < cVar2)) {
              pcVar9 = pcVar6;
              if (cVar2 != ';') goto LAB_0067e9b4;
              do {
                pcVar1 = pcVar9 + 1;
                *pcVar9 = *pcVar1;
                pcVar9 = pcVar1;
              } while (*pcVar1 != '\0');
            }
            else {
              *pcVar6 = cVar2 + -0x30;
LAB_0067e9b4:
              pcVar6 = pcVar6 + 1;
            }
          }
        }
        ppuVar10 = _Memory_00;
        if (((DAT_00792fb0 != (int *)0x0) && (*DAT_00792fb0 == 0)) &&
           (DAT_00792fb0 != *(int **)(PTR_DAT_006eb554 + 0x2c))) {
          _free(DAT_00792fb0);
          _free(DAT_00717e60);
        }
        goto LAB_0067ea2a;
      }
      _free(_Memory_00);
    }
    iVar7 = 1;
  }
  return iVar7;
}
