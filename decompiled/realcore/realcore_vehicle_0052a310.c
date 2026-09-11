/* spd-match: far pct=9.42 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141933Z_w0_tc0 */
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

int __cdecl FUN_0052a580();
int __cdecl FUN_00532840();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064b7d0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_0064bc30();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
int __cdecl FUN_00674898();
extern int DAT_006f4ecc;
extern int DAT_0073d804;
extern int _DAT_006cc9f0;
extern int _DAT_0070591c;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern unsigned char *PTR_s_FX_SHIFTING_01_006f2240;
extern void LAB_00684d8b(void);
extern char stack0xffffffe4;
int unaff_EDI;
int unaff_ESI;
void *ExceptionList;

extern char s_SND__Breaking_Effect_006bf034[];








void FUN_0052a310(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  int iStack_14;
  int *piStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (unaff_ESI[0x5d4] == 0) {
    ExceptionList = &pvStack_c;
    cVar2 = FUN_0052a580();
    if (cVar2 != '\0') {
      piVar1 = unaff_ESI + 0x5d5;
      PTR_s_CSISSOUND_006f8714 = s_SND__Breaking_Effect_006bf034;
      *piVar1 = DAT_006f4ecc;
      (**(code **)(*unaff_ESI + 0x38))(piVar1,8);
      _DAT_0070591c = *(float *)(unaff_ESI[0x8d] + 0x3d4) * _DAT_006cc9f0;
      FUN_00532840();
      iVar3 = FUN_00674898();
      piVar4 = (int *)unaff_ESI[0x5d4];
      if (piVar4 != (int *)0x0) {
        if (*piVar4 != 0) {
          FUN_0064bbd0();
        }
        FUN_0064b510(&stack0xffffffe4);
        FUN_0064b580();
        (**(code **)(*unaff_EDI + 4))(piVar4);
        FUN_0064b5a0();
      }
      unaff_ESI[0x5d4] = 0;
      FUN_0064b510(&stack0xffffffe4);
      FUN_0064b580();
      piVar4 = (int *)(**(code **)*unaff_EDI)(0x1c,4,0xffffffff);
      FUN_0064b5a0();
      uStack_4 = 0;
      piStack_10 = piVar4;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        iVar5 = *piVar1;
        piVar1 = piVar4 + 1;
        *piVar1 = 0;
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        else if (0x7fff < iVar5) {
          iVar5 = 0x7fff;
        }
        piVar4[2] = iVar5;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (0x1fff < iVar3) {
          iVar3 = 0x1fff;
        }
        piVar4[3] = iVar3;
        piVar4[4] = 0;
        piVar4[5] = 0;
        piVar4[6] = 0;
        iVar3 = FUN_0064c1a0(&DAT_0073d804,piVar1,piVar4);
        if (iVar3 < 0) {
          FUN_0064c000(&PTR_s_FX_SHIFTING_01_006f2240);
          FUN_0064c1a0(&DAT_0073d804,piVar1,piVar4);
        }
      }
      uStack_4 = 0xffffffff;
      unaff_ESI[0x5d4] = (int)piVar4;
    }
  }
  if (unaff_ESI[0x5d4] != 0) {
    iVar3 = unaff_ESI[0x1b];
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    *(int *)(unaff_ESI[0x5d4] + 0x10) = iVar3;
    piVar1 = unaff_ESI + 0x5d5;
    *piVar1 = DAT_006f4ecc;
    (**(code **)(*unaff_ESI + 0x38))(piVar1,8);
    iVar3 = *piVar1;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0x7fff < iVar3) {
      iVar3 = 0x7fff;
    }
    *(int *)(unaff_ESI[0x5d4] + 8) = iVar3;
    if (*(int *)unaff_ESI[0x5d4] != 0) {
      FUN_0064bc30((int *)unaff_ESI[0x5d4] + 1);
    }
    iStack_14 = 0;
    if (*(int *)unaff_ESI[0x5d4] != 0) {
      FUN_0064b7d0(&iStack_14);
      if (iStack_14 == 1) {
        piVar1 = (int *)unaff_ESI[0x5d4];
        if (piVar1 != (int *)0x0) {
          if (*piVar1 != 0) {
            FUN_0064bbd0();
          }
          FUN_0064b510(&piStack_10);
          FUN_0064b580();
          (**(code **)(*piStack_10 + 4))(piVar1);
          FUN_0064b5a0();
        }
        unaff_ESI[0x5d4] = 0;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}
