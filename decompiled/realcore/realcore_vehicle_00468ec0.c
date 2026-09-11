/* spd-match: far pct=14.86 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00468680();

void FUN_00468ec0(void)

{
  float *pfVar1;
  int *unaff_ESI;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  pfVar1 = (**(float * (**)())(*unaff_ESI + 8))();
  fStack_30 = *pfVar1 - (float)unaff_ESI[0x3a];
  fStack_2c = pfVar1[1] - (float)unaff_ESI[0x3a];
  fStack_28 = (float)unaff_ESI[0x3a] + *pfVar1;
  fStack_24 = pfVar1[1] + (float)unaff_ESI[0x3a];
  FUN_00468680(unaff_ESI,&fStack_30);
  FUN_00468ec0(auStack_20,unaff_ESI + 0x48,unaff_ESI + 0x20);
  unaff_ESI[0x44] = (int)(fStack_2c + (float)unaff_ESI[0x30]);
  unaff_ESI[0x46] = (int)((float)unaff_ESI[0x32] + fStack_24);
  unaff_ESI[0x45] = (int)((float)unaff_ESI[0x31] + fStack_28);
  return;
}
