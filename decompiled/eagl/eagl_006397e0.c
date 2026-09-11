/* Decompiled from Speed.exe @ 006397e0 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006397e0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0070f36c == 0) {
    FUN_0063e850();
    if (param_1 == 0) {
      param_1 = 0x40;
    }
    if (param_3 == 0) {
      param_3 = 0x40;
    }
    DAT_0070f3fc = 0;
    FUN_00641bf0(&DAT_0070f370,0,0);
    FUN_00641bf0(&DAT_0070f3c8,0,0);
    DAT_0070f36c = param_4;
    FUN_0063f210(param_4,0x1580);
    DAT_0070f3c0 = DAT_0070f36c + 0x1580;
    iVar2 = param_3 * 0x30;
    FUN_0063f210(DAT_0070f3c0,iVar2);
    iVar1 = DAT_0070f3c0;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      FUN_00641cb0(&DAT_0070f370,iVar1);
      iVar1 = iVar1 + 0x30;
    }
    FUN_0063f150(&DAT_0070f3a4);
    _DAT_0070f3c4 = 0xffffffff;
    FUN_0063dbf0(param_1,DAT_0070f3c0 + iVar2);
    FUN_00642570(&LAB_00639690);
  }
  return 1;
}

