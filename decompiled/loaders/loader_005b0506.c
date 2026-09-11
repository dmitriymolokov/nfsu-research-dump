/* spd-match: far pct=10.23 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8/p1/buckets/p1_03/attempt3_types */
#include "ghidra_compat.h"

int __cdecl FUN_005b04e1();
extern int DAT_006d4cfc;

typedef struct _union_530 {
  struct {
    DWORD dwOemId;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
    WORD wProcessorArchitecture;
  } s;
} _union_530;

typedef BYTE *LPBYTE;
typedef SYSTEM_INFO *LPSYSTEM_INFO;

int FUN_005b0506(void)

{
  LSTATUS LVar1;
  int iVar2;
  _union_530 local_38 [8];
  ushort local_18;
  int local_14;
  DWORD local_10 [2];
  HKEY local_8;
  
  LVar1 = RegOpenKeyA((HKEY)0x80000002,"Software\\Microsoft\\Direct3D",&local_8);
  if (LVar1 == 0) {
    local_10[1] = 4;
    LVar1 = RegQueryValueExA(local_8,"DisableMMX",(LPDWORD)0x0,local_10,(LPBYTE)&local_14,
                             local_10 + 1);
    if (((LVar1 == 0) && (local_10[0] == 4)) && (local_14 != 0)) {
      RegCloseKey(local_8);
      DAT_006d4cfc = 0;
      return 0;
    }
    RegCloseKey(local_8);
  }
  if (DAT_006d4cfc < 0) {
    DAT_006d4cfc = 0;
    GetSystemInfo((LPSYSTEM_INFO)&local_38[0].s);
    if (((local_38[0].s.wProcessorArchitecture == 0) && (4 < local_18)) &&
       (iVar2 = FUN_005b04e1(), iVar2 != 0)) {
      DAT_006d4cfc = 1;
    }
  }
  return DAT_006d4cfc;
}
