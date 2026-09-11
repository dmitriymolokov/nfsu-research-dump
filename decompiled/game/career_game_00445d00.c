/* spd-match: far pct=7.03 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141849Z_w0_tc0 */
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

int __cdecl FUN_0040a880();
int __cdecl FUN_004454d0();
int __cdecl FUN_00446b70();
int __cdecl FUN_00446bb0();
int __cdecl FUN_00446c90();
int __cdecl FUN_00565da0();
int __cdecl FUN_00567160();
extern int DAT_0073612c;
extern int DAT_0073613c;
extern unsigned char *DAT_00736174;
extern int DAT_0077a940;
extern int _DAT_00736134;

extern char s_Seeulator_006c8190[];








void FUN_00445d00(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char local_40;
  char local_3f [63];
  
  if (DAT_0073613c == 0) {
    iVar3 = FUN_00567160();
    if (iVar3 == 0) {
      DAT_0073613c = 0;
    }
    else {
      pcVar5 = "MARKER_BOUNDARY";
      do {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar1 != '\0');
      DAT_0073613c = FUN_004454d0();
    }
  }
  if (DAT_0073612c == 0) {
    pcVar5 = "Seeulator";
    if (s_Seeulator_006c8190[0] != '\0') {
      do {
        pcVar1 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar1 != '\0');
      if (s_Seeulator_006c8190[0] != '\0') {
        pcVar5 = "Seeulator";
        do {
          pcVar1 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 != '\0');
      }
    }
    DAT_0073612c = 0;
    _DAT_00736134 = 0;
    return;
  }
  FUN_00565da0("%s\\Gonkulator.hoo",DAT_00736174 + 0x20);
  puVar2 = DAT_0077a940;
  if (local_40 != '\0') {
    pcVar5 = &local_40;
    do {
      pcVar1 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
  }
  puVar4 = (undefined4 *)FUN_0040a880();
  for (; puVar2 != puVar4; puVar2 = (undefined4 *)*puVar2) {
    FUN_00446bb0(1);
    FUN_00446c90();
    FUN_00446b70();
  }
  return;
}
