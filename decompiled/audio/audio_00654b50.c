/* spd-match: far pct=11.40 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141659Z_w0_tc0 */
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

typedef void _func_4879(void);
int __cdecl FUN_0064e520();
int __cdecl FUN_0064e540();
int __cdecl FUN_00650fd0();
int __cdecl FUN_00654340();
int __cdecl FUN_00654cd0();
extern int DAT_006e9ff8;
extern int DAT_00713da8;
extern int DAT_00713dbc;
extern int DAT_00713dbe;
extern int DAT_00713ee8;
extern int DAT_00713ff0;
extern int DAT_00713ff1;
extern int DAT_00713ff2;
extern int DAT_00713ff4;
extern int DAT_00714004;
extern int DAT_0071400c;
extern int DAT_00714010;
extern int DAT_00714014;
extern int DAT_00714060;
extern int DAT_007160c8;
extern int _DAT_006cc93c;
extern int _DAT_006cca94;
extern int _DAT_006ccb4c;
extern unsigned char *_DAT_006e9ff0;
extern int _DAT_007160c4;
extern void LAB_00654a90(void);
extern void LAB_00658ce0(void);

int FUN_00654b50(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  DAT_00714010 = 0x100;
  FUN_0064e520();
  iVar1 = 0;
  if (DAT_00713dbc != 0) {
    do {
      if (((&DAT_00713dbe)[iVar1 * 2] & 0x11) == 0x11) {
        DAT_00714014 = FUN_00650fd0((uint)DAT_00714010 << 3);
        break;
      }
      iVar1 = iVar1 + 1;
      DAT_00714014 = 0;
    } while (iVar1 < (int)(uint)DAT_00713dbc);
  }
  DAT_0071400c = FUN_00650fd0(DAT_00713ee8 * 0x110);
  FUN_00654cd0(DAT_0071400c,DAT_00713ee8 * 0x110);
  if (DAT_00713ff4 != '\0') {
    puVar3 = &DAT_00714004;
    do {
      uVar2 = FUN_00650fd0(0x2020);
      puVar3[-2] = uVar2;
      uVar2 = uVar2 + 8;
      *puVar3 = uVar2;
      while ((uVar2 & 0xf) != 0) {
        uVar2 = *puVar3 + 4;
        *puVar3 = uVar2;
      }
      puVar3 = puVar3 + 1;
    } while ((int)puVar3 < 0x71400c);
  }
  FUN_0064e540();
  if (DAT_00713da8 == -1) {
    _DAT_006e9ff0 = _DAT_006e9ff0 - _DAT_006cca94;
  }
  else if (DAT_00713da8 == '\x01') {
    _DAT_006e9ff0 = _DAT_006e9ff0 + _DAT_006ccb4c;
  }
  else if (DAT_00713da8 == '\x02') {
    _DAT_006e9ff0 = _DAT_006e9ff0 + _DAT_006cc93c;
  }
  if (DAT_00713ff2 == '\0') {
    _atexit((_func_4879 *)&LAB_00658ce0);
    DAT_00713ff2 = '\x01';
  }
  iVar1 = FUN_00654340();
  if (-1 < iVar1) {
    DAT_00714060 = 0;
    DAT_006e9ff8 = 0;
    DAT_00713ff0 = 1;
    DAT_00713ff1 = 1;
    _DAT_007160c4 =
         CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00654a90,(LPVOID)0x0
                      ,0,(LPDWORD)&DAT_007160c8);
    SetThreadPriority(_DAT_007160c4,0xf);
  }
  return iVar1;
}
