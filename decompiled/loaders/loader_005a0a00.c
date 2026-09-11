/* Decompiled from Speed.exe @ 005a0a00 */
/* Module: Loader */
/* Ghidra DecompileVAs */


void FUN_005a0a00(void)

{
  undefined1 *puVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  
  *(undefined4 *)(unaff_ESI + 0x13a4) = 0;
  FUN_004f42f0("CAREER_CAR");
  FUN_004acb90();
  puVar3 = (undefined4 *)(unaff_ESI + 0x34c);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(unaff_ESI + 0x1374) = 0;
  *(undefined4 *)(unaff_ESI + 0x1378) = 0;
  *(undefined4 *)(unaff_ESI + 0x137c) = 0;
  *(undefined4 *)(unaff_ESI + 0x1380) = 0;
  if (*(undefined4 **)(unaff_ESI + 0x88b0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x88b0))(1);
  }
  *(undefined4 *)(unaff_ESI + 0x88b0) = 0;
  *(undefined4 *)(unaff_ESI + 0x348) = 1;
  *(undefined2 *)(unaff_ESI + 0x1384) = 0;
  *(undefined1 *)(unaff_ESI + 0x1386) = 0;
  *(undefined1 *)(unaff_ESI + 4999) = 0;
  puVar1 = (undefined1 *)(unaff_ESI + 0x13a9);
  iVar2 = 0x1b;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 0x454;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(unaff_ESI + 0x88a0) = 0;
  *(undefined4 *)(unaff_ESI + 0x88a4) = 0;
  *(undefined4 *)(unaff_ESI + 0x88a8) = 0;
  *(undefined4 *)(unaff_ESI + 0x88ac) = 0;
  *(undefined1 *)(unaff_ESI + 0x889f) = 0;
  puVar3 = (undefined4 *)(unaff_ESI + 0x8884);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)(unaff_ESI + 0x138c) = 0;
  *(undefined4 *)(unaff_ESI + 5000) = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x1390) = 0;
  *(undefined4 *)(unaff_ESI + 0x1394) = 0;
  *(undefined4 *)(unaff_ESI + 0x1398) = 0;
  *(undefined4 *)(unaff_ESI + 0x139c) = 0;
  *(undefined4 *)(unaff_ESI + 0x13a0) = 0;
  puVar3 = (undefined4 *)(unaff_ESI + 0x450);
  for (iVar2 = 900; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(unaff_ESI + 0x1260);
  for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(unaff_ESI + 0x1370) = 0;
  *(undefined1 *)(unaff_ESI + 0x1371) = 0;
  puVar3 = (undefined4 *)(unaff_ESI + 0x1260);
  for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  return;
}

