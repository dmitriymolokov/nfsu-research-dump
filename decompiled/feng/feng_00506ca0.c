/* spd-match: far pct=12.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00506CA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
int __cdecl FUN_005048e0();
int __cdecl FUN_00506eb0();
extern int DAT_0073578c;
extern int DAT_00744ff0;
extern int DAT_00746104;
extern void LAB_00506d28(void);
extern void LAB_00506d71(void);
extern void LAB_00506d93(void);
void __fastcall FUN_00506ca0(int obj)

{

  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar1 + 0x18));
  }
  iVar1 = *(int *)(obj + 0x40);
  iVar2 = FUN_00506eb0(obj);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
  }
  else {
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
  }
  FUN_00495f00(uVar3);
  if (*(char *)(iVar1 + 0x15) == '\0') {
    if (*(int *)(obj + 0xc) == 0) {
LAB_00506d71:
      if (DAT_0073578c == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_004ef050(0xa8a3681a);
      }
    }
    else {
      iVar1 = FUN_004f65d0();
      if (iVar1 == 0) goto LAB_00506d71;
      iVar1 = FUN_004ffb70();
      if (iVar1 == 0) goto LAB_00506d71;
    }
    FUN_004f6910(iVar1);
    goto LAB_00506d93;
  }
  if (*(int *)(obj + 0xc) == 0) {
LAB_00506d28:
    if (DAT_0073578c != 0) {
      uVar3 = FUN_004ef050(0xa8a3681a);
      FUN_004f6970(uVar3);
      goto LAB_00506d93;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_00506d28;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_00506d28;
  }
  FUN_004f6970(iVar1);
LAB_00506d93:
  FUN_005048e0(&DAT_00744ff0);
  return;
}
