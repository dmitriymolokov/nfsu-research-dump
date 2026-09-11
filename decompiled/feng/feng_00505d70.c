/* spd-match: far pct=14.06 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00505D70 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_00495f70();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
int __cdecl FUN_005048e0();
extern int DAT_0073578c;
extern int DAT_00744ff0;
extern void LAB_00505e21(void);
void __fastcall FUN_00505d70(int obj)

{

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(obj + 0x40);
  FUN_00495f00(*(undefined4 *)(iVar1 + 0xc));
  iVar1 = *(int *)(iVar1 + 8);
  if (((((iVar1 != 5) || (*(char *)(obj + 0x88) == '\0')) &&
       ((iVar1 != 2 || (*(char *)(obj + 0x8a) == '\0')))) &&
      ((iVar1 != 1 || (*(char *)(obj + 0x8b) == '\0')))) &&
     ((iVar1 != 0 || (*(char *)(obj + 0x89) == '\0')))) {
    FUN_00495f70();
    FUN_005048e0(&DAT_00744ff0);
    return;
  }
  if (*(int *)(obj + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_00505e21;
    }
  }
  if (DAT_0073578c != 0) {
    uVar2 = FUN_004ef050(0xa8a3681a);
    FUN_004f6970(uVar2);
    FUN_005048e0(&DAT_00744ff0);
    return;
  }
  iVar1 = 0;
LAB_00505e21:
  FUN_004f6970(iVar1);
  FUN_005048e0(&DAT_00744ff0);
  return;
}
