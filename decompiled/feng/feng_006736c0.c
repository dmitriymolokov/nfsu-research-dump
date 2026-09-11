/* spd-match: far pct=6.68 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p2/buckets/p2_05/attempt3 */
#include "ghidra_compat.h"

int __cdecl __isnan(double);
typedef struct m375_ptiddata {
  void *_tfpecode;
  void *_initaddr;
  int _holdrand;
  int _thandle;
  DWORD _tid;
  unsigned char _pad[128];
} *m375_ptiddata_ptr;
#define _ptiddata m375_ptiddata_ptr
typedef struct m375_lc_category { int refcount; } m375_lc_category;
typedef struct m375_pthreadlocinfo {
  void *_tfpecode;
  m375_lc_category lc_category[4];
} *m375_pthreadlocinfo_ptr;
#define pthreadlocinfo m375_pthreadlocinfo_ptr

int __cdecl FUN_0067af08();
int __cdecl FUN_0067b9b7();
int __cdecl FUN_00681f2f();
extern int DAT_006ebe38;
extern int DAT_00792fb8;
extern int _DAT_006abfa0;
extern int _DAT_006abfb0;
extern int _DAT_006abfc0;
extern int _DAT_006abfd0;
extern int _DAT_006abfe0;
extern int _DAT_006ccb10;
int _UNK_006abfb4;

float10 FUN_006736c0(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((DAT_00792fb8 != 0) && ((MXCSR & 0x1f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    uVar2 = (uint)((__int64)param_1 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    lVar6 = CONCAT44(_UNK_006abfb4,_DAT_006abfb0 - (uVar2 >> 0x14 & _DAT_006abfd0));
    if ((uVar1 & 0x800) == 0) {
      dVar5 = (double)(((__int64)param_1 >> lVar6) << lVar6);
      if (uVar1 < 0x3ff) {
        return (float10)(double)(-(__int64)(_DAT_006abfc0 < param_1) & _DAT_006abfa0);
      }
      if (uVar1 < 0x433) {
        return (float10)(dVar5 + (double)(-(__int64)(dVar5 < param_1) & _DAT_006abfa0));
      }
    }
    else {
      if (uVar1 < 0xbff) {
        return (float10)_DAT_006abfe0;
      }
      if (uVar1 < 0xc33) {
        return (float10)(double)(((__int64)param_1 >> lVar6) << lVar6);
      }
    }
    if (__isnan(param_1)) {
      FUN_0067b9b7(&param_1,&param_1,&param_1,0x3ec);
    }
    return (float10)(double)(__int64)CONCAT26((*(undefined2 *)((char *)&param_1 + 6)),((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff));
  }
  uVar2 = __ctrlfp(DAT_006ebe38,0xffff);
  if (((*(undefined2 *)((char *)&param_1 + 6)) & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)(double)(__int64)CONCAT26((*(undefined2 *)((char *)&param_1 + 6)),((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff));
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar5 = (double)(__int64)CONCAT26((*(undefined2 *)((char *)&param_1 + 6)),((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff)) + _DAT_006ccb10;
    uVar8 = CONCAT26((*(undefined2 *)((char *)&param_1 + 6)),((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff));
    uVar7 = 8;
  }
  else {
    fVar4 = (float10)FUN_00681f2f((int)((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff),
                                  (int)(CONCAT26((*(undefined2 *)((char *)&param_1 + 6)),((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff)) >> 0x20));
    dVar5 = (double)fVar4;
    if ((dVar5 == (double)(__int64)CONCAT26((*(undefined2 *)((char *)&param_1 + 6)),((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff))) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar5;
    }
    uVar8 = CONCAT26((*(undefined2 *)((char *)&param_1 + 6)),((__int64)(*(undefined8 *)&param_1) & (__int64)0x0000ffffffffffff));
    uVar7 = 0x10;
  }
  fVar4 = (float10)FUN_0067af08(uVar7,0xc,uVar8,dVar5,uVar2);
  return fVar4;
}
