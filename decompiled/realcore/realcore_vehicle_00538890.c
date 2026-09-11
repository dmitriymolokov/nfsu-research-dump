/* spd-match: far pct=29.95 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00538890 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006f4ff8;
extern int DAT_006f50c0;
extern int DAT_006f5160;
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
extern void LAB_00538a2d(void);
extern void LAB_00538bb9(void);
extern void LAB_00538bc5(void);
void __fastcall FUN_00538890(int obj, undefined4 param_1)

{

  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(obj + 0x1c8) = param_1;
  *(undefined4 *)(obj + 0x1cc) = param_1;
  iVar2 = 8;
  switch(param_1) {
  case 1:
    *(undefined **)(obj + 0x264) = &DAT_006f4ff8;
    *(undefined4 *)(obj + 0x26c) = 5;
    break;
  case 2:
    *(undefined **)(obj + 0x264) = &DAT_006f50c0;
    *(undefined4 *)(obj + 0x26c) = 4;
    break;
  case 3:
    *(undefined **)(obj + 0x264) = &DAT_006f5160;
    *(undefined4 *)(obj + 0x26c) = 3;
    break;
  case 4:
    *(undefined **)(obj + 0x264) = &DAT_006f51d8;
    *(undefined4 *)(obj + 0x26c) = 4;
    break;
  case 5:
    *(undefined **)(obj + 0x264) = &DAT_006f5278;
    *(undefined4 *)(obj + 0x26c) = 4;
    break;
  case 6:
    *(undefined **)(obj + 0x264) = &DAT_006f5318;
    *(undefined4 *)(obj + 0x26c) = 5;
    break;
  case 7:
    *(undefined **)(obj + 0x264) = &DAT_006f53e0;
    *(undefined4 *)(obj + 0x26c) = 4;
    break;
  case 8:
    *(undefined **)(obj + 0x264) = &DAT_006f5480;
    *(undefined4 *)(obj + 0x26c) = 6;
    break;
  default:
    uVar3 = 0;
    *(undefined4 *)(obj + 0x264) = 0;
    *(undefined4 *)(obj + 0x268) = 0;
    goto LAB_00538bb9;
  case 0xb:
    *(undefined **)(obj + 0x264) = &DAT_006f5818;
    *(undefined4 *)(obj + 0x26c) = 5;
    break;
  case 0xc:
    *(undefined **)(obj + 0x264) = &DAT_006f58e0;
    *(undefined4 *)(obj + 0x26c) = 9;
    break;
  case 0xd:
    *(undefined **)(obj + 0x264) = &DAT_006f5a48;
    goto LAB_00538a2d;
  case 0xe:
    *(undefined **)(obj + 0x264) = &DAT_006f5b88;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    uVar3 = 10;
    goto LAB_00538bb9;
  case 0xf:
    *(undefined **)(obj + 0x264) = &DAT_006f5d18;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 9;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x10:
    *(undefined **)(obj + 0x264) = &DAT_006f5e80;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    uVar3 = 10;
LAB_00538bb9:
    *(undefined4 *)(obj + 0x26c) = uVar3;
    *(undefined4 *)(obj + 0x270) = uVar3;
    goto LAB_00538bc5;
  case 0x11:
    *(undefined **)(obj + 0x264) = &DAT_006f6010;
LAB_00538a2d:
    *(undefined4 *)(obj + 0x26c) = 8;
    break;
  case 0x12:
    *(undefined **)(obj + 0x264) = &DAT_006f6150;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 7;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x13:
    *(undefined **)(obj + 0x264) = &DAT_006f6268;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 3;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x14:
    *(undefined **)(obj + 0x264) = &DAT_006f62e0;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 3;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x15:
    *(undefined **)(obj + 0x264) = &DAT_006f63d0;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 3;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x16:
    *(undefined **)(obj + 0x264) = &DAT_006f6448;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 3;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x17:
    *(undefined **)(obj + 0x264) = &DAT_006f64c0;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 3;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x18:
    *(undefined **)(obj + 0x264) = &DAT_006f6538;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 3;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  case 0x1a:
    *(undefined **)(obj + 0x264) = &DAT_006f5660;
    *(undefined **)(obj + 0x268) = &DAT_006f6918;
    *(undefined4 *)(obj + 0x26c) = 0xb;
    *(undefined4 *)(obj + 0x270) = 10;
    goto LAB_00538bc5;
  }
  *(undefined **)(obj + 0x268) = &DAT_006f6918;
  *(undefined4 *)(obj + 0x270) = 10;
LAB_00538bc5:
  puVar1 = (undefined4 *)(obj + 0x98);
  do {
    *puVar1 = 0xbf800000;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
