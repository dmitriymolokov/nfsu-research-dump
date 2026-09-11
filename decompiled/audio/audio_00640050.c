/* spd-match: far pct=13.83 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141611Z_w0_tc0 */
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

extern int iRam0070f70c;
extern int iRam0070f700;
extern int iRam0070fd64;






void FUN_00640050(undefined2 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = iRam0070f70c;
  FUN_0063f190(0x70f6d4);
  *(undefined2 *)(iVar1 * 4 + 0x70fc22) = param_1;
  *(undefined1 *)(iVar1 * 4 + 0x70fc20) = param_2;
  iRam0070f70c = (iRam0070f70c + 1) % iRam0070f700;
  if (iRam0070fd64 == iRam0070f70c) {
    iRam0070fd64 = (iRam0070fd64 + 1) % iRam0070f700;
  }
  FUN_0063f1a0(0x70f6d4);
  return;
}
