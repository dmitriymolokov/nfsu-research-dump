/* spd-match: far pct=8.45 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00535C90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0064bc30();
extern int DAT_006f4f58;
extern unsigned char *DAT_007356a8;
extern unsigned char *DAT_007356ac;
extern int DAT_007361a8;
extern unsigned char *DAT_007361f0;
extern int DAT_0078a344;
void __fastcall FUN_00535c90(int obj)

{

  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(obj + 0x14) + 0x264);
  iVar2 = *(int *)(obj + 0x150) * *(int *)(obj + 0xf0) >> 0xf;
  iVar1 = *(int *)(obj + 0x370) * *(int *)(obj + 0xf0) >> 0xf;
  if (iVar3 < 4) {
    if (*(char *)(DAT_007356a8 + 0x84) != '\0') {
      iVar2 = 0;
    }
    if ((DAT_007361f0 != (int *)0x0) && ((*DAT_007361f0 == 1 || (*DAT_007361f0 == 7)))) {
      iVar2 = 0;
    }
    iVar2 = *(int *)(iVar3 * 0xd10 + 0x728 + DAT_007356ac) * iVar2 >> 0xf;
    if (iVar3 < 4) {
      if (*(char *)(DAT_007356a8 + 0x84) != '\0') {
        iVar1 = 0;
      }
      if ((DAT_007361f0 != (int *)0x0) && ((*DAT_007361f0 == 1 || (*DAT_007361f0 == 7)))) {
        iVar1 = 0;
      }
      iVar1 = *(int *)(iVar3 * 0xd10 + 0x728 + DAT_007356ac) * iVar1 >> 0xf;
    }
  }
  iVar3 = *(int *)(DAT_007356ac + 0x3e18) * iVar2 >> 0xf;
  iVar1 = *(int *)(DAT_007356ac + 0x3e18) * iVar1 >> 0xf;
  if (((*(int *)(*(int *)(obj + 0x14) + 0x2b0) != 2) && (DAT_0078a344 == '\0')) &&
     (DAT_007361a8 == 0)) {
    iVar3 = iVar3 * 11000 >> 0xf;
    iVar1 = iVar1 * 11000 >> 0xf;
  }
  iVar2 = DAT_006f4f58 * iVar3 >> 0xf;
  iVar3 = DAT_006f4f58 * iVar1 >> 0xf;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (0x7fff < iVar2) {
    iVar2 = 0x7fff;
  }
  *(int *)(*(int *)(obj + 0xf4) + 8) = iVar2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x7fff < iVar3) {
    iVar3 = 0x7fff;
  }
  *(int *)(*(int *)(obj + 0xf4) + 0x14) = iVar3;
  *(undefined4 *)(*(int *)(obj + 0xf4) + 0xc) = 0x1000;
  iVar3 = *(int *)(obj + 0x14c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xffff < iVar3) {
    iVar3 = 0xffff;
  }
  *(int *)(*(int *)(obj + 0xf4) + 0x10) = iVar3;
  iVar3 = *(int *)(obj + 0x36c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0xffff < iVar3) {
    iVar3 = 0xffff;
  }
  *(int *)(*(int *)(obj + 0xf4) + 0x18) = iVar3;
  iVar3 = *(int *)(obj + 0x314);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (0x410 < iVar3) {
    iVar3 = 0x410;
  }
  *(int *)(*(int *)(obj + 0xf4) + 0x1c) = iVar3;
  if (**(int **)(obj + 0xf4) != 0) {
    FUN_0064bc30(*(int **)(obj + 0xf4) + 1);
  }
  return;
}
