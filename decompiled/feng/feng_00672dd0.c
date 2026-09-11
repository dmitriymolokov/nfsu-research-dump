/* spd-match: far pct=33.93 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p4/batches/20260724T141711Z_w0_tc0 */
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

extern unsigned char *PTR_FUN_006ebcb0;
extern unsigned char *PTR_FUN_006ebcb4;
extern unsigned char *PTR_FUN_006ebcb8;
extern unsigned char *PTR_FUN_006ebcbc;
extern unsigned char *PTR_FUN_006ebcc0;
extern unsigned char *PTR_FUN_006ebcc4;
extern void LAB_00679fb1(void);
extern void LAB_00679ffc(void);

void FUN_00672dd0(void)

{
  PTR_FUN_006ebcb0 = __cfltcvt;
  PTR_FUN_006ebcb4 = &LAB_00679fb1;
  PTR_FUN_006ebcb8 = __fassign;
  PTR_FUN_006ebcbc = __forcdecpt;
  PTR_FUN_006ebcc0 = &LAB_00679ffc;
  PTR_FUN_006ebcc4 = __cfltcvt;
  return;
}
