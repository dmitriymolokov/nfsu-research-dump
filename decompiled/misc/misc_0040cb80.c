/* Decompiled from Speed.exe @ 0040cb80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040cb80(void)

{
  int *piVar1;
  int iVar2;
  
  DAT_00702a2c = DAT_00701034 / 2;
  DAT_00702a30 = DAT_00701038 / 2;
  if (DAT_00700e98 == 0) {
    DAT_0071ab9c = 0;
    DAT_0071aba8 = 0;
    DAT_0071aba0 = 0;
    DAT_0071abac = 0;
  }
  else {
    iVar2 = 0;
    do {
      (**(code **)(*DAT_0073636c + 0x5c))
                (DAT_0073636c,DAT_00702a2c,DAT_00702a30,1,1,DAT_00702a28,0,
                 (undefined4 *)((int)&DAT_0071ab9c + iVar2),0);
      piVar1 = *(int **)((int)&DAT_0071ab9c + iVar2);
      (**(code **)(*piVar1 + 0x48))(piVar1,0,(undefined4 *)((int)&DAT_0071aba8 + iVar2));
      (**(code **)(*DAT_0073636c + 0x94))
                (DAT_0073636c,0,*(undefined4 *)((int)&DAT_0071aba8 + iVar2));
      (**(code **)(*DAT_0073636c + 0xac))(DAT_0073636c,0,0,1,0,0,0);
      iVar2 = iVar2 + 4;
    } while (iVar2 < 8);
  }
  if (DAT_00700e9c == 0) {
    DAT_0071aba4 = (int *)0x0;
    DAT_0071abb0 = 0;
    return;
  }
  (**(code **)(*DAT_0073636c + 0x5c))
            (DAT_0073636c,DAT_00701034,DAT_00701038,1,1,DAT_00702a34,0,&DAT_0071aba4,0);
  (**(code **)(*DAT_0071aba4 + 0x48))(DAT_0071aba4,0,&DAT_0071abb0);
  (**(code **)(*DAT_0073636c + 0x94))(DAT_0073636c,0,DAT_0071abb0);
  (**(code **)(*DAT_0073636c + 0xac))(DAT_0073636c,0,0,1,0,0,0);
  return;
}

