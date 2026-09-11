/* Decompiled from Speed.exe @ 00455530 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00455530(void)

{
  undefined4 *puVar1;
  
  DAT_0073609c = (undefined4 *)FUN_00566dc0(0x18,"AIGoalSlotPool",0);
  if ((DAT_0073609c != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_0073609c;
    puVar1 = DAT_0073609c;
    DAT_0073609c[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_0073609c = &DAT_0073d818;
  }
  DAT_00736098 = (undefined4 *)FUN_00566dc0(0x220,"AIActionSlotPool",0);
  if ((DAT_00736098 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00736098;
    puVar1 = DAT_00736098;
    DAT_00736098[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00736098 = &DAT_0073d818;
  }
  DAT_00733f64 = (undefined4 *)FUN_00566dc0(0xc4,"FuturePointsSlotPool",0);
  if ((DAT_00733f64 != (undefined4 *)0x0) && (DAT_0073d814 == 1)) {
    *DAT_0073d81c = DAT_00733f64;
    puVar1 = DAT_00733f64;
    DAT_00733f64[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00733f64 = &DAT_0073d818;
  }
  DAT_00733f60 = (undefined4 *)FUN_00566dc0(0x70,"FuturePointSlotPool",0);
  if (DAT_00733f60 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_0073d814 == 1) {
    *DAT_0073d81c = DAT_00733f60;
    puVar1 = DAT_00733f60;
    DAT_00733f60[1] = DAT_0073d81c;
    DAT_0073d81c = puVar1;
    *DAT_00733f60 = &DAT_0073d818;
  }
  return;
}

