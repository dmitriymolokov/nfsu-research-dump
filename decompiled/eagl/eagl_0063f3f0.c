/* spd-match: far pct=5.80 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141611Z_w0_tc0 */
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

int __cdecl FUN_0063f340();

undefined8 FUN_0063f3f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  LARGE_INTEGER local_8;
  
  QueryPerformanceFrequency(&local_8);
  iVar8 = 0;
  local_8.QuadPart = (LONGLONG)__aulldiv(local_8.s.LowPart,local_8.s.HighPart,5,0);
  uVar5 = 0;
  uVar7 = 0;
  do {
    FUN_0063f340(1,0);
    uVar1 = rdtsc();
    FUN_0063f340(local_8.s);
    uVar2 = rdtsc();
    uVar3 = (int)uVar2 - (int)uVar1;
    uVar6 = uVar5;
    uVar4 = uVar7;
    if ((((iVar8 != 0) && (uVar6 = uVar7, uVar4 = uVar3, uVar7 <= uVar3)) && (uVar7 != 0)) &&
       ((uVar3 < uVar5 || (uVar6 = uVar5, uVar4 = uVar7, uVar5 == 0)))) {
      uVar6 = uVar3;
      uVar4 = uVar7;
    }
    iVar8 = iVar8 + 1;
    uVar5 = uVar6;
    uVar7 = uVar4;
  } while (iVar8 < 5);
  if (uVar6 != 0) {
    uVar4 = uVar6;
  }
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),uVar4);
}
