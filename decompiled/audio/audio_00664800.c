/* Decompiled from Speed.exe @ 00664800 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00664800(void)

{
  int iVar1;
  undefined4 *unaff_ESI;
  uint unaff_retaddr;
  undefined4 uVar2;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined1 *puStack_25c;
  undefined1 auStack_248 [8];
  undefined4 uStack_240;
  undefined1 auStack_230 [32];
  code *pcStack_210;
  undefined1 auStack_204 [512];
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  FUN_006688b0(unaff_ESI[1]);
  uVar2 = *unaff_ESI;
  GetTickCount();
  iVar1 = FUN_00664460(auStack_248,&uStack_268,uVar2);
  while (iVar1 != 0) {
    if (pcStack_210 != (code *)0x0) {
      puStack_25c = auStack_204;
      uStack_268 = 0;
      uStack_264 = 0x70696e67;
      uStack_260 = 0xffffffff;
      auStack_204[0] = 0;
      FUN_00667950(auStack_204,0x200,&DAT_006bd3bc,auStack_230);
      FUN_00667690(auStack_204,0x200,&DAT_006aac3c,uStack_240);
      FUN_00667690(auStack_204,0x200,&DAT_006aac34,0);
      (*pcStack_210)();
    }
    iVar1 = FUN_00664460(auStack_248,&uStack_268);
  }
  return;
}

