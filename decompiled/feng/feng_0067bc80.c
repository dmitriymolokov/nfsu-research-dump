/* Decompiled from Speed.exe @ 0067bc80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0067bca1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0067bc80(void)

{
  uint uVar1;
  int iVar2;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar3;
  uint local_8;
  
  uVar3 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,4) * 0x800 |
          (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_8 < 0) * 0x80 |
          (uint)(&stack0x00000000 == (undefined1 *)0x8) * 0x40 | (uint)(in_AF & 1) * 0x10 |
          (uint)((POPCOUNT((uint)&local_8 & 0xff) & 1U) == 0) * 4 |
          (uint)(&stack0xfffffffc < (undefined1 *)0x4) | (uint)(in_ID & 1) * 0x200000 |
          (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000
  ;
  uVar1 = uVar3 ^ 0x200000;
  local_8 = 0;
  if (((uint)((uVar1 & 0x4000) != 0) * 0x4000 | (uint)((uVar1 & 0x800) != 0) * 0x800 |
       (uint)((uVar1 & 0x200) != 0) * 0x200 | (uint)((uVar1 & 0x100) != 0) * 0x100 |
       (uint)((uVar1 & 0x80) != 0) * 0x80 | (uint)((uVar1 & 0x40) != 0) * 0x40 |
       (uint)((uVar1 & 0x10) != 0) * 0x10 | (uint)((uVar1 & 4) != 0) * 4 | (uint)((uVar1 & 1) != 0)
       | (uint)((uVar1 & 0x200000) != 0) * 0x200000 | (uint)((uVar1 & 0x40000) != 0) * 0x40000) !=
      uVar3) {
    iVar2 = cpuid_Version_info(1);
    local_8 = *(uint *)(iVar2 + 8);
  }
  _DAT_00792fbc = 0;
  DAT_00792fb8 = 0;
  if (((local_8 & 0x4000000) != 0) && (iVar2 = FUN_0067bc4b(), iVar2 != 0)) {
    _DAT_00792fbc = 1;
    DAT_00792fb8 = 1;
  }
  return 0;
}

