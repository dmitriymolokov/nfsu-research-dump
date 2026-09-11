/* spd-match: far pct=6.14 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00432890 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0073465c;
extern int _DAT_00734670;
void __fastcall FUN_00432890(undefined1 * obj)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;

  char *pcVar4;
  bool bVar5;
  
  uVar3 = _DAT_00734670;
  bVar5 = DAT_0073465c == 0;
  *obj = 0;
  obj[1] = 0;
  obj[2] = 0;
  obj[4] = bVar5 - 1U & (byte)uVar3;
  pcVar1 = obj + 0x14;
  obj[3] = 0;
  obj[5] = 0;
  obj[6] = 0;
  obj[7] = 0;
  obj[8] = 0;
  obj[9] = 1;
  obj[10] = 0;
  *(undefined4 *)(obj + 0x10) = 0x755;
  *pcVar1 = 'P';
  pcVar4 = pcVar1;
  do {
    cVar2 = pcVar4[(int)("PLAYER" + (1 - (int)pcVar1))];
    pcVar4 = pcVar4 + 1;
    *pcVar4 = cVar2;
  } while (cVar2 != '\0');
  *(undefined4 *)(obj + 0x24) = 0;
  *(undefined4 *)(obj + 0x28) = 0;
  *(undefined4 *)(obj + 0x2c) = 1;
  *(undefined4 *)(obj + 0x30) = 1;
  *(undefined4 *)(obj + 0x34) = 0;
  return;
}
