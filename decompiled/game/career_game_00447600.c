/* spd-match: far pct=16.94 flags=/Og /c /nologo /TC method=m8_known_flag source=m8/composer/m8.composer/va_00447600 */
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
undefined4 *puRam00000000;
undefined4 *puRam00000004;
int iRam00000000;
int *piRam00000004;

int __cdecl FUN_0040a580();
int __cdecl FUN_00411030();
int __cdecl FUN_004200a0();
int __cdecl FUN_00420110();
int __cdecl FUN_00420b40();
int __cdecl FUN_00421740();
int __cdecl FUN_00421b10();
int __cdecl FUN_00421bc0();
int __cdecl FUN_0042d470();
int __cdecl FUN_004311c0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043a360();
int __cdecl FUN_0043a7f0();
int __cdecl FUN_0043a810();
float __fastcall FUN_0043a8a0(int *param_1, float param_2);
int __cdecl FUN_00445050();
int __cdecl FUN_00447360();
int __cdecl FUN_004474a0();
int __cdecl FUN_004483c0();
int __cdecl FUN_0047dc40();
int __cdecl FUN_004829a0();
int __cdecl FUN_0048e8b0();
int __cdecl FUN_004f6170();
int __cdecl FUN_0051d240();
int __cdecl FUN_005721f0();
int __cdecl FUN_005727b0();
int __cdecl FUN_00572800();
int __cdecl FUN_00573cb0();
int __cdecl FUN_00574cf0();
int __cdecl FUN_00574eb0();
void __cdecl FUN_00585b40(float param_1);
int __cdecl FUN_00585d70();
int __cdecl FUN_00585e00();
int __cdecl FUN_00594ef0();
extern int DAT_006cc7a4;
extern int DAT_00734560;
extern int DAT_0073457c;
extern int DAT_00734598;
extern unsigned char *DAT_007345a8;
extern unsigned char *DAT_007345d0;
extern int DAT_007349c8;
extern int DAT_007356a8;
extern int DAT_00736120;
extern int DAT_00736124;
extern int DAT_007361c4;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_007361f8;
extern int DAT_007361fc;
extern int DAT_0073ad38;
extern int DAT_0073b158;
extern int DAT_0077a904;
extern int DAT_0077a908;
extern code *DAT_0077a910;
extern int DAT_0077a920;
extern int _DAT_006cc8bc;
extern int _DAT_006f08a8;
extern int _DAT_007301d0;
extern int _DAT_0073611c;
extern int _DAT_0077a90c;
extern int _DAT_0078eb50;
extern void LAB_0044798b(void);

extern code *QueryPerformanceCounter_exref;








void FUN_00447600(void)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  undefined *puVar8;
  bool bVar9;
  float10 fVar10;
  undefined4 uVar11;
  int iStack_3c;
  LARGE_INTEGER local_30;
  LARGE_INTEGER local_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  LARGE_INTEGER LStack_10;
  
  QueryPerformanceCounter(&local_30);
  __allshr();
  pcVar7 = QueryPerformanceCounter_exref;
  do {
    if (DAT_00736124 != 0) {
      QueryPerformanceCounter_exref = pcVar7;
      return;
    }
    QueryPerformanceCounter_exref = pcVar7;
    QueryPerformanceCounter(&local_28);
    _DAT_0073611c = __allshr();
    piVar3 = DAT_007345a8;
    _DAT_0078eb50 = DAT_00734560;
    iVar6 = 0;
    pcVar2 = DAT_0077a904;
    uVar11 = DAT_0077a908;
    if (DAT_00734598 != 0) {
      if ((DAT_007345a8 != (int *)0x0) &&
         (piVar1 = DAT_007345a8 + 3, 0 < *DAT_007345a8 - DAT_007345a8[3])) {
        FUN_00594ef0(DAT_007345a8 + 0x19);
        *piVar1 = *piVar3;
        piVar3[1] = 0;
      }
      DAT_00734598 = 0;
      iVar6 = DAT_00734598;
      pcVar2 = DAT_0077a904;
      uVar11 = DAT_0077a908;
      pcVar7 = QueryPerformanceCounter_exref;
    }
    do {
      DAT_00734598 = iVar6;
      DAT_0077a904 = pcVar2;
      DAT_0077a908 = uVar11;
      if (pcVar2 == (code *)0x0) break;
      DAT_0077a904 = (code *)0x0;
      DAT_0077a908 = 0;
      _DAT_0077a90c = 0;
      (*pcVar2)(uVar11);
      bVar9 = DAT_0077a904 != pcVar2;
      iVar6 = DAT_00734598;
      pcVar2 = DAT_0077a904;
      uVar11 = DAT_0077a908;
    } while (bVar9);
    if (DAT_0077a910 != (code *)0x0) {
      (*DAT_0077a910)();
    }
    pcVar2 = DAT_0077a904;
    uVar11 = DAT_0077a908;
    if (DAT_007361f0 != (int *)0x0) {
      FUN_00421b10(DAT_007361f0);
      FUN_00421bc0(3,0);
      pcVar2 = DAT_0077a904;
      uVar11 = DAT_0077a908;
    }
    do {
      DAT_0077a904 = pcVar2;
      DAT_0077a908 = uVar11;
      if (pcVar2 == (code *)0x0) break;
      DAT_0077a904 = (code *)0x0;
      DAT_0077a908 = 0;
      _DAT_0077a90c = 0;
      (*pcVar2)(uVar11);
      bVar9 = DAT_0077a904 != pcVar2;
      pcVar2 = DAT_0077a904;
      uVar11 = DAT_0077a908;
    } while (bVar9);
    if (DAT_0077a910 != (code *)0x0) {
      (*DAT_0077a910)();
    }
    if ((DAT_0077a920 != 6) || (*DAT_007361f0 == 1)) {
      FUN_004474a0();
    }
    iVar6 = 0;
    if (0 < DAT_007361c4) {
      do {
        FUN_0042d470();
        iVar6 = iVar6 + 1;
      } while (iVar6 < DAT_007361c4);
    }
    if (DAT_007345d0 != 0) {
      FUN_00572800();
    }
    (*pcVar7)(auStack_20);
    uVar11 = DAT_007349c8;
    iVar6 = __allshr();
    iStack_3c = iVar6 - iStack_3c;
    if (iStack_3c < 0) {
      iStack_3c = 0;
    }
    FUN_00585b40((float)(1 << ((byte)uVar11 & 0x1f)) * (float)iStack_3c * _DAT_007301d0 *
                 _DAT_006cc8bc);
    (*pcVar7)(auStack_1c);
    __allshr();
    FUN_004829a0();
    uVar11 = 1;
    cVar5 = FUN_0043a2e0();
    if (((cVar5 == '\0') && (DAT_007361f0 != (int *)0x0)) &&
       ((*DAT_007361f0 == 7 || (*DAT_007361f0 == 0xb)))) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      fVar10 = (float10)FUN_0043a8a0((int *)DAT_007361f8, 0.0f);
      DAT_0073457c = (float)fVar10;
LAB_0044798b:
      _DAT_006f08a8 = 0;
      FUN_00573cb0();
    }
    else {
      if (DAT_007361f0 == (int *)0x0) {
        DAT_0073457c = DAT_0073ad38;
        goto LAB_0044798b;
      }
      FUN_004200a0();
      if (((DAT_006cc7a4 < *(float *)(DAT_007361f8 + 0x2d4)) || (DAT_007361fc != 0)) ||
         (*(int *)(DAT_007361f8 + 0x2d8) != 0)) {
        fVar10 = (float10)FUN_0043a8a0((int *)DAT_007361f8, 0.0f);
        DAT_0073457c = (float)fVar10;
        _DAT_006f08a8 = 0;
        FUN_00573cb0();
        FUN_00421740();
      }
      else {
        FUN_005721f0();
        if (*(int *)(DAT_007345d0 + 0x18) == 0) {
          fVar10 = (float10)FUN_00420110(DAT_007361f8);
          fVar10 = (float10)FUN_0043a8a0((int *)DAT_007361f8, (float)fVar10);
          DAT_0073457c = (float)fVar10;
          _DAT_006f08a8 = 0;
          FUN_00573cb0();
          FUN_0043a7f0();
          FUN_00420b40(DAT_007361f8,(float)fVar10);
          uVar11 = 0;
          FUN_005727b0();
        }
        else {
          fVar10 = (float10)FUN_0043a8a0((int *)DAT_007361f8, 0.0f);
          DAT_0073457c = (float)fVar10;
          _DAT_006f08a8 = 0;
          FUN_00573cb0();
          FUN_005727b0();
        }
      }
    }
    FUN_0043a360(uVar11);
    FUN_004f6170();
    FUN_004311c0();
    FUN_0047dc40(DAT_0073ad38);
    FUN_0048e8b0();
    if (DAT_007356a8 != 0) {
      FUN_0051d240(DAT_0073ad38);
    }
    fVar4 = DAT_0073ad38;
    puVar8 = &DAT_0073b158;
    do {
      iVar6 = 2;
      do {
        FUN_00574cf0(fVar4);
        puVar8 = puVar8 + 0x30;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    } while ((int)puVar8 < 0x73b218);
    FUN_00574eb0();
    FUN_00445050();
    FUN_004483c0();
    FUN_0040a580();
    FUN_00585d70();
    FUN_00585e00();
    if ((char)iStack_3c == '\0') {
      FUN_0043a810();
    }
    QueryPerformanceCounter(&LStack_10);
    DAT_00736120 = __allshr();
    FUN_00447360();
    FUN_00411030();
    pcVar7 = QueryPerformanceCounter_exref;
  } while( true );
}
