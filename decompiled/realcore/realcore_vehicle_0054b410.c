/* Decompiled from Speed.exe @ 0054b410 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0054b410(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined1 local_108;
  undefined4 local_107;
  
  if (*(int *)(unaff_ESI + 0x68) == 0) {
    return 0xffffffff;
  }
  puVar3 = &local_107;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_108 = 0;
  FUN_00667950(&local_108,0x100,&DAT_006bd3bc,&DAT_007346d8);
  FUN_00667950(&local_108,0x100,&DAT_006bd3c4,&DAT_00734718);
  uVar1 = FUN_00662960();
  FUN_00667950(&local_108,0x100,&DAT_006bd330,uVar1);
  if (DAT_0073d8d0 != 0) {
    FUN_00664e00(DAT_0073d8d0,0x70657273,&local_108,FUN_0054c400,0);
  }
  FUN_00665660(*(undefined4 *)(unaff_ESI + 0x68));
  _DAT_0073dda4 = DAT_0073dda0;
  DAT_0073dda0 = 7;
  return 0;
}

