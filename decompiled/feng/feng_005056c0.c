/* Decompiled from Speed.exe @ 005056c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_005056c0(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  
  if (DAT_00735ec1 != '\0') {
    return 1;
  }
  iVar4 = FUN_0057ce10(0,param_1,0,0,0xffffffff);
  uVar2 = DAT_0073766c;
  do {
    if (iVar4 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(iVar4 + 0x11);
    if ((bVar1 != 0) && (cVar3 = FUN_005a3570(&DAT_0075f344), cVar3 != '\0')) {
      return 1;
    }
    if ((DAT_00745e40 == 2) && (uVar5 = 0, uVar2 != 0)) {
      puVar6 = (uint *)(DAT_00737668 + 0x24);
      do {
        if ((puVar6[-1] == 1) && (*puVar6 == (uint)bVar1)) {
          if (*(char *)(uVar5 * 0x34 + 0x30 + DAT_00737668) != '\0') {
            return 1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 0xd;
      } while (uVar5 < uVar2);
    }
    iVar4 = FUN_0057ce10(0,param_1,0,iVar4,0xffffffff);
  } while( true );
}

