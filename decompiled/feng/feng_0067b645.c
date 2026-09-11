/* spd-match: far pct=19.16 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_14/attempt1_recipe */
#include "ghidra_compat.h"

typedef struct m375_r14_ptiddata {
  void *_terminate;
  void *_unexpected;
} *m375_r14_ptiddata;
#define _ptiddata m375_r14_ptiddata
typedef struct m375_r14_tryblock {
  int tryLow;
  int tryHigh;
  int nCatches;
} m375_r14_tryblock;

int __cdecl FUN_0067b585();
extern void LAB_0067b7cf(void);
extern void LAB_0067b7fc(void);
int unaff_EBX;
int unaff_EDI;
int unaff_ESI;

typedef char EHExceptionRecord;
typedef char EHRegistrationNode;
typedef char _CONTEXT;
typedef char _s_HandlerType;
typedef char _s_CatchableType;
typedef char _s_ThrowInfo;
typedef struct { int maxState; } _s_FuncInfo;
typedef struct {
  int tryLow;
  int tryHigh;
  int nCatches;
} _s_TryBlockMapEntry;
struct _ptiddata_overlay {
  void *_terminate;
  void *_unexpected;
};

void FUN_0067b645(EHExceptionRecord *param_1,int param_2,EHRegistrationNode *param_3,
                 _CONTEXT *param_4,_s_FuncInfo *param_5,char param_6,_s_FuncInfo *param_7,
                 _s_HandlerType *param_8)

{
  struct _ptiddata_overlay *p_Var1;
  int iVar2;
  m375_r14_tryblock *p_Var3;
  EHRegistrationNode *unaff_EBX;
  _s_ThrowInfo *unaff_ESI;
  m375_r14_tryblock *unaff_EDI;
  uchar uVar4;
  uint local_24;
  _s_CatchableType *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  uint local_c;
  m375_r14_tryblock *local_8;
  
  local_1c = *(int *)(param_2 + 8);
  local_20 = (_s_CatchableType *)((uint)local_20 & 0xffffff00);
  if ((local_1c < -1) || (param_5->maxState <= local_1c)) {
    _inconsistency();
  }
  if (*(int *)param_1 == -0x1f928c9d) {
    if (((*(int *)(param_1 + 0x10) == 3) && (*(int *)(param_1 + 0x14) == 0x19930520)) &&
       (*(int *)(param_1 + 0x1c) == 0)) {
      p_Var1 = __getptd();
      if (p_Var1->_terminate == (void *)0x0) {
        return;
      }
      p_Var1 = __getptd();
      param_1 = p_Var1->_terminate;
      p_Var1 = __getptd();
      param_3 = p_Var1->_unexpected;
      local_20 = (_s_CatchableType *)(((unsigned int)(uintptr_t)local_20 & 0xffffff00u) | 1u);
      iVar2 = FID_conflict__ValidateRead(param_1,1);
      if (iVar2 == 0) {
        _inconsistency();
      }
      if (*(int *)param_1 != -0x1f928c9d) goto LAB_0067b7fc;
      if (((*(int *)(param_1 + 0x10) == 3) && (*(int *)(param_1 + 0x14) == 0x19930520)) &&
         (*(int *)(param_1 + 0x1c) == 0)) {
        _inconsistency();
      }
    }
    iVar2 = local_1c;
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       (*(int *)(param_1 + 0x14) == 0x19930520)) {
      p_Var3 = _GetRangeOfTrysToCheck(param_5,(int)param_7,local_1c,&local_c,&local_24);
      local_8 = p_Var3;
      if (local_c < local_24) {
        do {
          if ((p_Var3->tryLow <= iVar2) && (iVar2 <= p_Var3->tryHigh)) {
            local_8 = p_Var3;
            for (local_18 = p_Var3->nCatches; 0 < local_18; local_18 = local_18 + -1) {
              local_10 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc);
              for (local_14 = *local_10; local_10 = local_10 + 1, 0 < local_14;
                  local_14 = local_14 + -1) {
                uVar4 = (uchar)*local_10;
                iVar2 = TypeMatch(*(_s_HandlerType **)(param_1 + 0x1c),(_s_CatchableType *)unaff_EDI
                                  ,unaff_ESI);
                p_Var3 = local_8;
                if (iVar2 != 0) {
                  CatchIt(param_1,param_3,param_4,param_5,param_7,param_8,local_20,unaff_EDI,
                          (int)unaff_ESI,unaff_EBX,uVar4);
                  goto LAB_0067b7cf;
                }
              }
            }
          }
LAB_0067b7cf:
          local_c = local_c + 1;
          p_Var3 = p_Var3 + 1;
          iVar2 = local_1c;
          local_8 = p_Var3;
        } while (local_c < local_24);
      }
      if (param_6 == '\0') {
        return;
      }
      ___DestructExceptionObject(param_1,1);
      return;
    }
  }
LAB_0067b7fc:
  if (param_6 == '\0') {
    FUN_0067b585(param_1,param_2,param_3,param_4,param_5,local_1c,param_7,param_8);
    return;
  }
  terminate();
  return;
}
