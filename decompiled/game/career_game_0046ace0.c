/* spd-match: far pct=3.97 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_0046b070();
extern int DAT_006cc7a4;
int unaff_EBX;

float10 FUN_0046ace0(void)

{
  float *pfVar1;
  undefined4 *unaff_EBX;
  int unaff_EDI;
  float10 fVar2;
  float local_30;
  float local_2c;
  float local_28;
  
  if (*(char *)(*(int *)(unaff_EDI + 0xc) + 0x15) == '\x03') {
    if (*(char *)(*(int *)(unaff_EDI + 0x10) + 0x16) != '\0') {
      FUN_0046b070(unaff_EDI);
      *unaff_EBX = 1;
      pfVar1 = (**(float * (**)())(**(int **)(unaff_EDI + 0x10) + 8))();
      return (float10)local_30 * (float10)*pfVar1 +
             (float10)local_28 * (float10)pfVar1[2] + (float10)local_2c * (float10)pfVar1[1];
    }
  }
  else if ((*(char *)(*(int *)(unaff_EDI + 0x10) + 0x15) == '\x03') &&
          (*(char *)(*(int *)(unaff_EDI + 0xc) + 0x16) != '\0')) {
    FUN_0046b070(unaff_EDI);
    *unaff_EBX = 1;
    pfVar1 = (**(float * (**)())(**(int **)(unaff_EDI + 0xc) + 8))();
    return (float10)-local_30 * (float10)*pfVar1 +
           (float10)-local_2c * (float10)pfVar1[1] + (float10)-local_28 * (float10)pfVar1[2];
  }
  fVar2 = (float10)DAT_006cc7a4;
  *unaff_EBX = 0;
  return fVar2;
}
