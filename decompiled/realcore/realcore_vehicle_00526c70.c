/* spd-match: far pct=14.73 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141916Z_w0_tc0 */
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
extern int DAT_006f4ec8;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684d8b(void);
int unaff_EDI;
void *ExceptionList;

extern char s_Bottom_Out_006bf0e0[];






void FUN_00526c70(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_EDI;
  undefined4 *local_18;
  int *local_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  pvStack_c = ExceptionList;
  piVar1 = (int *)unaff_EDI[0xae];
  ExceptionList = &pvStack_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    if (*piVar1 != 0) {
      ExceptionList = &pvStack_c;
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_14);
    FUN_0064b580();
    (**(code **)(*local_14 + 4))(piVar1);
    FUN_0064b5a0();
  }
  if (DAT_006f1dd8 != 0) {
    local_18 = DAT_006f4ec8;
    (**(code **)(*unaff_EDI + 0x38))(&local_18,10);
    uVar6 = DAT_006f227c % 3;
    uVar5 = DAT_006f227c ^ 0x1d872b41;
    uVar2 = uVar5 >> 5 ^ uVar5;
    PTR_s_CSISSOUND_006f8714 = s_Bottom_Out_006bf0e0;
    DAT_006f227c = uVar2 << 0x1b ^ uVar2 ^ uVar5;
    FUN_0064b510(&local_18);
    FUN_0064b580();
    iVar3 = (**(code **)*local_18)(0x18,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iStack_10 = iVar3;
      uVar4 = FUN_00674898();
      iVar3 = FUN_005259e0(uVar6,uVar4);
    }
    unaff_EDI[0xae] = iVar3;
  }
  ExceptionList = pvStack_c;
  return;
}
