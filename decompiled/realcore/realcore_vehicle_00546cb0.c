/* Decompiled from Speed.exe @ 00546cb0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00546cb0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  do {
    do {
      uVar2 = DAT_006f227c ^ 0x1d872b41;
      uVar3 = uVar2 >> 5 ^ uVar2;
      uVar1 = DAT_006f227c & 3;
      DAT_006f227c = uVar2 ^ uVar3 << 0x1b ^ uVar3;
    } while (uVar1 == DAT_006f3da0);
    puVar4 = &DAT_0073ddc0;
    while ((puVar4[1] == 0xffffffff || (*puVar4 != uVar1))) {
      puVar4 = puVar4 + 8;
      if (0x73de1f < (int)puVar4) {
        return;
      }
    }
  } while( true );
}

