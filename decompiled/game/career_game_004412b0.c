/* Decompiled from Speed.exe @ 004412b0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004412b0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  DAT_00736184 = (undefined4 *)FUN_00566dc0(0x80,"TrackPolygonSlotPool",0);
  if ((DAT_00736184 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00736184;
    puVar2 = DAT_00736184;
    DAT_00736184[1] = DAT_0073d81c;
    DAT_0073d81c = puVar2;
    *DAT_00736184 = &DAT_0073d818;
  }
  uVar1 = DAT_00736184[5];
  DAT_00736184[5] = uVar1 & 0xfffffffe;
  DAT_00736184[5] = uVar1 & 0xfffffffc;
  _DAT_00736178 = 0;
  _DAT_0073617c = 0;
  return;
}

