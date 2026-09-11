/* spd-match: far pct=17.65 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004AE930 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00574020();
extern int DAT_006fb05c;
extern void LAB_004ae910(void);
int unaff_EDI;
void __fastcall FUN_004ae930(undefined4 val)

{
  undefined4 uVar1;

  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  
  *unaff_EDI = 0;
  unaff_EDI[2] = val;
  unaff_EDI[3] = 4;
  unaff_EDI[1] = 0;
  puVar2 = &DAT_006fb05c;
  do {
    if (unaff_EDI[2] == -2) {
      uVar1 = *puVar2;
      iVar3 = 0;
      do {
        FUN_00574020(uVar1,&LAB_004ae910);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
    }
    puVar2 = puVar2 + 1;
  } while ((int)puVar2 < 0x6fb088);
  return;
}
