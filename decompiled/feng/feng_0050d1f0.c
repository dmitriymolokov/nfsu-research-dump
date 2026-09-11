/* spd-match: far pct=4.86 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0050D1F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005a1550();
extern int DAT_00735ec1;
extern unsigned char *DAT_00737668;
extern int DAT_0073766c;
extern int DAT_0075eef8;
extern int DAT_007677ac;
extern void LAB_0050d238(void);
uint __fastcall FUN_0050d1f0(int obj)

{
  char cVar1;

  uint uVar2;
  uint *puVar3;
  char cVar4;
  
  if (DAT_007677ac != 0) {
    return DAT_007677ac & 0xffffff00;
  }
  uVar2 = 0;
  if (DAT_0073766c != 0) {
    puVar3 = (uint *)(DAT_00737668 + 0x24);
    do {
      if ((puVar3[-1] == 1) && (*puVar3 == (uint)*(byte *)(obj + 0x11))) {
        cVar4 = *(char *)(uVar2 * 0x34 + 0x30 + DAT_00737668);
        goto LAB_0050d238;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0xd;
    } while (uVar2 < DAT_0073766c);
  }
  cVar4 = '\0';
LAB_0050d238:
  if (*(byte *)(obj + 0x11) < 2) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = FUN_005a1550(&DAT_0075eef8,3);
  }
  if (((cVar4 == '\0') && (cVar1 == '\0')) && (DAT_00735ec1 == '\0')) {
    return 1;
  }
  return 0;
}
