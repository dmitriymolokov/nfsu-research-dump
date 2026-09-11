/* spd-match: far pct=10.76 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/C2440_int_ptr_casts/batches/20260724T141530Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT48
#define ZEXT48(x) ((unsigned __int64)(unsigned int)(x))
#endif

int __cdecl FUN_004f08f0(...);
int __cdecl FUN_004f3f90(...);
extern int DAT_0072cd10;
extern int DAT_0072cd50;
extern int DAT_0073578c;
extern int DAT_00735dc0;
extern int DAT_00746104;
extern int _DAT_00735da8;
extern int _DAT_00735dac;

struct ThisCallBox {
  void FUN_004eb6c0(undefined4 param_2, int param_3);
};
void ThisCallBox::FUN_004eb6c0(undefined4 param_2, int param_3) {
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  pcVar3 = (char *)(unsigned int)(&DAT_0072cd50);
  DAT_00735dc0 = 0;
  iVar5 = 0x80;
  do {
    cVar1 = pcVar3[((int)this) + -0x72cd50];
    iVar5 = iVar5 + -1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (iVar5 != 0);
  _DAT_00735dac = param_2;
  pcVar3 = (char *)(unsigned int)(&DAT_0072cd10);
  iVar5 = 0x40;
  do {
    cVar1 = pcVar3[param_3 + -0x72cd10];
    iVar5 = iVar5 + -1;
    *pcVar3 = cVar1;
    iVar2 = (unsigned int)(DAT_0073578c);
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (iVar5 != 0);
  _DAT_00735da8 = 8;
  if (DAT_0073578c != 0) {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(iVar5 + 0x18);
    }
    FUN_004f08f0(*(undefined4 *)(iVar2 + 8),uVar4,0xff);
  }
  return;
}
