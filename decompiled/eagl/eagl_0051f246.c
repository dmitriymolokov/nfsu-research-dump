/* spd-match: far pct=15.31 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-err_nodecomp/va_0051F246 */
#include "ghidra_compat.h"

int __cdecl FUN_00533010();
int __cdecl FUN_00536a70();
int __cdecl FUN_005379c0();
int __cdecl FUN_00537ca0();
int __cdecl FUN_00537cc0();
int __cdecl FUN_00538890();
int __cdecl FUN_00538df0();
int __cdecl FUN_0063f0a0();
extern int DAT_006f1dd8;
extern int DAT_006f51d8;
extern int DAT_006f5278;
extern int DAT_006f5318;
extern int DAT_006f53e0;
extern int DAT_006f5480;
extern int DAT_006f5660;
extern int DAT_006f5818;
extern int DAT_006f58e0;
extern int DAT_006f5a48;
extern int DAT_006f5b88;
extern int DAT_006f5d18;
extern int DAT_006f5e80;
extern int DAT_006f6010;
extern int DAT_006f6150;
extern int DAT_006f6268;
extern int DAT_006f62e0;
extern int DAT_006f63d0;
extern int DAT_006f6448;
extern int DAT_006f64c0;
extern int DAT_006f6538;
extern int DAT_006f6918;
extern int DAT_00733f74;
extern int DAT_007355d4;
extern int DAT_007356ac;
extern unsigned char *DAT_007361f0;
extern int DAT_0077a920;
extern int DAT_0078a2f0;
extern void LAB_0051f3d3(void);

void __fastcall FUN_0051f246(int val, int param_1)

{
  int iVar1;

  undefined4 *puVar2;
  int iVar3;
  
  FUN_00533010();
  iVar3 = DAT_007356ac;
  if (DAT_007356ac != 0) {
    FUN_00536a70(DAT_007356ac,8,0);
    FUN_00536a70(iVar3,8,1);
    FUN_00536a70(iVar3,8,2);
    FUN_00536a70(iVar3,8,3);
  }
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  if (val == -1) {
    if ((DAT_0077a920 == 3) || (DAT_007361f0 == (int *)0x0)) {
      val = 0;
    }
    else if (*DAT_007361f0 == 4) {
      val = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x104);
  if (iVar3 == 0) {
    return;
  }
  if (val != 1) {
    if (val == 3) {
      FUN_005379c0();
      FUN_0063f0a0(0);
      return;
    }
    if (val != 2) {
      if (DAT_00733f74 != 0) {
        return;
      }
      *(undefined4 *)(iVar3 + 0x1c8) = 0;
      *(undefined4 *)(iVar3 + 0x1cc) = 0;
      *(undefined4 *)(iVar3 + 0x264) = 0;
      *(undefined4 *)(iVar3 + 0x268) = 0;
      *(undefined4 *)(iVar3 + 0x26c) = 0;
      *(undefined4 *)(iVar3 + 0x270) = 0;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      do {
        *puVar2 = 0xbf800000;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00537ca0(2);
      return;
    }
    FUN_00538df0();
    DAT_007355d4 = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 != 5) {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *(undefined4 *)(iVar3 + 0x1c8) = 0x1a;
        *(undefined4 *)(iVar3 + 0x1cc) = 0x1a;
        *(undefined **)(iVar3 + 0x264) = &DAT_006f5660;
        *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
        *(undefined4 *)(iVar3 + 0x26c) = 0xb;
        *(undefined4 *)(iVar3 + 0x270) = 10;
        puVar2 = (undefined4 *)(iVar3 + 0x98);
        iVar3 = 8;
        do {
          *puVar2 = 0xbf800000;
          puVar2 = puVar2 + 8;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00537ca0(2);
      return;
    }
    switch(DAT_0078a2f0) {
    case 0x4b1:
      *(undefined4 *)(iVar3 + 0x1c8) = 0x13;
      *(undefined4 *)(iVar3 + 0x1cc) = 0x13;
      *(undefined **)(iVar3 + 0x264) = &DAT_006f6268;
      *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
      *(undefined4 *)(iVar3 + 0x26c) = 3;
      *(undefined4 *)(iVar3 + 0x270) = 10;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      do {
        *puVar2 = 0xbf800000;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00537ca0(2);
      return;
    case 0x4b2:
      *(undefined4 *)(iVar3 + 0x1c8) = 0x14;
      *(undefined4 *)(iVar3 + 0x1cc) = 0x14;
      *(undefined **)(iVar3 + 0x264) = &DAT_006f62e0;
      *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
      *(undefined4 *)(iVar3 + 0x26c) = 3;
      *(undefined4 *)(iVar3 + 0x270) = 10;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      do {
        *puVar2 = 0xbf800000;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00537ca0(2);
      return;
    default:
      *(undefined4 *)(iVar3 + 0x1c8) = 0x19;
      *(undefined4 *)(iVar3 + 0x1cc) = 0x19;
      *(undefined4 *)(iVar3 + 0x264) = 0;
      *(undefined4 *)(iVar3 + 0x268) = 0;
      *(undefined4 *)(iVar3 + 0x26c) = 0;
      *(undefined4 *)(iVar3 + 0x270) = 0;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      do {
        *puVar2 = 0xbf800000;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00537ca0(2);
      return;
    case 0x4b6:
      *(undefined4 *)(iVar3 + 0x1c8) = 0x15;
      *(undefined4 *)(iVar3 + 0x1cc) = 0x15;
      *(undefined **)(iVar3 + 0x264) = &DAT_006f63d0;
      *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
      *(undefined4 *)(iVar3 + 0x26c) = 3;
      *(undefined4 *)(iVar3 + 0x270) = 10;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      break;
    case 0x4b7:
      *(undefined4 *)(iVar3 + 0x1c8) = 0x16;
      *(undefined4 *)(iVar3 + 0x1cc) = 0x16;
      *(undefined **)(iVar3 + 0x264) = &DAT_006f6448;
      *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
      *(undefined4 *)(iVar3 + 0x26c) = 3;
      *(undefined4 *)(iVar3 + 0x270) = 10;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      do {
        *puVar2 = 0xbf800000;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00537ca0(2);
      return;
    case 0x4ba:
      *(undefined4 *)(iVar3 + 0x1c8) = 0x17;
      *(undefined4 *)(iVar3 + 0x1cc) = 0x17;
      *(undefined **)(iVar3 + 0x264) = &DAT_006f64c0;
      *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
      *(undefined4 *)(iVar3 + 0x26c) = 3;
      *(undefined4 *)(iVar3 + 0x270) = 10;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      do {
        *puVar2 = 0xbf800000;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00537ca0(2);
      return;
    case 0x4be:
      *(undefined4 *)(iVar3 + 0x1c8) = 0x18;
      *(undefined4 *)(iVar3 + 0x1cc) = 0x18;
      *(undefined **)(iVar3 + 0x264) = &DAT_006f6538;
      *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
      *(undefined4 *)(iVar3 + 0x26c) = 3;
      *(undefined4 *)(iVar3 + 0x270) = 10;
      puVar2 = (undefined4 *)(iVar3 + 0x98);
      iVar3 = 8;
      do {
        *puVar2 = 0xbf800000;
        puVar2 = puVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00537ca0(2);
      return;
    }
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    FUN_00537ca0(2);
    return;
  }
  switch(DAT_0078a2f0) {
  default:
    goto LAB_0051f3d3;
  case 0x3ea:
    goto LAB_0051f3d3;
  case 0x3eb:
LAB_0051f3d3:
    FUN_00538890();
    break;
  case 0x3ec:
    *(undefined4 *)(iVar3 + 0x1c8) = 4;
    *(undefined4 *)(iVar3 + 0x1cc) = 4;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f51d8;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 4;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x3ed:
    *(undefined4 *)(iVar3 + 0x1c8) = 5;
    *(undefined4 *)(iVar3 + 0x1cc) = 5;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5278;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 4;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x3ee:
    *(undefined4 *)(iVar3 + 0x26c) = 5;
    *(undefined4 *)(iVar3 + 0x1c8) = 6;
    *(undefined4 *)(iVar3 + 0x1cc) = 6;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5318;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x3ef:
    *(undefined4 *)(iVar3 + 0x1c8) = 7;
    *(undefined4 *)(iVar3 + 0x1cc) = 7;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f53e0;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 4;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x3f0:
    *(undefined4 *)(iVar3 + 0x1c8) = 8;
    *(undefined4 *)(iVar3 + 0x1cc) = 8;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5480;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 6;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x44e:
    *(undefined4 *)(iVar3 + 0x26c) = 5;
    *(undefined4 *)(iVar3 + 0x1c8) = 0xb;
    *(undefined4 *)(iVar3 + 0x1cc) = 0xb;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5818;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x44f:
    *(undefined4 *)(iVar3 + 0x1c8) = 0xc;
    *(undefined4 *)(iVar3 + 0x1cc) = 0xc;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f58e0;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 9;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x450:
    *(undefined4 *)(iVar3 + 0x1c8) = 0xd;
    *(undefined4 *)(iVar3 + 0x1cc) = 0xd;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5a48;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 8;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x451:
    *(undefined4 *)(iVar3 + 0x1c8) = 0xe;
    *(undefined4 *)(iVar3 + 0x1cc) = 0xe;
    *(undefined4 *)(iVar3 + 0x26c) = 10;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5b88;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x452:
    *(undefined4 *)(iVar3 + 0x1c8) = 0xf;
    *(undefined4 *)(iVar3 + 0x1cc) = 0xf;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5d18;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 9;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x453:
    *(undefined4 *)(iVar3 + 0x1c8) = 0x10;
    *(undefined4 *)(iVar3 + 0x1cc) = 0x10;
    *(undefined4 *)(iVar3 + 0x26c) = 10;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f5e80;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x454:
    *(undefined4 *)(iVar3 + 0x1c8) = 0x11;
    *(undefined4 *)(iVar3 + 0x1cc) = 0x11;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f6010;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 8;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    break;
  case 0x455:
    *(undefined4 *)(iVar3 + 0x1c8) = 0x12;
    *(undefined4 *)(iVar3 + 0x1cc) = 0x12;
    *(undefined **)(iVar3 + 0x264) = &DAT_006f6150;
    *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
    *(undefined4 *)(iVar3 + 0x26c) = 7;
    *(undefined4 *)(iVar3 + 0x270) = 10;
    puVar2 = (undefined4 *)(iVar3 + 0x98);
    iVar3 = 8;
    do {
      *puVar2 = 0xbf800000;
      puVar2 = puVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (DAT_006f1dd8 == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x1c4) = 2;
  FUN_00537cc0();
  return;
}
