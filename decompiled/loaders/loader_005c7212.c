/* Decompiled from Speed.exe @ 005c7212 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_005c7212(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *local_48;
  int local_44;
  int local_40;
  uint local_8;
  
  puVar5 = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    return;
  }
  local_8 = param_3;
  puVar1 = local_48;
  while (local_48 = puVar1, local_8 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    local_8 = local_8 - 1;
    if (puVar1 == (undefined4 *)0x0) {
      pcVar8 = "internal error: stack underflow";
      goto LAB_005c757d;
    }
    (&local_48)[local_8] = (undefined4 *)puVar1[2];
    *(undefined4 *)(param_1 + 0x40) = puVar1[3];
    puVar1[2] = 0;
    puVar1[3] = 0;
    (**(code **)*puVar1)(1);
    puVar1 = local_48;
  }
  switch(param_2) {
  case 0:
    FUN_005c655e(puVar1[6],1);
    break;
  case 1:
    FUN_005c67cc(puVar1[6]);
    break;
  case 2:
    uVar7 = 0;
    goto LAB_005c72ab;
  case 3:
    uVar7 = *(undefined4 *)(local_44 + 0x18);
LAB_005c72ab:
    FUN_005c5acd(puVar1[6],uVar7);
    break;
  case 4:
    FUN_005c5af6();
    break;
  case 5:
    FUN_005c5cbe();
    break;
  case 6:
    uVar2 = puVar1[6];
    goto LAB_005c7303;
  case 7:
    uVar2 = FUN_005c6455(puVar1[6],0,0);
    goto LAB_005c7303;
  case 8:
    iVar4 = FUN_005c6455(puVar1[6],0,0);
    uVar2 = (uint)(iVar4 == 0);
LAB_005c7303:
    FUN_005c5d94(uVar2);
    break;
  case 9:
    FUN_005c5dec(puVar1[6]);
    break;
  case 10:
    FUN_005c5e5f();
    break;
  case 0xb:
    FUN_005c5ec1();
    break;
  case 0xc:
    FUN_005c5d94(1);
    goto LAB_005c734d;
  case 0xd:
    FUN_005c5dec(1);
LAB_005c734d:
    FUN_005b1a6c();
    break;
  case 0xe:
    FUN_005c683a();
    break;
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1d:
  case 0x22:
  case 0x25:
  case 0x27:
  case 0x29:
  case 0x2b:
    local_48 = (undefined4 *)0x0;
    puVar5 = puVar1;
    break;
  case 0x11:
    local_48 = (undefined4 *)0x0;
    puVar1[4] = 2;
    uVar2 = FUN_005c68b4(puVar1[6]);
    goto LAB_005c73e1;
  case 0x12:
    local_48 = (undefined4 *)0x0;
    puVar1[4] = 2;
    uVar2 = FUN_005c6455(puVar1[6],0,0);
    goto LAB_005c73e1;
  case 0x14:
    local_48 = (undefined4 *)0x0;
    uVar2 = (uint)(puVar1[6] == 0);
    goto LAB_005c73e1;
  case 0x15:
    puVar1[6] = -puVar1[6];
    local_48 = (undefined4 *)0x0;
    puVar5 = puVar1;
    break;
  case 0x18:
    uVar2 = *(int *)(local_44 + 0x18) * puVar1[6];
    local_48 = (undefined4 *)0x0;
    goto LAB_005c73e1;
  case 0x19:
    local_48 = (undefined4 *)0x0;
    if (*(uint *)(local_44 + 0x18) == 0) {
      FUN_005b1f01(param_1 + 4,param_1 + 0x60,0x5df,"division by zero in preprocessor expression");
      *(undefined4 *)(param_1 + 0x2c) = 1;
      puVar5 = puVar1;
      break;
    }
    uVar2 = (uint)puVar1[6] / *(uint *)(local_44 + 0x18);
    goto LAB_005c73e1;
  case 0x1b:
    puVar1[6] = puVar1[6] + *(int *)(local_44 + 0x18);
    local_48 = (undefined4 *)0x0;
    puVar5 = puVar1;
    break;
  case 0x1c:
    puVar1[6] = puVar1[6] - *(int *)(local_44 + 0x18);
    local_48 = (undefined4 *)0x0;
    puVar5 = puVar1;
    break;
  case 0x1e:
    bVar6 = (uint)puVar1[6] < *(uint *)(local_44 + 0x18);
    goto LAB_005c7443;
  case 0x1f:
    bVar6 = *(uint *)(local_44 + 0x18) < (uint)puVar1[6];
LAB_005c7443:
    uVar2 = (uint)bVar6;
    local_48 = (undefined4 *)0x0;
    goto LAB_005c73e1;
  case 0x20:
    bVar6 = *(uint *)(local_44 + 0x18) < (uint)puVar1[6];
    goto LAB_005c7476;
  case 0x21:
    bVar6 = (uint)puVar1[6] < *(uint *)(local_44 + 0x18);
    goto LAB_005c7476;
  case 0x23:
    bVar6 = puVar1[6] != *(int *)(local_44 + 0x18);
LAB_005c7476:
    local_48 = (undefined4 *)0x0;
    uVar2 = 1 - bVar6;
    goto LAB_005c73e1;
  case 0x24:
    local_48 = (undefined4 *)0x0;
    puVar1[6] = (uint)(puVar1[6] != *(int *)(local_44 + 0x18));
    puVar5 = puVar1;
    break;
  case 0x26:
    local_48 = (undefined4 *)0x0;
    if (puVar1[6] != 0) {
LAB_005c74b5:
      if (*(int *)(local_44 + 0x18) != 0) goto LAB_005c74cf;
    }
    local_48 = (undefined4 *)0x0;
    uVar2 = 0;
    goto LAB_005c73e1;
  case 0x28:
    local_48 = (undefined4 *)0x0;
    if (puVar1[6] == 0) goto LAB_005c74b5;
LAB_005c74cf:
    local_48 = (undefined4 *)0x0;
    uVar2 = 1;
    goto LAB_005c73e1;
  case 0x2a:
    local_48 = (undefined4 *)0x0;
    if (puVar1[6] == 0) {
      local_44 = local_40;
    }
    uVar2 = *(uint *)(local_44 + 0x18);
LAB_005c73e1:
    puVar1[6] = uVar2;
    puVar5 = puVar1;
    break;
  case 0x2c:
  case 0x2d:
  case 0x2e:
    pvVar3 = _malloc(0x30);
    if (pvVar3 == (void *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_005d7ac2(param_1 + 0x60);
    }
    FUN_005c652b(puVar5);
  }
  param_2 = 0;
  if (param_3 != 0) {
    do {
      if ((&local_48)[param_2] != (undefined4 *)0x0) {
        (**(code **)*(&local_48)[param_2])(1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    pvVar3 = _malloc(0x14);
    if (pvVar3 == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_005d78db(puVar5,*(undefined4 *)(param_1 + 0x40),"Stack");
    }
    if (iVar4 == 0) {
      pcVar8 = "internal error: out of memory";
LAB_005c757d:
      FUN_005b1f01(param_1 + 4,param_1 + 0x60,0,pcVar8);
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    else {
      *(int *)(param_1 + 0x40) = iVar4;
    }
  }
  else if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1);
  }
  return;
}

