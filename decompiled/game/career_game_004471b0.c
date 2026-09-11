/* Decompiled from Speed.exe @ 004471b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004471b0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_63;
  
  FUN_00401110();
  puVar2 = &uStack_63;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_00449f20(100);
  FUN_00447160();
  _DAT_0078e950 = DAT_0073ad3c;
  DAT_0078e954 = DAT_0073ad3c;
  _DAT_0078e958 = 0xffffffff;
  _DAT_0078e966 = 0;
  _DAT_0078e968 = 0;
  _DAT_0078e96c = 10;
  _DAT_0078e96a = 1;
  _DAT_0078e96e = 0;
  FUN_005649f0();
  FUN_005649f0();
  FUN_0057c6d0();
  FUN_004470d0();
  FUN_00447040();
  FUN_0058ab50();
  FUN_0058dd50();
  FUN_0043a1a0();
  FUN_0040b5e0();
  FUN_0053e020();
  FUN_00402720();
  FUN_00447f40();
  FUN_005741c0();
  FUN_00520460();
  FUN_004f60e0();
  FUN_00448600();
  FUN_00448650();
  FUN_00569930();
  FUN_004ab2b0(&DAT_00748f70);
  DAT_00735ec4 = FUN_00565b60(0x59f0,0,0,0);
  _DAT_00735ec8 = 0;
  FUN_0058b110();
  FUN_0059dfe0();
  FUN_00577c30();
  FUN_00579430();
  FUN_00401520(0);
  return;
}

