/* spd-match: far pct=46.23 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AA670 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_007356a8;
extern unsigned char *PTR_DAT_006f4d14;
void __fastcall FUN_004aa670(int obj)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;

  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  int local_8;
  undefined **local_4;
  
  *(undefined4 *)(obj + 0xc0) = 1;
  *(undefined4 *)(obj + 0xd0) = 1;
  *(undefined4 *)(obj + 0xd4) = 1;
  *(undefined1 *)(obj + 0xd8) = 1;
  *(undefined1 *)(obj + 0xda) = 1;
  *(undefined1 *)(obj + 0xdb) = 1;
  *(undefined4 *)(obj + 0xc4) = 0xffffffff;
  *(undefined4 *)(obj + 200) = 0;
  *(undefined1 *)(obj + 0xd9) = 0;
  *(undefined4 *)(obj + 0xcc) = 2;
  *(undefined4 *)(obj + 0xbc) = 4;
  *(undefined4 *)(obj + 0xdc) = 4;
  *(undefined4 *)(obj + 0xe0) = 1;
  *(undefined4 *)(obj + 0xe4) = 0xffffffff;
  *(undefined4 *)(obj + 0xe8) = 0;
  *(undefined4 *)(obj + 0xec) = 2;
  *(undefined4 *)(obj + 0xf0) = 1;
  *(undefined4 *)(obj + 0xf4) = 1;
  *(undefined1 *)(obj + 0xf8) = 1;
  *(undefined1 *)(obj + 0xf9) = 0;
  *(undefined1 *)(obj + 0xfa) = 1;
  *(undefined1 *)(obj + 0xfb) = 1;
  *(undefined4 *)(obj + 0xfc) = 4;
  *(undefined4 *)(obj + 0x100) = 1;
  *(undefined4 *)(obj + 0x104) = 0xffffffff;
  *(undefined4 *)(obj + 0x108) = 0;
  *(undefined4 *)(obj + 0x110) = 1;
  *(undefined4 *)(obj + 0x114) = 1;
  *(undefined1 *)(obj + 0x118) = 1;
  *(undefined1 *)(obj + 0x119) = 0;
  *(undefined1 *)(obj + 0x11a) = 1;
  *(undefined1 *)(obj + 0x11b) = 1;
  *(undefined4 *)(obj + 0x10c) = 3;
  *(undefined4 *)(obj + 0x11c) = 1;
  *(undefined4 *)(obj + 0x120) = 1;
  *(undefined4 *)(obj + 0x124) = 0xffffffff;
  *(undefined4 *)(obj + 0x128) = 0;
  *(undefined4 *)(obj + 300) = 0xffffffff;
  *(undefined4 *)(obj + 0x130) = 1;
  *(undefined4 *)(obj + 0x134) = 1;
  *(undefined1 *)(obj + 0x138) = 1;
  *(undefined1 *)(obj + 0x139) = 0;
  *(undefined1 *)(obj + 0x13a) = 1;
  *(undefined1 *)(obj + 0x13b) = 0;
  *(undefined4 *)(obj + 0x1f0) = 1;
  *(undefined4 *)(obj + 500) = 1;
  *(undefined4 *)(obj + 0x1f8) = 0xffffffff;
  *(undefined4 *)(obj + 0x1fc) = 0;
  *(undefined4 *)(obj + 0x200) = 2;
  *(undefined4 *)(obj + 0x204) = 1;
  *(undefined4 *)(obj + 0x208) = 0;
  *(undefined1 *)(obj + 0x20c) = 0;
  *(undefined1 *)(obj + 0x20d) = 0;
  *(undefined1 *)(obj + 0x20e) = 1;
  *(undefined1 *)(obj + 0x20f) = 0;
  *(undefined4 *)(obj + 0x140) = 4;
  *(undefined4 *)(obj + 0x144) = 1;
  *(undefined4 *)(obj + 0x148) = 0xffffffff;
  *(undefined4 *)(obj + 0x14c) = 0;
  *(undefined4 *)(obj + 0x150) = 2;
  *(undefined4 *)(obj + 0x154) = 1;
  *(undefined4 *)(obj + 0x158) = 1;
  *(undefined4 *)(obj + 0x160) = 3;
  *(undefined1 *)(obj + 0x15c) = 1;
  *(undefined1 *)(obj + 0x15d) = 0;
  *(undefined1 *)(obj + 0x15e) = 1;
  *(undefined1 *)(obj + 0x15f) = 0;
  *(undefined4 *)(obj + 0x1c4) = 4;
  *(undefined4 *)(obj + 0x1c8) = 1;
  *(undefined4 *)(obj + 0x1ec) = 1;
  *(undefined4 *)(obj + 0x1cc) = 0xffffffff;
  bVar6 = DAT_007356a8 != 0;
  *(undefined4 *)(obj + 0x1d0) = 0;
  *(undefined4 *)(obj + 0x1d4) = 0;
  *(undefined4 *)(obj + 0x1d8) = 1;
  *(undefined4 *)(obj + 0x1dc) = 1;
  *(undefined4 *)(obj + 0x1e4) = 1;
  *(undefined4 *)(obj + 0x1e8) = 0;
  *(undefined1 *)(obj + 0x1e0) = 0;
  *(undefined1 *)(obj + 0x1e1) = 1;
  *(undefined1 *)(obj + 0x1e2) = 1;
  *(undefined1 *)(obj + 0x1e3) = 0;
  if (bVar6) {
    *(undefined4 *)(obj + 0x5c) = 1;
  }
  local_8 = 0;
  local_4 = &PTR_DAT_006f4d14;
  pcVar5 = (char *)(obj + 0x298);
  do {
    *(int *)(pcVar5 + -4) = local_8;
    puVar2 = *local_4;
    pcVar4 = "FE";
    do {
      cVar3 = pcVar4[(int)(puVar2 + -0x6bdcf8)];
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      if ((cVar3 == '\0') || (cVar1 == '\0')) break;
    } while (cVar3 == cVar1);
    if (cVar3 == cVar1) {
      cVar3 = '\x01';
    }
    else {
      pcVar4 = "IG";
      do {
        cVar3 = pcVar4[(int)(puVar2 + -0x6bdcfc)];
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        if ((cVar3 == '\0') || (cVar1 == '\0')) break;
      } while (cVar3 == cVar1);
      if (cVar3 == cVar1) {
        cVar3 = '\x02';
      }
      else {
        pcVar4 = "AL";
        do {
          cVar3 = pcVar4[(int)(puVar2 + -0x6c6540)];
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          if ((cVar3 == '\0') || (cVar1 == '\0')) break;
        } while (cVar3 == cVar1);
        cVar3 = (-(cVar3 != cVar1) & 0xfdU) + 3;
      }
    }
    *pcVar5 = cVar3;
    local_4 = local_4 + 4;
    local_8 = local_8 + 1;
    pcVar5 = pcVar5 + 8;
    if (0x6f4eb3 < (int)local_4) {
      return;
    }
  } while( true );
}
