/* spd-match: far pct=11.04 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004f68c0(...);
int __cdecl FUN_004fd230(...);
int __cdecl FUN_004ffb70(...);
int __cdecl FUN_0055e900(...);
extern int DAT_0073578c;
int unaff_EBX;
extern void LAB_0055ce80(...);
extern void LAB_0055ced6(...);
extern void LAB_0055cf2c(...);
extern void LAB_0055cf82(...);
extern void LAB_0055cfd8(...);
extern void LAB_0055d084(...);
extern void LAB_00686f63(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_0055ce20(int param_2);
};
void ThisCallBox::FUN_0055ce20(int param_2) {
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *unaff_EBX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00686f63;
  local_c = ExceptionList;
  param_2 = param_2 + 1;
  ExceptionList = &local_c;
  unaff_EBX[7] = ((int)this);
  FUN_004f68c0(0x20,"PLAYERNAME%.2d",param_2);
  uVar1 = FUN_004fd230();
  if (((int)this) == 0) {
LAB_0055ce80:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(uVar1);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_0055ce80;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_0055ce80;
  }
  unaff_EBX[1] = iVar2;
  FUN_004f68c0(0x20,"REPDATA%.2d",param_2);
  uVar1 = FUN_004fd230();
  if (((int)this) == 0) {
LAB_0055ced6:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(uVar1);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_0055ced6;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_0055ced6;
  }
  unaff_EBX[2] = iVar2;
  FUN_004f68c0(0x20,"REPTITLE%.2d",param_2);
  uVar1 = FUN_004fd230();
  if (((int)this) == 0) {
LAB_0055cf2c:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(uVar1);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_0055cf2c;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_0055cf2c;
  }
  unaff_EBX[3] = iVar2;
  FUN_004f68c0(0x20,"PLAYERCARNAME%.2d",param_2);
  uVar1 = FUN_004fd230();
  if (((int)this) == 0) {
LAB_0055cf82:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(uVar1);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_0055cf82;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_0055cf82;
  }
  unaff_EBX[4] = iVar2;
  FUN_004f68c0(0x20,"CARTITLE%.2d",param_2);
  uVar1 = FUN_004fd230();
  if (((int)this) == 0) {
LAB_0055cfd8:
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(uVar1);
    }
  }
  else {
    iVar2 = FUN_004f65d0();
    if (iVar2 == 0) goto LAB_0055cfd8;
    iVar2 = FUN_004ffb70();
    if (iVar2 == 0) goto LAB_0055cfd8;
  }
  unaff_EBX[5] = iVar2;
  FUN_004f68c0(0x20,"PING_GROUP_%.2d",param_2);
  pvVar3 = _malloc(0x18);
  uVar1 = 0;
  local_4 = 0;
  if (pvVar3 != (void *)0x0) {
    uVar1 = FUN_0055e900();
  }
  local_4 = 0xffffffff;
  *unaff_EBX = uVar1;
  FUN_004f68c0(0x20,"PINGTITLE%.2d",param_2);
  uVar1 = FUN_004fd230();
  if (((int)this) != 0) {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) goto LAB_0055d084;
    }
  }
  if (DAT_0073578c == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004ef050(uVar1);
  }
LAB_0055d084:
  unaff_EBX[6] = iVar2;
  ExceptionList = local_c;
  return;
}
