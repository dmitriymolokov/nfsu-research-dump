/* spd-match: far pct=13.43 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0041F240 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004117b0();
int __cdecl FUN_00416bb0();
int __cdecl FUN_0041f060();
int __cdecl FUN_004f6570();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004fa0b0();
int __cdecl FUN_00567cc0();
int __cdecl FUN_00567ce0();
int __cdecl FUN_00567d00();
extern int DAT_0070108d;
extern int DAT_007363a4;
extern int DAT_007363a8;
extern int DAT_0073ad3c;
extern int DAT_00777b74;
extern int _DAT_006cc960;
extern int _DAT_006cca38;
extern void LAB_0041f337(void);
char __fastcall FUN_0041f240(int obj, int param_1)

{
  uint *puVar1;

  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_50;
  
  if (*(char *)(obj + 5) == '\0') {
    return '\0';
  }
  if (param_1 != -0x367ca946) {
    return *(char *)(obj + 0x19c);
  }
  if (*(char *)(obj + 0x19c) == '\0') {
    return '\0';
  }
  iVar2 = FUN_004117b0();
  if (iVar2 == 0) {
    if (*(int *)(obj + 0x1e8) == 0) {
      puVar1 = (uint *)(*(int *)(obj + 0xc) + 0x1c);
      *puVar1 = *puVar1 | 0x20;
      FUN_00416bb0(0);
      if (_DAT_006cc960 < (float)(DAT_0073ad3c - *(int *)(obj + 0x200)) * _DAT_006cca38) {
        *(int *)(obj + 0x200) = DAT_0073ad3c;
        *(byte *)(obj + 0x204) = *(byte *)(obj + 0x204) ^ 1;
      }
      puVar5 = &local_50;
      for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      FUN_00567ce0();
      iVar2 = DAT_007363a4;
      FUN_00567d00();
      iVar3 = FUN_00567cc0();
      *(undefined1 *)((int)&local_50 + iVar3 + 1) = 0;
      if (*(char *)(obj + 0x205) != '\0') {
        FUN_004fa0b0(*(undefined4 *)(obj + 0x1ec));
      }
      if (*(char *)(obj + 0x204) == '\0') {
        *(undefined1 *)((int)&local_50 + iVar2) = 0x20;
      }
      else {
        *(undefined1 *)((int)&local_50 + iVar2) = 0x7c;
      }
      iVar2 = FUN_00567cc0();
      uVar4 = *(undefined4 *)(obj + 0xc);
      *(undefined1 *)((int)&local_50 + iVar2 + 1) = 0;
      FUN_0041f060(uVar4,&local_50);
      FUN_00567ce0();
      return '\x01';
    }
    FUN_00567d00();
    return '\x01';
  }
  if (*(char *)(obj + 0x1fc) != '\0') {
    *(undefined1 *)(obj + 0x1fc) = 0;
    return '\x01';
  }
  DAT_007363a8 = 0;
  DAT_0070108d = 1;
  *(undefined1 *)(obj + 0x19c) = 0;
  if (iVar2 < 1) {
    if (iVar2 != -1) goto LAB_0041f337;
    FUN_00416bb0(*(undefined4 *)(obj + 500));
    iVar2 = *(int *)(obj + 0x1f8);
joined_r0x0041f32b:
    if (iVar2 == 0) goto LAB_0041f337;
  }
  else {
    iVar2 = FUN_00567cc0();
    if (iVar2 < 1) {
      FUN_00416bb0(*(undefined4 *)(obj + 500));
      iVar2 = *(int *)(obj + 0x1f8);
      goto joined_r0x0041f32b;
    }
  }
  FUN_004f6570();
LAB_0041f337:
  puVar5 = &local_50;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (*(char *)(obj + 0x205) == '\0') {
    uVar4 = *(undefined4 *)(obj + 0xc);
    puVar5 = (undefined4 *)&DAT_00777b74;
  }
  else {
    FUN_004fa0b0(*(undefined4 *)(obj + 0x1ec));
    uVar4 = *(undefined4 *)(obj + 0xc);
    puVar5 = &local_50;
  }
  FUN_0041f060(uVar4,puVar5);
  uVar4 = *(undefined4 *)(obj + 0x198);
  iVar2 = FUN_004f65d0();
  if (iVar2 == 0) {
    return '\x01';
  }
  *(undefined4 *)(iVar2 + 0x1c) = uVar4;
  return '\x01';
}
