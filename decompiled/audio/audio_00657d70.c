/* spd-match: far pct=5.63 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141659Z_w0_tc0 */
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

extern int DAT_00713ee8;
extern unsigned char *DAT_00713f48;

extern int cRam00716680;






char FUN_00657D70(void)

{
  char *pcVar1;
  int iVar2;
  
  do {
    cRam00716680 = cRam00716680 + '\x01';
    if (cRam00716680 == '\0') {
      cRam00716680 = '\x01';
    }
    iVar2 = 0;
    pcVar1 = (char *)(DAT_00713f48 + 0x26);
    while( true ) {
      if (DAT_00713ee8 <= iVar2) {
        return cRam00716680;
      }
      if ((pcVar1[0x43] != '\0') && (*pcVar1 == cRam00716680)) break;
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 0x8c;
    }
  } while( true );
}
