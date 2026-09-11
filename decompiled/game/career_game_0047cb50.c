/* Decompiled from Speed.exe @ 0047cb50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047cb50(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  float local_368;
  undefined4 *local_358;
  int local_354;
  undefined1 auStack_350 [96];
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined1 local_2e0 [708];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0068600b;
  local_1c = ExceptionList;
  local_358 = (undefined4 *)(param_1 + 0x20);
  ExceptionList = &local_1c;
  *local_358 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  local_354 = param_1 + 0x60;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  local_370 = 0;
  local_36c = 0;
  local_368 = 0.0;
  local_37c = 0;
  iVar1 = FUN_0047cac0(param_1,&local_37c);
  if (iVar1 != 0) {
    FUN_004406d0();
    uStack_14 = 0;
    fVar2 = (float10)FUN_00440a40(local_2e0,&local_370,0,0,0);
    local_368 = (float)fVar2;
    FUN_004440c0(&local_370);
    uStack_378 = uStack_2f0;
    uStack_374 = uStack_2ec;
    FUN_00564db0(uStack_2f0,uStack_2ec);
    FUN_0040bbc0();
    FUN_00565020();
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x60) == 0) {
      FUN_00401c10(0x42b40000);
    }
    else {
      FUN_00401c10(0x42b40000);
    }
    FUN_0040baf0(auStack_350,auStack_350);
    FUN_00401cd0();
    thunk_FUN_005ac68f(local_358,auStack_350,(undefined4 *)(param_1 + 0xa0));
    FUN_00440710();
  }
  ExceptionList = local_1c;
  return;
}

