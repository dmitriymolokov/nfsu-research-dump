/* Decompiled from Speed.exe @ 00405260 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


long FUN_00405260(void)

{
  undefined4 *puVar1;
  char *_Str;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int unaff_EDI;
  long local_4;
  
  if ((*(int *)(unaff_EDI + 0x3c) == 0) ||
     (*(int *)(unaff_EDI + 0x40) == *(int *)(unaff_EDI + 0x3c) + 0x3c)) {
    uVar2 = FUN_004051a0();
    FUN_00404ab0("Not enough arguments %s\n",uVar2);
  }
  puVar1 = *(undefined4 **)(unaff_EDI + 0x40);
  *(undefined4 *)(unaff_EDI + 0x40) = *puVar1;
  _Str = (char *)puVar1[2];
  if ((*_Str == '0') && (_Str[1] == 'x')) {
    local_4 = 0;
    _sscanf(_Str,"%X",&local_4);
    return local_4;
  }
  iVar3 = _isdigit((int)*_Str);
  if ((iVar3 == 0) && (*_Str != '-')) {
    uVar2 = FUN_004051a0();
    FUN_00404ab0("Expected a number but found %s %s\n",_Str,uVar2);
    return 0;
  }
  lVar4 = _atol(_Str);
  return lVar4;
}

