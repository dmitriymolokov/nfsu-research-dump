/* spd-match: far pct=9.06 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p1/buckets/p1_08/attempt4_c7f41_uint */
#include "ghidra_compat.h"

HANDLE __stdcall CreateFileA(LPCSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES,
                             DWORD, DWORD, HANDLE);
HANDLE __stdcall CreateFileW(LPCWSTR, DWORD, DWORD, LPSECURITY_ATTRIBUTES,
                             DWORD, DWORD, HANDLE);
BOOL __stdcall GetVersionExA(LPOSVERSIONINFOA);
int __stdcall WideCharToMultiByte(UINT, DWORD, LPCWSTR, int, LPSTR, int,
                                  LPCSTR, LPBOOL);
HANDLE __stdcall CreateFileMappingA(HANDLE, LPSECURITY_ATTRIBUTES, DWORD,
                                    DWORD, DWORD, LPCSTR);
DWORD __stdcall GetFileSize(HANDLE, LPDWORD);
LPVOID __stdcall MapViewOfFile(HANDLE, DWORD, DWORD, DWORD, SIZE_T);

extern char stack0xffffff58;
extern void LAB_005c7fe4(...);
extern void LAB_005c8043(...);

struct ThisCallBox {
  undefined4 FUN_005c7f41(LPCWSTR param_2, int param_3);
};
undefined4 ThisCallBox::FUN_005c7f41(LPCWSTR param_2, int param_3) {
  HANDLE pvVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  _OSVERSIONINFOA local_9c;
  int local_8;
  
  if (param_2 == (LPCWSTR)0x0) {
    return 0x8876086c;
  }
  if (param_3 == 0) {
LAB_005c7fe4:
    pvVar1 = CreateFileA((LPCSTR)param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000000,
                         (HANDLE)0x0);
  }
  else {
    local_9c.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_9c);
    if (local_9c.dwPlatformId != 2) {
      local_8 = WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      WideCharToMultiByte(0xfde9,0,param_2,-1,&stack0xffffff58,local_8,(LPCSTR)0x0,(LPBOOL)0x0);
      param_3 = 0;
      param_2 = (LPCWSTR)&stack0xffffff58;
    }
    if (param_3 == 0) goto LAB_005c7fe4;
    pvVar1 = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000000,(HANDLE)0x0);
  }
  *((undefined4 *)this) = (unsigned int)pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    pvVar1 = CreateFileMappingA(pvVar1,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    ((undefined4 *)this)[1] = (unsigned int)pvVar1;
    if (pvVar1 != (HANDLE)0xffffffff) {
      DVar2 = GetFileSize((HANDLE)*((undefined4 *)this),(LPDWORD)0x0);
      ((undefined4 *)this)[3] = DVar2;
      if (DVar2 != 0xffffffff) {
        if (DVar2 == 0) {
          ((undefined4 *)this)[2] = 0;
        }
        else {
          pvVar3 = MapViewOfFile((HANDLE)((undefined4 *)this)[1],4,0,0,0);
          ((undefined4 *)this)[2] = (unsigned int)pvVar3;
          if (pvVar3 == (LPVOID)0x0) goto LAB_005c8043;
        }
        return 0;
      }
    }
  }
LAB_005c8043:
  GetLastError();
  return 0x88760b59;
}
