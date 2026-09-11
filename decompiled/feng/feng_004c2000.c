/* spd-match: far pct=30.48 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C2000 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004c20e0();
int __cdecl FUN_004c2190();
int __cdecl FUN_004c2230();
int __cdecl FUN_004c22c0();
int __cdecl FUN_004c2390();
int __cdecl FUN_004c2440();
extern int DAT_00736168;
extern int DAT_0073616c;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_00777cb8;
extern int DAT_0078a2f0;
extern int DAT_0078a30c;
extern int DAT_0078a310;
extern int DAT_0078a31c;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int DAT_0078a368;
extern void LAB_004c203c(void);
void __fastcall FUN_004c2000(int obj)

{

  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  DAT_00777cb8 = 5;
  iVar2 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar2 + 0x6c) == DAT_0078a2f0) goto LAB_004c203c;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xfc;
    } while (iVar1 < DAT_0073616c);
  }
  iVar2 = 0;
LAB_004c203c:
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
      if (((DAT_0078a30c == 1) && (DAT_0078a31c == 0)) && (DAT_0078a368 == 0)) {
        FUN_004c2230();
      }
      else if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x74) & 4) == 0)) {
        if ((DAT_0078a310 == 0) || (DAT_0078a310 == 0x7fffffff)) {
          FUN_004c22c0();
        }
        else {
          FUN_004c2440();
        }
      }
      else {
        FUN_004c2390();
      }
    }
    else {
      FUN_004c20e0();
    }
  }
  else {
    FUN_004c2190();
  }
  *(undefined4 *)(obj + 0x160) = 6;
  *(undefined1 *)(obj + 0x21c) = 0;
  return;
}
