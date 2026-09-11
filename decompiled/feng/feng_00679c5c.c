/* spd-match: far pct=11.20 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/research_misc/batches/20260724T142558Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_0067733f();
int __cdecl FUN_0067e1d0();
extern int DAT_006ac77c;
extern int DAT_006ebc00;
extern int DAT_00717da0;
extern int DAT_00717da4;
extern int DAT_00717de6;
extern int DAT_00717df4;
extern int DAT_00717df8;
extern int DAT_00717e3a;
extern int DAT_00717e48;
extern int DAT_00717e50;
extern int DAT_00717ea0;
extern int _DAT_006ebc04;
extern int _DAT_006ebc08;
extern int _DAT_006ebc98;
extern int _DAT_006ebca4;
extern int _DAT_00717e4c;
extern unsigned char *PTR_DAT_006ebc90;
extern unsigned char *PTR_DAT_006ebc94;
extern void LAB_00679cdc(void);
extern void LAB_00679ec1(void);

void FUN_00679c5c(void)

{
  char cVar1;
  char cVar2;
  UINT CodePage;
  char *_Str1;
  int iVar3;
  size_t sVar4;
  long lVar5;
  DWORD DVar6;
  char *_Str;
  int local_8;
  
  __lock(7);
  CodePage = DAT_00717ea0;
  _DAT_006ebca4 = 0xffffffff;
  _DAT_006ebc98 = 0xffffffff;
  _DAT_00717e4c = 0;
  _Str1 = (char *)__getenv_lk(&DAT_006ac77c);
  if ((_Str1 == (char *)0x0) || (*_Str1 == '\0')) {
    if (DAT_00717e50 != (char *)0x0) {
      _free(DAT_00717e50);
      DAT_00717e50 = (char *)0x0;
    }
    FUN_0067733f(7);
    DVar6 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_00717da0);
    if (DVar6 == 0xffffffff) {
      return;
    }
    DAT_006ebc00 = DAT_00717da0 * 0x3c;
    _DAT_00717e4c = 1;
    if (DAT_00717de6 != 0) {
      DAT_006ebc00 = ((int)DAT_006ebc00) + (int)DAT_00717df4 * 0x3c;
    }
    if ((DAT_00717e3a == 0) || (DAT_00717e48 == 0)) {
      _DAT_006ebc04 = 0;
      _DAT_006ebc08 = 0;
    }
    else {
      _DAT_006ebc08 = (DAT_00717e48 - DAT_00717df4) * 0x3c;
      _DAT_006ebc04 = 1;
    }
    iVar3 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_00717da4,-1,PTR_DAT_006ebc90,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar3 == 0) || (local_8 != 0)) {
      *PTR_DAT_006ebc90 = 0;
    }
    else {
      PTR_DAT_006ebc90[0x3f] = 0;
    }
    iVar3 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_00717df8,-1,PTR_DAT_006ebc94,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar3 != 0) && (local_8 == 0)) {
      PTR_DAT_006ebc94[0x3f] = 0;
      return;
    }
LAB_00679ec1:
    *PTR_DAT_006ebc94 = 0;
  }
  else {
    if (DAT_00717e50 == (char *)0x0) {
LAB_00679cdc:
      sVar4 = _strlen(_Str1);
      DAT_00717e50 = _malloc(sVar4 + 1);
      if (DAT_00717e50 != (char *)0x0) {
        FUN_0067e1d0(DAT_00717e50,_Str1);
        FUN_0067733f(7);
        _strncpy(PTR_DAT_006ebc90,_Str1,3);
        _Str = _Str1 + 3;
        PTR_DAT_006ebc90[3] = 0;
        cVar1 = *_Str;
        if (cVar1 == '-') {
          _Str = _Str1 + 4;
        }
        lVar5 = _atol(_Str);
        DAT_006ebc00 = lVar5 * 0xe10;
        for (; (cVar2 = *_Str, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':')))); _Str = _Str + 1) {
        }
        if (*_Str == ':') {
          _Str = _Str + 1;
          lVar5 = _atol(_Str);
          DAT_006ebc00 = ((int)DAT_006ebc00) + lVar5 * 0x3c;
          for (; ('/' < *_Str && (*_Str < ':')); _Str = _Str + 1) {
          }
          if (*_Str == ':') {
            _Str = _Str + 1;
            lVar5 = _atol(_Str);
            DAT_006ebc00 = ((int)DAT_006ebc00) + lVar5;
            for (; ('/' < *_Str && (*_Str < ':')); _Str = _Str + 1) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_006ebc00 = -DAT_006ebc00;
        }
        _DAT_006ebc04 = (int)*_Str;
        if (_DAT_006ebc04 != 0) {
          _strncpy(PTR_DAT_006ebc94,_Str,3);
          PTR_DAT_006ebc94[3] = 0;
          return;
        }
        goto LAB_00679ec1;
      }
    }
    else {
      iVar3 = _strcmp(_Str1,DAT_00717e50);
      if (iVar3 != 0) {
        if (DAT_00717e50 != (char *)0x0) {
          _free(DAT_00717e50);
        }
        goto LAB_00679cdc;
      }
    }
    FUN_0067733f(7);
  }
  return;
}
