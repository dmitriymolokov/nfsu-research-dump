/* spd-match: far pct=13.15 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p3/batches/20260724T141631Z_w0_tc0 */
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

extern int DAT_006a9218;
extern int DAT_006a9220;
extern int DAT_006e769c;
extern int DAT_006e76a0;
extern int DAT_006e76a8;
extern int DAT_0070fdd8;
extern int DAT_0070fde0;
extern int DAT_0070fde4;
extern int DAT_0070fdec;
extern int DAT_0070fdf0;
extern int DAT_0070fdf4;
extern int DAT_0070fdf8;
extern unsigned char *PTR_s_Pentium_006e80c0;

extern char s_Cyrix_006a91f0[];
extern char s_WinChip_006a91e8[];
extern char s_Athlon_006a9210[];
extern char s_AthlonXP_006a9204[];
extern char s_AthlonMP_006a91f8[];
extern char s_Pentium_006a91e0[];
extern char s_PentiumPro_006a9248[];
extern char s_Pentium2_006a923c[];
extern char s_Pentium3_006a9230[];
extern char s_Pentium4_006a9224[];






char * FUN_00643a60(void)

{
  if (DAT_006e76a8 == 0) {
    if (DAT_0070fdec == 0) {
      if (DAT_0070fdf0 != 0) {
        PTR_s_Pentium_006e80c0 = s_Cyrix_006a91f0;
        return "Cyrix";
      }
      if (DAT_0070fdf8 != 0) {
        PTR_s_Pentium_006e80c0 = s_WinChip_006a91e8;
      }
    }
    else {
      PTR_s_Pentium_006e80c0 = &DAT_006a9220;
      if ((((DAT_0070fdf4 != 0) && (PTR_s_Pentium_006e80c0 = &DAT_006a9218, DAT_006e76a0 != 0)) &&
          (PTR_s_Pentium_006e80c0 = s_Athlon_006a9210, DAT_0070fde0 != 0)) &&
         (PTR_s_Pentium_006e80c0 = s_AthlonXP_006a9204, 1 < DAT_006e769c)) {
        PTR_s_Pentium_006e80c0 = s_AthlonMP_006a91f8;
        return "AthlonMP";
      }
    }
  }
  else {
    PTR_s_Pentium_006e80c0 = s_Pentium_006a91e0;
    if (((DAT_006e76a0 != 0) && (PTR_s_Pentium_006e80c0 = s_PentiumPro_006a9248, DAT_0070fdd8 != 0))
       && (PTR_s_Pentium_006e80c0 = s_Pentium2_006a923c, DAT_0070fde0 != 0)) {
      PTR_s_Pentium_006e80c0 = s_Pentium3_006a9230;
    }
    if (DAT_0070fde4 != 0) {
      PTR_s_Pentium_006e80c0 = s_Pentium4_006a9224;
      return "Pentium4";
    }
  }
  return PTR_s_Pentium_006e80c0;
}
