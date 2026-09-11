/* spd-match: far pct=17.27 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00533140();
int __cdecl FUN_00536690();
int __cdecl FUN_00537ca0();
int __cdecl FUN_00537cc0();
int __cdecl FUN_00538890();
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
extern unsigned char *DAT_007356a8;
extern int DAT_007356ac;
extern int DAT_0078a2f0;
extern int _DAT_007356dc;

void FUN_0051f8a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_006f1dd8 != 0) {
    if (*(int **)(param_1 + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa0) + 4))();
    }
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
    if (DAT_007356ac != 0) {
      FUN_00536690();
    }
    iVar3 = *(int *)(param_1 + 0x104);
    _DAT_007356dc = 0;
    if (iVar3 != 0) {
      iVar1 = (**(code **)(**(int **)(DAT_007356a8 + 0xc4) + 0x44))();
      if (iVar1 < 2) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar1 + -1;
      }
      *(int *)(iVar3 + 0x284) = iVar1;
      iVar3 = *(int *)(param_1 + 0xf8);
      if (iVar3 == 5) {
        switch(DAT_0078a2f0) {
        default:
          FUN_00538890();
          break;
        case 0x3ea:
          FUN_00538890();
          break;
        case 0x3eb:
          FUN_00538890();
          break;
        case 0x3ec:
          iVar3 = *(int *)(param_1 + 0x104);
          *(undefined4 *)(iVar3 + 0x1c8) = 4;
          *(undefined4 *)(iVar3 + 0x1cc) = 4;
          *(undefined4 *)(iVar3 + 0x26c) = 4;
          *(undefined **)(iVar3 + 0x264) = &DAT_006f51d8;
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
        case 0x3ed:
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
          iVar1 = 8;
          *(undefined4 *)(iVar3 + 0x1c8) = 8;
          *(undefined4 *)(iVar3 + 0x1cc) = 8;
          *(undefined **)(iVar3 + 0x264) = &DAT_006f5480;
          *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
          *(undefined4 *)(iVar3 + 0x26c) = 6;
          *(undefined4 *)(iVar3 + 0x270) = 10;
          puVar2 = (undefined4 *)(iVar3 + 0x98);
          do {
            *puVar2 = 0xbf800000;
            puVar2 = puVar2 + 8;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          break;
        case 0x44e:
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
          *(undefined4 *)(iVar3 + 0x1c8) = 0xd;
          *(undefined4 *)(iVar3 + 0x1cc) = 0xd;
          iVar1 = 8;
          *(undefined **)(iVar3 + 0x264) = &DAT_006f5a48;
          *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
          *(undefined4 *)(iVar3 + 0x26c) = 8;
          *(undefined4 *)(iVar3 + 0x270) = 10;
          puVar2 = (undefined4 *)(iVar3 + 0x98);
          do {
            *puVar2 = 0xbf800000;
            puVar2 = puVar2 + 8;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          break;
        case 0x451:
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
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
          iVar3 = *(int *)(param_1 + 0x104);
          *(undefined4 *)(iVar3 + 0x1c8) = 0x11;
          *(undefined4 *)(iVar3 + 0x1cc) = 0x11;
          iVar1 = 8;
          *(undefined **)(iVar3 + 0x264) = &DAT_006f6010;
          *(undefined **)(iVar3 + 0x268) = &DAT_006f6918;
          *(undefined4 *)(iVar3 + 0x26c) = 8;
          *(undefined4 *)(iVar3 + 0x270) = 10;
          puVar2 = (undefined4 *)(iVar3 + 0x98);
          do {
            *puVar2 = 0xbf800000;
            puVar2 = puVar2 + 8;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          break;
        case 0x455:
          iVar3 = *(int *)(param_1 + 0x104);
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
      }
      else {
        if (((iVar3 == 2) && (0x4af < DAT_0078a2f0)) && (DAT_0078a2f0 < 0x514)) {
          *(undefined1 *)(param_1 + 0x71) = 0;
          switch(DAT_0078a2f0) {
          case 0x4b1:
            iVar3 = *(int *)(param_1 + 0x104);
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
            FUN_00533140();
            return;
          case 0x4b2:
            iVar3 = *(int *)(param_1 + 0x104);
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
            FUN_00533140();
            return;
          default:
            iVar3 = *(int *)(param_1 + 0x104);
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
            FUN_00533140();
            return;
          case 0x4b6:
            iVar3 = *(int *)(param_1 + 0x104);
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
            iVar3 = *(int *)(param_1 + 0x104);
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
            FUN_00533140();
            return;
          case 0x4ba:
            iVar3 = *(int *)(param_1 + 0x104);
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
            FUN_00533140();
            return;
          case 0x4be:
            iVar3 = *(int *)(param_1 + 0x104);
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
            FUN_00533140();
            return;
          }
          do {
            *puVar2 = 0xbf800000;
            puVar2 = puVar2 + 8;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          FUN_00537ca0(2);
          FUN_00533140();
          return;
        }
        if (iVar3 == 3) {
          iVar3 = *(int *)(param_1 + 0x104);
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
      }
      if (DAT_006f1dd8 != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x1c4) = 2;
        FUN_00537cc0();
      }
    }
    FUN_00533140();
  }
  return;
}
