/* spd-match: far pct=2.27 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0041e860 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0041e88b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041e860(void)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0x00000000,0x10) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_10 < 0) * 0x80
          | (uint)(&stack0x00000000 == (undefined1 *)0x10) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT((uint)&local_10 & 0xff) & 1U) == 0) * 4 |
          (uint)(&stack0x00000000 < (undefined1 *)0x10) | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar3 = uVar4 ^ 0x200000;
  if (((uint)((uVar3 & 0x4000) != 0) * 0x4000 | (uint)((uVar3 & 0x800) != 0) * 0x800 |
       (uint)((uVar3 & 0x200) != 0) * 0x200 | (uint)((uVar3 & 0x100) != 0) * 0x100 |
       (uint)((uVar3 & 0x80) != 0) * 0x80 | (uint)((uVar3 & 0x40) != 0) * 0x40 |
       (uint)((uVar3 & 0x10) != 0) * 0x10 | (uint)((uVar3 & 4) != 0) * 4 | (uint)((uVar3 & 1) != 0)
       | (uint)((uVar3 & 0x200000) != 0) * 0x200000 | (uint)((uVar3 & 0x40000) != 0) * 0x40000) !=
      uVar4) {
    puVar1 = (undefined4 *)cpuid_basic_info(0);
    local_4 = *puVar1;
    local_10 = puVar1[1];
    local_8 = puVar1[2];
    local_c = puVar1[3];
    if (local_10 == 0x68747541) {
      FUN_0041eae0(0x32);
      FUN_0041ea60();
    }
    else if (local_10 == 0x69727943) {
      DAT_0071dae8 = 1;
      DAT_0071daf0 = 0;
      DAT_0071daf4 = 0;
    }
    else if (local_10 == 0x756e6547) {
      FUN_0041eae0(0x32);
      FUN_0041e9b0();
    }
    else {
      DAT_0071dae8 = 5;
      DAT_0071daf0 = 0;
      DAT_0071daf4 = 0;
    }
    fVar2 = DAT_006cc7a4;
    switch(DAT_0071dae8) {
    case 0:
      goto LAB_0041e91f;
    case 2:
      if ((float10)_DAT_006ccae4 <= (float10)(signed __int64)CONCAT44(DAT_0071daf4,DAT_0071daf0)) {
        return ((float10)(signed __int64)CONCAT44(DAT_0071daf4,DAT_0071daf0) - (float10)_DAT_006ccae4) *
               (float10)_DAT_006ccaec;
      }
      break;
    case 3:
    case 4:
      if ((float10)_DAT_006ccae4 <= (float10)(signed __int64)CONCAT44(DAT_0071daf4,DAT_0071daf0)) {
        return ((float10)(signed __int64)CONCAT44(DAT_0071daf4,DAT_0071daf0) - (float10)_DAT_006ccae4) *
               (float10)_DAT_006ccae8;
      }
      break;
    case 5:
      fVar2 = _DAT_006cc7bc;
    default:
      return (float10)fVar2;
    }
    return (float10)DAT_006cc7a4;
  }
LAB_0041e91f:
  return (float10)DAT_006cc7a4;
}

