/* Decompiled from Speed.exe @ 005685d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_005685d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  puVar3 = &DAT_006f1fb4;
  do {
    if ((uint)puVar3[3] < 0x20) {
      iVar2 = (&DAT_00733f78)[puVar3[3]];
    }
    else {
      iVar2 = 0;
    }
    switch(*puVar3) {
    default:
      iVar2 = 0;
      break;
    case 1:
      iVar2 = *(int *)(iVar2 + 0x10);
      break;
    case 2:
      iVar2 = *(int *)(iVar2 + 0x14);
      break;
    case 3:
      iVar2 = *(int *)(iVar2 + 0x18);
      break;
    case 4:
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    puVar3 = puVar3 + 5;
    iVar1 = iVar1 + iVar2;
  } while ((int)puVar3 < 0x6f21a8);
  return iVar1;
}

