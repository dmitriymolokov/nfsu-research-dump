/* Decompiled from Speed.exe @ 00466970 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466970(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  DAT_0072cbf8 = (undefined4 *)FUN_00566dc0(0x410,"WorldObjectCollisionBodySlotPool",0);
  if ((DAT_0072cbf8 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_0072cbf8;
    puVar1 = DAT_0072cbf8;
    DAT_0072cbf8[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0072cbf8 = &DAT_0073d818;
  }
  DAT_0072cbf0 = (undefined4 *)FUN_00566dc0(400,"CarCollisionBodySlotPool",0);
  if ((DAT_0072cbf0 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_0072cbf0;
    puVar1 = DAT_0072cbf0;
    DAT_0072cbf0[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0072cbf0 = &DAT_0073d818;
  }
  DAT_0072cbf4 = (undefined4 *)FUN_00566dc0(0x270,"TrackPolygonCollisionBodySlotPool",0);
  if ((DAT_0072cbf4 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_0072cbf4;
    puVar1 = DAT_0072cbf4;
    DAT_0072cbf4[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0072cbf4 = &DAT_0073d818;
  }
  DAT_0072cc00 = (undefined4 *)FUN_00566dc0(0x280,"CollisionBodyWitnessSlotPool",0);
  if ((DAT_0072cc00 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_0072cc00;
    puVar1 = DAT_0072cc00;
    DAT_0072cc00[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0072cc00 = &DAT_0073d818;
  }
  DAT_0072cc04 = (undefined4 *)FUN_00566dc0(0x10,"SubworldObjectsSlotPool",0);
  if ((DAT_0072cc04 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_0072cc04;
    puVar1 = DAT_0072cc04;
    DAT_0072cc04[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0072cc04 = &DAT_0073d818;
  }
  DAT_0072cc08 = (undefined4 *)FUN_00566dc0(0x28,"SubworldSlotPool",0);
  if ((DAT_0072cc08 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_0072cc08;
    puVar1 = DAT_0072cc08;
    DAT_0072cc08[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0072cc08 = &DAT_0073d818;
  }
  puVar1 = _malloc(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0xde;
    puVar2 = _malloc(0x1b);
    puVar1[1] = puVar2;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 2) = 0;
    puVar1[2] = 0;
  }
  DAT_00736070 = puVar1;
  DAT_00736050 = _malloc(0x378);
  puVar1 = DAT_00736050;
  for (iVar3 = 0xde; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  _DAT_00779bf0 = 0x3f800000;
  _DAT_00779bf4 = 0;
  _DAT_00779bf8 = 0;
  _DAT_00779bfc = 0;
  _DAT_00779c00 = 0;
  _DAT_00779c04 = 0x3f800000;
  _DAT_00779c08 = 0;
  _DAT_00779c0c = 0;
  _DAT_00779c10 = 0;
  _DAT_00779c14 = 0;
  _DAT_00779c18 = 0x3f800000;
  _DAT_00779c1c = 0;
  _DAT_00779c20 = 0;
  _DAT_00779c24 = 0;
  _DAT_00779c28 = 0;
  _DAT_00779c2c = 0x3f800000;
  puVar1 = &DAT_00779c30;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  DAT_0072cbfc = _malloc(0x1810);
  puVar1 = DAT_0072cbfc;
  for (iVar3 = 0x604; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  return;
}

