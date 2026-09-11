/* Decompiled from Speed.exe @ 005eb0b1 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005eb166) */

int FUN_005eb0b1(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined8 *extraout_ECX;
  uint uVar3;
  int extraout_EDX;
  uint uVar4;
  uint uVar5;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM0_Qb;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM3_Qb;
  
  iVar2 = param_1;
  if (7 < param_3) {
    uVar5 = param_3 & 0xfffffff8;
    do {
      FUN_005eaf87();
      *extraout_ECX = in_XMM0_Qa;
      extraout_ECX[1] = in_XMM0_Qb;
      extraout_ECX[2] = in_XMM3_Qa;
      extraout_ECX[3] = in_XMM3_Qb;
    } while (extraout_EDX != 8);
    param_3 = param_3 - uVar5;
    param_2 = param_2 + uVar5 * 2;
    param_1 = param_1 + uVar5 * 4;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      uVar1 = *(ushort *)(param_2 + uVar5 * 2);
      uVar3 = (uint)uVar1;
      uVar4 = uVar3 & 0x7c00;
      if (uVar4 < 0x401) {
        uVar4 = 0x400;
      }
      *(float *)(param_1 + uVar5 * 4) =
           (float)(-(uint)((uVar1 & 0x7c00) != 0) & 0x400 | uVar3 & 0x3ff) *
           (float)((uVar4 + 0x19800) * 0x2000 | (uVar3 & 0xffff8000) << 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
  }
  return iVar2;
}

