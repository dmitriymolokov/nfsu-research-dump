/* spd-match: far pct=6.98 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_cdecl_uchar */
#include "ghidra_compat.h"

int __cdecl _fseek(FILE *, long, int);
long __cdecl _ftell(FILE *);
int __cdecl _fclose(FILE *);
void __cdecl _eh_vector_constructor_iterator_(void *, unsigned int, int, void *, void *);
void __cdecl _eh_vector_destructor_iterator_(void *, unsigned int, int, void *);

int __cdecl FUN_004134d0(...);
int __cdecl FUN_0043a2e0(...);
int __cdecl FUN_004a00c0(...);
int __cdecl FUN_004a03d0(...);
int __cdecl FUN_004a1290(...);
int __cdecl FUN_004a1580(...);
int __cdecl FUN_004a1b50(...);
int __cdecl FUN_004a1f40(...);
int __cdecl FUN_004a3ba0(...);
int __cdecl FUN_004a3f00(...);
int __cdecl FUN_004a5860(...);
int __cdecl FUN_004a5ca0(...);
int __cdecl FUN_004a68a0(...);
int __cdecl FUN_004a6f10(...);
int __cdecl FUN_004a7c90(...);
int __cdecl FUN_004a7f90(...);
int __cdecl FUN_004a8140(...);
int __cdecl FUN_004a8200(...);
int __cdecl FUN_004a8b80(...);
int __cdecl FUN_004a9540(...);
int __cdecl FUN_004eede0(...);
int __cdecl FUN_004f6910(...);
int __cdecl FUN_004f6a10(...);
int __cdecl FUN_004fd1e0(...);
extern int DAT_0073578c;
extern int DAT_007361a8;
extern int DAT_0078a344;
extern void *PTR_FUN_006c65c0;
int unaff_ESI;
extern void LAB_004a8ea2(...);
extern void LAB_00688456(...);
void *ExceptionList;

struct ThisCallBox {
  void FUN_004a8e40(undefined4 param_2);
};
void ThisCallBox::FUN_004a8e40(undefined4 param_2) {
  int iVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 *unaff_ESI;
  bool bVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = DAT_0073578c;
  local_4 = 0xffffffff;
  puStack_8 = (unsigned char *)(unsigned int)&LAB_00688456;
  local_c = ExceptionList;
  bVar6 = DAT_0073578c != 0;
  ExceptionList = &local_c;
  *unaff_ESI = (unsigned int)&PTR_FUN_006c65c0;
  unaff_ESI[4] = ((undefined4)this);
  unaff_ESI[5] = param_2;
  if (bVar6) {
    iVar1 = *(int *)(iVar3 + 8);
    iVar3 = iVar1 + 0xdc;
    if (iVar3 != 0) {
      iVar3 = FUN_004fd1e0(iVar3);
      if (iVar3 != 0) goto LAB_004a8ea2;
    }
    FUN_004eede0(iVar1,((undefined4)this),0x10,0);
  }
LAB_004a8ea2:
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    FUN_004f6a10(((undefined4)this),0);
  }
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xf] = 0;
  unaff_ESI[0x10] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  unaff_ESI[0x14] = 0;
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    pvVar4 = _malloc(0xa0);
    local_4 = 2;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004a03d0(pvVar4,((undefined4)this),param_2);
    }
    unaff_ESI[6] = uVar5;
    pvVar4 = _malloc(0x210);
    local_4 = 3;
  }
  else {
    pvVar4 = _malloc(0xa8);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_004a3f00(pvVar4,((undefined4)this),param_2);
    }
    unaff_ESI[0xe] = uVar5;
    pvVar4 = _malloc(0x210);
    local_4 = 1;
  }
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a1f40(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0x11] = uVar5;
  pvVar4 = _malloc(0x48);
  local_4 = 4;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a1290(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[7] = uVar5;
  pvVar4 = _malloc(0x48);
  local_4 = 5;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a00c0(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[8] = uVar5;
  pvVar4 = _malloc(0x58);
  local_4 = 6;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a5860(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[9] = uVar5;
  pvVar4 = _malloc(0x68);
  local_4 = 7;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a5ca0(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[10] = uVar5;
  pvVar4 = _malloc(0xc0);
  local_4 = 8;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a6f10(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0xb] = uVar5;
  pvVar4 = _malloc(0x30);
  local_4 = 9;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a7c90(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0xc] = uVar5;
  pvVar4 = _malloc(0x58);
  local_4 = 10;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a68a0(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0xd] = uVar5;
  pvVar4 = _malloc(0x20);
  local_4 = 0xb;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a8140(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0xf] = uVar5;
  pvVar4 = _malloc(0x50);
  local_4 = 0xc;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a1580(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0x10] = uVar5;
  pvVar4 = _malloc(0x30);
  local_4 = 0xd;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a3ba0(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0x12] = uVar5;
  pvVar4 = _malloc(0x48);
  local_4 = 0xe;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a1b50(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0x13] = uVar5;
  pvVar4 = _malloc(0x58);
  local_4 = 0xf;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a8200(pvVar4,((undefined4)this),param_2);
  }
  unaff_ESI[0x14] = uVar5;
  pvVar4 = _malloc(0x28);
  local_4 = 0x10;
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004a7f90(pvVar4,((undefined4)this),param_2);
  }
  local_4 = 0xffffffff;
  unaff_ESI[0x16] = uVar5;
  cVar2 = FUN_0043a2e0();
  if (cVar2 == '\0') {
    uVar5 = FUN_004134d0();
    FUN_004f6910(uVar5);
    uVar5 = FUN_004134d0();
    FUN_004f6910(uVar5);
  }
  else {
    pvVar4 = _malloc(0x30);
    local_4 = 0x11;
    if (pvVar4 == (void *)0x0) {
      local_4 = 0xffffffff;
      unaff_ESI[0x15] = 0;
    }
    else {
      uVar5 = FUN_004a8b80(pvVar4,((undefined4)this));
      local_4 = 0xffffffff;
      unaff_ESI[0x15] = uVar5;
    }
  }
  FUN_004a9540(unaff_ESI,0xffffffff,0);
  FUN_004a9540(unaff_ESI,0,0);
  ExceptionList = local_c;
  return;
}
