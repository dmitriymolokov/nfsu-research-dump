/* spd-match: far pct=0.00 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/audio_p1/batches/20260724T153641Z_w0_tc0 */
#include "ghidra_compat.h"

typedef int LRESULT;
typedef unsigned int WPARAM;
typedef long LPARAM;
typedef short SHORT;
typedef struct tagMSG {
  void *hwnd; unsigned int message; WPARAM wParam; LPARAM lParam;
  unsigned int time; long pt_x; long pt_y;
} MSG, tagMSG;
typedef struct tagPOINT { long x, y; } POINT, *LPPOINT;
typedef int _PtFuncCompare;
typedef struct COleDataObject { unsigned char _pad[16]; } COleDataObject;
typedef struct _AFX_EDIT_STATE { unsigned char _pad[64]; } _AFX_EDIT_STATE;
int __cdecl CreateObject(void);
extern unsigned char cRam006e768c;
extern unsigned char cRam006e768d;
extern unsigned char cRam0070fcdc;
extern int iRam0070fd84;
extern int iRam0070fd94;
extern unsigned int URam0070fd7c;
extern unsigned int URam0070fd80;
extern unsigned int sRam0070fd70;
extern void *pHRam0070fd88;
extern void *pHRam0070fd8c;
extern void *pcRam0070fd90;

int __cdecl FUN_006499d0();

undefined4 CreateObject(void)

{
  void *state;
  undefined4 local_c;
  
  state = (_AFX_EDIT_STATE *)FUN_006499d0(0x34);
  if (state == (_AFX_EDIT_STATE *)0x0) {
    local_c = 0;
  }
  else {
    local_c = 0;
  }
  return local_c;
}
