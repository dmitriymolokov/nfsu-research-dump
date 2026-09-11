/* spd-match: far pct=11.70 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

typedef void *WNDPROC;
typedef void *LPTHREAD_START_ROUTINE;

int __cdecl FUN_0040a880();
int __cdecl FUN_00669f80();
int __cdecl FUN_0066a270();
int __cdecl FUN_0066a300();
int __cdecl FUN_00670a10();
extern int DAT_0066a260;
extern int DAT_0066a350;
extern int DAT_0066a3b0;
extern int DAT_0066a3c0;
extern int DAT_0066a3d0;
extern int DAT_006ab87c;
extern int DAT_006ab880;
extern void LAB_00669e60(void);
extern void LAB_00669f10(void);
extern void LAB_0066a1a0(void);
extern void LAB_006707f0(void);

undefined4 * FUN_0066a3e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HANDLE pvVar1;
  undefined4 *lpParameter;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  SIZE_T dwBytes;
  
  dwBytes = 0x18c;
  DVar5 = 0;
  pvVar1 = GetProcessHeap();
  lpParameter = HeapAlloc(pvVar1,DVar5,dwBytes);
  puVar3 = (undefined4 *)0x0;
  if (lpParameter != (undefined4 *)0x0) {
    puVar3 = lpParameter;
    for (iVar4 = 99; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *lpParameter = FUN_0066a3e0;
    lpParameter[1] = &LAB_00669f10;
    lpParameter[2] = FUN_00669f80;
    lpParameter[3] = FUN_0040a880;
    lpParameter[4] = &LAB_0066a1a0;
    lpParameter[5] = &DAT_0066a260;
    lpParameter[6] = FUN_0066a270;
    lpParameter[7] = FUN_0066a300;
    lpParameter[8] = FUN_0040a880;
    lpParameter[9] = &DAT_0066a350;
    lpParameter[10] = &LAB_006707f0;
    lpParameter[0xb] = &DAT_0066a3b0;
    lpParameter[0xc] = &DAT_0066a3c0;
    lpParameter[0xd] = &DAT_0066a3d0;
    lpParameter[0x12] = DAT_006ab87c;
    *(undefined1 *)(lpParameter + 0x13) = DAT_006ab880;
    lpParameter[0x20] = 0;
    pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00669e60,
                          lpParameter,0,lpParameter + 0x62);
    CloseHandle(pvVar1);
    iVar4 = lpParameter[0x20];
    while (iVar4 == 0) {
      Sleep(0);
      iVar4 = lpParameter[0x20];
    }
    if (lpParameter[0x20] == 1) {
      DVar5 = 0;
      pvVar1 = GetProcessHeap();
      HeapFree(pvVar1,DVar5,lpParameter);
      return (undefined4 *)0x0;
    }
    uVar2 = FUN_00670a10(param_1,param_2,param_3);
    lpParameter[0x1a] = uVar2;
    lpParameter[0x1e] = 0xffffffff;
    lpParameter[0x1f] = 0xffffffff;
    lpParameter[0x20] = 2;
    puVar3 = lpParameter;
  }
  return puVar3;
}
