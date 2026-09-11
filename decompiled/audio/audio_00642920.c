/* Decompiled from Speed.exe @ 00642920 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00642920(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 local_104;
  undefined1 local_102;
  undefined1 local_100 [256];
  
  local_104 = DAT_006a9180;
  local_102 = DAT_006a9182;
  FUN_00642830(local_100);
  pcVar1 = (char *)FUN_00674b68(local_100,&local_104);
  do {
    if (pcVar1 == (char *)0x0) {
      return;
    }
    if (*pcVar1 == '-') {
      iVar2 = FUN_006428a0(pcVar1 + 1);
      if (-1 < iVar2) {
        uVar3 = *(uint *)(&DAT_006e80d8 + iVar2 * 0xc) & 0xfffffffe;
LAB_006429ab:
        *(uint *)(&DAT_006e80d8 + iVar2 * 0xc) = uVar3;
      }
    }
    else {
      iVar2 = FUN_006428a0(pcVar1);
      if (-1 < iVar2) {
        uVar3 = *(uint *)(&DAT_006e80d8 + iVar2 * 0xc) | 1;
        goto LAB_006429ab;
      }
    }
    pcVar1 = (char *)FUN_00674b68(0,&local_104);
  } while( true );
}

