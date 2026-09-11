/* spd-match: far pct=2.63 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141830Z_w0_tc0 */
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

int __cdecl FUN_0041db70();
int __cdecl FUN_004f6720();
int __cdecl FUN_004f68a0();
extern int DAT_006cc568;

extern char s______________006cbcd0[];






void FUN_00416fc0(void)

{
  char cVar1;
  char *pcVar2;
  char local_30 [4];
  char local_2c [4];
  char local_28 [4];
  char local_24;
  char local_1c [4];
  char local_18 [4];
  char local_14 [4];
  char local_10;
  
  FUN_0041db70(local_1c);
  pcVar2 = local_1c;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar2 - (int)(local_1c + 1) == 0) {
    local_14[0] = s______________006cbcd0[8];
    local_14[1] = s______________006cbcd0[9];
    local_14[2] = s______________006cbcd0[10];
    local_14[3] = s______________006cbcd0[0xb];
    local_28[0] = s______________006cbcd0[8];
    local_28[1] = s______________006cbcd0[9];
    local_28[2] = s______________006cbcd0[10];
    local_28[3] = s______________006cbcd0[0xb];
    local_1c[0] = s______________006cbcd0[0];
    local_1c[1] = s______________006cbcd0[1];
    local_1c[2] = s______________006cbcd0[2];
    local_1c[3] = s______________006cbcd0[3];
    local_18[0] = s______________006cbcd0[4];
    local_18[1] = s______________006cbcd0[5];
    local_18[2] = s______________006cbcd0[6];
    local_18[3] = s______________006cbcd0[7];
    local_10 = s______________006cbcd0[0xc];
    local_30[0] = s______________006cbcd0[0];
    local_30[1] = s______________006cbcd0[1];
    local_30[2] = s______________006cbcd0[2];
    local_30[3] = s______________006cbcd0[3];
    local_2c[0] = s______________006cbcd0[4];
    local_2c[1] = s______________006cbcd0[5];
    local_2c[2] = s______________006cbcd0[6];
    local_2c[3] = s______________006cbcd0[7];
    local_24 = s______________006cbcd0[0xc];
  }
  FUN_004f68a0(&DAT_006cc568,local_30,(int)pcVar2 - (int)(local_1c + 1));
  FUN_004f6720(local_1c);
  return;
}
