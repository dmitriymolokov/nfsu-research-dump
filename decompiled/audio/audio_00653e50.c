/* spd-match: far pct=10.87 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C229x_illegal_operand/batches/20260724T141956Z_w0_tc0 */
#include "ghidra_compat.h"

double __cdecl sqrt(double);
int __cdecl abs(int);

int __cdecl FUN_00651f30();
extern int DAT_00713d9e;
extern int DAT_00713ee8;
extern int DAT_0071400c;
extern int DAT_007160cc;

void FUN_00653e50(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  DAT_007160cc = ((int)DAT_007160cc) + 1;
  if (((((int)DAT_007160cc) & 3) == 0) && (uVar4 = (uint)DAT_00713d9e, (int)uVar4 < (int)DAT_00713ee8)) {
    iVar3 = uVar4 * 0x110;
    do {
      pcVar1 = *(code **)(iVar3 + 0x10c + DAT_0071400c);
      if ((pcVar1 != (code *)0x0) && (iVar2 = (*pcVar1)(iVar3 + 0x2c + DAT_0071400c), iVar2 != 0)) {
        FUN_00651f30(uVar4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x110;
    } while ((int)uVar4 < (int)DAT_00713ee8);
  }
  return;
}
