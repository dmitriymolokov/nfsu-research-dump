/* spd-match: far pct=17.39 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.5/va_00411BE0 */
#include "ghidra_compat.h"

void FUN_0063f190(int param_1);
void FUN_0063f1a0(int param_1);
extern int DAT_0071b7c4;
int unaff_EDI;

uint * FUN_00411be0(void)

{
  int iVar1;
  uint *puVar2;
  int unaff_EDI;
  
  iVar1 = unaff_EDI + 4;
  FUN_0063f190(iVar1);
  puVar2 = *(uint **)(unaff_EDI + 0x80);
  if (puVar2 == (uint *)0x0) {
    FUN_0063f1a0(iVar1);
    return (uint *)0x0;
  }
  *(uint *)(unaff_EDI + 0x80) = puVar2[3];
  DAT_0071b7c4 = ((int)DAT_0071b7c4) + 0x100;
  if (DAT_0071b7c4 == 0) {
    DAT_0071b7c4 = 0x100;
  }
  *puVar2 = *puVar2 & 0xff | ((int)DAT_0071b7c4);
  FUN_0063f1a0(iVar1);
  return puVar2;
}
