/* Decompiled from Speed.exe @ 006504e0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_006504e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  FUN_0064e520();
  if (((param_1 < (int)(uint)DAT_00713db6) && (-1 < param_1)) &&
     (puVar1 = (undefined4 *)(&DAT_00713cf0)[param_1], puVar1 != (undefined4 *)0x0)) {
    if (-1 < (int)puVar1[1]) {
      FUN_006558f0(puVar1[2]);
    }
    puVar1[1] = 0xffffffff;
    if (*(char *)((int)puVar1 + 0x11) == '\0') {
      FUN_00412cd0(*puVar1);
    }
    puVar2 = puVar1 + 0x30;
    if ((puVar1[0x30] != 0) && (iVar3 = 0, *(char *)((int)puVar1 + 0x3e) != '\0')) {
      do {
        FUN_006510d0(*puVar2);
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar3 < (int)(uint)*(byte *)((int)puVar1 + 0x3e));
    }
    while( true ) {
      iVar3 = FUN_00655b10(puVar1 + 0x50);
      if (iVar3 == 0) break;
      FUN_00655ab0(puVar1 + 0x53,iVar3);
    }
    puVar1[0x56] = 0;
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_00654cd0(puVar1 + 0xe,4);
    FUN_00654cd0(puVar1 + 0xf,4);
    FUN_00654cd0(puVar1 + 0x10,0x68);
    FUN_00654cd0(puVar1 + 0x2a,0x68);
    FUN_0064e540();
    return 0;
  }
  FUN_0064e540();
  return 0xfffffff8;
}

