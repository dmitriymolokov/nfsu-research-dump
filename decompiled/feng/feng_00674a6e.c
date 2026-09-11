/* spd-match: far pct=11.11 M4.0.2-CE */
#include "ghidra_compat.h"

/* M4.0.2-CE: CRT/thread leaf — avoid __beginthreadex CRT name; soft deps */
typedef unsigned long (__stdcall *LPTHREAD_START_ROUTINE)(void *);
void *__cdecl _calloc(unsigned int, unsigned int);
void __cdecl __initptd(void *, void *);
void __cdecl __dosmaperr(unsigned long);
unsigned int *__cdecl FUN_00677f42(void);
unsigned long __stdcall FUN_006749ca(void *);
HANDLE __stdcall CreateThread(void *, unsigned, LPTHREAD_START_ROUTINE, void *, unsigned, unsigned long *);

unsigned int __cdecl
FUN_00674a6e(void *_Security,unsigned int _StackSize,void *param_start_address,void *_ArgList,
               unsigned int _InitFlag,unsigned int *_ThrdAddr)

{
  void *p_Var1;
  unsigned int *puVar2;
  void *_Ptd;
  void **lpThreadId;
  void *pvVar3;
  unsigned int DVar4;
  void * unaff_ESI;
  
  p_Var1 = param_start_address;
  DVar4 = 0;
  if (param_start_address == (void *)0x0) {
    puVar2 = (unsigned int *)FUN_00677f42();
    *puVar2 = 0x16;
  }
  else {
    _Ptd = _calloc(1,0x88);
    if (_Ptd != (void *)0x0) {
      __initptd(_Ptd,unaff_ESI);
      *(int *)((char *)_Ptd + 0x10) = 0xffffffff; /* _thandle */
      *(void **)((char *)_Ptd + 0x0c + 4) = _ArgList; /* _initarg */
      *(void **)((char *)_Ptd + 0x0c) = p_Var1; /* _initaddr */
      lpThreadId = (void **)_ThrdAddr;
      if (_ThrdAddr == (unsigned int *)0x0) {
        lpThreadId = (void **)&param_start_address;
      }
      pvVar3 = CreateThread(_Security,_StackSize,FUN_006749ca,_Ptd,_InitFlag,(unsigned long *)lpThreadId);
      if (pvVar3 != (void *)0x0) {
        return (unsigned int)pvVar3;
      }
      DVar4 = GetLastError();
    }
    _free(_Ptd);
    if (DVar4 != 0) {
      __dosmaperr(DVar4);
    }
  }
  return 0;
}
