/* spd-match: far pct=26.23 M4.0.2-CE */
#include "ghidra_compat.h"

typedef char EHExceptionRecord;
typedef char EHRegistrationNode;
typedef char _CONTEXT;
typedef char _s_HandlerType;
typedef struct { int maxState; } _s_FuncInfo;
typedef struct {
  int tryLow;
  int tryHigh;
  int nCatches;
  void *pHandlerArray;
} _s_TryBlockMapEntry;

_s_TryBlockMapEntry * __cdecl
_GetRangeOfTrysToCheck(_s_FuncInfo *param_1,int param_2,int param_3,
                       unsigned int *param_4,unsigned int *param_5);
void CatchIt(void *param_1,void *param_3,void *param_4,void *param_5,void *param_7,
             void *param_8,void *param_9,void *unaff_EBX,int unaff_EDI,void *unaff_ESI,
             unsigned char param_12);
void *__cdecl __getptd(void);
int FUN_006732a3(void *param_1,unsigned int param_2,void *param_3,void *param_4,
                 void *param_5,void *param_7,void *param_8);

void FUN_0067b585(void *param_1,unsigned int param_2,void *param_3,
                 void *param_4,void *param_5,int param_6,void *param_7,
                 void *param_8)

{
  void *pTVar1;
  unsigned char *p_Var2;
  int iVar3;
  _s_TryBlockMapEntry *p_Var4;
  void *unaff_EBX;
  void *unaff_ESI;
  int unaff_EDI;
  unsigned int uVar5;
  unsigned int local_8;
  unsigned int stack0_fffffff4;
  
  if ((*(int *)param_1 != -0x7ffffffd) &&
     (((p_Var2 = (unsigned char *)__getptd(), uVar5 = 0, *(int *)(p_Var2 + 0x1c) == 0 ||
       (iVar3 = FUN_006732a3(param_1,param_2,param_3,param_4,param_5,param_7,param_8), iVar3 == 0))
      && (p_Var4 = _GetRangeOfTrysToCheck
                             (param_5,(int)param_7,param_6,&local_8,&stack0_fffffff4),
         local_8 < stack0_fffffff4)))) {
    do {
      if (((p_Var4->tryLow <= param_6) && (param_6 <= p_Var4->tryHigh)) &&
         ((pTVar1 = *(void **)((unsigned char *)p_Var4->pHandlerArray +
                               (p_Var4->nCatches + -1) * 0x48 + 8),
          pTVar1 == (void *)0x0 || (*(char *)((unsigned char *)pTVar1 + 4) == '\0')))) {
        CatchIt(param_1,param_3,param_4,param_5,param_7,param_8,(void *)0x1,unaff_EBX,
                unaff_EDI,unaff_ESI,(unsigned char)uVar5);
      }
      local_8 = local_8 + 1;
      p_Var4 = p_Var4 + 1;
    } while (local_8 < stack0_fffffff4);
  }
  return;
}
