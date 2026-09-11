/* spd-match: far pct=10.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p2/batches/20260724T154006Z_w0_tc0 */
#include "ghidra_compat.h"

typedef unsigned char MSG;
typedef MSG *LPMSG;
typedef unsigned char *LPBYTE;
typedef unsigned int MMRESULT;
void *DefWindowProcA_exref;
void *DestroyWindow;
void *_StartAddress;


undefined4 FUN_0063f2a0(void)

{
  LSTATUS LVar1;
  undefined4 local_10;
  HKEY local_c;
  DWORD local_8 [2];
  
  local_10 = 0;
  local_8[1] = 4;
  LVar1 = RegOpenKeyA((HKEY)0x80000002,"HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",&local_c
                     );
  if (LVar1 == 0) {
    local_8[0] = 4;
    RegQueryValueExA(local_c,"~MHz",(LPDWORD)0x0,local_8 + 1,(LPBYTE)&local_10,local_8);
    RegCloseKey(local_c);
  }
  return local_10;
}
