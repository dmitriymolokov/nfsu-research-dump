/* Decompiled from Speed.exe @ 0048c990 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0048c990(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 *unaff_EDI;
  bool bVar5;
  
  FUN_004834e0();
  unaff_EDI[0xb] = param_1;
  bVar5 = DAT_00735f5c == 0;
  *unaff_EDI = &PTR_FUN_006c7dc8;
  if (bVar5) {
    *(undefined4 *)(unaff_EDI[7] + 0x280) = 0;
  }
  uVar4 = DAT_006f0888;
  iVar1 = unaff_EDI[7];
  *(undefined1 *)(iVar1 + 0x270) = 1;
  *(undefined4 *)(iVar1 + 0x27c) = uVar4;
  puVar2 = _malloc(0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[9] = 0x3f800000;
    puVar2[10] = 0x3f800000;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    *(undefined2 *)((int)puVar2 + 0x2e) = 0;
  }
  unaff_EDI[0xc] = puVar2;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  unaff_EDI[0xd] = uVar4;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(0x3f800000,0x3f800000);
  }
  unaff_EDI[0xe] = uVar4;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(DAT_006b6f6c,0x3f800000);
  }
  unaff_EDI[0xf] = uVar4;
  puVar2 = _malloc(0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[9] = 0x3f800000;
    puVar2[10] = 0x3f800000;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    *(undefined2 *)((int)puVar2 + 0x2e) = 0;
  }
  unaff_EDI[0x10] = puVar2;
  pvVar3 = _malloc(0x30);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0048eb70();
  }
  unaff_EDI[0x11] = uVar4;
  unaff_EDI[0x15] = 0;
  *(undefined1 *)(unaff_EDI + 0x14) = 1;
  *(undefined1 *)((int)unaff_EDI + 0x51) = 1;
  FUN_0048ce30(unaff_EDI,1);
  return;
}

