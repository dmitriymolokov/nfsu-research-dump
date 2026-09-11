/* spd-match: far pct=12.44 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141621Z_w0_tc0 */
#include "ghidra_compat.h"

typedef char *va_list;
typedef unsigned int errno_t;
typedef unsigned int (*LPTHREAD_START_ROUTINE)(void *);
typedef HANDLE *LPHANDLE;
typedef UINT MMRESULT;
typedef __int64 LONGLONG;
typedef long __time32_t;
typedef void *HLINEAPP;
typedef void __cdecl _StartAddress(void *);
int __cdecl __stricmp(const char *, const char *);
unsigned int __cdecl __control87(unsigned int, unsigned int);
void *__cdecl CreateObject(void);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
typedef struct tagPOINT { long x, y; } POINT, tagPOINT, *LPPOINT;
typedef struct tagPAINTSTRUCT { unsigned char _[64]; } PAINTSTRUCT, tagPAINTSTRUCT;
typedef struct varstring_tag { unsigned char _[32]; } varstring_tag;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
unsigned __stdcall __beginthreadex(void *, unsigned, unsigned (__stdcall *)(void *), void *, unsigned, unsigned *);

int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
extern int DAT_0070fca0;
extern int DAT_0070fcc8;
extern unsigned int uRam0070fb10;
int unaff_EBX;

extern int iRam0070f6c8;
extern int iRam0070fd68;
extern int iRam0070f704;
extern int iRam0070fc18;
extern int uRam0070fb10;
extern int iRam0070fd6c;
extern int iRam0070f708;






void FUN_00640DF0(int param_1,undefined4 param_2)

{
  int iVar1;
  BOOL BVar2;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  LONG X;
  LONG Y;
  tagPOINT tStack_8;
  
  iVar1 = unaff_EBX;
  if (unaff_EBX <= iRam0070f6c8) {
    iVar1 = iRam0070f6c8;
  }
  iVar4 = iRam0070fd68;
  if ((iVar1 < iRam0070fd68) && (iVar4 = unaff_EBX, unaff_EBX <= iRam0070f6c8)) {
    iVar4 = iRam0070f6c8;
  }
  iVar1 = param_1;
  if (param_1 <= iRam0070f704) {
    iVar1 = iRam0070f704;
  }
  iVar3 = iRam0070fc18;
  if ((iVar1 < iRam0070fc18) && (iVar3 = param_1, param_1 <= iRam0070f704)) {
    iVar3 = iRam0070f704;
  }
  FUN_0063f190(&DAT_0070fca0);
  uRam0070fb10 = param_2;
  if ((iVar4 != unaff_EBX) || (iVar3 != param_1)) {
    tStack_8.x = iVar4;
    tStack_8.y = iVar3;
    BVar2 = ClientToScreen(DAT_0070fcc8,&tStack_8);
    X = iVar4;
    Y = iVar3;
    if (BVar2 != 0) {
      X = tStack_8.x;
      Y = tStack_8.y;
    }
    SetCursorPos(X,Y);
    SetCursor((HCURSOR)0x0);
  }
  if ((iVar4 != iRam0070fd6c) || (iVar3 != iRam0070f708)) {
    iRam0070f708 = iVar3;
    iRam0070fd6c = iVar4;
  }
  FUN_0063f1a0(&DAT_0070fca0);
  return;
}
