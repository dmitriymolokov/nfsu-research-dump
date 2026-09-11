/* spd-match: far pct=14.15 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00405D40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006abe04;
extern int DAT_006abe08;
extern int DAT_006abe0c;
extern int DAT_006abe10;
extern int DAT_007187e0;
extern int DAT_007187e4;
extern int DAT_007187e8;
extern int DAT_007187ec;
extern int DAT_007187f0;
extern int DAT_007187f4;
extern int DAT_007197a4;
void __fastcall FUN_00405d40(uint val, int param_1, int param_2, uint param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;

  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = DAT_007197a4;
  uVar5 = val >> 8 & 0xffff | (val & 0xff) << 8;
  uVar6 = 0;
  bVar1 = true;
  if (DAT_007197a4 == 0) {
    return;
  }
  puVar4 = &DAT_007187f0;
  do {
    if (*puVar4 == uVar5) {
      puVar4[-4] = DAT_006abe04;
      puVar4[-3] = DAT_006abe08;
      puVar4[-2] = DAT_006abe0c;
      uVar2 = DAT_006abe10;
      *puVar4 = 0;
      puVar4[-1] = uVar2;
      puVar4[1] = 0;
    }
    if (puVar4[-8] == param_3) {
      if ((param_2 != 1) || (!bVar1)) {
        (&DAT_007187f4)[uVar6 * 10] = 0x20;
        (&DAT_007187e0)[uVar6 * 10] = *(undefined4 *)(param_1 + 0x11c);
        (&DAT_007187e4)[uVar6 * 10] = *(undefined4 *)(param_1 + 0x120);
        (&DAT_007187e8)[uVar6 * 10] = *(undefined4 *)(param_1 + 0x124);
        (&DAT_007187ec)[uVar6 * 10] = *(undefined4 *)(param_1 + 0x128);
        (&DAT_007187f0)[uVar6 * 10] = uVar5;
        return;
      }
      bVar1 = false;
    }
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 10;
    if (uVar3 <= uVar6) {
      return;
    }
  } while( true );
}
