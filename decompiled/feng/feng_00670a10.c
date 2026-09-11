/* spd-match: far pct=12.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

typedef void *WNDPROC;
typedef void *LPTHREAD_START_ROUTINE;

int __cdecl FUN_0040a880();
int __cdecl FUN_006700c0();
int __cdecl FUN_00670660();
int __cdecl FUN_006706c0();
int __cdecl FUN_00670740();
int __cdecl FUN_006707b0();
int __cdecl FUN_00670800();
int __cdecl FUN_00670940();
extern int DAT_0066fd80;
extern void LAB_00670190(void);
extern void LAB_006707f0(void);
extern void LAB_006709c0(void);

undefined4 * FUN_00670a10(int param_1,int param_2,int param_3)

{
  HANDLE pvVar1;
  undefined4 *lpParameter;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  SIZE_T SVar6;
  DWORD local_4;
  
  SVar6 = 0x1934;
  DVar5 = 0;
  pvVar1 = GetProcessHeap();
  lpParameter = HeapAlloc(pvVar1,DVar5,SVar6);
  puVar3 = (undefined4 *)0x0;
  if (lpParameter != (undefined4 *)0x0) {
    puVar3 = lpParameter;
    for (iVar4 = 0x64d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *lpParameter = FUN_00670a10;
    lpParameter[1] = FUN_006700c0;
    lpParameter[2] = &LAB_00670190;
    lpParameter[3] = FUN_0040a880;
    lpParameter[4] = FUN_00670660;
    lpParameter[5] = FUN_006706c0;
    lpParameter[6] = FUN_00670740;
    lpParameter[7] = FUN_00670a10;
    lpParameter[8] = FUN_0040a880;
    lpParameter[9] = FUN_006707b0;
    lpParameter[10] = &LAB_006707f0;
    lpParameter[0xb] = FUN_00670800;
    lpParameter[0xc] = FUN_00670940;
    lpParameter[0xd] = &LAB_006709c0;
    lpParameter[0x12] = (*(undefined4 *)((char *)0x006abdfc + 0));
    *(undefined2 *)(lpParameter + 0x13) = (*(undefined2 *)((char *)0x006abdfc + 4));
    *(char *)((int)lpParameter + 0x4e) = ((char *)0x006abdfc)[6];
    InitializeCriticalSection((LPCRITICAL_SECTION)(lpParameter + 0x644));
    param_1 = param_1 + 0x10;
    SVar6 = param_1 * param_2;
    DVar5 = 0;
    lpParameter[0x31] = param_1;
    lpParameter[0x32] = SVar6;
    pvVar1 = GetProcessHeap();
    pvVar2 = HeapAlloc(pvVar1,DVar5,SVar6);
    lpParameter[0x37] = param_1;
    SVar6 = param_1 * param_3;
    lpParameter[0x38] = SVar6;
    DVar5 = 0;
    lpParameter[0x35] = pvVar2;
    pvVar1 = GetProcessHeap();
    pvVar2 = HeapAlloc(pvVar1,DVar5,SVar6);
    lpParameter[0x3c] = pvVar2;
    lpParameter[0x23e] = 0;
    lpParameter[0x641] = 0;
    lpParameter[0x640] = 0;
    lpParameter[0x63f] = 0x800;
    lpParameter[0x2f] = 1;
    lpParameter[0x30] = 0;
    DVar5 = GetCurrentThreadId();
    lpParameter[0x2e] = DVar5;
    lpParameter[0x1b] = 0xffffffff;
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    lpParameter[0x20] = pvVar1;
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    lpParameter[0x25] = pvVar1;
    pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    lpParameter[0x2a] = pvVar1;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&DAT_0066fd80,
                          lpParameter,0,&local_4);
    if (pvVar1 == (HANDLE)0x0) {
      return (undefined4 *)0x0;
    }
    SetThreadPriority(pvVar1,2);
    CloseHandle(pvVar1);
    puVar3 = lpParameter;
  }
  return puVar3;
}
