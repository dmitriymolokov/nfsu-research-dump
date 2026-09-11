/* spd-match: far pct=7.53 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_00435b30();
int __cdecl FUN_00437fa0();
int __cdecl FUN_004407b0();
int __cdecl FUN_00440a40();
int __cdecl FUN_005824b0();
extern int DAT_006cc7a4;
extern int DAT_006f0fb8;
extern unsigned char *DAT_0073619c;
extern int _DAT_006cc7ac;
extern int _DAT_006cc964;

void FUN_004267a0(float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int unaff_ESI;
  char local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (DAT_006cc7a4 < param_1) {
    *(undefined4 *)(unaff_ESI + 0x490) = *(undefined4 *)(unaff_ESI + 0x60);
    *(undefined4 *)(unaff_ESI + 0x494) = *(undefined4 *)(unaff_ESI + 100);
    *(undefined4 *)(unaff_ESI + 0x498) = *(undefined4 *)(unaff_ESI + 0x68);
    *(undefined4 *)(unaff_ESI + 0x4a0) = *(undefined4 *)(unaff_ESI + 0x70);
    *(undefined4 *)(unaff_ESI + 0x4a4) = *(undefined4 *)(unaff_ESI + 0x74);
    *(undefined4 *)(unaff_ESI + 0x4a8) = *(undefined4 *)(unaff_ESI + 0x78);
    *(undefined4 *)(unaff_ESI + 0x4b0) = *(undefined4 *)(unaff_ESI + 0xd0);
    *(undefined4 *)(unaff_ESI + 0x4b4) = *(undefined4 *)(unaff_ESI + 0xd4);
    *(undefined4 *)(unaff_ESI + 0x4b8) = *(undefined4 *)(unaff_ESI + 0xd8);
  }
  fVar2 = *(float *)(unaff_ESI + 0x70);
  puVar1 = (undefined4 *)(unaff_ESI + 0x60);
  FUN_004407b0(puVar1,SQRT(*(float *)(unaff_ESI + 0x74) * *(float *)(unaff_ESI + 0x74) +
                           fVar2 * fVar2 +
                           *(float *)(unaff_ESI + 0x78) * *(float *)(unaff_ESI + 0x78)) *
                      ((int)_DAT_006cc964) + _DAT_006cc7ac,(float *)(unaff_ESI + 0x70));
  local_20 = *puVar1;
  local_1c = *(undefined4 *)(unaff_ESI + 100);
  local_18 = 0x47c34f8d;
  FUN_00440a40(unaff_ESI + 0x540,&local_20,0,0,&local_21);
  if ((local_21 != '\0') && (1 < *(int *)(unaff_ESI + 0x3cc))) {
    *(undefined4 *)(unaff_ESI + 0x8a4) = *(undefined4 *)(unaff_ESI + 100);
    *(undefined4 *)(unaff_ESI + 0x8a0) = *puVar1;
  }
  if (((*(char *)(*(int *)(unaff_ESI + 0x14) + 0x734) != '\0') && (*(int *)(unaff_ESI + 0x830) != 0)
      ) && (*DAT_0073619c == 4)) {
    iVar3 = FUN_00435b30(DAT_0073619c);
    if (iVar3 == 0) {
      FUN_00437fa0(*(undefined4 *)(unaff_ESI + 0x830),param_1);
    }
  }
  iVar3 = DAT_006f0fb8;
  *(undefined4 *)(unaff_ESI + 0x364) = 1;
  *(undefined4 *)(unaff_ESI + 0x368) = 1;
  *(undefined4 *)(unaff_ESI + 0x36c) = 1;
  *(undefined4 *)(unaff_ESI + 0x370) = 1;
  if (iVar3 == *(short *)(unaff_ESI + 8)) {
    DAT_006f0fb8 = -1;
    FUN_005824b0(*(undefined4 *)(unaff_ESI + 0x10));
  }
  return;
}
