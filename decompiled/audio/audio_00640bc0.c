/* spd-match: far pct=10.95 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00643b60();
extern int DAT_006e7690;
extern int DAT_0070fda8;
extern int DAT_0070fdb0;
extern int DAT_0070fdb4;
int unaff_ESI;

HWND FUN_00640bc0(void)

{
  int nWidth;
  int nHeight;
  HWND pHVar1;
  uint uVar2;
  DWORD dwExStyle;
  int *unaff_ESI;
  tagRECT local_10;
  
  uVar2 = DAT_006e7690;
  if (unaff_ESI[5] == 0) {
    uVar2 = DAT_006e7690 | 0xca0000;
    dwExStyle = 0x40100;
    if ((DAT_006e7690 & 0x10000) != 0) {
      dwExStyle = 0x40000;
    }
    if (unaff_ESI[3] == 0) {
      local_10.top = -0x2000;
      local_10.left = -0x2000;
    }
    else {
      local_10.top = unaff_ESI[7];
      local_10.left = unaff_ESI[6];
    }
    local_10.bottom = unaff_ESI[1] + local_10.top;
    local_10.right = *unaff_ESI + local_10.left;
    AdjustWindowRectEx(&local_10,uVar2,0,dwExStyle);
    unaff_ESI[6] = local_10.left;
    nWidth = local_10.right - local_10.left;
    unaff_ESI[7] = local_10.top;
    nHeight = local_10.bottom - local_10.top;
  }
  else {
    unaff_ESI[6] = 0;
    unaff_ESI[7] = 0;
    nWidth = GetSystemMetrics(0);
    nHeight = GetSystemMetrics(1);
    uVar2 = uVar2 | 0x80000000;
    dwExStyle = 8;
  }
  pHVar1 = CreateWindowExA(dwExStyle,DAT_0070fdb0,DAT_0070fdb0,uVar2 | 0x2000000,unaff_ESI[6],
                           unaff_ESI[7],nWidth,nHeight,(HWND)0x0,(HMENU)0x0,DAT_0070fdb4,(LPVOID)0x0
                          );
  if (pHVar1 != (HWND)0x0) {
    SetCursor((HCURSOR)0x0);
    if (unaff_ESI[5] != 0) {
      ShowCursor(0);
    }
    if (DAT_0070fda8 == 0) {
      FUN_00643b60(0,0);
      FUN_00643b60(1,0);
      FUN_00643b60(2,0);
    }
  }
  return pHVar1;
}
