/* spd-match: far pct=20.71 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2224_field_0_4 */
#include "ghidra_compat.h"

typedef struct { undefined4 a,b,c; } m375_ov12;
typedef struct { undefined1 b[16]; } m375_xmm16;
m375_xmm16 __cdecl rcpps(m375_xmm16, m375_xmm16);
m375_xmm16 __cdecl rcpss(m375_xmm16, m375_xmm16);
#ifndef LPPOINT
typedef struct tagPOINT { LONG x; LONG y; } POINT;
typedef POINT *LPPOINT;
#endif

int __cdecl FUN_00648517();
extern int DAT_0070ffe0;
extern int DAT_0070ffe8;
extern int DAT_00711000;
extern int DAT_00711008;
extern int DAT_0071100c;
extern int _DAT_00710ff8;
extern int _DAT_00710ffc;

void FUN_006485e9(int param_1)

{
  FUN_00648517(1);
  if (param_1 == 0) {
    DAT_00711008 = 0x40404;
    _DAT_00710ff8 = 0x60606;
    _DAT_00710ffc = 0x60606;
    (*(undefined4 *)&(DAT_0070ffe0)) = 0x1f800f8;
    (*(undefined4 *)((char *)&(DAT_0070ffe0) + 4)) = 0x1f800f8;
    (*(undefined4 *)&(DAT_0070ffe8)) = 0x800004;
    (*(undefined4 *)((char *)&(DAT_0070ffe8) + 4)) = 0x800004;
  }
  else {
    DAT_00711008 = 0x40402;
    _DAT_00710ff8 = 0x60603;
    _DAT_00710ffc = 0x60603;
    (*(undefined4 *)&(DAT_0070ffe0)) = 0xf800fc;
    (*(undefined4 *)((char *)&(DAT_0070ffe0) + 4)) = 0xf800fc;
    (*(undefined4 *)&(DAT_0070ffe8)) = 0x1000008;
    (*(undefined4 *)((char *)&(DAT_0070ffe8) + 4)) = 0x1000008;
  }
  DAT_0071100c = 0;
  (*(undefined4 *)((char *)&(DAT_00711000) + 4)) = 0xf800;
  (*(undefined4 *)&(DAT_00711000)) = 0xf800;
  return;
}
