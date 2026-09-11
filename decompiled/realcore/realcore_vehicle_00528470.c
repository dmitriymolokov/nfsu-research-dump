/* spd-match: far pct=12.28 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141916Z_w0_tc0 */
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
int __cdecl FUN_00525aa0();
int __cdecl FUN_005283f0();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_00674898();
extern int DAT_006f1dd8;
extern int DAT_006f227c;
extern int _DAT_006cca08;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684d4b(void);
void *ExceptionList;

extern char s_SND__Turbo_006bf090[];








undefined4 FUN_00528470(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_stack_00000018;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d4b;
  local_c = ExceptionList;
  if ((*(char *)(param_1 + 0xc) != '\0') && (DAT_006f1dd8 == 1)) {
    piVar1 = *(int **)(param_1 + 0x238);
    ExceptionList = &local_c;
    if (piVar1 != (int *)0x0) {
      ExceptionList = &local_c;
      if (*piVar1 != 0) {
        ExceptionList = &local_c;
        FUN_0064bbd0();
      }
      FUN_0064b510(&local_10);
      FUN_0064b580();
      (**(code **)(*local_10 + 4))(piVar1);
      FUN_0064b5a0();
    }
    *(undefined4 *)(param_1 + 0x238) = 0;
    uVar3 = FUN_00674898();
    fVar2 = _DAT_006cca08;
    *(undefined4 *)(param_1 + 0x2b8) = uVar3;
    if (fVar2 < *(float *)(param_1 + 0x2c4)) {
      uVar4 = DAT_006f227c ^ 0x1d872b41;
      uVar5 = uVar4 >> 5 ^ uVar4;
      DAT_006f227c = uVar5 << 0x1b ^ uVar5 ^ uVar4;
    }
    (**(code **)(*(int *)(param_1 + 0x20) + 0x28))(*(int *)(*(int *)(param_1 + 4) + 0x234) + 0x60,0)
    ;
    FUN_005283f0(param_1,3);
    PTR_s_CSISSOUND_006f8714 = s_SND__Turbo_006bf090;
    iVar6 = FUN_005256f0(0x1c);
    uStack_4 = 0;
    if (iVar6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00674898();
      uVar3 = FUN_00525aa0(in_stack_00000018,uVar3);
    }
    *(undefined4 *)(param_1 + 0x238) = uVar3;
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x240);
  }
  ExceptionList = local_c;
  return 0;
}
