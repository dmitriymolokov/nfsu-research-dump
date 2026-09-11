/* spd-match: far pct=17.71 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052BC50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005326f0();
int __cdecl FUN_0064bc30();
int __cdecl FUN_00674898();
extern int DAT_006f1dd8;
extern int DAT_006f4ed8;
extern unsigned char *DAT_007356a8;
void __fastcall FUN_0052bc50(int obj, undefined4 param_1)

{

  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(obj + 0x2b4) == 0) {
    *(undefined4 *)(obj + 0x1a80) = 0;
  }
  else if (*(int *)(obj + 0x2b0) == 2) {
    *(int *)(obj + 0x1a80) = *(int *)(obj + 0x238) * DAT_006f4ed8 >> 0xf;
  }
  else {
    *(int *)(obj + 0x1a80) = *(int *)(obj + 0x23c) * DAT_006f4ed8 >> 0xf;
  }
  if ((DAT_006f1dd8 != 0) && (*(int *)(obj + 0x1b8c) != 0)) {
    FUN_005326f0(param_1);
    uVar1 = FUN_00674898();
    *(undefined4 *)(obj + 0x1a80) = uVar1;
    if (*(char *)(DAT_007356a8 + 0x84) != '\0') {
      *(undefined4 *)(obj + 0x1a80) = 0;
    }
    iVar2 = *(int *)(obj + 0x1a80);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    *(int *)(*(int *)(obj + 0x1b8c) + 0x28) = iVar2;
    iVar2 = FUN_00674898();
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x400 < iVar2) {
      iVar2 = 0x400;
    }
    *(int *)(*(int *)(obj + 0x1b8c) + 0x18) = iVar2;
    *(undefined4 *)(*(int *)(obj + 0x1b8c) + 0x20) = 0x400;
    iVar2 = *(int *)(obj + 0x2ac);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x400 < iVar2) {
      iVar2 = 0x400;
    }
    *(int *)(*(int *)(obj + 0x1b8c) + 0x44) = iVar2;
    iVar2 = FUN_00674898();
    iVar2 = 0xbfff - iVar2;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else if (0x10000 < iVar2) {
      iVar2 = 0x10000;
    }
    *(int *)(*(int *)(obj + 0x1b8c) + 0x48) = iVar2;
    iVar2 = FUN_00674898();
    iVar2 = iVar2 + -300;
    if (iVar2 < -0x3fff) {
      iVar2 = -0x3fff;
    }
    else if (0x3fff < iVar2) {
      iVar2 = 0x3fff;
    }
    *(int *)(*(int *)(obj + 0x1b8c) + 0x4c) = iVar2;
    if (**(int **)(obj + 0x1b8c) != 0) {
      FUN_0064bc30(*(int **)(obj + 0x1b8c) + 1);
    }
  }
  return;
}
