/* spd-match: far pct=9.38 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00465430();
int __cdecl FUN_00527740();
int __cdecl FUN_005277f0();
int __cdecl FUN_00532610();
int __cdecl FUN_005326f0();
int __cdecl FUN_005368b0();
int __cdecl FUN_00536a70();
extern int DAT_007356ac;

void FUN_005278e0(void)

{
  char cVar1;
  int *unaff_EDI;
  undefined4 unaff_retaddr;
  
  cVar1 = (**(code **)(*unaff_EDI + 0x60))(2);
  if ((cVar1 != '\0') && ((char)unaff_EDI[0x478] != '\0')) {
    FUN_005326f0(unaff_retaddr);
    if (unaff_EDI[0x47b] == 0) {
      cVar1 = FUN_00465430();
      if (cVar1 != '\0') {
        FUN_00527740(0,0,0x1000,unaff_EDI[0xab]);
        FUN_005368b0(DAT_007356ac,5,0xbf800000,unaff_EDI[0x99]);
        FUN_00532610(0,0x3f800000,400);
      }
    }
    else if ((unaff_EDI[0x47b] == 1) && (cVar1 = FUN_00465430(), cVar1 == '\0')) {
      FUN_005277f0();
      FUN_00536a70(DAT_007356ac,5,unaff_EDI[0x99]);
      FUN_00532610(unaff_EDI[0x49b],0,1000);
      return;
    }
  }
  return;
}
