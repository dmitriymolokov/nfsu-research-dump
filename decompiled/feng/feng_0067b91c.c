/* spd-match: far pct=6.77 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p4/batches/20260724T141806Z_w0_tc0 */
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

int __cdecl FUN_00681af5();
extern int DAT_006eb720;
int unaff_retaddr;

void FUN_0067b91c(uint *param_1,int param_2)

{
  uint uVar1;
  INTRNCVT_STATUS IVar2;
  uint uVar3;
  uint unaff_retaddr;
  _LDBL12 local_20;
  _CRT_DOUBLE local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  uVar3 = 0;
  uVar1 = FUN_00681af5(&local_20,&local_c,param_2,0,0,0,0);
  if ((uVar1 & 4) == 0) {
    IVar2 = FID_conflict___ld12tod(&local_20,&local_14);
    if (((uVar1 & 2) != 0) || (IVar2 == INTRNCVT_OVERFLOW)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (IVar2 == INTRNCVT_UNDERFLOW)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    local_14.x._0_4_ = 0;
    local_14.x._4_4_ = 0;
  }
  *param_1 = uVar3;
  param_1[1] = local_c - param_2;
  param_1[4] = local_14.x._0_4_;
  param_1[5] = local_14.x._4_4_;
  return;
}
