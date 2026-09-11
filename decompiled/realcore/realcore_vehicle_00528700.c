/* spd-match: far pct=14.16 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141924Z_w0_tc0 */
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

int __cdecl FUN_00525aa0();
int __cdecl FUN_005283f0();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_00674898();
extern int DAT_006f1dd8;
extern unsigned char *DAT_0073564c;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern void LAB_00684d8b(void);
extern char stack0xffffffe4;
extern char stack0xffffffe8;
int unaff_EDI;
int unaff_ESI;
void *ExceptionList;

extern char s_SND_Turbo_Spool_006bf080[];






undefined4 FUN_00528700(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  int *unaff_EDI;
  undefined4 in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  local_c = ExceptionList;
  if (DAT_006f1dd8 == 1) {
    ExceptionList = &local_c;
    (**(code **)(*(int *)(unaff_EBX + 0x20) + 0x28))
              (*(int *)(*(int *)(unaff_EBX + 4) + 0x234) + 0x60,0);
    FUN_005283f0(unaff_EBX,3);
    piVar1 = *(int **)(unaff_EBX + 0x234);
    PTR_s_CSISSOUND_006f8714 = s_SND_Turbo_Spool_006bf080;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_0064bbd0();
      }
      FUN_0064b510(&stack0xffffffe4);
      FUN_0064b580();
      (**(code **)(*unaff_EDI + 4))(piVar1);
      FUN_0064b5a0();
    }
    *(undefined4 *)(unaff_EBX + 0x234) = 0;
    FUN_0064b510(&stack0xffffffe8);
    FUN_0064b580();
    iVar2 = (**(code **)*unaff_ESI)(0x1c,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00674898();
      uVar3 = FUN_00525aa0(in_stack_00000014,uVar3);
    }
    *(undefined4 *)(unaff_EBX + 0x234) = uVar3;
    DAT_0073564c = DAT_0073564c + 1;
  }
  ExceptionList = local_c;
  return 0;
}
