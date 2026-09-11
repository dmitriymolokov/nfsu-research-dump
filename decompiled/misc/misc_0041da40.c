/* spd-match: far pct=8.64 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141830Z_w0_tp1 */
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

int __cdecl FUN_0041dc10(...);
int __cdecl FUN_0041dd10(...);
int __cdecl FUN_004ab200(...);
int __cdecl FUN_00671541(...);
extern int DAT_006cc430;

struct ThisCallBox {
  undefined4 FUN_0041da40(undefined4 param_2);
};
undefined4 ThisCallBox::FUN_0041da40(undefined4 param_2) {
  FILE *_File;
  void *_DstBuf;
  int iVar1;
  int local_13c;
  int local_138;
  undefined1 local_134 [20];
  undefined1 local_120 [28];
  undefined1 local_104 [260];
  
  FUN_0041dc10(param_2,((undefined4)this),local_104);
  _File = (FILE *)FUN_00671541(local_104,&DAT_006cc430);
  if (_File != (FILE *)0x0) {
    _fread(&local_13c,4,1,_File);
    if (local_13c == 0x13) {
      _fread(local_134,0x12,1,_File);
      _fread(local_120,0x19,1,_File);
      _DstBuf = _malloc(0xf660);
      _fread(_DstBuf,0xf660,1,_File);
      _fread(&local_138,4,1,_File);
      iVar1 = FUN_0041dd10(param_2,_DstBuf);
      if (iVar1 != local_138) {
        _fclose(_File);
        _free(_DstBuf);
        return 0;
      }
      _fclose(_File);
      FUN_004ab200(1);
      _free(_DstBuf);
      return 1;
    }
    _fclose(_File);
  }
  return 0;
}
