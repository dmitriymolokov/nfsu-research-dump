/* spd-match: far pct=7.66 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p4/batches/20260724T141806Z_w0_tc0 */
#include "ghidra_compat.h"

typedef unsigned int unkint10;
typedef WCHAR *LPWCH;
typedef struct _LDBL12 { unsigned char bytes[12]; } _LDBL12;
typedef struct _CRT_DOUBLE {
  struct { unsigned int _0_4_; unsigned int _4_4_; } x;
} _CRT_DOUBLE;
#define INTRNCVT_OVERFLOW 1
#define INTRNCVT_UNDERFLOW 2
INTRNCVT_STATUS __cdecl FID_conflict___ld12tod(_LDBL12 *, _CRT_DOUBLE *);
void __cdecl __fassign(void);
void __cdecl __forcdecpt(void);
typedef struct _DCB {
  DWORD DCBlength; DWORD BaudRate; DWORD _8_4_;
  BYTE ByteSize; BYTE Parity; BYTE StopBits; BYTE EvtChar;
  BYTE XonLim; BYTE XoffLim; BYTE _pad[2];
  BYTE EofChar; BYTE EvtChar2; WORD wReserved1;
} DCB;
typedef struct _COMMCONFIG {
  DWORD dwSize; WORD wVersion; WORD wReserved;
  DCB dcb;
  DWORD dwProviderSubType; DWORD dwProviderOffset;
  DWORD dwProviderSize; DWORD dwLineOffset; DWORD dwLineSize;
} _COMMCONFIG, *LPCOMMCFG;
typedef struct _MEMORY_BASIC_INFORMATION {
  PVOID BaseAddress; PVOID AllocationBase; DWORD AllocationProtect;
  SIZE_T RegionSize; DWORD State;
  struct { unsigned char _0_1_; unsigned char _1_1_; unsigned char _2_1_; unsigned char _3_1_; } Protect;
  DWORD Type;
} MEMORY_BASIC_INFORMATION, _MEMORY_BASIC_INFORMATION;
SIZE_T __stdcall VirtualQuery(LPCVOID, MEMORY_BASIC_INFORMATION *, SIZE_T);
BOOL __stdcall VirtualProtect(PVOID, SIZE_T, DWORD, DWORD *);
PVOID __stdcall VirtualAlloc(PVOID, SIZE_T, DWORD, DWORD);
void __stdcall GetSystemInfo(SYSTEM_INFO *);

extern int DAT_00717a88;

BOOL FUN_0068041c(void)

{
  SIZE_T SVar1;
  BOOL BVar2;
  LPCVOID lpAddress;
  PVOID lpAddress_00;
  undefined4 uStack_5c;
  _SYSTEM_INFO local_4c;
  _MEMORY_BASIC_INFORMATION local_28;
  DWORD local_c;
  SIZE_T local_8;
  
  uStack_5c = 0x68042d;
  SVar1 = VirtualQuery(&uStack_5c,&local_28,0x1c);
  if (SVar1 != 0) {
    GetSystemInfo(&local_4c);
    lpAddress_00 = (PVOID)((~(local_4c.dwPageSize - 1) & (uint)&uStack_5c) - local_4c.dwPageSize);
    local_8 = local_4c.dwPageSize;
    if ((LPVOID)((-(uint)(DAT_00717a88 != 1) & 0xffff1000) + 0x11000 + (int)local_28.AllocationBase)
        <= lpAddress_00) {
      lpAddress = local_28.AllocationBase;
      if (DAT_00717a88 != 1) {
        do {
          SVar1 = VirtualQuery(lpAddress,&local_28,0x1c);
          if (SVar1 == 0) {
            return 0;
          }
          lpAddress = (LPCVOID)((int)lpAddress + local_28.RegionSize);
        } while ((local_28.State & 0x1000) == 0);
        if ((local_28.Protect._1_1_ & 1) != 0) {
          return 1;
        }
        if (lpAddress_00 < local_28.BaseAddress) {
          return 0;
        }
        VirtualAlloc(local_28.BaseAddress,local_8,0x1000,4);
        lpAddress_00 = local_28.BaseAddress;
      }
      BVar2 = VirtualProtect(lpAddress_00,local_8,(-(uint)(DAT_00717a88 != 1) & 0x103) + 1,&local_c)
      ;
      return BVar2;
    }
  }
  return 0;
}
