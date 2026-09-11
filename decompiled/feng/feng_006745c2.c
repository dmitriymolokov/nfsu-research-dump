/* Decompiled from Speed.exe @ 006745c2 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2003 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  undefined4 *_Memory;
  int iVar1;
  char *local_24;
  undefined1 local_14 [8];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006ac1c8;
  uStack_c = 0x6745ce;
  if ((_Category < 0) || (5 < _Category)) {
    local_24 = (char *)0x0;
  }
  else {
    __lock(0xc);
    local_8 = (undefined *)0x0;
    if (_Locale == (char *)0x0) {
      local_24 = (char *)FUN_006743e3();
      __local_unwind2(local_14,0xffffffff);
    }
    else {
      _Memory = _malloc(0x54);
      if (_Memory == (undefined4 *)0x0) {
        local_24 = (char *)0x0;
      }
      else {
        local_24 = (char *)FUN_006743e3();
        if (local_24 != (char *)0x0) {
          *_Memory = 0;
          _Memory[1] = DAT_00717ea0;
          _Memory[2] = DAT_00717ea4;
          for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
            _Memory[iVar1 + 3] = (&DAT_00717e88)[iVar1];
          }
          _Memory[9] = DAT_006ec170;
          _Memory[10] = DAT_006ec180;
          _Memory[0xb] = DAT_00792fb0;
          _Memory[0xc] = DAT_00792fb4;
          _Memory[0xd] = DAT_00792fac;
          _Memory[0xe] = PTR_PTR_006ec16c;
          _Memory[0xf] = DAT_00717e60;
          _Memory[0x10] = DAT_00792fa8;
          _Memory[0x11] = DAT_00792fa4;
          _Memory[0x12] = PTR_DAT_006ec130;
          _Memory[0x13] = PTR_PTR_006ec070;
          _Memory[0x14] = DAT_00717e5c;
          if ((*(int *)PTR_DAT_006eb554 == 0) && ((undefined4 *)PTR_DAT_006eb554 != &DAT_006eb500))
          {
            FUN_00673ccf(PTR_DAT_006eb554);
          }
          PTR_DAT_006eb554 = (undefined *)_Memory;
          FUN_00673d99();
        }
      }
      if ((local_24 == (char *)0x0) && (_Memory != (undefined4 *)0x0)) {
        _free(_Memory);
      }
      local_8 = (undefined *)0xffffffff;
      FUN_0067470b();
    }
  }
  return local_24;
}

