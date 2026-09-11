/* spd-match: far pct=8.42 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00653d10();
int __cdecl FUN_00654cd0();
extern int DAT_006a6e30;
extern int DAT_006aab58;
extern unsigned char *DAT_00714068;
extern int DAT_00714075;
extern unsigned char *DAT_007160b0;
extern unsigned char *DAT_007160b4;

void FUN_00654210(void)

{
  int iVar1;
  undefined *puStack_58;
  undefined4 *puStack_54;
  int *piStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  int *piStack_44;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined2 *puStack_14;
  
  if (DAT_007160b0 != (int *)0x0) {
    piStack_44 = DAT_007160b0;
    puStack_48 = (undefined4 *)0x654225;
    (**(code **)(*DAT_007160b0 + 8))();
    DAT_007160b0 = (int *)0x0;
  }
  if (DAT_007160b4 != (int *)0x0) {
    piStack_44 = DAT_007160b4;
    puStack_48 = (undefined4 *)0x65423a;
    (**(code **)(*DAT_007160b4 + 8))();
    DAT_007160b4 = (int *)0x0;
  }
  puStack_48 = &uStack_24;
  piStack_44 = (int *)0x24;
  DAT_00714075 = '\0';
  puStack_4c = (undefined4 *)0x654252;
  FUN_00654cd0();
  piStack_44 = (int *)0x0;
  puStack_14 = &uStack_38;
  puStack_48 = &DAT_007160b4;
  uStack_38 = 1;
  uStack_36 = 1;
  puStack_4c = &uStack_24;
  uStack_34 = 0x2b11;
  uStack_30 = 0x5622;
  uStack_2c = 2;
  uStack_2a = 0x10;
  uStack_28 = 0;
  uStack_24 = 0x24;
  uStack_20 = 0x8014;
  uStack_1c = 0x80;
  piStack_50 = DAT_00714068;
  puStack_54 = (undefined4 *)0x6542bd;
  iVar1 = (**(code **)(*DAT_00714068 + 0xc))();
  if (iVar1 == 0) {
    puStack_54 = &DAT_007160b0;
    puStack_58 = &DAT_006a6e30;
    iVar1 = (**(code **)*DAT_007160b4)(DAT_007160b4);
    if (iVar1 == 0) {
      if (iStack_18 != 0) {
        iVar1 = (**(code **)(*DAT_007160b0 + 0x14))(DAT_007160b0,&DAT_006aab58,0,&puStack_58);
        if ((iVar1 == 0) && (((byte)puStack_58 & 3) == 3)) {
          DAT_00714075 = 1;
          return;
        }
      }
      if (DAT_00714075 == '\0') {
        FUN_00653d10();
        return;
      }
    }
    else {
      (**(code **)(*DAT_007160b4 + 8))(DAT_007160b4);
      DAT_007160b4 = (int *)0x0;
    }
  }
  return;
}
