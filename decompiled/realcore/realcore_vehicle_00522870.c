/* spd-match: far pct=8.03 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141906Z_w0_tc0 */
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

int __cdecl FUN_005256f0();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_006f1dd8;
extern unsigned char *DAT_007356ac;
extern int DAT_00744200;
extern int DAT_00744208;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern unsigned char *PTR_s_PlayFrontEndSample_006f8198;
extern unsigned char *PTR_s_PlayFrontEndSample_loop_006f81a0;
extern void LAB_00684ec1(void);
extern char stack0xffffffe4;
int unaff_ESI;
void *ExceptionList;

extern char s_SND__FE_FrontEnd_006bf464[];






undefined4 __fastcall FUN_00522870(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_ESI;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00684ec1;
  local_c = ExceptionList;
  if (DAT_006f1dd8 == 0) {
    return 0xffffffff;
  }
  iVar6 = *(int *)(DAT_007356ac + 0x3a8c);
  ExceptionList = &local_c;
  (**(code **)(*(int *)((int)param_1 + 0x20) + 0x28))(0,0);
  puVar4 = puStack_4;
  iVar6 = *(int *)((int)param_1 + 0x70) * (iVar6 * 0x7fff >> 0xf) >> 0xf;
  PTR_s_CSISSOUND_006f8714 = s_SND__FE_FrontEnd_006bf464;
  if ((int)puStack_4 + 0x12 < 0x27) {
    puVar3 = (undefined4 *)FUN_005256f0(0x14);
    puStack_4 = puVar3;
    if (puVar4 == (undefined4 *)0x12) {
      local_c = (void *)0x0;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar4 = puVar3 + 1;
        *puVar4 = 0x12;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        puVar3[2] = iVar6;
        puVar3[3] = 0x1000;
        puVar3[4] = 0;
        iVar6 = FUN_0064c1a0(&DAT_00744208,puVar4,puVar3);
        if (iVar6 < 0) {
          FUN_0064c000(&PTR_s_PlayFrontEndSample_loop_006f81a0);
          FUN_0064c1a0(&DAT_00744208,puVar4,puVar3);
          unaff_ESI[0xa4] = (int)puVar3;
          ExceptionList = param_1;
          return 0;
        }
      }
      unaff_ESI[0xa4] = (int)puVar3;
    }
    else {
      local_c = (void *)0x1;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        if ((int)puVar4 < 0) {
          puVar4 = (undefined4 *)0x0;
        }
        else if (0x4b < (int)puVar4) {
          puVar4 = (undefined4 *)0x4b;
        }
        puVar1 = puVar3 + 1;
        *puVar1 = puVar4;
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (0x7fff < iVar6) {
          iVar6 = 0x7fff;
        }
        puVar3[2] = iVar6;
        puVar3[3] = 0x1000;
        puVar3[4] = 0;
        iVar6 = FUN_0064c1a0(&DAT_00744208,puVar1,puVar3);
        if (iVar6 < 0) {
          FUN_0064c000(&PTR_s_PlayFrontEndSample_loop_006f81a0);
          FUN_0064c1a0(&DAT_00744208,puVar1,puVar3);
          unaff_ESI[0xa3] = (int)puVar3;
          ExceptionList = param_1;
          return 0;
        }
      }
      unaff_ESI[0xa3] = (int)puVar3;
    }
  }
  else {
    FUN_0064b510(&puStack_4);
    FUN_0064b580();
    piVar5 = (int *)(**(code **)*puStack_4)(0x14,4,0xffffffff);
    FUN_0064b5a0();
    local_c = (void *)0x2;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      if ((int)puVar4 < 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else if (0x4b < (int)puVar4) {
        puVar4 = (undefined4 *)0x4b;
      }
      piVar2 = piVar5 + 1;
      *piVar2 = (int)puVar4;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (0x7fff < iVar6) {
        iVar6 = 0x7fff;
      }
      piVar5[2] = iVar6;
      piVar5[3] = 0x1000;
      piVar5[4] = 0;
      iVar6 = FUN_0064c1a0(&DAT_00744200,piVar2,piVar5);
      if (iVar6 < 0) {
        FUN_0064c000(&PTR_s_PlayFrontEndSample_006f8198);
        FUN_0064c1a0(&DAT_00744200,piVar2,piVar5);
      }
    }
    local_c = (void *)0xffffffff;
    unaff_ESI[0xa2] = (int)piVar5;
    if (piVar5 != (int *)0x0) {
      if (*piVar5 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&stack0xffffffe4);
      FUN_0064b580();
      (**(code **)(*unaff_ESI + 4))(piVar5);
      FUN_0064b5a0();
    }
    unaff_ESI[0xa2] = 0;
  }
  ExceptionList = param_1;
  return 0;
}
