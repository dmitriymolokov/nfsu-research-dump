/* spd-match: far pct=14.78 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141933Z_w0_tc0 */
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

int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
extern int DAT_006f1dd8;
extern int DAT_007441c8;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern unsigned char *PTR_s_PLAYER_CAR_006f8158;
extern void LAB_00684e6b(void);
void *ExceptionList;

extern char s_TUNNEL_Reflections_006befc4[];






void FUN_0052b500(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar3 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684e6b;
  local_c = ExceptionList;
  if (DAT_006f1dd8 != 0) {
    piVar2 = (int *)param_1[0x6e3];
    ExceptionList = &local_c;
    if (piVar2 != (int *)0x0) {
      ExceptionList = &local_c;
      if (*piVar2 != 0) {
        ExceptionList = &local_c;
        FUN_0064bbd0();
      }
      FUN_0064b510(&param_1);
      FUN_0064b580();
      (**(code **)(*param_1 + 4))(piVar2);
      FUN_0064b5a0();
    }
    piVar3[0x6e3] = 0;
    PTR_s_CSISSOUND_006f8714 = s_TUNNEL_Reflections_006befc4;
    FUN_0064b510(&local_10);
    FUN_0064b580();
    iVar4 = (**(code **)*local_10)(0x50,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar5 = piVar3[0x7bd];
      iVar7 = piVar3[0x99];
      iVar6 = piVar3[0x7bf];
      puVar1 = (undefined4 *)(iVar4 + 4);
      *puVar1 = 0;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (7 < iVar5) {
        iVar5 = 7;
      }
      *(int *)(iVar4 + 8) = iVar5;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (4 < iVar6) {
        iVar6 = 4;
      }
      *(int *)(iVar4 + 0xc) = iVar6;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      else if (3 < iVar7) {
        iVar7 = 3;
      }
      *(int *)(iVar4 + 0x10) = iVar7;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined4 *)(iVar4 + 0x44) = 0;
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      param_1 = (int *)iVar4;
      iVar5 = FUN_0064c1a0(&DAT_007441c8,puVar1,iVar4);
      if (iVar5 < 0) {
        FUN_0064c000(&PTR_s_PLAYER_CAR_006f8158);
        FUN_0064c1a0(&DAT_007441c8,puVar1,iVar4);
      }
    }
    piVar3[0x6e3] = iVar4;
  }
  ExceptionList = local_c;
  return;
}
