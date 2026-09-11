/* Decompiled from Speed.exe @ 004319b4 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void switchD_0043197d::caseD_75(void)

{
  char cVar1;
  undefined1 uVar2;
  int unaff_ESI;
  
  cVar1 = FUN_0042ab30();
  if (cVar1 != '\0') {
    *(byte *)(unaff_ESI + 0x124) = *(byte *)(unaff_ESI + 0x124) ^ 1;
    return;
  }
  if (((_DAT_006cc7bc < (float)(DAT_0073ad3c - *(int *)(unaff_ESI + 0xa0)) * _DAT_006cca38) &&
      (((*(int *)(unaff_ESI + 0x278) == 2 || (*(int *)(unaff_ESI + 0x278) == 3)) &&
       (*(int *)(unaff_ESI + 0x27c) != 0)))) && (*(int *)(*(int *)(unaff_ESI + 0x27c) + 0x14) != 0))
  {
    uVar2 = FUN_0042e020();
    *(undefined1 *)(unaff_ESI + 0x24) = uVar2;
    return;
  }
  return;
}

