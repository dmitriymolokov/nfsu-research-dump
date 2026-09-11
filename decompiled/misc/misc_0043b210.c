/* Decompiled from Speed.exe @ 0043b210 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043b3e7) */

void __thiscall FUN_0043b210(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_2c;
  char local_9;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_0043b930(param_2);
  }
  if (DAT_0073465c == 0) {
    iVar1 = FUN_004ab510();
    FUN_00548840(DAT_00777cc8 & 0xff);
    FUN_00548840((int)*(short *)(iVar1 + 8));
    FUN_00548840(*(undefined1 *)(iVar1 + 0xc));
    FUN_00548840(*(undefined1 *)(iVar1 + 0x1f));
    FUN_00436f10();
    FUN_00436f10();
    local_9 = DAT_00777cc8 == 6;
  }
  else {
    FUN_00548840((undefined1)DAT_0078a30c);
    FUN_00548840((int)(short)DAT_0078a2f0);
    FUN_00548840((undefined1)DAT_0078a2fc);
    FUN_00548840((undefined1)DAT_0078a400);
    FUN_00436f10();
    FUN_00436f10();
    local_9 = FUN_0041f600();
  }
  if ((int)DAT_00779814 < 0) {
    if (local_9 == '\0') {
      local_2c = FUN_0047c010(&DAT_00779800);
    }
    else {
      local_2c = FUN_0047c010(&DAT_00779800);
    }
    DAT_00779814 = FUN_00564a50(local_2c);
  }
  FUN_00548840(DAT_00779814 & 0xff);
  return;
}

