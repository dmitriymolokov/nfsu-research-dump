/* spd-match: far pct=13.75 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055FB60 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0054ae10();
int __cdecl FUN_0055fd00();
int __cdecl FUN_005600c0();
extern void LAB_0055fbae(void);
extern void LAB_00560660(void);
void __fastcall FUN_0055fb60(int val)

{

  int iVar1;
  int unaff_EBX;
  
  FUN_005600c0(*(undefined4 *)(unaff_EBX + 0x98));
  *(undefined4 *)(unaff_EBX + 300) = 0;
  *(undefined4 *)(unaff_EBX + 0x130) = 1;
  *(undefined1 *)(unaff_EBX + 0x94) = 0;
  *(undefined1 *)(unaff_EBX + 0x8c) = 1;
  if (val == -0x6edfbf62) {
    iVar1 = *(int *)(unaff_EBX + 0x78) + -1;
  }
  else {
    if (val != -0x4a68e40f) goto LAB_0055fbae;
    iVar1 = *(int *)(unaff_EBX + 0x78) + 1;
  }
  *(int *)(unaff_EBX + 0x78) = iVar1;
LAB_0055fbae:
  iVar1 = *(int *)(unaff_EBX + 0x78);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (3 < iVar1) {
    iVar1 = 4;
  }
  *(int *)(unaff_EBX + 0x78) = iVar1;
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || ((iVar1 == 3 || (iVar1 == 4)))) {
    FUN_0054ae10(&LAB_00560660,unaff_EBX);
  }
  FUN_0055fd00();
  return;
}
