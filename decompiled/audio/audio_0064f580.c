/* spd-match: far pct=20.89 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141652Z_w0_tc0 */
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

int __cdecl FUN_0064e520();
int __cdecl FUN_0064e540();
int __cdecl FUN_0064f4b0();
int __cdecl FUN_0064f530();
int __cdecl FUN_00650f60();
int __cdecl FUN_00650fd0();
int __cdecl FUN_00651150();
int __cdecl FUN_00652d50();
int __cdecl FUN_00652d70();
int __cdecl FUN_00652fd0();
int __cdecl FUN_00654180();
int __cdecl FUN_00654b50();
int __cdecl FUN_00654cd0();
extern int DAT_00713cc8;
extern int DAT_00713ccc;
extern int DAT_00713cd0;
extern int DAT_00713cdc;
extern int DAT_00713ce0;
extern int DAT_00713d70;
extern int DAT_00713d94;
extern int DAT_00713d98;
extern int DAT_00713db7;
extern unsigned char *DAT_00713db8;
extern int DAT_00713e00;
extern int DAT_00713e02;
extern int DAT_00713e04;
extern int DAT_00713ee4;
extern int DAT_00713ee6;
extern int DAT_00713ee7;
extern int DAT_00713ee8;
extern int DAT_00713eea;
extern int DAT_00713eec;
extern int DAT_00713f48;
extern int DAT_00713f4c;
extern int _DAT_006e9bc8;
extern int _DAT_00713cd4;
extern int _DAT_00713cd8;
extern int _DAT_00713f88;
extern int _DAT_00713f8a;
extern int _DAT_00713f94;
extern int _DAT_00713f96;
extern int _DAT_00713f98;
extern int _DAT_00713fa0;
extern int _DAT_00713fa2;
extern int _DAT_00713fa4;
extern int _DAT_00713fa6;
extern int _DAT_00713fac;
extern int _DAT_00713fae;
extern int _DAT_00713fb0;
extern int _DAT_00713fb2;
extern int _DAT_00713fb4;
extern int _DAT_00713fb8;
extern int _DAT_00713fba;
extern int _DAT_00713fbc;
extern int _DAT_00713fbe;
extern int _DAT_00713fc0;
extern int _DAT_00713fc2;
extern void LAB_0064f72e(void);

extern char s_SNDAUTHOR__Adamchan__Thursday_04_006ea010[];








int FUN_0064f580(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  s_SNDAUTHOR__Adamchan__Thursday_04_006ea010[0] = 'S';
  if (DAT_00713ee4 != '\0') {
    return 0;
  }
  FUN_00654cd0(param_1,param_2);
  FUN_00650f60(param_1,param_2);
  if (DAT_00713ee8 == 0) {
    iVar1 = FUN_0064f4b0(&DAT_00713d70);
    if (iVar1 < 0) {
      return iVar1;
    }
    FUN_0064f530(&DAT_00713d70);
  }
  FUN_00651150(DAT_00713d94);
  FUN_00652d50();
  DAT_00713ee4 = 1;
  FUN_0064e520();
  DAT_00713f48 = FUN_00650fd0(DAT_00713ee8 * 0x8c);
  DAT_00713f4c = FUN_00650fd0((uint)DAT_00713d98 << 3);
  FUN_0064e540();
  DAT_00713eec = 0;
  _DAT_006e9bc8 = 0x3f800000;
  DAT_00713eea = 0;
  DAT_00713ee6 = 0;
  DAT_00713ee7 = 0;
  iVar1 = FUN_00654b50();
  if (iVar1 < 0) {
    FUN_00654180();
    FUN_00652d70();
    DAT_00713ee4 = 0;
    return iVar1;
  }
  DAT_00713cdc = DAT_00713db8 + DAT_00713db7;
  if (DAT_00713cdc == '\x01') {
    DAT_00713ce0 = 0;
  }
  else {
    if (DAT_00713cdc == '\x02') {
      DAT_00713ce0 = 1;
      DAT_00713cc8 = 0x42b40000;
      DAT_00713ccc = 0x43870000;
      goto LAB_0064f72e;
    }
    if (DAT_00713cdc == '\x04') {
      DAT_00713ce0 = 2;
      DAT_00713cc8 = 0x42340000;
      DAT_00713ccc = 0x43070000;
      DAT_00713cd0 = 0x43610000;
      _DAT_00713cd4 = 0x439d8000;
      goto LAB_0064f72e;
    }
    if (DAT_00713cdc != '\x06') goto LAB_0064f72e;
    DAT_00713ce0 = 3;
    DAT_00713ccc = 0x42340000;
    DAT_00713cd0 = 0x43070000;
    _DAT_00713cd4 = 0x43610000;
    _DAT_00713cd8 = 0x439d8000;
  }
  DAT_00713cc8 = 0;
LAB_0064f72e:
  if (DAT_00713db7 == '\x02') {
    _DAT_00713f88 = 0xc000;
    _DAT_00713f8a = 0x4000;
  }
  else {
    _DAT_00713f88 = 0xe000;
    _DAT_00713f8a = 0x2000;
  }
  _DAT_00713f94 = DAT_00713e04;
  _DAT_00713f96 = DAT_00713e00;
  _DAT_00713f98 = DAT_00713e02;
  _DAT_00713fa0 = 0xe000;
  _DAT_00713fa2 = 0x2000;
  _DAT_00713fa4 = 0xa000;
  _DAT_00713fa6 = 0x6000;
  _DAT_00713fac = 0xe000;
  _DAT_00713fae = 0;
  _DAT_00713fb0 = 0x2000;
  _DAT_00713fb2 = 0xa000;
  _DAT_00713fb4 = 0x6000;
  _DAT_00713fb8 = 0xe000;
  _DAT_00713fba = 0;
  _DAT_00713fbc = 0x2000;
  _DAT_00713fbe = 0xa000;
  _DAT_00713fc0 = 0x6000;
  _DAT_00713fc2 = 0;
  FUN_00652fd0();
  return 0;
}
