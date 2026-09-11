/* spd-match: far pct=8.55 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141621Z_w0_tc0 */
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

extern int DAT_0070fcc8;
extern unsigned char *PTR_FUN_006e7698;
extern unsigned char *PTR_FUN_006e80b0;

undefined4 FUN_00640a10(int param_1,HWND param_2)

{
  undefined4 *in_stack_00000018;
  tagPAINTSTRUCT tStack_40;
  
  if (((param_1 != 0) && (DAT_0070fcc8 == param_2)) && (param_2 != (HWND)0x0)) {
    if (*(int *)(param_1 + 0x14) != 0) {
      SetForegroundWindow(param_2);
    }
    (*(code *)PTR_FUN_006e80b0)(1);
    BeginPaint(*(HWND *)(param_1 + 0xc),&tStack_40);
    EndPaint(*(HWND *)(param_1 + 0xc),&tStack_40);
    (*(code *)PTR_FUN_006e80b0)(0);
    if ((PTR_FUN_006e7698 != (undefined *)0x0) && (*(int *)(param_1 + 0x14) == 0)) {
      (*(code *)PTR_FUN_006e7698)();
    }
    *in_stack_00000018 = 1;
  }
  return 1;
}
