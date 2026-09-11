/* spd-match: far pct=1.01 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00436460 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void  FUN_00436460(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int current = param_1;
  
  iVar2 = DAT_00736190;
  iVar1 = DAT_0073618c;
  while( true ) {
    if (*(int *)(current + 0x10) == 1) {
      *(undefined4 *)(current + 0x20) = 0;
      *(undefined4 *)(current + 0x24) = 0;
    }
    *(undefined1 *)(current + 0x34) = param_2;
    *(undefined4 *)(current + 0x10) = 4;
    if ((*(int *)(current + 0xc) != 0) || (iVar1 == 0)) {
      return;
    }
    iVar4 = (iVar1 << 7) % iVar2;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = -iVar4;
    }
    if (current == iVar3 * 0x44 + iVar1) break;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    current = iVar4 * 0x44 + iVar1;
  }
  return;
}
