/* Decompiled from Speed.exe @ 005e5221 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005e5221(char *param_1,undefined1 *param_2,byte *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  char *_Str;
  uint _MaxCount;
  char local_20 [27];
  byte local_5;
  
  cVar1 = *param_1;
  _Str = param_1;
  while ((cVar1 != '\0' && (iVar3 = _isalpha((int)*_Str), iVar3 != 0))) {
    _Str = _Str + 1;
    cVar1 = *_Str;
  }
  if (*_Str == '\0') {
    local_5 = 0;
  }
  else {
    lVar4 = _atol(_Str);
    local_5 = (byte)lVar4;
  }
  if (0xf < local_5) {
    *param_2 = 0;
    *param_3 = 0xff;
    return 0x80004005;
  }
  _MaxCount = (int)_Str - (int)param_1;
  if ((_MaxCount == 0) || (0x14 < _MaxCount)) {
    return 0x80004005;
  }
  cVar1 = *_Str;
  if (cVar1 != '\0') {
    do {
      iVar3 = _isdigit((int)cVar1);
      if (iVar3 == 0) break;
      _Str = _Str + 1;
      cVar1 = *_Str;
    } while (cVar1 != '\0');
    if (*_Str != '\0') {
      return 0x80004005;
    }
  }
  if (*param_1 != '\0') {
    iVar3 = -(int)param_1;
    do {
      iVar5 = _isalpha((int)*param_1);
      if (iVar5 == 0) break;
      cVar1 = FUN_00671b76((int)*param_1);
      param_1[(int)(local_20 + iVar3)] = cVar1;
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
  }
  iVar3 = _strncmp(local_20,"POSITION",_MaxCount);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = _strncmp(local_20,"BLENDWEIGHT",_MaxCount);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      iVar3 = _strncmp(local_20,"BLENDINDICES",_MaxCount);
      if (iVar3 == 0) {
        uVar2 = 2;
      }
      else {
        iVar3 = _strncmp(local_20,"NORMAL",_MaxCount);
        if (iVar3 == 0) {
          uVar2 = 3;
        }
        else {
          iVar3 = _strncmp(local_20,"PSIZE",_MaxCount);
          if (iVar3 == 0) {
            uVar2 = 4;
          }
          else {
            iVar3 = _strncmp(local_20,"TEXCOORD",_MaxCount);
            if (iVar3 == 0) {
              uVar2 = 5;
            }
            else {
              iVar3 = _strncmp(local_20,"TANGENT",_MaxCount);
              if (iVar3 == 0) {
                uVar2 = 6;
              }
              else {
                iVar3 = _strncmp(local_20,"BINORMAL",_MaxCount);
                if (iVar3 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar3 = _strncmp(local_20,"TESSFACTOR",_MaxCount);
                  if (iVar3 == 0) {
                    uVar2 = 8;
                  }
                  else {
                    iVar3 = _strncmp(local_20,"POSITIONT ",_MaxCount);
                    if (iVar3 == 0) {
                      uVar2 = 9;
                    }
                    else {
                      iVar3 = _strncmp(local_20,"COLOR",_MaxCount);
                      if (iVar3 != 0) {
                        iVar3 = _strncmp(local_20,"FOG",_MaxCount);
                        if (iVar3 == 0) {
                          uVar2 = 0xb;
                          goto LAB_005e549f;
                        }
                        iVar3 = _strncmp(local_20,"DEPTH",_MaxCount);
                        if (iVar3 == 0) {
                          uVar2 = 0xc;
                          goto LAB_005e549f;
                        }
                        iVar3 = _strncmp(local_20,"SAMPLE",_MaxCount);
                        if (iVar3 == 0) {
                          uVar2 = 0xd;
                          goto LAB_005e549f;
                        }
                        iVar3 = _strncmp(local_20,"DIFFUSE",_MaxCount);
                        if (iVar3 == 0) {
                          local_5 = 0;
                        }
                        else {
                          iVar3 = _strncmp(local_20,"SPECULAR",_MaxCount);
                          if (iVar3 != 0) {
                            return 0x80004005;
                          }
                          local_5 = 1;
                        }
                      }
                      uVar2 = 10;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_005e549f:
  *param_2 = uVar2;
  *param_3 = local_5;
  return 0;
}

