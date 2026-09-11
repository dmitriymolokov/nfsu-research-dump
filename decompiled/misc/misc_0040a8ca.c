/* Decompiled from Speed.exe @ 0040a890 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0040a890(void)

{
  if (DAT_00700e90 == 0) {
    DAT_0071aa28 = (int *)0x0;
    DAT_0071ab68 = 0;
    DAT_0071ab64 = 0;
  }
  else {
    (**(code **)(*DAT_0073636c + 0x5c))(DAT_0073636c,0x140,0xf0,1,1,DAT_00702a94,0,&DAT_0071aa28,0);
    (**(code **)(*DAT_0071aa28 + 0x48))(DAT_0071aa28,0,&DAT_0071ab68);
    (**(code **)(*DAT_0073636c + 0x74))(DAT_0073636c,0x140,0xf0,DAT_00702a98,0,0,0,&DAT_0071ab64,0);
  }
  if (DAT_0073645c == 1) {
    (**(code **)(*DAT_0073636c + 0x5c))
              (DAT_0073636c,DAT_00701034,DAT_00701038,1,1,DAT_00702a80,0,&DAT_00736460,0);
    (**(code **)(*DAT_00736460 + 0x48))(DAT_00736460,0,&DAT_00736464);
    (**(code **)(*DAT_0073636c + 0x94))(DAT_0073636c,0,DAT_00736464);
    (**(code **)(*DAT_0073636c + 0xac))(DAT_0073636c,0,0,1,0,0,0);
  }
  else {
    DAT_00736460 = (int *)0x0;
    (**(code **)(*DAT_0073636c + 0x48))(DAT_0073636c,0,0,0,&DAT_00736464);
  }
  (**(code **)(*DAT_0073636c + 0xa0))(DAT_0073636c,&DAT_00736468);
  (**(code **)(*DAT_0073636c + 0x48))(DAT_0073636c,0,0,0,&DAT_00736374);
  (**(code **)(*DAT_0073636c + 0x5c))
            (DAT_0073636c,DAT_00702a9c,DAT_00702aa0,1,1,DAT_00702a94,0,&DAT_00736470,0);
  (**(code **)(*DAT_00736470 + 0x48))(DAT_00736470,0,&DAT_00736474);
  (**(code **)(*DAT_0073636c + 0x74))
            (DAT_0073636c,DAT_00702a9c,DAT_00702aa0,DAT_00702a98,0,0,0,&DAT_00736478,0);
  return;
}

