/* Decompiled from Speed.exe @ 0067fd8f */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* Library Function - Single Match
    __itoa
   
   Library: Visual Studio 2003 Release */

char * __cdecl __itoa(int _Value,char *_Dest,int _Radix)

{
  undefined4 uVar1;
  
  if ((_Radix == 10) && (_Value < 0)) {
    uVar1 = 1;
    _Radix = 10;
  }
  else {
    uVar1 = 0;
  }
  FUN_0067fd51(_Radix,uVar1);
  return _Dest;
}

