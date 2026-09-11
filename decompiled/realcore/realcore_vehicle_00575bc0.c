/* spd-match: far pct=15.85 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00575BC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00575bc0(int obj, undefined4 param_1, int param_2, int param_3)

{

  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_3 + 8);
  if ((0 < iVar2) && (iVar2 < 4)) {
    iVar1 = iVar2 * 0x40 + 0x360 + param_2;
    *(float *)(obj + 0x1f0) =
         *(float *)(iVar2 * 0x40 + 0x360 + param_2) + *(float *)(obj + 0x1f0);
    *(float *)(obj + 500) = *(float *)(iVar1 + 4) + *(float *)(obj + 500);
    *(float *)(obj + 0x1f8) = *(float *)(iVar1 + 8) + *(float *)(obj + 0x1f8);
    *(float *)(obj + 0x1fc) = *(float *)(iVar1 + 0xc) + *(float *)(obj + 0x1fc);
    *(float *)(obj + 0x200) = *(float *)(iVar1 + 0x10) + *(float *)(obj + 0x200);
    *(float *)(obj + 0x204) = *(float *)(iVar1 + 0x14) + *(float *)(obj + 0x204);
    *(float *)(obj + 0x208) = *(float *)(iVar1 + 0x18) + *(float *)(obj + 0x208);
    *(float *)(obj + 0x20c) = *(float *)(iVar1 + 0x1c) + *(float *)(obj + 0x20c);
    *(float *)(obj + 0x210) = *(float *)(iVar1 + 0x20) + *(float *)(obj + 0x210);
    *(float *)(obj + 0x214) = *(float *)(iVar1 + 0x24) + *(float *)(obj + 0x214);
    *(float *)(obj + 0x218) = *(float *)(iVar1 + 0x28) + *(float *)(obj + 0x218);
    *(float *)(obj + 0x21c) = *(float *)(iVar1 + 0x2c) + *(float *)(obj + 0x21c);
    *(float *)(obj + 0x220) = *(float *)(iVar1 + 0x30) + *(float *)(obj + 0x220);
    *(float *)(obj + 0x248) = *(float *)(iVar1 + 0x34) + *(float *)(obj + 0x248);
    *(float *)(obj + 0x24c) = *(float *)(iVar1 + 0x38) + *(float *)(obj + 0x24c);
    *(float *)(obj + 0x250) = *(float *)(iVar1 + 0x3c) + *(float *)(obj + 0x250);
  }
  iVar2 = *(int *)(param_3 + 0x14);
  if ((0 < iVar2) && (iVar2 < 4)) {
    iVar1 = iVar2 * 0x40 + 0x420 + param_2;
    *(float *)(obj + 0x1f0) =
         *(float *)(iVar2 * 0x40 + 0x420 + param_2) + *(float *)(obj + 0x1f0);
    *(float *)(obj + 500) = *(float *)(iVar1 + 4) + *(float *)(obj + 500);
    *(float *)(obj + 0x1f8) = *(float *)(iVar1 + 8) + *(float *)(obj + 0x1f8);
    *(float *)(obj + 0x1fc) = *(float *)(iVar1 + 0xc) + *(float *)(obj + 0x1fc);
    *(float *)(obj + 0x200) = *(float *)(iVar1 + 0x10) + *(float *)(obj + 0x200);
    *(float *)(obj + 0x204) = *(float *)(iVar1 + 0x14) + *(float *)(obj + 0x204);
    *(float *)(obj + 0x208) = *(float *)(iVar1 + 0x18) + *(float *)(obj + 0x208);
    *(float *)(obj + 0x20c) = *(float *)(iVar1 + 0x1c) + *(float *)(obj + 0x20c);
    *(float *)(obj + 0x210) = *(float *)(iVar1 + 0x20) + *(float *)(obj + 0x210);
    *(float *)(obj + 0x214) = *(float *)(iVar1 + 0x24) + *(float *)(obj + 0x214);
    *(float *)(obj + 0x218) = *(float *)(iVar1 + 0x28) + *(float *)(obj + 0x218);
    *(float *)(obj + 0x21c) = *(float *)(iVar1 + 0x2c) + *(float *)(obj + 0x21c);
    *(float *)(obj + 0x220) = *(float *)(iVar1 + 0x30) + *(float *)(obj + 0x220);
    *(float *)(obj + 0x248) = *(float *)(iVar1 + 0x34) + *(float *)(obj + 0x248);
    *(float *)(obj + 0x24c) = *(float *)(iVar1 + 0x38) + *(float *)(obj + 0x24c);
    *(float *)(obj + 0x250) = *(float *)(iVar1 + 0x3c) + *(float *)(obj + 0x250);
  }
  iVar2 = *(int *)(param_3 + 0xc);
  if ((0 < iVar2) && (iVar2 < 4)) {
    puVar3 = (undefined4 *)(iVar2 * 0x30 + 0x4f0 + param_2);
    puVar4 = (undefined4 *)(obj + 0x224);
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(float *)(obj + 0x200) = *(float *)(obj + 0x224) + *(float *)(obj + 0x200);
  *(float *)(obj + 0x204) = *(float *)(obj + 0x228) + *(float *)(obj + 0x204);
  *(float *)(obj + 0x208) = *(float *)(obj + 0x22c) + *(float *)(obj + 0x208);
  *(float *)(obj + 0x20c) = *(float *)(obj + 0x230) + *(float *)(obj + 0x20c);
  *(float *)(obj + 0x210) = *(float *)(obj + 0x234) + *(float *)(obj + 0x210);
  *(float *)(obj + 0x214) = *(float *)(obj + 0x238) + *(float *)(obj + 0x214);
  *(float *)(obj + 0x218) = *(float *)(obj + 0x23c) + *(float *)(obj + 0x218);
  *(float *)(obj + 0x21c) = *(float *)(obj + 0x240) + *(float *)(obj + 0x21c);
  *(float *)(obj + 0x220) = *(float *)(obj + 0x244) + *(float *)(obj + 0x220);
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x200) = *(float *)(param_2 + 0x840) + *(float *)(obj + 0x200);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x200) = *(float *)(param_2 + 0x864) + *(float *)(obj + 0x200);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x200) = *(float *)(param_2 + 0x888) + *(float *)(obj + 0x200);
    *(float *)(obj + 0x224) = *(float *)(param_2 + 0x888) + *(float *)(obj + 0x224);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x204) = *(float *)(param_2 + 0x844) + *(float *)(obj + 0x204);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x204) = *(float *)(param_2 + 0x868) + *(float *)(obj + 0x204);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x204) = *(float *)(param_2 + 0x88c) + *(float *)(obj + 0x204);
    *(float *)(obj + 0x228) = *(float *)(obj + 0x228) + *(float *)(param_2 + 0x88c);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x208) = *(float *)(param_2 + 0x848) + *(float *)(obj + 0x208);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x208) = *(float *)(param_2 + 0x86c) + *(float *)(obj + 0x208);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x208) = *(float *)(param_2 + 0x890) + *(float *)(obj + 0x208);
    *(float *)(obj + 0x22c) = *(float *)(obj + 0x22c) + *(float *)(param_2 + 0x890);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x20c) = *(float *)(param_2 + 0x84c) + *(float *)(obj + 0x20c);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x20c) = *(float *)(param_2 + 0x870) + *(float *)(obj + 0x20c);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x20c) = *(float *)(param_2 + 0x894) + *(float *)(obj + 0x20c);
    *(float *)(obj + 0x230) = *(float *)(param_2 + 0x894) + *(float *)(obj + 0x230);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x210) = *(float *)(param_2 + 0x850) + *(float *)(obj + 0x210);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x210) = *(float *)(param_2 + 0x874) + *(float *)(obj + 0x210);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x210) = *(float *)(param_2 + 0x898) + *(float *)(obj + 0x210);
    *(float *)(obj + 0x234) = *(float *)(param_2 + 0x898) + *(float *)(obj + 0x234);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x214) = *(float *)(param_2 + 0x854) + *(float *)(obj + 0x214);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x214) = *(float *)(param_2 + 0x878) + *(float *)(obj + 0x214);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x214) = *(float *)(param_2 + 0x89c) + *(float *)(obj + 0x214);
    *(float *)(obj + 0x238) = *(float *)(obj + 0x238) + *(float *)(param_2 + 0x89c);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x218) = *(float *)(param_2 + 0x858) + *(float *)(obj + 0x218);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x218) = *(float *)(param_2 + 0x87c) + *(float *)(obj + 0x218);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x218) = *(float *)(param_2 + 0x8a0) + *(float *)(obj + 0x218);
    *(float *)(obj + 0x23c) = *(float *)(obj + 0x23c) + *(float *)(param_2 + 0x8a0);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x21c) = *(float *)(param_2 + 0x85c) + *(float *)(obj + 0x21c);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x21c) = *(float *)(param_2 + 0x880) + *(float *)(obj + 0x21c);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x21c) = *(float *)(param_2 + 0x8a4) + *(float *)(obj + 0x21c);
    *(float *)(obj + 0x240) = *(float *)(param_2 + 0x8a4) + *(float *)(obj + 0x240);
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    *(float *)(obj + 0x220) = *(float *)(param_2 + 0x860) + *(float *)(obj + 0x220);
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    *(float *)(obj + 0x220) = *(float *)(param_2 + 0x884) + *(float *)(obj + 0x220);
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    *(float *)(obj + 0x220) = *(float *)(param_2 + 0x8a8) + *(float *)(obj + 0x220);
    *(float *)(obj + 0x244) = *(float *)(param_2 + 0x8a8) + *(float *)(obj + 0x244);
  }
  iVar2 = *(int *)(param_3 + 0x10);
  if ((0 < iVar2) && (iVar2 < 4)) {
    iVar2 = (iVar2 + 0x66) * 0x10;
    iVar1 = iVar2 + param_2;
    *(undefined4 *)(obj + 0x2a0) = *(undefined4 *)(iVar2 + param_2);
    *(undefined4 *)(obj + 0x2a4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(obj + 0x2a8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(obj + 0x2ac) = *(undefined4 *)(iVar1 + 0xc);
  }
  if (*(int *)(param_3 + 0x3c) != 0) {
    *(float *)(obj + 0x2ac) = *(float *)(param_2 + 0x828) + *(float *)(obj + 0x2ac);
  }
  return;
}
