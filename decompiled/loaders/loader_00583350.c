/* spd-match: far pct=7.37 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2064 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))

int __cdecl FUN_00426110(...);
int __cdecl FUN_0044a0e0(...);
int __cdecl FUN_0044bcb0(...);
int __cdecl FUN_0044c940(...);
int __cdecl FUN_0044ca70(...);
int __cdecl FUN_0044cf30(...);
int __cdecl FUN_0044f700(...);
int __cdecl FUN_00458cc0(...);
int __cdecl FUN_005832a0(...);
int __cdecl FUN_005835f0(...);
int __cdecl FUN_00583850(...);
int __cdecl FUN_00583c80(...);
int __cdecl FUN_00583da0(...);
int __cdecl FUN_005a6ce0(...);
extern int DAT_006cc7a4;
extern int DAT_006f08a4;
extern unsigned char *DAT_007361f8;
extern int _DAT_006b5b8c;
extern void LAB_005835d4(...);

struct ThisCallBox {
  int FUN_00583350(float param_2);
};
int ThisCallBox::FUN_00583350(float param_2) {
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  FUN_00583da0();
  param_2 = (float)((int *)this)[0xfc] - param_2;
  ((int *)this)[0xfc] = (int)param_2;
  if (*(int *)(*(int *)(((int *)this)[1] + 0x14) + 4) == 3) {
    iVar5 = *(int *)(DAT_007361f8 + 0x18) - *(int *)(DAT_007361f8 + 0x24);
    iVar7 = iVar5 * 2;
    iVar2 = DAT_006f08a4 / iVar7;
    uVar6 = DAT_006f08a4 % iVar7;
    if ((uVar6 & 1) == 0) {
      return iVar2;
    }
    iVar7 = (int)uVar6 >> 1;
    if (iVar5 <= iVar7) {
      return iVar2;
    }
    if (((int *)this)[1] != *(int *)(DAT_007361f8 + 0x28 + (*(int *)(DAT_007361f8 + 0x24) + iVar7) * 4)) {
      return ((int *)this)[1];
    }
  }
  else if (param_2 < DAT_006cc7a4 == (param_2 == DAT_006cc7a4)) {
    return CONCAT22((short)((uint)((int *)this)[1] >> 0x10),
                    (ushort)(param_2 < DAT_006cc7a4) << 8 |
                    (ushort)(NAN(param_2) || NAN(DAT_006cc7a4)) << 10 |
                    (ushort)(param_2 == DAT_006cc7a4) << 0xe);
  }
  ((int *)this)[0xfc] = (int)(param_2 + _DAT_006b5b8c);
  FUN_0044ca70();
  if ((char)((int *)this)[0x104] != '\0') {
    FUN_0044bcb0();
    (**(code **)(*(int *)((int *)this)[2] + 0x38))(0,0,0,1);
    *(undefined1 *)(((int *)this) + 0x104) = 1;
    iVar7 = FUN_0044c940();
    return iVar7;
  }
  uVar3 = (**(code **)(*((int *)this) + 0x40))();
  FUN_00458cc0(uVar3);
  cVar1 = FUN_0044cf30(((int *)this) + 0xb,((int *)this));
  if (cVar1 == '\0') {
    FUN_005832a0();
    FUN_0044bcb0();
    (**(code **)(*(int *)((int *)this)[2] + 0x38))(0,0,0,1);
    *(undefined1 *)(((int *)this) + 0x104) = 1;
    *(undefined1 *)((int)((int *)this) + 0x4d1) = 1;
    iVar7 = FUN_0044c940();
    return iVar7;
  }
  FUN_00583c80(((int *)this));
  cVar1 = FUN_005a6ce0(*(undefined4 *)
                        (*(char *)(((int *)this)[0xf8] + 0x388) * 0x38 + 0x18 + ((int *)this)[0xf8]));
  if (cVar1 == '\0') {
    cVar1 = FUN_005835f0();
    if (cVar1 != '\0') {
      *(undefined1 *)(((int *)this) + 0x134) = 1;
    }
  }
  else {
    *(undefined1 *)((int)((int *)this) + 0x4d1) = 1;
  }
  if (*(char *)((int)((int *)this) + 0x4d1) != '\0') {
    FUN_005832a0();
    (**(code **)(*(int *)((int *)this)[2] + 0x38))(0,0,0,1);
    FUN_0044bcb0();
    iVar7 = FUN_0044c940();
    return iVar7;
  }
  if (((int *)this)[0xff] == 0) {
    (**(code **)(*((int *)this) + 0x60))();
  }
  iVar7 = -1;
  if (((int *)this)[0xfe] == 0) {
    puVar4 = (undefined4 *)(**(code **)(*(int *)((int *)this)[0xff] + 0x18))();
  }
  else {
    FUN_0044f700();
    iVar2 = ((int *)this)[0xfe];
    cVar1 = FUN_0044a0e0();
    if (cVar1 == '\0') {
      uVar3 = *(undefined4 *)(iVar2 + 0x1f8);
      iVar7 = *(int *)(iVar2 + 500);
    }
    else {
      uVar3 = 0x14;
    }
    puVar4 = (undefined4 *)(**(code **)(*(int *)((int *)this)[0xff] + 0x14))(((int *)this) + 0xb,uVar3,iVar7);
    if ((int)puVar4[0x7d] <= iVar7) {
      (**(code **)*puVar4)(1);
      goto LAB_005835d4;
    }
  }
  if (puVar4 != (undefined4 *)0x0) {
    if ((int *)((int *)this)[0xfe] != (int *)0x0) {
      (**(code **)(*(int *)((int *)this)[0xfe] + 0xc))(((int *)this) + 0xb);
      if ((undefined4 *)((int *)this)[0xfe] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)((int *)this)[0xfe])(1);
      }
    }
    ((int *)this)[0xfe] = (int)puVar4;
    iVar7 = puVar4[0x7e];
    if ((((iVar7 == 9) || (iVar7 == 1)) || (iVar7 == 3)) && (*(int *)(((int *)this)[1] + 0x28) == 2)) {
      FUN_00426110();
    }
  }
LAB_005835d4:
  FUN_00583850();
  iVar7 = FUN_0044c940();
  return iVar7;
}
