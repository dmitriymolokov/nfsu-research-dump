/* Decompiled from Speed.exe @ 0044aa10 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044aa10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  
  if (*(undefined4 **)(unaff_EDI + 0x3fc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EDI + 0x3fc))(1);
    *(undefined4 *)(unaff_EDI + 0x3fc) = 0;
  }
  switch(param_1) {
  case 1:
    iVar1 = FUN_00567160();
    if (iVar1 != 0) {
      uVar2 = FUN_0044a150(0xbf800000);
      *(undefined4 *)(unaff_EDI + 0x3fc) = uVar2;
      return;
    }
    break;
  case 2:
    iVar1 = FUN_00567160();
    if (iVar1 != 0) {
      uVar2 = FUN_0044a190(0xbf800000);
      *(undefined4 *)(unaff_EDI + 0x3fc) = uVar2;
      return;
    }
    break;
  case 3:
    iVar1 = FUN_00567160();
    if (iVar1 != 0) {
      uVar2 = FUN_0044a1c0(0xbf800000);
      *(undefined4 *)(unaff_EDI + 0x3fc) = uVar2;
      return;
    }
    break;
  case 4:
    iVar1 = FUN_00567160();
    if (iVar1 != 0) {
      uVar2 = FUN_0044a200(0xbf800000);
      *(undefined4 *)(unaff_EDI + 0x3fc) = uVar2;
      return;
    }
    break;
  case 5:
    iVar1 = FUN_00567160();
    if (iVar1 != 0) {
      uVar2 = FUN_0044a230(0xbf800000);
      *(undefined4 *)(unaff_EDI + 0x3fc) = uVar2;
      return;
    }
    break;
  default:
    puVar3 = (undefined4 *)FUN_00567160();
    if (puVar3 == (undefined4 *)0x0) {
      *(undefined4 *)(unaff_EDI + 0x3fc) = 0;
      return;
    }
    FUN_0044a080(0xbf800000);
    puVar3[5] = 5;
    *puVar3 = &PTR_FUN_006c97b4;
    *(undefined4 **)(unaff_EDI + 0x3fc) = puVar3;
    return;
  }
  *(undefined4 *)(unaff_EDI + 0x3fc) = 0;
  return;
}

