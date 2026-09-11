/* spd-match: far pct=10.89 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141659Z_w0_tc0 */
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

int __cdecl FUN_00668cc0();
extern int DAT_007178f8;
extern int DAT_0071791c;
extern int DAT_00717920;
extern int _DAT_006eb1a8;
extern void LAB_00668f00(void);

void FUN_00668f40(void)

{
  DWORD local_4;
  
  DAT_0071791c = 0;
  _DAT_006eb1a8 = 0xffffffff;
  FUN_00668cc0(0);
  FUN_00668cc0(&DAT_007178f8);
  DAT_00717920 = (HANDLE)0x1;
  DAT_00717920 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00668f00,
                              (LPVOID)0x0,0,&local_4);
  if (DAT_00717920 != (HANDLE)0x0) {
    SetThreadPriority(DAT_00717920,2);
    CloseHandle(DAT_00717920);
  }
  return;
}
