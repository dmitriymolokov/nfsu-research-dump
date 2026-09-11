/* spd-match: far pct=9.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2143 */
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
extern int DAT_00717e60;
extern int DAT_00717e94;
extern int DAT_00717e98;
extern int DAT_00717ec0;
extern unsigned char *DAT_00792fac;
extern int DAT_00792fb0;
extern unsigned char *PTR_DAT_006ec13c;
extern unsigned char *PTR_PTR_006ec16c;
extern void LAB_0067ecf6(void);
extern void LAB_0067ed28(void);
extern void LAB_0067ed5b(void);

int __cdecl FUN_0067eb23(threadlocinfo *_LocInfo)

{
  char *pcVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 *_Memory;
  undefined4 *_Memory_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  undefined **ppuVar21;
  undefined4 *puVar22;
  
  if ((DAT_00717e94 == 0) && (DAT_00717e98 == 0)) {
    DAT_00792fac = (undefined4 *)0x0;
    DAT_00792fb0 = (undefined4 *)0x0;
    PTR_PTR_006ec16c = (undefined *)&PTR_DAT_006ec13c;
    DAT_00717e60 = (undefined4 *)0x0;
LAB_0067ed5b:
    iVar19 = 0;
  }
  else {
    _Memory = _calloc(1,0x30);
    if (_Memory != (undefined4 *)0x0) {
      _Memory_00 = _malloc(4);
      if (_Memory_00 == (undefined4 *)0x0) {
        _free(_Memory);
      }
      else {
        *_Memory_00 = 0;
        if (DAT_00717e94 == 0) {
          ppuVar21 = &PTR_DAT_006ec13c;
          puVar22 = _Memory;
          for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
            *puVar22 = *ppuVar21;
            ppuVar21 = ppuVar21 + 1;
            puVar22 = puVar22 + 1;
          }
          DAT_00792fac = (undefined4 *)0x0;
LAB_0067ed28:
          *_Memory = *(undefined4 *)PTR_PTR_006ec16c;
          _Memory[1] = *(undefined4 *)(PTR_PTR_006ec16c + 4);
          _Memory[2] = *(undefined4 *)(PTR_PTR_006ec16c + 8);
          PTR_PTR_006ec16c = (undefined *)_Memory;
          DAT_00717e60 = _Memory;
          DAT_00792fb0 = _Memory_00;
          goto LAB_0067ed5b;
        }
        DAT_00792fac = _malloc(4);
        if (DAT_00792fac == (undefined4 *)0x0) {
          _free(_Memory);
          _free(_Memory_00);
        }
        else {
          *DAT_00792fac = 0;
          uVar3 = DAT_00717ec0;
          iVar19 = FUN_00681f42(1,DAT_00717ec0,0x15,_Memory + 3);
          iVar4 = FUN_00681f42(1,uVar3,0x14,_Memory + 4);
          iVar5 = FUN_00681f42(1,uVar3,0x16,_Memory + 5);
          iVar6 = FUN_00681f42(1,uVar3,0x17,_Memory + 6);
          iVar7 = FUN_00681f42(1,uVar3,0x18,_Memory + 7);
          iVar8 = FUN_00681f42(1,uVar3,0x50,_Memory + 8);
          iVar9 = FUN_00681f42(1,uVar3,0x51,_Memory + 9);
          iVar10 = FUN_00681f42(0,uVar3,0x1a,_Memory + 10);
          iVar11 = FUN_00681f42(0,uVar3,0x19,(int)_Memory + 0x29);
          iVar12 = FUN_00681f42(0,uVar3,0x54,(int)_Memory + 0x2a);
          iVar13 = FUN_00681f42(0,uVar3,0x55,(int)_Memory + 0x2b);
          iVar14 = FUN_00681f42(0,uVar3,0x56,_Memory + 0xb);
          iVar15 = FUN_00681f42(0,uVar3,0x57,(int)_Memory + 0x2d);
          iVar16 = FUN_00681f42(0,uVar3,0x52,(int)_Memory + 0x2e);
          iVar17 = FUN_00681f42(0,uVar3,0x53,(int)_Memory + 0x2f);
          if (iVar17 == 0 &&
              (((((((((((((iVar19 == 0 && iVar4 == 0) && iVar5 == 0) && iVar6 == 0) && iVar7 == 0)
                      && iVar8 == 0) && iVar9 == 0) && iVar10 == 0) && iVar11 == 0) && iVar12 == 0)
                 && iVar13 == 0) && iVar14 == 0) && iVar15 == 0) && iVar16 == 0)) {
            pcVar18 = (char *)_Memory[7];
            while (*pcVar18 != '\0') {
              cVar2 = *pcVar18;
              if ((cVar2 < '0') || ('9' < cVar2)) {
                pcVar20 = pcVar18;
                if (cVar2 != ';') goto LAB_0067ecf6;
                do {
                  pcVar1 = pcVar20 + 1;
                  *pcVar20 = *pcVar1;
                  pcVar20 = pcVar1;
                } while (*pcVar1 != '\0');
              }
              else {
                *pcVar18 = cVar2 + -0x30;
LAB_0067ecf6:
                pcVar18 = pcVar18 + 1;
              }
            }
            goto LAB_0067ed28;
          }
          ___free_lconv_mon(_Memory);
          _free(_Memory);
          _free(_Memory_00);
        }
      }
    }
    iVar19 = 1;
  }
  return iVar19;
}
