/* Decompiled from Speed.exe @ 0040b340 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040b340(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (DAT_00700e74 != 0) {
    (**(code **)(*DAT_0073636c + 100))(DAT_0073636c,DAT_00702a84,1,1,DAT_00702a88,0,&DAT_0073646c,0)
    ;
    iVar1 = 0;
    do {
      (**(code **)(*DAT_0073646c + 0x48))(DAT_0073646c,iVar1,0,&DAT_0071ab6c + iVar1);
      (**(code **)(*DAT_0073646c + 8))(DAT_0073646c);
      (**(code **)(*DAT_0073636c + 0x74))
                (DAT_0073636c,DAT_00702a84,DAT_00702a84,DAT_00702a8c,0,0,0,&DAT_0071ab84 + iVar1,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 6);
    return;
  }
  puVar2 = &DAT_0071ab84;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = &DAT_0071ab6c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_0073646c = (int *)0x0;
  return;
}

