/* spd-match: far pct=6.91 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069_void_illegal */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0();
int __cdecl FUN_00424eb0();
int __cdecl FUN_00440740();
int __cdecl FUN_00440a40();
int __cdecl FUN_00597140();
extern int DAT_006cc7a4;
extern int DAT_0073168c;
extern unsigned char *DAT_00734468;
extern unsigned char *DAT_00736070;
extern int _DAT_006cc964;
int unaff_EDI;

int * FUN_00596570(void)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  float10 fVar4;
  char cStack_345;
  float fStack_344;
  undefined1 auStack_340 [8];
  float fStack_338;
  float fStack_328;
  undefined1 local_320 [48];
  undefined1 auStack_2f0 [8];
  float fStack_2e8;
  undefined1 auStack_2d0 [32];
  int aiStack_2b0 [160];
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(DAT_00734468 + 0x18) != *(int *)(DAT_00734468 + 0x2c)) {
    FUN_00401cd0();
    piVar2 = (*(int * (*)())DAT_0073168c)(*(uint *)(DAT_00736070 + 8) & 0xffff,
                                    *(undefined4 *)(unaff_EDI + 100),
                                    *(undefined4 *)(*(int *)(unaff_EDI + 0x60) + 8));
    iVar3 = (**(code **)(*piVar2 + 0x78))();
    if (iVar3 == 0) {
      iStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      FUN_00440740();
      fVar4 = (float10)FUN_00440a40(auStack_2d0,auStack_2f0,0,auStack_340,&cStack_345);
      fStack_344 = (float)fVar4;
      if (cStack_345 != '\0') {
        FUN_00424eb0();
        fVar1 = (fStack_344 -
                ((fStack_328 + *(float *)(piVar2[0x56] + 0xb8)) * fStack_338 + fStack_2e8)) +
                _DAT_006cc964;
        if (DAT_006cc7a4 < fVar1) {
          piVar2[0x5d] = (int)fVar1;
          fStack_2e8 = fVar1 + fStack_2e8;
        }
      }
      iVar3 = 0;
      if (0 < iStack_30) {
        do {
          *(char *)(aiStack_2b0[iVar3] + 8) = *(char *)(aiStack_2b0[iVar3] + 8) + -1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iStack_30);
      }
    }
    piVar2[0x5c] = *(int *)(unaff_EDI + 0x60);
    FUN_00597140(local_320,0);
    return piVar2;
  }
  return (int *)0x0;
}
