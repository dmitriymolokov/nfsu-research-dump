/* spd-match: far pct=3.91 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141906Z_w0_tc0 */
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

int __cdecl FUN_00522e00();
int __cdecl FUN_00522ff0();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_007441f8;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern unsigned char *PTR_s_FEDriveOn_006f81a8;
extern void LAB_00684d6b(void);
void *ExceptionList;

extern char s_SND__FE_DriveIdle_006bf450[];
extern char s_SND__FE_DriveON_006bf440[];
extern char s_SND__FE_DriveOff_006bf42c[];






void FUN_00522e50(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar3 = param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d6b;
  local_c = ExceptionList;
  if (0x52 < (int)param_2) {
    iVar1 = (int)param_2 + -0x53;
    iVar5 = param_3 + -1;
    ExceptionList = &local_c;
    iVar4 = FUN_00522e00(param_4);
    iVar4 = iVar4 + iVar1;
    if (iVar1 == 0) {
      PTR_s_CSISSOUND_006f8714 = s_SND__FE_DriveIdle_006bf450;
    }
    else if (iVar1 == 1) {
      PTR_s_CSISSOUND_006f8714 = s_SND__FE_DriveON_006bf440;
    }
    else if (iVar1 == 2) {
      PTR_s_CSISSOUND_006f8714 = s_SND__FE_DriveOff_006bf42c;
    }
    FUN_00522ff0(param_1,iVar1,iVar5);
    FUN_0064b510(&param_2);
    FUN_0064b580();
    iVar5 = (**(code **)*param_2)(0x14,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x32 < iVar4) {
        iVar4 = 0x32;
      }
      piVar2 = (int *)(iVar5 + 4);
      *piVar2 = iVar4;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      param_3 = iVar5;
      iVar4 = FUN_0064c1a0(&DAT_007441f8,piVar2,iVar5);
      if (iVar4 < 0) {
        FUN_0064c000(&PTR_s_FEDriveOn_006f81a8);
        FUN_0064c1a0(&DAT_007441f8,piVar2,iVar5);
      }
    }
    iVar4 = iVar3 + 0x36;
    *(int *)(param_1 + (iVar4 + iVar1 + iVar4 * 2) * 4) = iVar5;
    *(undefined1 *)(iVar1 + (iVar3 + 0x1db) * 3 + param_1) = 0;
  }
  ExceptionList = local_c;
  return;
}
