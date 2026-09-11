/* spd-match: far pct=24.39 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141558Z_w0_tc0 */
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

int __cdecl FUN_00642570();
extern int DAT_0070f4e8;
extern int DAT_0070f4f0;
extern int _DAT_0070f4ec;
extern void LAB_0063e510(void);

void FUN_0063e850(void)

{
  HANDLE hTargetProcessHandle;
  HANDLE hSourceHandle;
  HANDLE hSourceProcessHandle;
  LPHANDLE lpTargetHandle;
  DWORD dwDesiredAccess;
  BOOL bInheritHandle;
  DWORD dwOptions;
  
  if (DAT_0070f4e8 == 0) {
    _DAT_0070f4ec = GetCurrentThreadId();
    dwOptions = 2;
    bInheritHandle = 0;
    dwDesiredAccess = 0;
    lpTargetHandle = (LPHANDLE)&DAT_0070f4f0;
    hTargetProcessHandle = GetCurrentProcess();
    hSourceHandle = GetCurrentThread();
    hSourceProcessHandle = GetCurrentProcess();
    DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                    dwDesiredAccess,bInheritHandle,dwOptions);
    FUN_00642570(&LAB_0063e510);
    DAT_0070f4e8 = 1;
  }
  return;
}
