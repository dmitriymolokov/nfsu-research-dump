/* Decompiled from Speed.exe @ 0043b400 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0043b400(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_780 [16];
  undefined1 local_770;
  char local_76f;
  char local_76d;
  undefined1 local_3c;
  
  FUN_00431dd0();
  iVar2 = FUN_00432830();
  if (param_1 != iVar2) {
    FUN_0043cad0(&local_770,param_2);
    FUN_00548a30(param_2);
    local_3c = 1;
    local_76d = local_76f + '\x01';
    FUN_004322a0(&DAT_0078a2f0);
    cVar1 = FUN_00424c70();
    if ((cVar1 != '\0') || (cVar1 = FUN_00424c80(), cVar1 != '\0')) {
      FUN_0043b560((int)local_76f,param_2,0,local_780);
    }
  }
  return;
}

