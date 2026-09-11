/* Decompiled from Speed.exe @ 004b3a20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b3a20(int param_1)

{
  undefined4 *_Memory;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  _Memory = _malloc(0xc0);
  puVar6 = _Memory;
  for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar2 = 0;
  do {
    *(undefined **)(param_1 + iVar2 * 4) = PTR_DAT_006faf08;
    iVar5 = 0;
    do {
      uVar4 = DAT_006f227c % 0x30;
      uVar1 = DAT_006f227c ^ 0x1d872b41;
      uVar3 = uVar1 >> 5 ^ uVar1;
      DAT_006f227c = uVar3 << 0x1b ^ uVar3 ^ uVar1;
      if (_Memory[uVar4] == 0) {
        *(undefined **)(param_1 + iVar2 * 4) = (&PTR_DAT_006faf08)[uVar4];
        _Memory[uVar4] = 1;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 100);
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      _free(_Memory);
      return;
    }
  } while( true );
}

