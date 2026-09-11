/* Decompiled from Speed.exe @ 00530570 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00530570(void)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_EDX;
  undefined4 *unaff_ESI;
  
  FUN_0052e3f0();
  *unaff_ESI = &PTR_FUN_006be5b8;
  FUN_00532640();
  *(undefined1 *)(extraout_EDX + 0x78) = 1;
  *(undefined1 *)(unaff_ESI + 0xb4) = 4;
  *(undefined1 *)((int)unaff_ESI + 0x2d1) = 0xc;
  *(undefined1 *)((int)unaff_ESI + 0x2d2) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x2d3) = 0;
  unaff_ESI[0xb3] = &PTR_FUN_006b9694;
  unaff_ESI[0xb5] = 0;
  unaff_ESI[0xb6] = 0;
  unaff_ESI[0xb7] = unaff_ESI + 0xb8;
  puVar1 = _malloc(0x30);
  unaff_ESI[0xb7] = puVar1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  unaff_ESI[0xc9] = 0;
  unaff_ESI[0xca] = 0;
  *(undefined1 *)((int)unaff_ESI + 0x34e) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x34f) = 0;
  *(undefined1 *)(unaff_ESI + 0xd4) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x219) = 0;
  *(undefined1 *)(unaff_ESI + 0xbd) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x351) = 0;
  unaff_ESI[0x90] = 0;
  unaff_ESI[0x91] = 0;
  *(undefined1 *)(unaff_ESI + 0xd3) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x34d) = 0;
  *(undefined1 *)(unaff_ESI + 0x86) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x21a) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x21b) = 0;
  unaff_ESI[0x8c] = 0x3f800000;
  unaff_ESI[0x8d] = 0;
  unaff_ESI[0x8e] = 0;
  unaff_ESI[0x92] = 0;
  unaff_ESI[0x93] = 0;
  FUN_00584310(0);
  unaff_ESI[0xcc] = 0;
  unaff_ESI[0xcb] = 0;
  return;
}

