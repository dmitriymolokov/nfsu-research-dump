/* spd-match: far pct=11.71 flags=/O1 /Gr /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_005232B0 */
#include "ghidra_compat.h"
extern int DAT_006f1dd8;
extern void *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684e6b(void);
extern int __cdecl FUN_00522480(void);
extern int __cdecl FUN_0064b510(void*);
extern int __cdecl FUN_0064b580(void);
extern int __cdecl FUN_0064b5a0(void);
extern int __cdecl FUN_0064bbd0(void);
extern void* ExceptionList;
char s_SND__FE_Common_006bf41c[1];
int __stdcall FUN_005232b0(void* pThis, int param_2) {
  void* local_c = ExceptionList;
  int* stack_ptr = (int*)-1;
  void* handler = &LAB_00684e6b;
  if (DAT_006f1dd8 != 0 && param_2 != 0) {
    ExceptionList = &local_c;
    int* pObj = (int*)pThis;
    int* vtbl = (int*)pObj[8];
    void (__stdcall *func)(void*, int, int) = (void (__stdcall *)(void*, int, int))vtbl[10];
    func(pObj, 0, 0);
    PTR_s_CSISSOUND_006f8714 = s_SND__FE_Common_006bf41c;
    FUN_0064b510(&stack_ptr);
    FUN_0064b580();
    int (**vptr)(int, int, int) = (int (**)(int, int, int))(*stack_ptr);
    int iVar1 = vptr[0](0x14, 4, -1);
    FUN_0064b5a0();
    pObj[0x93] = (iVar1 == 0) ? 0 : FUN_00522480();
    if (pObj[0x93] != 0) {
      FUN_0064b510(&pObj);
      FUN_0064b580();
      void (**vptr2)(int) = (void (**)(int))(*(int*)pObj[0x93] + 4);
      vptr2[0](pObj[0x93]);
      FUN_0064b5a0();
    }
    pObj[0x93] = 0;
  }
  ExceptionList = local_c;
  return -1;
}
