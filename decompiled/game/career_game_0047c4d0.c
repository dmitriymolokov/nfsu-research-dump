/* Decompiled from Speed.exe @ 0047c4d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047c4d0(void)

{
  int iVar1;
  void *_Memory;
  undefined4 *puVar2;
  int *piVar3;
  int local_4;
  
  puVar2 = &DAT_007798f8;
  do {
    piVar3 = puVar2 + -2;
    local_4 = 2;
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
        if (*(void **)(iVar1 + 0x14) != (void *)0x0) {
          _free(*(void **)(iVar1 + 0x14));
          *(undefined4 *)(iVar1 + 0x14) = 0;
        }
        *(undefined4 *)(iVar1 + 0x18) = 0;
        if (*(int *)(iVar1 + 0x1c) != 0) {
          (*(code *)PTR_FUN_006dfaa0)(*(int *)(iVar1 + 0x1c),0x40);
          *(undefined4 *)(iVar1 + 0x1c) = 0;
        }
        *(undefined4 *)(iVar1 + 0x20) = 0;
        FUN_0047b1c0();
        _Memory = (void *)*piVar3;
        if (_Memory != (void *)0x0) {
          FUN_0047b0b0(_Memory);
          _free(_Memory);
        }
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0xffffffff;
    puVar2 = puVar2 + 6;
  } while ((int)puVar2 < 0x779958);
  return;
}

