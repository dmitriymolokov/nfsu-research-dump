/* spd-match: far pct=17.20 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004ABC20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00736168;
extern int DAT_0073616c;
extern int DAT_0078a2f0;
extern int DAT_0078a2fc;
extern int DAT_0078a318;
extern int DAT_0078a31c;
extern void LAB_004abc58(void);
void __fastcall FUN_004abc20(int obj)

{
  int *piVar1;

  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(*(int *)(obj + 0x2ed5c) + 0x5864);
  iVar2 = 0;
  iVar3 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if ((int)*(short *)(iVar3 + 0x6c) == *piVar1) goto LAB_004abc58;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xfc;
    } while (iVar2 < DAT_0073616c);
  }
  iVar3 = 0;
LAB_004abc58:
  DAT_0078a2f0 = (int)*(short *)(iVar3 + 0x6c);
  DAT_0078a318 = (int)*(char *)(iVar3 + 0x69);
  DAT_0078a2fc = piVar1[1];
  DAT_0078a31c = piVar1[2];
  return;
}
