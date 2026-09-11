/* Decompiled from Speed.exe @ 004a83c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a83c0(void)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int unaff_EBX;
  int *_Memory;
  undefined4 uVar6;
  
  if ((*(uint *)(unaff_EBX + 0x18) & *(uint *)(unaff_EBX + 0x10)) != 0 ||
      (*(uint *)(unaff_EBX + 0x1c) & *(uint *)(unaff_EBX + 0x14)) != 0) {
    *(undefined4 *)(unaff_EBX + 0x44) =
         *(undefined4 *)((&DAT_007361b4)[*(int *)(unaff_EBX + 0x54)] + 0x9dc);
    if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
      iVar5 = *(int *)(*(int *)((&DAT_007361b4)[*(int *)(unaff_EBX + 0x54)] + 0x95c) + 0x2c);
      FUN_004f6910(*(undefined4 *)(iVar5 + 0x90));
      FUN_004f6910(*(undefined4 *)(iVar5 + 0x8c));
      if (*(char *)(iVar5 + 0x40) != '\0') {
        FUN_004a87b0(unaff_EBX,*(undefined4 *)(iVar5 + 0x8c));
        if (*(char *)(iVar5 + 0x41) == '\0') {
          *(undefined1 *)(iVar5 + 0x40) = 0;
          *(undefined4 *)(iVar5 + 0x38) = 0;
        }
        else if (_DAT_006b6b78 < (float)(DAT_0073ad34 - *(int *)(iVar5 + 0x38)) * _DAT_006cca38) {
          *(undefined1 *)(iVar5 + 0x40) = 0;
          *(undefined4 *)(iVar5 + 0x38) = 0;
          FUN_004f6910(*(undefined4 *)(iVar5 + 0x90));
          FUN_004f6910(*(undefined4 *)(iVar5 + 0x8c));
        }
      }
    }
    piVar3 = *(int **)(unaff_EBX + 0x20);
    piVar1 = (int *)(unaff_EBX + 0x20);
    if (piVar3 == piVar1) {
      FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x3c));
      FUN_004f6910(*(undefined4 *)(unaff_EBX + 0x40));
    }
    else {
      cVar2 = (char)piVar3[2];
      _Memory = piVar3;
      while (cVar2 != '\0') {
        if (_Memory == piVar1) goto LAB_004a84d5;
        _Memory = (int *)*_Memory;
        cVar2 = *(char *)(_Memory + 2);
      }
      if (_Memory == piVar1) {
LAB_004a84d5:
        _Memory = piVar3;
      }
      if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
        uVar6 = *(undefined4 *)(unaff_EBX + 0x3c);
      }
      else {
        uVar6 = 0;
      }
      FUN_004a87b0(unaff_EBX,uVar6);
      iVar5 = 0;
      for (piVar3 = (int *)*piVar1; (piVar3 != piVar1 && (iVar5 = iVar5 + 1, piVar3 != (int *)0x0));
          piVar3 = (int *)*piVar3) {
      }
      fVar4 = _DAT_006b6b78;
      if (1 < iVar5) {
        fVar4 = _DAT_006b6b74;
      }
      if ((fVar4 < (float)(DAT_0073ad34 - _Memory[6]) * _DAT_006cca38) ||
         (((char)_Memory[2] != '\0' && ((DAT_0078a345 != '\0' || (DAT_007361a4 != 0)))))) {
        iVar5 = *_Memory;
        piVar1 = (int *)_Memory[1];
        *piVar1 = iVar5;
        *(int **)(iVar5 + 4) = piVar1;
        _free(_Memory);
      }
    }
    if (*(float *)(unaff_EBX + 0x48) != *(float *)(unaff_EBX + 0x44)) {
      *(undefined4 *)(unaff_EBX + 0x48) = *(undefined4 *)(unaff_EBX + 0x44);
      uVar6 = FUN_00674898();
      FUN_004f68a0(&DAT_006ca778,uVar6);
      FUN_004f6b70("Highlight",1);
      FUN_004f6b70("Highlight",1);
    }
  }
  return;
}

