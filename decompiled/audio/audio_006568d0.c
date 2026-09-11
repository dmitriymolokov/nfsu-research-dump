/* Decompiled from Speed.exe @ 006568d0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006568d0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  FUN_0065b5d0(&LAB_006564f0);
  FUN_0065b5e0(&LAB_00656500);
  DAT_0071646f = 0;
  _DAT_00716460 = *param_1;
  _DAT_00716464 = param_1[1];
  DAT_00716468 = param_1[2];
  FUN_0064e520();
  puVar3 = &DAT_0071653c;
  do {
    uVar1 = FUN_00650fd0(0x20bc);
    puVar3[-2] = uVar1;
    uVar1 = uVar1 + 8;
    *puVar3 = uVar1;
    uVar2 = _DAT_00716464;
    while (_DAT_00716464 = uVar2, (uVar1 & 0x3f) != 0) {
      uVar1 = *puVar3 + 4;
      *puVar3 = uVar1;
      uVar2 = _DAT_00716464;
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x716544);
  DAT_00716466 = (char)(uVar2 >> 0x10);
  bVar7 = DAT_00716466 != '\0';
  if (bVar7) {
    DAT_00716574 = FUN_00650fd0((uVar2 >> 8 & 0xff) << 9);
  }
  iVar5 = 0;
  if (DAT_00716465 != '\0') {
    puVar3 = &DAT_0071655c;
    do {
      uVar2 = FUN_00650fd0(0x440);
      puVar3[-6] = uVar2;
      *puVar3 = uVar2;
      while ((uVar2 & 0x3f) != 0) {
        uVar2 = *puVar3 + 4;
        *puVar3 = uVar2;
      }
      iVar5 = iVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar5 < (int)(_DAT_00716464 >> 8 & 0xff));
  }
  if (DAT_00716464 != '\0') {
    DAT_0071666c = FUN_00650fd0((_DAT_00716464 & 0xff) * 0x60);
    FUN_00654cd0(DAT_0071666c,(_DAT_00716464 & 0xff) * 0x60);
  }
  FUN_0064e540();
  FUN_0065b580();
  FUN_0065b540();
  FUN_0065b500();
  FUN_0065b490();
  if ((DAT_00713eeb & 4) == 0) {
    DAT_00716674 = FUN_0065a9a0;
    DAT_00716670 = FUN_0065a900;
    if ((DAT_00713eeb & 2) == 0) {
      DAT_00716670 = FUN_0065a880;
    }
  }
  else {
    DAT_00716670 = FUN_0065aad0;
    DAT_00716674 = FUN_0065aa20;
  }
  DAT_0071646c = 0x200;
  if (DAT_00716466 != '\0') {
    DAT_0071646c = (ushort)DAT_00716465 << 9;
  }
  iVar5 = 0;
  if (DAT_00716465 != 0) {
    puVar6 = &DAT_00716594;
    puVar4 = &DAT_007165c4;
    do {
      *puVar6 = 0;
      FUN_0065b470(puVar4);
      *(undefined2 *)(puVar4 + 0x18) = 0;
      puVar4[0x1a] = 0;
      FUN_006577e0(puVar6,puVar4);
      FUN_00654cd0(puVar6[-0xe],0x400);
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 0x1c;
      puVar6 = puVar6 + 1;
    } while (iVar5 < (int)(_DAT_00716464 >> 8 & 0xff));
  }
  return;
}

