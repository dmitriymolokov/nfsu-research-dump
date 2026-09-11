/* Decompiled from Speed.exe @ 00431100 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431100(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  _DAT_0073654c = 0;
  *(undefined1 *)(unaff_ESI + 0x270) = 0;
  FUN_0042c6d0(unaff_ESI,0,0);
  if (*(undefined4 **)(unaff_ESI + 0x280) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x280))(1);
    *(undefined4 *)(unaff_ESI + 0x280) = 0;
  }
  if (*(undefined4 **)(unaff_ESI + 0x284) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 0x284))(1);
    *(undefined4 *)(unaff_ESI + 0x284) = 0;
  }
  FUN_0042d520(0);
  *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0x18) = 0;
  puVar1 = *(undefined4 **)(unaff_ESI + 400);
  *(undefined4 *)(unaff_ESI + 4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0042ac80();
    iVar3 = DAT_0073557c;
    iVar2 = *(int *)(DAT_0073557c + 0x18);
    *puVar1 = *(undefined4 *)(DAT_0073557c + 0x10);
    *(int *)(iVar3 + 0x18) = iVar2 + -1;
    *(undefined4 **)(iVar3 + 0x10) = puVar1;
  }
  *(undefined4 *)(unaff_ESI + 400) = 0;
  return;
}

