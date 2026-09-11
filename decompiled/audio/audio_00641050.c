/* spd-match: far pct=2.07 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_4 */
#include "ghidra_compat.h"

typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct { undefined1 b[16]; } m375_xmm16;
m375_xmm16 __cdecl rcpps(m375_xmm16, m375_xmm16);
m375_xmm16 __cdecl rcpss(m375_xmm16, m375_xmm16);
#ifndef LPPOINT
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef POINT *LPPOINT;
#endif

extern int DAT_0070fcc8;
extern int _DAT_0070fcbc;
extern int _DAT_0070fcc0;
extern int _DAT_0070fcd4;
extern int _DAT_0070fcd8;

void FUN_00641050(int param_1,int param_2,LONG param_3,LONG param_4)

{
  DWORD dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  undefined1 auStack_20 [12];
  int iStack_14;
  tagRECT tStack_10;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    GetClientRect(DAT_0070fcc8,&tStack_10);
    param_3 = tStack_10.right;
    param_4 = tStack_10.bottom;
  }
  (*(undefined4 *)&(auStack_20)) = 0;
  (*(undefined4 *)((char *)&(auStack_20) + 4)) = 0;
  (*(undefined4 *)((char *)&(auStack_20) + 8)) = param_3;
  iStack_14 = param_4;
  dwExStyle = GetWindowLongA(DAT_0070fcc8,-0x14);
  bMenu = 0;
  dwStyle = GetWindowLongA(DAT_0070fcc8,-0x10);
  AdjustWindowRectEx((LPRECT)auStack_20,dwStyle,bMenu,dwExStyle);
  if ((param_1 == 0) || (param_2 == 0)) {
    SystemParametersInfoA(0x30,0,&tStack_10,0);
    param_1 = ((((*(undefined4 *)&(auStack_20)) - tStack_10.left) - (*(undefined4 *)((char *)&(auStack_20) + 8))) + tStack_10.right >> 1) +
              tStack_10.left;
    param_2 = ((((*(undefined4 *)((char *)&(auStack_20) + 4)) - tStack_10.top) - iStack_14) + tStack_10.bottom >> 1) +
              tStack_10.top;
  }
  else {
    param_1 = param_1 + (*(undefined4 *)&(auStack_20));
    param_2 = param_2 + (*(undefined4 *)((char *)&(auStack_20) + 4));
  }
  SetWindowPos(DAT_0070fcc8,(HWND)0x0,param_1,param_2,(*(undefined4 *)((char *)&(auStack_20) + 8)) - (*(undefined4 *)&(auStack_20)),
               iStack_14 - (*(undefined4 *)((char *)&(auStack_20) + 4)),0x14);
  GetClientRect(DAT_0070fcc8,(LPRECT)auStack_20);
  ClientToScreen(DAT_0070fcc8,(LPPOINT)auStack_20);
  ClientToScreen(DAT_0070fcc8,(LPPOINT)(auStack_20 + 8));
  _DAT_0070fcd8 = param_2;
  _DAT_0070fcd4 = param_1;
  _DAT_0070fcbc = (*(undefined4 *)((char *)&(auStack_20) + 8)) - (*(undefined4 *)&(auStack_20));
  _DAT_0070fcc0 = iStack_14 - (*(undefined4 *)((char *)&(auStack_20) + 4));
  return;
}
