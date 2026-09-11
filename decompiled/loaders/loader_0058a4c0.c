/* spd-match: far pct=3.70 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058A4C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_006f06e4;
void __fastcall FUN_0058a4c0(int obj, undefined4 param_1, undefined4 param_2, char *param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)

{
  char *pcVar1;
  char cVar2;

  char *pcVar3;
  
  *(undefined4 *)(obj + 8) = param_1;
  *(undefined4 *)(obj + 0x3c) = param_2;
  *(undefined4 *)(obj + 0x40) = param_4;
  *(undefined4 *)(obj + 0x44) = 0;
  *(undefined4 *)(obj + 0x48) = 0x100000;
  *(undefined4 *)(obj + 0x4c) = 5;
  *(undefined4 *)(obj + 0x50) = 0;
  cVar2 = *param_3;
  pcVar1 = (char *)(obj + 0xc);
  *pcVar1 = cVar2;
  if (cVar2 != '\0') {
    pcVar3 = pcVar1;
    do {
      cVar2 = pcVar3[(int)(param_3 + (1 - (int)pcVar1))];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar2;
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(obj + 0x58) = param_6;
  *(int *)(obj + 100) = DAT_006f06e4;
  DAT_006f06e4 = DAT_006f06e4 + 1;
  *(undefined4 *)(obj + 0x5c) = 0;
  *(undefined4 *)(obj + 0x60) = 0;
  *(undefined4 *)(obj + 0x68) = 0;
  *(undefined4 *)(obj + 0x6c) = 0;
  *(undefined4 *)(obj + 0x70) = 0;
  *(undefined4 *)(obj + 0x54) = param_5;
  if (100000 < DAT_006f06e4) {
    DAT_006f06e4 = 1;
  }
  return;
}
