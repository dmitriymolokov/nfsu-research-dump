/* Decompiled from Speed.exe @ 0054d6b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall
FUN_0054d6b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,char param_8,char param_9,
            char param_10,undefined4 param_11)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_420;
  undefined1 local_41f;
  undefined1 local_41c;
  undefined2 local_41b;
  undefined1 local_418;
  undefined4 local_417;
  undefined4 local_413;
  undefined4 local_40f;
  undefined2 local_40b;
  undefined1 local_409;
  undefined1 local_408;
  undefined4 local_407;
  
  local_417 = 0;
  local_413 = 0;
  local_40f = 0;
  local_40b = 0;
  local_409 = 0;
  local_418 = 0;
  FUN_00565da0("%04d%02d%02d",param_7,param_2,param_1);
  local_420 = 0;
  local_41f = 0;
  FUN_00565da0(&DAT_006c7408,(int)(char)(((param_8 == '\0') - 1U & 7) + 0x46));
  local_41c = 0;
  local_41b = 0;
  FUN_00565da0(&DAT_006bd1d4,(int)(char)(((param_9 == '\0') - 1U & 0xb) + 0x4e),
               (int)(char)(((param_10 == '\0') - 1U & 0xb) + 0x4e));
  puVar3 = &local_407;
  for (iVar2 = 0xff; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_408 = 0;
  FUN_00667950(&local_408,0x400,&DAT_006bd3bc,param_3);
  FUN_00667950(&local_408,0x400,&DAT_006bd1cc,param_4);
  FUN_00667950(&local_408,0x400,&DAT_006bd1c4,param_5);
  FUN_00667950(&local_408,0x400,&DAT_006bd1bc,&local_418);
  FUN_00667950(&local_408,0x400,&DAT_006bd1b4,&local_420);
  FUN_00667950(&local_408,0x400,&DAT_006bd1ac,&local_41c);
  iVar2 = FUN_00449e20();
  if (iVar2 != 0) {
    uVar1 = FUN_00449e20();
    FUN_00667950(&local_408,0x400,&DAT_006bd380,uVar1);
  }
  iVar2 = FUN_00449d80();
  if (iVar2 != 0) {
    uVar1 = FUN_00449d80();
    FUN_00667950(&local_408,0x400,&DAT_006bd378,uVar1);
  }
  if (param_6 != 0) {
    FUN_00667950(&local_408,0x400,"PMAIL",param_6);
  }
  FUN_0054df00(&local_408,0x400);
  FUN_00664e00(DAT_00734f80,0x61636374,&local_408,&LAB_0054dc50,0);
  DAT_00734fc8 = param_11;
  return;
}

