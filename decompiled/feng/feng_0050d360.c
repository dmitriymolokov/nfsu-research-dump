/* Decompiled from Speed.exe @ 0050d360 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0050d360(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = FUN_004acce0();
  iVar5 = 0;
  if (iVar2 != 0x23) {
    if (iVar2 * 0xc90 + DAT_00734588 == 0) {
      return 0;
    }
    iVar5 = FUN_00567c70();
  }
  puVar1 = DAT_0073ad40;
  puVar3 = (undefined4 *)FUN_0040a880();
  while( true ) {
    if (puVar1 == puVar3) {
      return 0;
    }
    uVar4 = puVar1[3];
    uVar6 = puVar1[4] * 0x30 + uVar4;
    if ((iVar5 != 0) && (uVar4 = FUN_0053e400(iVar5,uVar4,4), uVar4 == 0)) break;
    for (; uVar4 < uVar6; uVar4 = uVar4 + 0x30) {
      if ((iVar5 != 0) && (*(int *)(uVar4 + 4) != iVar5)) {
        return 0;
      }
      if (*(char *)(uVar4 + 0x10) == '\x11') {
        return uVar4;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  }
  return 0;
}

