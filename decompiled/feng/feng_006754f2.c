/* spd-match: far pct=7.93 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p4/batches/20260724T141711Z_w0_tc0 */
#include "ghidra_compat.h"

typedef unsigned int unkint10;
typedef WCHAR *LPWCH;
typedef struct _LDBL12 { unsigned char bytes[12]; } _LDBL12;
typedef struct _CRT_DOUBLE { double x; } _CRT_DOUBLE;
#define INTRNCVT_OVERFLOW 1
#define INTRNCVT_UNDERFLOW 2
INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *, _CRT_DOUBLE *);
void __cdecl __fassign(void);
void __cdecl __forcdecpt(void);
typedef struct _COMMCONFIG {
  DWORD dwSize; WORD wVersion; WORD wReserved; DWORD dwProviderSubType;
  DWORD dwProviderOffset; DWORD dwProviderSize; DWORD dwLineOffset; DWORD dwLineSize;
} _COMMCONFIG, *LPCOMMCFG;
typedef struct _MEMORY_BASIC_INFORMATION {
  PVOID BaseAddress; PVOID AllocationBase; DWORD AllocationProtect;
  SIZE_T RegionSize; DWORD State; DWORD Protect; DWORD Type;
} MEMORY_BASIC_INFORMATION, _MEMORY_BASIC_INFORMATION;
SIZE_T __stdcall VirtualQuery(LPCVOID, MEMORY_BASIC_INFORMATION *, SIZE_T);
void __stdcall GetSystemInfo(SYSTEM_INFO *);

extern int DAT_00717c18;
extern void LAB_00675540(void);

LPVOID __cdecl ___crtGetEnvironmentStringsA(void)

{
  char cVar1;
  WCHAR WVar2;
  DWORD DVar3;
  WCHAR *pWVar4;
  int iVar6;
  size_t _Size;
  LPSTR lpMultiByteStr;
  LPCH _Src;
  char *pcVar7;
  void *_Dst;
  LPWCH lpWideCharStr;
  LPSTR local_8;
  WCHAR *pWVar5;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  if (DAT_00717c18 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_00717c18 = 1;
      goto LAB_00675540;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0x78) {
      DAT_00717c18 = 2;
    }
  }
  if (DAT_00717c18 != 1) {
    if ((DAT_00717c18 != 2) && (DAT_00717c18 != 0)) {
      return (LPVOID)0x0;
    }
    _Src = GetEnvironmentStrings();
    if (_Src == (LPCH)0x0) {
      return (LPVOID)0x0;
    }
    cVar1 = *_Src;
    pcVar7 = _Src;
    while (cVar1 != '\0') {
      do {
        pcVar8 = pcVar7;
        pcVar7 = pcVar8 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = pcVar8 + 2;
      cVar1 = *pcVar7;
    }
    _Dst = _malloc((size_t)(pcVar7 + (1 - (int)_Src)));
    if (_Dst == (void *)0x0) {
      _Dst = (void *)0x0;
    }
    else {
      _memcpy(_Dst,_Src,(size_t)(pcVar7 + (1 - (int)_Src)));
    }
    FreeEnvironmentStringsA(_Src);
    return _Dst;
  }
LAB_00675540:
  if ((lpWideCharStr == (LPWCH)0x0) &&
     (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
    return (LPVOID)0x0;
  }
  WVar2 = *lpWideCharStr;
  pWVar4 = lpWideCharStr;
  while (WVar2 != L'\0') {
    do {
      pWVar5 = pWVar4;
      pWVar4 = pWVar5 + 1;
    } while (*pWVar4 != L'\0');
    pWVar4 = pWVar5 + 2;
    WVar2 = *pWVar4;
  }
  iVar6 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
  _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
  local_8 = (LPSTR)0x0;
  if (((_Size != 0) && (lpMultiByteStr = _malloc(_Size), lpMultiByteStr != (LPSTR)0x0)) &&
     (iVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar6,lpMultiByteStr,_Size,(LPCSTR)0x0,
                                  (LPBOOL)0x0), local_8 = lpMultiByteStr, iVar6 == 0)) {
    _free(lpMultiByteStr);
    local_8 = (LPSTR)0x0;
  }
  FreeEnvironmentStringsW(lpWideCharStr);
  return local_8;
}
