/* spd-match: far pct=13.24 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B47A0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007361a4;
extern int DAT_007588d4;
extern int DAT_007588d5;
extern int DAT_007588d6;
extern int DAT_007588d7;
extern int DAT_007588d8;
extern int DAT_007588d9;
extern int DAT_007588da;
extern int DAT_007588db;
extern int DAT_007588dc;
extern int DAT_007588dd;
extern int DAT_007588e4;
extern int DAT_007588e8;
extern int DAT_007588ec;
extern int DAT_007588f0;
extern int DAT_00758938;
extern int DAT_0075893c;
extern int DAT_00758940;
extern int DAT_00758944;
extern int DAT_00758948;
extern int DAT_0075894c;
extern int DAT_00758951;
extern int DAT_00758954;
extern int DAT_00758958;
extern int DAT_00758964;
extern int DAT_00758970;
extern int DAT_00758978;
extern int DAT_00777cc8;
extern int DAT_0078a345;
extern int DAT_0078a385;
extern int DAT_0078a386;
extern int DAT_0078a387;
extern int DAT_0078a388;
extern int DAT_0078a38a;
extern int DAT_0078a390;
extern int DAT_0078a391;
extern int DAT_0078a392;
extern int DAT_0078a393;
extern int DAT_0078a394;
extern int DAT_0078a3bd;
extern int DAT_0078a3be;
extern int DAT_0078a3bf;
extern int DAT_0078a3c0;
extern int DAT_0078a3c2;
extern int DAT_0078a3c8;
extern int DAT_0078a3c9;
extern int DAT_0078a3ca;
extern int DAT_0078a3cb;
extern int DAT_0078a3cc;
extern int DAT_0078a3f4;
extern int DAT_0078a3f5;
extern int DAT_0078a3f6;
extern int DAT_0078a3fa;
extern int _DAT_0078a3b4;
extern int _DAT_0078a3ec;
void __fastcall FUN_004b47a0(int val)

{

  uint uVar1;
  
  if (val == 0) {
    DAT_0078a387 = (undefined1)DAT_00758954;
    DAT_0078a386 = (undefined1)DAT_00758964;
    DAT_0078a3f5 = (undefined1)DAT_007588f0;
    DAT_0078a3f6 = (undefined1)DAT_007588ec;
    DAT_0078a3f4 = DAT_007588d4;
    DAT_0078a385 = DAT_00758970;
    DAT_0078a3fa = DAT_00758951;
    DAT_0078a38a = DAT_007588e4;
    if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
      if (DAT_00758948 == 3) {
        DAT_00758948 = 0;
      }
      DAT_0078a388 = (&DAT_00758938)[DAT_00758948 * 4];
    }
    else {
      DAT_0078a388 = DAT_00758944;
    }
    DAT_0078a390 = DAT_00758938;
    DAT_0078a392 = DAT_00758940;
    DAT_0078a391 = DAT_0075893c;
    DAT_0078a393 = DAT_00758944;
    if (DAT_007588d6 == '\x01') {
      uVar1 = DAT_0078a394 | 0x40;
    }
    else {
      uVar1 = DAT_0078a394 & 0xffffffbf;
    }
    if (DAT_007588da == '\x01') {
      uVar1 = uVar1 | 0x100;
    }
    else {
      uVar1 = uVar1 & 0xfffffeff;
    }
    if (DAT_007588d8 == '\x01') {
      uVar1 = uVar1 | 0x10;
    }
    else {
      uVar1 = uVar1 & 0xffffffef;
    }
    if (DAT_007588dc == 1) {
      uVar1 = uVar1 | 0x400;
    }
    else {
      uVar1 = uVar1 & 0xfffffbff;
    }
    _DAT_0078a3b4 = (uint)DAT_007588dc;
    if (DAT_007588d5 == '\x01') {
      DAT_0078a394 = uVar1 | 0x200;
      return;
    }
    DAT_0078a394 = uVar1 & 0xfffffdff;
    return;
  }
  if (val == 1) {
    DAT_0078a3bf = DAT_00758958;
    DAT_0078a3be = (undefined1)DAT_00758964;
    DAT_0078a3bd = DAT_00758978;
    DAT_0078a3c2 = DAT_007588e8;
    if (DAT_00777cc8 == 6) {
      DAT_0078a3c0 = DAT_00758944;
    }
    else {
      if (DAT_0075894c == 3) {
        DAT_0075894c = 0;
      }
      DAT_0078a3c0 = (&DAT_00758938)[DAT_0075894c * 4];
    }
    DAT_0078a3c8 = DAT_00758938;
    DAT_0078a3c9 = DAT_0075893c;
    DAT_0078a3ca = DAT_00758940;
    DAT_0078a3cb = DAT_00758944;
    if (DAT_007588d7 == '\x01') {
      uVar1 = DAT_0078a3cc | 0x40;
    }
    else {
      uVar1 = DAT_0078a3cc & 0xffffffbf;
    }
    if (DAT_007588db == '\x01') {
      uVar1 = uVar1 | 0x100;
    }
    else {
      uVar1 = uVar1 & 0xfffffeff;
    }
    if (DAT_007588d9 == '\x01') {
      uVar1 = uVar1 | 0x10;
    }
    else {
      uVar1 = uVar1 & 0xffffffef;
    }
    if (DAT_007588dd == 1) {
      DAT_0078a3cc = uVar1 | 0x400;
      _DAT_0078a3ec = 1;
      return;
    }
    _DAT_0078a3ec = (uint)DAT_007588dd;
    DAT_0078a3cc = uVar1 & 0xfffffbff;
  }
  return;
}
