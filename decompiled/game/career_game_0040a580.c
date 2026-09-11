/* spd-match: far pct=13.39 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00403a60();
int __cdecl FUN_004057c0();
int __cdecl FUN_00405860();
int __cdecl FUN_004058d0();
int __cdecl FUN_00408410();
int __cdecl FUN_00409580();
int __cdecl FUN_00409cd0();
int __cdecl FUN_0040a140();
int __cdecl FUN_0040a4e0();
int __cdecl FUN_0040b3f0();
int __cdecl FUN_0040d6e0();
int __cdecl FUN_0040dd00();
int __cdecl FUN_0040e180();
int __cdecl FUN_004130d0();
int __cdecl FUN_00419ea0();
int __cdecl FUN_0041e670();
int __cdecl FUN_0053e210();
int __cdecl FUN_0053e330();
int __cdecl FUN_00545ea0();
int __cdecl FUN_005707b0();
int __cdecl FUN_00588c00();
extern int DAT_00700e74;
extern int DAT_00700eb0;
extern int DAT_00700eb4;
extern int DAT_00706498;
extern int DAT_0071ab9c;
extern int DAT_0071b1d8;
extern int DAT_00734534;
extern int DAT_00734608;
extern int DAT_0073460c;
extern int DAT_00736128;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_0073636c;
extern int DAT_0073638c;
extern int DAT_007363e8;
extern int DAT_007363ec;
extern int DAT_0073645c;
extern int DAT_00736460;
extern unsigned char *DAT_007364dc;
extern int DAT_007364f4;
extern int DAT_0073650c;
extern int DAT_00736514;
extern int DAT_00736515;
extern unsigned char *DAT_00740460;
extern int DAT_00740468;
extern int DAT_0077a920;
extern int DAT_0078e980;
extern int DAT_0078eb84;
extern int DAT_0078eb88;
extern char stack0xffffffe8;

void FUN_0040a580(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_00408410();
  iVar1 = 0;
  if (DAT_00700eb4 == 0) {
    DAT_00734608 = 1;
    DAT_0073460c = 1;
  }
  else if (DAT_00700eb4 == 1) {
    DAT_00734608 = 0;
    DAT_0073460c = 0;
  }
  switch(DAT_00700eb0) {
  case 0:
  case 1:
    DAT_00736128 = 2;
    break;
  case 2:
  case 3:
    DAT_00736128 = 0;
  }
  if (((DAT_0077a920 == 6) && (*DAT_007361f0 != 1)) && (DAT_007364f4 = 0, DAT_00734534 == 0)) {
    FUN_00588c00();
  }
  if (DAT_00700e74 != 0) {
    FUN_005707b0();
  }
  do {
    if (iVar1 == 8) {
      FUN_0040a140();
    }
    if (((&DAT_00740468)[iVar1 * 0x60] != '\0') || (9 < iVar1)) {
      FUN_0040dd00(&DAT_00740460 + iVar1 * 0x18,0,0,0);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = (**(code **)(*DAT_0073636c + 0xc))(DAT_0073636c);
  if (iVar1 == 0) {
    (**(code **)(*DAT_0073636c + 0xa4))(DAT_0073636c);
    FUN_00409cd0(1);
    FUN_00409580();
    if (DAT_0073645c == 1) {
      uStack_10 = DAT_00736460;
      uStack_c = DAT_0071ab9c;
      FUN_0040d6e0(1,&uStack_10,&stack0xffffffe8,0,2,2);
    }
    FUN_00409cd0(0);
    (**(code **)(*DAT_0073636c + 0xa8))(DAT_0073636c);
  }
  if (DAT_0073638c != 0) {
    DAT_0073638c = 0;
  }
  iVar1 = (**(code **)(*DAT_0073636c + 0x44))(DAT_0073636c,0,0,0,0);
  if ((iVar1 == -0x7789f798) &&
     (iVar1 = (**(code **)(*DAT_0073636c + 0xc))(DAT_0073636c), iVar1 == -0x7789f797)) {
    FUN_0040a4e0();
  }
  if (DAT_0078eb88 != 0) {
    DAT_0078eb88 = 0;
  }
  puVar2 = &DAT_0071b1d8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (DAT_0078eb84 != 0) {
    FUN_0040e180();
    DAT_0078eb84 = 0;
  }
  FUN_00403a60(&DAT_0078e980,0x3c888889);
  FUN_00545ea0();
  (**(code **)(*DAT_0073636c + 0xac))(DAT_0073636c,0,0,7,0,0x3f800000,0);
  FUN_0053e210();
  FUN_0053e330();
  DAT_007364dc = DAT_007364dc + 1;
  DAT_007363e8 = 0;
  DAT_007363ec = 0;
  FUN_00405860();
  FUN_004058d0();
  FUN_004057c0();
  DAT_00736514 = 0;
  DAT_00736515 = 0;
  FUN_00419ea0();
  DAT_0073650c = 1;
  FUN_004130d0(&DAT_00706498,0);
  FUN_0041e670();
  FUN_0040b3f0();
  return;
}
