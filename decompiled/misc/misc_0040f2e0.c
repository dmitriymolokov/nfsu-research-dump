/* Decompiled from Speed.exe @ 0040f2e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040f2e0(void)

{
  undefined4 *puVar1;
  
  DAT_007364f0 = (undefined4 *)FUN_00566dc0(4,"eAnimTextureSlotPool",0);
  if ((DAT_007364f0 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007364f0;
    puVar1 = DAT_007364f0;
    DAT_007364f0[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007364f0 = &DAT_0073d818;
  }
  DAT_007364f0[5] = DAT_007364f0[5] & 0xfffffffd;
  DAT_007363d4 = (undefined4 *)FUN_00566dc0(0x20,"eTextureBucketSlotPool",0);
  if ((DAT_007363d4 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_007363d4;
    puVar1 = DAT_007363d4;
    DAT_007363d4[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007363d4 = &DAT_0073d818;
  }
  DAT_007363d4[5] = DAT_007363d4[5] & 0xfffffffd;
  DAT_007363d8 = (undefined4 *)FUN_00566dc0(0x2c,"eMeshRender",0);
  if (DAT_007363d8 == (undefined4 *)0x0) {
    uRam00000014 = uRam00000014 & 0xfffffffd;
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_007363d8;
    puVar1 = DAT_007363d8;
    DAT_007363d8[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_007363d8 = &DAT_0073d818;
  }
  DAT_007363d8[5] = DAT_007363d8[5] & 0xfffffffd;
  return;
}

