/* spd-match: far pct=17.84 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C1CA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00414a60();
int __cdecl FUN_004be510();
int __cdecl FUN_004be660();
int __cdecl FUN_004be6c0();
int __cdecl FUN_004c13b0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
extern int DAT_0073578c;
extern int DAT_00777cb8;
extern void LAB_004be860(void);
extern void LAB_004c1d02(void);
void __fastcall FUN_004c1ca0(int obj)

{

  int iVar1;
  
  DAT_00777cb8 = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    FUN_004c13b0(iVar1,0);
  } while (iVar1 < 2);
  if (*(int *)(obj + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004c1d02;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0x39cac62);
  }
LAB_004c1d02:
  FUN_004f6970(iVar1);
  (**(code **)(*(int *)(obj + 0x70) + 0xc))(1);
  *(undefined4 *)(obj + 0x180) = 1;
  *(code **)(obj + 0x48) = FUN_004be6c0;
  FUN_004be510();
  *(undefined4 *)(obj + 0x184) = 2;
  *(undefined1 **)(obj + 0x4c) = &LAB_004be860;
  FUN_004be660();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  FUN_00414a60();
  *(undefined4 *)(obj + 0x160) = 2;
  return;
}
