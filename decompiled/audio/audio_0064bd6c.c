/* spd-match: far pct=6.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0064BD6C */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

typedef char *va_list;
typedef unsigned int errno_t;
typedef unsigned int (*LPTHREAD_START_ROUTINE)(void *);
typedef HANDLE *LPHANDLE;
typedef UINT MMRESULT;
typedef __int64 LONGLONG;
typedef long __time32_t;
typedef void *HLINEAPP;
typedef void __cdecl _StartAddress(void *);
int __cdecl __stricmp(const char *, const char *);
unsigned int __cdecl __control87(unsigned int, unsigned int);
void *__cdecl CreateObject(void);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
typedef struct tagPOINT { long x, y; } POINT, tagPOINT, *LPPOINT;
typedef struct tagPAINTSTRUCT { unsigned char _[64]; } PAINTSTRUCT, tagPAINTSTRUCT;
typedef struct varstring_tag { unsigned char _[32]; } varstring_tag;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
unsigned __stdcall __beginthreadex(void *, unsigned, unsigned (__stdcall *)(void *), void *, unsigned, unsigned *);

int unaff_ESI;

extern int puRama1ffffff;
void __fastcall FUN_0064bd6c(undefined4 * obj, int *param_1, undefined4 param_2)

{
  byte bVar1;
  code *pcVar2;

  int unaff_ESI;
  undefined1 in_CF;
  
  bVar1 = *(byte *)(unaff_ESI + -0x3e);
  *(byte *)(unaff_ESI + -0x3e) = (byte)(CONCAT11(in_CF,bVar1) >> 4) | bVar1 << 5;
  *(char *)param_1 = (char)*param_1 + (char)param_2;
  *obj = param_2;
  if (*param_1 != 0) {
    puRama1ffffff = obj;
    *(char *)(unaff_ESI + 0x6a) = *(char *)(unaff_ESI + 0x6a) + (char)param_2;
    (**(code **)((int)obj + -0x75))();
    pcVar2 = (code *)swi(1);
    (*pcVar2)();
    return;
  }
                    
  halt_baddata();
}
