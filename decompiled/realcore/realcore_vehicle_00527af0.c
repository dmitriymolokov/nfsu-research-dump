/* spd-match: far pct=19.38 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141916Z_w0_tc0 */
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
extern int DAT_007361a4;
extern int DAT_0073d7f4;
extern int DAT_0078a345;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern unsigned char *PTR_s_FX_SKID_006f2250;
extern void LAB_00684e2b(void);
void *ExceptionList;

extern char s_SND__Skid_006bf0b4[];








void FUN_00527af0(int param_1)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684e2b;
  local_c = ExceptionList;
  bVar2 = 1;
  if (DAT_006f1dd8 == 1) {
    if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
      bVar2 = 0;
    }
    piVar3 = *(int **)(param_1 + 0x230);
    uVar4 = (uint)bVar2;
    PTR_s_CSISSOUND_006f8714 = s_SND__Skid_006bf0b4;
    ExceptionList = &local_c;
    if (piVar3 != (int *)0x0) {
      ExceptionList = &local_c;
      if (*piVar3 != 0) {
        ExceptionList = &local_c;
        FUN_0064bbd0();
      }
      FUN_0064b510(&local_14);
      FUN_0064b580();
      (**(code **)(*local_14 + 4))(piVar3);
      FUN_0064b5a0();
    }
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_0064b510(&local_10);
    FUN_0064b580();
    piVar3 = (int *)(**(code **)*local_10)(0x3c,4,0xffffffff);
    FUN_0064b5a0();
    uStack_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar1 = piVar3 + 1;
      *piVar1 = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
      if (3 < bVar2) {
        uVar4 = 3;
      }
      piVar3[8] = uVar4;
      piVar3[9] = 0x1000;
      piVar3[10] = 0x1000;
      piVar3[0xb] = 0x1000;
      piVar3[0xc] = 0;
      piVar3[0xd] = 0;
      piVar3[0xe] = 0;
      local_14 = piVar3;
      iVar5 = FUN_0064c1a0(&DAT_0073d7f4,piVar1,piVar3);
      if (iVar5 < 0) {
        FUN_0064c000(&PTR_s_FX_SKID_006f2250);
        FUN_0064c1a0(&DAT_0073d7f4,piVar1,piVar3);
      }
    }
    *(int **)(param_1 + 0x230) = piVar3;
  }
  ExceptionList = local_c;
  return;
}
