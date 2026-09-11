/* spd-match: far pct=6.90 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00407B40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00407ab0();
extern int DAT_006a6fa0;
extern unsigned char *DAT_007187c8;
extern int DAT_00719a2c;
extern int DAT_00719a30;
extern int DAT_00719a34;
extern int DAT_00719a3c;
extern int DAT_00719a44;
extern int DAT_00736500;
extern int DAT_00736508;
extern int _DAT_00719a28;
extern int _DAT_00719a38;
extern int _DAT_00719a40;
void __fastcall FUN_00407b40(int obj)

{

  int *piStack_20;
  undefined *puStack_1c;
  int *piStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  DAT_00736508 = 1;
  if (*(int *)(obj + 0x134) == 0x13) {
    if (DAT_007187c8 != (int *)0x0) {
      piStack_18 = DAT_007187c8;
      puStack_1c = (undefined *)0x407b6c;
      (**(code **)(*DAT_007187c8 + 0x20))();
      puStack_1c = &DAT_006a6fa0;
      piStack_20 = DAT_007187c8;
      (**(code **)(*DAT_007187c8 + 0x2c))();
      piStack_18 = (int *)0x0;
      puStack_1c = (undefined *)0x10;
      uStack_10 = 0x10;
      piStack_20 = (int *)0x14;
      uStack_14 = 0;
      (**(code **)(*DAT_007187c8 + 0x18))(DAT_007187c8,1,&piStack_20);
      (**(code **)(*DAT_007187c8 + 0x10))(DAT_007187c8,FUN_00407ab0,DAT_007187c8,3);
      (**(code **)(*DAT_007187c8 + 0x1c))(DAT_007187c8);
      return;
    }
  }
  else {
    _DAT_00719a28 = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + DAT_00736500);
    DAT_00719a34 = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + 0xc + DAT_00736500);
    DAT_00719a2c = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + 4 + DAT_00736500);
    _DAT_00719a38 = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + 0x10 + DAT_00736500);
    DAT_00719a30 = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + 8 + DAT_00736500);
    DAT_00719a3c = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + 0x14 + DAT_00736500);
    _DAT_00719a40 = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + 0x18 + DAT_00736500);
    DAT_00719a44 = *(undefined4 *)(*(int *)(obj + 0x130) * 0x110 + 0x1c + DAT_00736500);
  }
  return;
}
