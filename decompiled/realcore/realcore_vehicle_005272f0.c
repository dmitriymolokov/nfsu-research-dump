/* spd-match: far pct=9.28 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141916Z_w0_tc0 */
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
int __cdecl FUN_005258d0();
int __cdecl FUN_00532840();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_00674898();
extern int DAT_006f1dd8;
extern int DAT_00705940;
extern unsigned char *DAT_007356a8;
extern int _DAT_00705938;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684e6b(void);
extern char stack0x0000000c;
extern char stack0x00000014;
void *ExceptionList;

extern char s_SparkChatter_006bf0d0[];








undefined4 FUN_005272f0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_stack_00000014;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684e6b;
  local_c = ExceptionList;
  if (((char)param_1[3] != '\0') && (*(char *)(DAT_007356a8 + 0x84) == '\0')) {
    _DAT_00705938 = *(undefined4 *)(param_1[1] + 0x1f1c);
    ExceptionList = &local_c;
    FUN_00532840();
    if (DAT_00705940 != '\0') {
      FUN_00532840();
    }
    if (DAT_006f1dd8 == 1) {
      (**(code **)(*(int *)piVar1[1] + 0x38))(&stack0x0000000c,1);
      piVar4 = (int *)piVar1[5];
      PTR_s_CSISSOUND_006f8714 = s_SparkChatter_006bf0d0;
      if (piVar4 != (int *)0x0) {
        if (*piVar4 != 0) {
          FUN_0064bbd0();
        }
        FUN_0064b510(&param_1);
        FUN_0064b580();
        (**(code **)(*param_1 + 4))(piVar4);
        FUN_0064b5a0();
      }
      piVar1[5] = 0;
      param_1 = (int *)FUN_005256f0(0x24);
      uStack_4 = 0;
      if (param_1 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        uVar5 = 0;
        uVar2 = FUN_00674898(0);
        uVar3 = FUN_00674898(uVar2);
        piVar4 = (int *)FUN_005258d0(in_stack_00000014,uVar3,uVar2,uVar5);
      }
      uStack_4 = 0xffffffff;
      piVar1[5] = (int)piVar4;
      if (piVar4 != (int *)0x0) {
        if (*piVar4 != 0) {
          FUN_0064bbd0();
        }
        FUN_0064b510(&stack0x00000014);
        FUN_0064b580();
        (**(code **)(*in_stack_00000014 + 4))(piVar4);
        FUN_0064b5a0();
      }
      piVar1[5] = 0;
    }
  }
  ExceptionList = local_c;
  return 0;
}
