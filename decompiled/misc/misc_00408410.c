/* spd-match: far pct=6.99 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
extern int DAT_00701034;
extern int DAT_00701038;
extern unsigned char *DAT_007361f0;
extern int DAT_007364a0;
extern int DAT_007364a4;
extern int DAT_007364a8;
extern int DAT_0073d6d8;
extern int DAT_007404c8;
extern unsigned char *DAT_00740504;
extern unsigned char *DAT_00740518;
extern int DAT_00740588;
extern int DAT_007405c4;
extern int DAT_007405d8;
extern int DAT_007405e8;
extern int DAT_00740638;
extern int DAT_00740768;
extern int DAT_0077a920;
extern int _DAT_0071a8c0;
extern void LAB_004084f7(void);
extern void LAB_004085b8(void);

void FUN_00408410(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  if (DAT_007364a8 == 0) {
    if (DAT_007364a4 != DAT_007364a0) {
      DAT_007364a4 = DAT_007364a0;
    }
  }
  else if (DAT_007364a4 != DAT_007364a8) {
    DAT_007364a4 = DAT_007364a8;
  }
  if (DAT_007364a0 == 1) {
    if (((undefined4 **)DAT_00740504 == &DAT_00740504) || (DAT_00740504 == (undefined4 *)0x0)) {
      _DAT_0071a8c0 = (undefined4 *)0x0;
    }
    else {
      _DAT_0071a8c0 = DAT_00740504 + -1;
    }
    if ((((((undefined4 **)DAT_00740504 != &DAT_00740504) && (DAT_00740504 != (undefined4 *)0x0)) &&
         (DAT_00740504 != (undefined4 *)0x4)) &&
        (((undefined4 **)DAT_007405c4 != &DAT_007405c4 && (DAT_007405c4 != (undefined4 *)0x0)))) &&
       (DAT_007405c4 != (undefined4 *)0x4)) {
      if (DAT_00740504 == (undefined4 *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = DAT_00740504 + -1;
      }
      cVar6 = (**(code **)(*piVar8 + 0x24))();
      if (cVar6 == '\0') {
        DAT_007364a0 = 2;
      }
    }
  }
  else if (DAT_007364a0 == 2) {
    if ((((undefined4 **)DAT_007405c4 != &DAT_007405c4) && (DAT_007405c4 != (undefined4 *)0x0)) &&
       (DAT_007405c4 != (undefined4 *)0x4)) {
      if (((undefined4 **)DAT_00740504 == &DAT_00740504) || (DAT_00740504 == (undefined4 *)0x0)) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = DAT_00740504 + -1;
      }
      cVar6 = (**(code **)(*piVar8 + 0x24))();
      if (cVar6 == '\0') goto LAB_004084f7;
    }
    DAT_007364a0 = 1;
  }
LAB_004084f7:
  iVar5 = DAT_00740638;
  iVar4 = DAT_007405d8;
  iVar3 = DAT_00740518;
  uVar2 = DAT_00701038;
  if (DAT_007364a4 == 0) {
    *(undefined4 *)(DAT_00740518 + 0x10) = 0;
    DAT_007404c8 = 0;
    *(undefined4 *)(iVar4 + 0x10) = 0;
    DAT_00740588 = 0;
    *(undefined4 *)(iVar5 + 0x10) = 0;
    DAT_007405e8 = 0;
    DAT_00740768 = 0;
  }
  else {
    if (DAT_007364a4 == 1) {
      *(undefined4 *)(DAT_00740518 + 0x14) = DAT_00701034;
      *(undefined4 *)(iVar3 + 0x18) = uVar2;
      *(undefined4 *)(iVar3 + 0x10) = 1;
      DAT_007404c8 = 1;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      DAT_00740588 = 0;
    }
    else {
      if (DAT_007364a4 != 2) goto LAB_004085b8;
      *(undefined4 *)(DAT_00740518 + 0x14) = DAT_00701034;
      *(undefined4 *)(iVar3 + 0x18) = uVar2;
      *(undefined4 *)(iVar3 + 0x10) = 1;
      DAT_007404c8 = 1;
      *(undefined4 *)(iVar4 + 0x10) = 1;
      DAT_00740588 = 1;
    }
    *(undefined4 *)(iVar5 + 0x14) = 0x140;
    *(undefined4 *)(iVar5 + 0x18) = 0xf0;
    *(undefined4 *)(iVar5 + 0x10) = 1;
    DAT_007405e8 = 1;
    DAT_00740768 = 1;
  }
LAB_004085b8:
  puVar1 = DAT_0073d6d8;
  if (((DAT_0077a920 != 6) || (*DAT_007361f0 == 1)) &&
     ((undefined4 **)DAT_0073d6d8 != &DAT_0073d6d8)) {
    puVar7 = (undefined4 *)FUN_0040a880();
    for (; puVar1 != puVar7; puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[0x267] == 0) && (puVar1[0x1cc] == 1)) {
        DAT_00740768 = puVar1[2] != 0;
      }
    }
  }
  return;
}
