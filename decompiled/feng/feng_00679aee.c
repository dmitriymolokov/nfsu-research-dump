/* Decompiled from Speed.exe @ 00679aee */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __setmbcp
   
   Library: Visual Studio 2003 Release */

int __cdecl __setmbcp(int _CodePage)

{
  int *_Memory;
  int iVar1;
  int local_20;
  
  local_20 = -1;
  __lock(0xd);
  DAT_00717d98 = 0;
  if (_CodePage == -2) {
    DAT_00717d98 = 1;
    _CodePage = GetOEMCP();
  }
  else if (_CodePage == -3) {
    DAT_00717d98 = 1;
    _CodePage = GetACP();
  }
  else if (_CodePage == -4) {
    DAT_00717d98 = 1;
    _CodePage = DAT_00717ea0;
  }
  if (_CodePage == DAT_007930e4) {
    local_20 = 0;
  }
  else {
    if ((DAT_00792fc4 == (int *)0x0) || (_Memory = DAT_00792fc4, *DAT_00792fc4 != 0)) {
      _Memory = _malloc(0x220);
    }
    if ((_Memory != (int *)0x0) && (local_20 = FUN_00679958(_CodePage), local_20 == 0)) {
      *_Memory = 0;
      _Memory[1] = DAT_007930e4;
      _Memory[2] = DAT_00792fc8;
      _Memory[3] = DAT_00792fc0;
      for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
        *(undefined2 *)((int)_Memory + iVar1 * 2 + 0x10) =
             *(undefined2 *)((int)&DAT_007930f0 + iVar1 * 2);
      }
      for (iVar1 = 0; iVar1 < 0x101; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x1c + (int)_Memory) = *(undefined1 *)((int)&DAT_00792fe0 + iVar1);
      }
      for (iVar1 = 0; DAT_00792fc4 = _Memory, iVar1 < 0x100; iVar1 = iVar1 + 1) {
        *(undefined1 *)(iVar1 + 0x11d + (int)_Memory) = (&DAT_00793100)[iVar1];
      }
    }
    if ((local_20 == -1) && (_Memory != DAT_00792fc4)) {
      _free(_Memory);
    }
  }
  FUN_00679c35();
  return local_20;
}

