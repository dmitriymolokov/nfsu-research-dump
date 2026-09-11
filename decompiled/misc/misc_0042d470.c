/* spd-match: far pct=13.28 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0042D470 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_0042d520();
extern int DAT_00700b3c;
extern unsigned char *DAT_007361f0;
void __fastcall FUN_0042d470(int obj)

{

  int iVar1;
  
  iVar1 = 0;
  switch((int)*DAT_007361f0) {
  case 0:
    iVar1 = 0;
    break;
  case 2:
  case 3:
    iVar1 = 7;
    break;
  case 4:
  case 5:
  case 6:
  case 8:
  case 10:
    if (*(char *)(obj + 0x4af) == '\0') {
      iVar1 = (uint)(*(char *)(obj + 0x4ae) != '\0') * 2 + 2;
    }
    else {
      iVar1 = 3;
    }
    break;
  case 7:
    iVar1 = 1;
    break;
  case 9:
    iVar1 = 6;
  }
  if (*(int *)(obj + 0x58) != 0) {
    iVar1 = 8;
  }
  if ((&DAT_00700b3c)[*(int *)(obj + 0x60)] != '\0') {
    iVar1 = 5;
  }
  if (*(int *)(obj + 0x278) != iVar1) {
    FUN_0042d520(iVar1);
  }
  return;
}
