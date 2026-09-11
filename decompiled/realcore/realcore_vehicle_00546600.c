/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141942Z_w0_tc0 */
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

int __cdecl FUN_005468a0();
int __cdecl FUN_00547a70();
int __cdecl FUN_00548cc0();
int __cdecl FUN_00549140();
int __cdecl FUN_0054e1e0();
int __cdecl FUN_006626d0();
extern int DAT_006f3da4;
extern int DAT_007346c8;
extern int DAT_0073550c;
extern int DAT_0073ad3c;
extern int _DAT_006f1f3c;
extern int _DAT_0073de20;
extern int _DAT_0073de24;
extern int _DAT_007402a8;

extern char s_0_0_0_0_006f1e10[];








void FUN_00546600(void)

{
  FUN_00548cc0();
  _DAT_007402a8 = DAT_0073ad3c;
  DAT_006f3da4 = 1;
  FUN_00549140(0);
  if (DAT_007346c8 != 0) {
    FUN_005468a0();
    DAT_0073550c = 1;
    return;
  }
  FUN_00547a70();
  _DAT_0073de20 = FUN_006626d0(s_0_0_0_0_006f1e10);
  _DAT_0073de24 = (undefined2)_DAT_006f1f3c;
  FUN_0054e1e0(_DAT_0073de20,_DAT_006f1f3c);
  DAT_0073550c = 1;
  return;
}
