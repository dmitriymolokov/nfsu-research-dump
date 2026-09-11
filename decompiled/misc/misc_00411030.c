/* spd-match: far pct=5.17 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_7 */
#include "ghidra_compat.h"

extern int DAT_00735e78;
extern int DAT_00736124;
extern int DAT_00736378;

typedef long LPARAM;
typedef unsigned int WPARAM;
typedef struct tagMSG {
  HWND hwnd;
  UINT message;
  WPARAM wParam;
  LPARAM lParam;
  DWORD time;
  long pt_x, pt_y;
} tagMSG;
BOOL __stdcall PeekMessageA(tagMSG *, HWND, UINT, UINT, UINT);
BOOL __stdcall GetMessageA(tagMSG *, HWND, UINT, UINT);
BOOL __stdcall TranslateMessage(tagMSG *);
LONG __stdcall DispatchMessageA(tagMSG *);
int __stdcall ShowCursor(BOOL);

int FUN_00411030(void)

{
  int iVar1;
  tagMSG local_1c;
  
  PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
  if (local_1c.message == 0x12) {
    DAT_00736124 = 1;
    ShowCursor(1);
    return local_1c.wParam;
  }
  if ((DAT_00735e78 == '\0') && (DAT_00736378 == 0)) {
    iVar1 = GetMessageA(&local_1c,(HWND)0x0,0,0);
  }
  else {
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  }
  if (iVar1 != 0) {
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
  }
  return local_1c.wParam;
}
