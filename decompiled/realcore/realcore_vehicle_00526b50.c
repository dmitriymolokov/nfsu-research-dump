/* spd-match: far pct=24.69 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141906Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
typedef unsigned int errno_t;
typedef unsigned int (*LPTHREAD_START_ROUTINE)(void *);
typedef HANDLE *LPHANDLE;
typedef BYTE *LPBYTE;
typedef UINT MMRESULT;
typedef __int64 LONGLONG;
typedef long __time32_t;
typedef void *HLINEAPP;
typedef void __cdecl _StartAddress(void *);
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
int __cdecl _fclose(FILE *);
int __cdecl _isalnum(int);
int __cdecl WideCharToMultiByte(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, BOOL *);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
int __cdecl __stricmp(const char *, const char *);
long __cdecl __ftol(void);
unsigned int __cdecl __control87(unsigned int, unsigned int);
void *__cdecl CreateObject(void);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
typedef struct tagPOINT { long x, y; } POINT, tagPOINT, *LPPOINT;
typedef struct tagPAINTSTRUCT { unsigned char _[64]; } PAINTSTRUCT, tagPAINTSTRUCT;
typedef struct varstring_tag { unsigned char _[32]; } varstring_tag;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
unsigned __stdcall __beginthreadex(void *, unsigned, unsigned (__stdcall *)(void *), void *, unsigned, unsigned *);

int __cdecl FUN_005259e0();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_00674898();
extern int DAT_006f1dd8;
extern int DAT_006f227c;
extern int DAT_006f4ed0;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684d8b(void);
extern char stack0xffffffe4;
int unaff_EDI;
int unaff_ESI;
void *ExceptionList;

extern char s_Jump_Landing_006bf0ec[];






void FUN_00526b50(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *local_18 [2];
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  local_c = ExceptionList;
  if (DAT_006f1dd8 != 0) {
    local_18[0] = DAT_006f4ed0;
    ExceptionList = &local_c;
    (**(code **)(*unaff_EDI + 0x38))(local_18,10);
    uVar2 = DAT_006f227c ^ 0x1d872b41;
    uVar5 = uVar2 >> 5 ^ uVar2;
    DAT_006f227c = uVar5 << 0x1b ^ uVar5 ^ uVar2;
    piVar1 = (int *)unaff_EDI[0xaf];
    PTR_s_CSISSOUND_006f8714 = s_Jump_Landing_006bf0ec;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&stack0xffffffe4);
      FUN_0064b580();
      (**(code **)(*unaff_ESI + 4))(piVar1);
      FUN_0064b5a0();
    }
    unaff_EDI[0xaf] = 0;
    FUN_0064b510(local_18);
    FUN_0064b580();
    iVar3 = (**(code **)*local_18[0])(0x18,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iStack_10 = iVar3;
      uVar4 = FUN_00674898();
      iVar3 = FUN_005259e0(0xc,uVar4);
    }
    unaff_EDI[0xaf] = iVar3;
  }
  ExceptionList = local_c;
  return;
}
