/* Decompiled from Speed.exe @ 005b226e */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_005b226e(uint *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_1[1] <= *param_1) {
    return 0;
  }
  do {
    pcVar3 = (char *)*param_1;
    cVar1 = *pcVar3;
    if (cVar1 == '\n') {
      param_1[7] = param_1[7] + 1;
      *param_1 = (uint)(pcVar3 + 1);
      local_8 = 1;
    }
    else if (cVar1 == '\\') {
      if ((pcVar3 + 1 < (char *)param_1[1]) && (pcVar3[1] == '\n')) {
        pcVar3 = pcVar3 + 2;
      }
      else {
        if (((char *)param_1[1] <= pcVar3 + 2) || ((pcVar3[1] != '\r' || (pcVar3[2] != '\n'))))
        goto LAB_005b22dc;
        pcVar3 = pcVar3 + 3;
      }
      param_1[7] = param_1[7] + 1;
      *param_1 = (uint)pcVar3;
    }
    else {
LAB_005b22dc:
      iVar4 = _isspace((int)cVar1);
      if (iVar4 == 0) {
        pcVar3 = (char *)*param_1;
        cVar1 = *pcVar3;
        if (cVar1 != '\r') {
          if ((((cVar1 == '/') && (pcVar3 + 1 < (char *)param_1[1])) && (pcVar3[1] == '/')) ||
             (((param_1[10] & 2) != 0 && (cVar1 == ';')))) {
            FUN_005b1a6c();
          }
          else {
            if (cVar1 != '/') {
              return local_8;
            }
            pcVar2 = (char *)param_1[1];
            if (pcVar2 <= pcVar3 + 1) {
              return local_8;
            }
            if (pcVar3[1] != '*') {
              return local_8;
            }
            *param_1 = (uint)(pcVar3 + 2);
            if (pcVar3 + 2 < pcVar2) {
              do {
                pcVar3 = (char *)*param_1;
                if (((*pcVar3 == '*') && (pcVar3 + 1 < pcVar2)) && (pcVar3[1] == '/')) break;
                if (*pcVar3 == '\n') {
                  param_1[7] = param_1[7] + 1;
                }
                *param_1 = (uint)(pcVar3 + 1);
              } while (pcVar3 + 1 < (char *)param_1[1]);
            }
            if ((char *)*param_1 < pcVar2) {
              *param_1 = (uint)((char *)*param_1 + 2);
            }
            else {
              FUN_005b1f01(param_1[0xc],param_1 + 2,0x3e9,"comment continues past end of file");
            }
          }
          goto LAB_005b238c;
        }
      }
      *param_1 = *param_1 + 1;
    }
LAB_005b238c:
    if (param_1[1] <= *param_1) {
      return local_8;
    }
  } while( true );
}

