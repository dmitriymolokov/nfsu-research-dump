/* Decompiled from Speed.exe @ 0043aba0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043aba0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if (*param_1 == 2) {
    puVar3 = &DAT_00734718;
    uVar2 = FUN_0043a340(&DAT_00734718);
    FUN_0043b560(0,0,uVar2,puVar3);
    if ((DAT_0073465c == 0) && (cVar1 = FUN_0043a340(), cVar1 != '\0')) {
      FUN_0043b900();
    }
    FUN_00546600();
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    FUN_004390d0(3);
  }
  return;
}

