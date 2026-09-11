/* spd-match: far pct=10.53 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141924Z_w0_tc0 */
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

int __cdecl FUN_00532840();
int __cdecl FUN_0064b510();
int __cdecl FUN_0064b580();
int __cdecl FUN_0064b5a0();
int __cdecl FUN_0064bbd0();
int __cdecl FUN_0064c000();
int __cdecl FUN_0064c1a0();
int __cdecl FUN_00674898();
extern int DAT_006f1dd8;
extern int DAT_006f4ef8;
extern int DAT_0073d804;
extern int _DAT_006ccac8;
extern int _DAT_007058e4;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
extern unsigned char *PTR_s_FX_SHIFTING_01_006f2240;
extern void LAB_00684d8b(void);
void *ExceptionList;

extern char s_SND_ShiftDisengage_006bf058[];








void FUN_00528f80(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iStack_14;
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_00684d8b;
  local_c = ExceptionList;
  if ((DAT_006f1dd8 != 0) &&
     (fVar2 = *(float *)(*(int *)(param_1 + 4) + 0x1d0c), _DAT_006ccac8 <= fVar2)) {
    piVar4 = *(int **)(param_1 + 0x18);
    ExceptionList = &local_c;
    if (piVar4 != (int *)0x0) {
      ExceptionList = &local_c;
      if (*piVar4 != 0) {
        ExceptionList = &local_c;
        FUN_0064bbd0();
      }
      FUN_0064b510(&local_10);
      FUN_0064b580();
      (**(code **)(*local_10 + 4))(piVar4);
      FUN_0064b5a0();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    _DAT_007058e4 = fVar2;
    FUN_00532840();
    iVar3 = FUN_00674898();
    iStack_14 = iVar3 * DAT_006f4ef8 >> 0xf;
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(&iStack_14,5);
    PTR_s_CSISSOUND_006f8714 = s_SND_ShiftDisengage_006bf058;
    FUN_0064b510(&puStack_4);
    FUN_0064b580();
    piVar4 = (int *)(**(code **)*puStack_4)(0x1c,4,0xffffffff);
    FUN_0064b5a0();
    puStack_4 = (undefined4 *)0x0;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar1 = piVar4 + 1;
      *piVar1 = 0;
      if (iStack_14 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iStack_14;
        if (0x7fff < iStack_14) {
          iVar3 = 0x7fff;
        }
      }
      piVar4[2] = iVar3;
      piVar4[3] = 0x1000;
      piVar4[4] = 0;
      piVar4[5] = 0;
      piVar4[6] = 0;
      local_10 = piVar4;
      iVar3 = FUN_0064c1a0(&DAT_0073d804,piVar1,piVar4);
      if (iVar3 < 0) {
        FUN_0064c000(&PTR_s_FX_SHIFTING_01_006f2240);
        FUN_0064c1a0(&DAT_0073d804,piVar1,piVar4);
      }
    }
    *(int **)(param_1 + 0x18) = piVar4;
  }
  ExceptionList = local_c;
  return;
}
