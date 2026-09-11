/* Decompiled from Speed.exe @ 006700c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_006700c0(LPVOID param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  
  if (*(int *)((int)param_1 + 0xbc) == 4) {
    *(undefined4 *)((int)param_1 + 0xbc) = 6;
    do {
      Sleep(0);
    } while (*(int *)((int)param_1 + 0xbc) == 6);
  }
  *(undefined4 *)((int)param_1 + 0xbc) = 9;
  do {
    Sleep(0);
  } while (*(int *)((int)param_1 + 0xbc) != 1);
  if (*(HANDLE *)((int)param_1 + 0x6c) != (HANDLE)0xffffffff) {
    SetCommMask(*(HANDLE *)((int)param_1 + 0x6c),2);
    PurgeComm(*(HANDLE *)((int)param_1 + 0x6c),0xf);
    CloseHandle(*(HANDLE *)((int)param_1 + 0x6c));
  }
  CloseHandle(*(HANDLE *)((int)param_1 + 0x80));
  CloseHandle(*(HANDLE *)((int)param_1 + 0x94));
  CloseHandle(*(HANDLE *)((int)param_1 + 0xa8));
  pvVar3 = *(LPVOID *)((int)param_1 + 0xd4);
  DVar2 = 0;
  pvVar1 = GetProcessHeap();
  HeapFree(pvVar1,DVar2,pvVar3);
  pvVar3 = *(LPVOID *)((int)param_1 + 0xf0);
  DVar2 = 0;
  pvVar1 = GetProcessHeap();
  HeapFree(pvVar1,DVar2,pvVar3);
  DVar2 = 0;
  pvVar1 = GetProcessHeap();
  HeapFree(pvVar1,DVar2,param_1);
  return;
}

