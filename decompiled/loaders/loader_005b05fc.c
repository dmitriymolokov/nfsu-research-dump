/* Decompiled from Speed.exe @ 005b05fc */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x005b0617) */

undefined4 FUN_005b05fc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  else {
    puVar1 = (undefined4 *)cpuid_Version_info(1);
    uVar2 = puVar1[2];
    *(undefined4 *)(unaff_EBP + -0x2c) = *puVar1;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
    if ((*(uint *)(unaff_EBP + -0x28) & 0x2000000) != 0) {
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 4;
    }
    if ((*(uint *)(unaff_EBP + -0x28) & 0x4000000) != 0) {
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) | 8;
    }
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}

