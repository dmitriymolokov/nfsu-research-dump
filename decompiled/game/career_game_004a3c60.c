/* Decompiled from Speed.exe @ 004a3c60 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a3c60(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  float10 fVar6;
  
  if ((*(uint *)(param_1 + 0x18) & *(uint *)(param_1 + 0x10)) == 0 &&
      (*(uint *)(param_1 + 0x1c) & *(uint *)(param_1 + 0x14)) == 0) {
    return;
  }
  cVar4 = *(char *)(param_2 + 0x4ac);
  cVar3 = FUN_0043a2e0();
  if (cVar3 == '\0') {
    FUN_004f6910();
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      puVar2 = DAT_00735710;
      bVar5 = DAT_00735710 != (undefined4 *)0x0;
      *(undefined4 *)(iVar1 + 0x5c) = 0x49a8afc;
      if (bVar5) {
        (**(code **)*puVar2)();
      }
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffd | 0x400000;
    }
  }
  else {
    FUN_00439a50();
    if (0 < param_1) {
      fVar6 = (float10)FUN_004f66f0();
      FUN_004f68a0("%1.1f",(double)fVar6);
      FUN_004f6970(*(undefined4 *)(param_1 + 0x28));
      goto LAB_004a3d3d;
    }
    FUN_004f6910();
  }
  if (cVar4 == '\0') {
    FUN_004f6910();
    if ((*(char *)(param_1 + 0x2c) != '\0') && (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) {
      FUN_004f6b70("FadeOut",1);
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    if ((*(char *)(param_1 + 0x2d) != '\0') && (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) {
      FUN_004f6b70("FadeOut",1);
      *(undefined1 *)(param_1 + 0x2d) = 0;
    }
    if (*(char *)(param_1 + 0x2c) != '\0') {
      return;
    }
    cVar4 = FUN_004f6ce0();
    if (cVar4 == '\0') {
      FUN_004f6910();
    }
    if (*(char *)(param_1 + 0x2c) != '\0') {
      return;
    }
    cVar4 = FUN_004f6ce0();
    if (cVar4 != '\0') {
      return;
    }
    FUN_004f6910();
    return;
  }
LAB_004a3d3d:
  if ((*(char *)(param_1 + 0x2c) == '\0') && (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) {
    FUN_004f6970();
    FUN_004f6b70("FadeIn",1);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  if ((*(char *)(param_1 + 0x2d) == '\0') && (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) {
    FUN_004f6970();
    FUN_004f6b70("FadeIn",1);
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  if (((*(char *)(param_1 + 0x2c) != '\0') && (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) &&
     (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) {
    FUN_004f6b70("Blink",1);
  }
  if (((*(char *)(param_1 + 0x2d) != '\0') && (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) &&
     (cVar4 = FUN_004f6ce0(), cVar4 == '\0')) {
    FUN_004f6b70("Blink",1);
    return;
  }
  return;
}

