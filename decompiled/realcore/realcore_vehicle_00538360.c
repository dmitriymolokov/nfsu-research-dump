/* spd-match: far pct=12.86 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00538360 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0042a690();
int __cdecl FUN_004436d0();
int __cdecl FUN_00537db0();
int __cdecl FUN_005381b0();
int __cdecl FUN_005387c0();
extern unsigned char *DAT_007356a8;
extern int DAT_0073619c;
extern unsigned char *DAT_007361f0;
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
void __fastcall FUN_00538360(int obj)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 uVar5;

  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  puVar4 = DAT_0073619c;
  if ((DAT_007361f0 != (undefined4 *)0x0) && (DAT_0073619c != (undefined4 *)0x0)) {
    *(undefined4 *)(obj + 0x1b4) = *DAT_007361f0;
    *(undefined4 *)(obj + 0x1bc) = *puVar4;
    FUN_005387c0();
    uVar6 = FUN_004436d0(DAT_0078a2fc);
    *(undefined4 *)(obj + 700) = uVar6;
    if ((*(int *)(obj + 0x1b4) != *(int *)(obj + 0x1b0)) ||
       (*(int *)(obj + 0x1bc) != *(int *)(obj + 0x1b8))) {
      FUN_00537db0();
    }
    FUN_005381b0();
    iVar2 = DAT_007356a8;
    switch(DAT_0078a2f0) {
    case 0x4b1:
      if (*(char *)(DAT_007356a8 + 0x70) != '\0') {
        *(undefined1 *)(obj + 0x221) = 1;
      }
    case 0x4b2:
    case 0x4b6:
    case 0x4b7:
    case 0x4ba:
    case 0x4be:
      iVar2 = *(int *)(iVar2 + 0xa0);
      if (iVar2 == 0) {
        iVar7 = 0;
      }
      else if (*(int *)(iVar2 + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar2 + 4) + 0x188);
      }
      iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x168);
      if (*(int *)(iVar3 + 0x28) == 1) {
        bVar8 = *(int *)(*(int *)(*(int *)(iVar3 + 0x34) + 0x48) + 0x94) != 0;
      }
      else {
        bVar8 = false;
      }
      *(bool *)(obj + 0x219) = bVar8;
      if (iVar7 == 1) {
        uVar5 = FUN_0042a690();
        *(undefined1 *)(obj + 0x21a) = uVar5;
      }
      cVar1 = *(char *)(*(int *)(*(int *)(iVar2 + 4) + 0x168) + 0x874);
      *(char *)(obj + 0x21d) = cVar1;
      if (cVar1 == '\x01') {
        *(undefined1 *)(obj + 0x21e) = 0;
      }
      if (iVar7 == 1) {
        *(undefined1 *)(obj + 0x21e) =
             *(undefined1 *)(*(int *)(*(int *)(iVar2 + 4) + 0x16c) + 0x874);
      }
    default:;
    }
  }
  return;
}
