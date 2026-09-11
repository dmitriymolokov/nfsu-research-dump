/* spd-match: far pct=16.16 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005387C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00446fd0();
int __cdecl FUN_00538770();
int __cdecl FUN_00538c50();
extern unsigned char *DAT_007356a8;
extern unsigned char *DAT_00740500;
extern void LAB_0053881c(void);
undefined4 __fastcall FUN_005387c0(int obj)

{
  short sVar1;

  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(obj + 0x264) == 0) && (*(int *)(obj + 0x268) == 0)) {
    return 0xffffffff;
  }
  iVar2 = *(int *)(DAT_007356a8 + 0xc4);
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0x234);
  }
  iVar4 = 0;
  if (iVar5 == 0) {
    if (DAT_00740500 == 0) goto LAB_0053881c;
    iVar2 = DAT_00740500 + 0x40;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x234) + 0x60;
  }
  iVar4 = FUN_00446fd0(iVar2);
LAB_0053881c:
  *(undefined1 *)(obj + 0x1a5) = 0;
  if (iVar4 != 0) {
    sVar1 = *(short *)(iVar4 + 8);
    *(char *)(obj + 0x1d5) =
         (((char)((int)sVar1 / 100) + (char)(sVar1 >> 7)) -
         (char)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + '@';
    iVar2 = (int)*(short *)(iVar4 + 8) % 100;
    *(int *)(obj + 0x1e4) = iVar2;
    if ((*(char *)(obj + 0x1d5) != *(char *)(obj + 0x1d4)) ||
       (iVar2 != *(int *)(obj + 0x1e0))) {
      *(undefined1 *)(obj + 0x218) = 1;
      FUN_00538770();
      uVar3 = FUN_00538c50();
      return uVar3;
    }
  }
  return 0xffffffff;
}
