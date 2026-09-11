/* Decompiled from Speed.exe @ 00449ec0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00449efb) */
/* WARNING: Removing unreachable block (ram,0x00449f03) */

void FUN_00449ec0(void)

{
  int iVar1;
  undefined1 *unaff_EBX;
  undefined4 *puVar2;
  undefined4 local_63;
  
  puVar2 = &local_63;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_00565da0("%d.%d",1,4);
  *unaff_EBX = 0;
  return;
}

