/* spd-match: far pct=3.18 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_c2440_float_uint/batches/20260724T133813Z_w0_tc0 */
#include "ghidra_compat.h"

int __cdecl FUN_00574b70();
int __cdecl FUN_00674898();
int unaff_EDI;

undefined4 FUN_00574cf0(float param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  iVar3 = 0;
  pfVar4 = (float *)(unaff_EDI + 0xc);
  do {
    puVar1 = (undefined4 *)(unsigned int)(pfVar4[-3]);
    if (puVar1 != (undefined4 *)0x0) {
      if ((*pfVar4 < *(float *)*puVar1) || (((float *)*puVar1)[puVar1[1] * 2 + -2] <= *pfVar4)) {
        pfVar4[-3] = 0.0;
        *(undefined1 *)(unaff_EDI + 0x24 + iVar3) = 0xff;
      }
      else {
        FUN_00574b70(*pfVar4);
        iVar2 = FUN_00674898();
        if (iVar2 <= *(int *)(unaff_EDI + 0x28)) {
          iVar2 = *(int *)(unaff_EDI + 0x28);
        }
        *(int *)(unaff_EDI + 0x28) = iVar2;
        *pfVar4 = param_1 / pfVar4[3] + *pfVar4;
      }
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar3 < 3);
  if (*(int *)(unaff_EDI + 0x28) < 0) {
    *(undefined4 *)(unaff_EDI + 0x28) = 0;
  }
  if (0xff < *(int *)(unaff_EDI + 0x28)) {
    *(undefined4 *)(unaff_EDI + 0x28) = 0xff;
  }
  return CONCAT31((int3)((uint)*(int *)(unaff_EDI + 0x28) >> 8),
                  *(int *)(unaff_EDI + 0x28) != *(int *)(unaff_EDI + 0x2c));
}
