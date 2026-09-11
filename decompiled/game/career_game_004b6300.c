/* spd-match: far pct=14.96 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004B6300 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0078a324;
extern unsigned char *DAT_0078a418;
extern int DAT_0078a41c;
extern void LAB_004b6354(void);
void __fastcall FUN_004b6300(int val, int param_1)

{

  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar1 = val * 0x750 + DAT_0078a418;
  if ((iVar1 == 0) || (iVar4 = 0, DAT_0078a324 < 1)) {
    return;
  }
  do {
    iVar2 = 0;
    if (0 < DAT_0078a41c) {
      pcVar3 = (char *)(DAT_0078a418 + 1);
      do {
        if (iVar4 + 100 == (int)*pcVar3) {
          iVar2 = iVar2 * 0x750 + DAT_0078a418;
          goto LAB_004b6354;
        }
        iVar2 = iVar2 + 1;
        pcVar3 = pcVar3 + 0x750;
      } while (iVar2 < DAT_0078a41c);
    }
    iVar2 = 0;
LAB_004b6354:
    if (*(char *)(iVar2 + 3) == param_1) {
      *(undefined1 *)(iVar2 + 3) = *(undefined1 *)(iVar1 + 3);
      *(char *)(iVar1 + 3) = (char)param_1;
      return;
    }
    iVar4 = iVar4 + 1;
    if (DAT_0078a324 <= iVar4) {
      return;
    }
  } while( true );
}
