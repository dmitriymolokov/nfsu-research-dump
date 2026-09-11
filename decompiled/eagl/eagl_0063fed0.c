/* spd-match: far pct=8.20 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141611Z_w0_tc0 */
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
int __cdecl FUN_0063fe60();
int __cdecl FUN_00672b40();
extern int DAT_0070fca0;

extern int sRam0070fd70;






undefined4 FUN_0063fed0(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 auStack_8 [2];
  
  FUN_0063f190(&DAT_0070fca0);
  auStack_8[0] = param_1;
  puVar2 = _bsearch(auStack_8,(void *)0x70f710,sRam0070fd70,8,FUN_0063fe60);
  uVar1 = sRam0070fd70;
  if (puVar2 == (undefined4 *)0x0) {
    if ((param_2 != 0) && (sRam0070fd70 < 0x80)) {
      *(undefined4 *)(sRam0070fd70 * 8 + 0x70f710) = param_1;
      *(int *)(sRam0070fd70 * 8 + 0x70f714) = param_2;
      sRam0070fd70 = sRam0070fd70 + 1;
      FUN_00672b40(0x70f710,sRam0070fd70,8,FUN_0063fe60);
    }
  }
  else if (param_2 == 0) {
    *puVar2 = 0x7fffffff;
    FUN_00672b40(0x70f710,uVar1,8,FUN_0063fe60);
    sRam0070fd70 = sRam0070fd70 - 1;
  }
  else {
    puVar2[1] = param_2;
  }
  FUN_0063f1a0(&DAT_0070fca0);
  return 1;
}
