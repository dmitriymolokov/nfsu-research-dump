/* Decompiled from Speed.exe @ 004d8600 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d8600(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int local_18;
  int local_10;
  char *local_c;
  char *local_8;
  
  if (DAT_00745e40 == 1) {
    cVar1 = FUN_004d8270();
    if (cVar1 == '\0') {
      FUN_00495fc0();
    }
    else {
      FUN_00495f70();
    }
    cVar1 = FUN_004d82f0();
    if (cVar1 == '\0') {
      FUN_00495fc0();
      FUN_00495fc0();
      FUN_00495fc0();
      FUN_00495fc0();
    }
    else {
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
      FUN_00495f70();
    }
    local_8 = (char *)(param_1 + 0xaac);
    local_c = (char *)0x1;
    local_10 = 10;
    do {
      FUN_00565da0("locked_icon_%d",local_c);
      FUN_00565da0("LOCKED_ICON_%d",local_c);
      uVar2 = FUN_004f42f0("LOCKED_ICON_%d",local_c);
      uVar3 = FUN_004f42f0("COLORELEMENT_%d",local_c);
      cVar1 = *local_8;
      if (cVar1 == '\0') {
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_004ef050(uVar2);
          }
        }
        FUN_004f6910(iVar4);
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c != 0) {
            uVar2 = FUN_004ef050(uVar3);
            FUN_004f6910(uVar2);
            goto LAB_004d8877;
          }
          iVar4 = 0;
        }
        FUN_004f6910(iVar4);
      }
      else if (cVar1 == '\x01') {
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_004ef050(uVar3);
          }
        }
        FUN_004f6970(iVar4);
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c != 0) {
            uVar2 = FUN_004ef050(uVar2);
            FUN_004f6970(uVar2);
            goto LAB_004d8877;
          }
          iVar4 = 0;
        }
        FUN_004f6970(iVar4);
      }
      else if (cVar1 == '\x02') {
        FUN_00495fc0();
        FUN_00495f70();
      }
LAB_004d8877:
      local_c = (char *)((int)local_c + 1);
      local_8 = local_8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    local_c = (char *)(param_1 + 0xab6);
    local_18 = 0x14;
    do {
      uVar2 = FUN_004f42f0("LOCKED_ICON_%d",local_c + (-0xaab - param_1));
      uVar3 = FUN_004f42f0("COLORELEMENT_%d",local_c + (-0xaab - param_1));
      cVar1 = *local_c;
      if (cVar1 == '\0') {
        iVar4 = DAT_0073578c;
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d8961:
          iVar5 = 0;
          if (iVar4 == 0) {
LAB_004d897b:
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_004ef050(uVar2);
            iVar5 = DAT_0073578c;
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          iVar4 = DAT_0073578c;
          if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
            iVar5 = DAT_0073578c;
            if (DAT_0073578c != 0) {
              iVar6 = *(int *)(DAT_0073578c + 8);
              if ((iVar6 == 0) ||
                 ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                  (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d8961;
              goto LAB_004d8941;
            }
            goto LAB_004d897b;
          }
LAB_004d8941:
          if ((iVar5 == 0) ||
             (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 = DAT_0073578c, iVar6 == 0))
          goto LAB_004d8961;
        }
        FUN_004f6910(iVar6);
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d89fe:
          if (iVar5 == 0) goto LAB_004d8b97;
          iVar4 = FUN_004ef050(uVar3);
        }
        else {
          iVar4 = FUN_004f3f90(&DAT_00746104);
          iVar5 = DAT_0073578c;
          if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_004d89e2:
            if ((iVar4 != 0) && (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 != 0))
            goto LAB_004d8b99;
            goto LAB_004d89fe;
          }
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
                (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004d89fe;
            goto LAB_004d89e2;
          }
LAB_004d8b97:
          iVar4 = 0;
        }
LAB_004d8b99:
        FUN_004f6910(iVar4);
      }
      else if (cVar1 == '\x01') {
        if (((((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
             (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
            ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(uVar3), iVar4 != 0)))) &&
           (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar4 + 0x18) == 5)) {
          uVar3 = *(undefined4 *)(iVar4 + 0x60);
          iVar4 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar4) {
            do {
              FUN_004f6970(uVar3);
              uVar3 = *(undefined4 *)(extraout_EDX + 4);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        if (((((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
             (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
            ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(uVar2), iVar4 != 0)))) &&
           (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar4 + 0x18) == 5)) {
          uVar2 = *(undefined4 *)(iVar4 + 0x60);
          iVar4 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar4) {
            do {
              FUN_004f6970(uVar2);
              uVar2 = *(undefined4 *)(extraout_EDX_00 + 4);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
      else if (cVar1 == '\x02') {
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_004ef050(uVar3);
          }
        }
        FUN_004f6970(iVar4);
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c != 0) {
            iVar4 = FUN_004ef050(uVar2);
            goto LAB_004d8b99;
          }
          goto LAB_004d8b97;
        }
        goto LAB_004d8b99;
      }
      local_c = local_c + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
    local_10 = 0;
    do {
      uVar2 = FUN_004f42f0("LOCKED_ICON_%d",local_10 + 0x1f);
      uVar3 = FUN_004f42f0("COLORELEMENT_%d",local_10 + 0x1f);
      cVar1 = *(char *)(param_1 + 0xaca + local_10);
      if (cVar1 == '\0') {
        iVar4 = DAT_0073578c;
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d8c6b:
          iVar5 = 0;
          if (iVar4 == 0) {
LAB_004d8c85:
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_004ef050(uVar2);
            iVar5 = DAT_0073578c;
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          iVar4 = DAT_0073578c;
          if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
            iVar5 = DAT_0073578c;
            if (DAT_0073578c != 0) {
              iVar6 = *(int *)(DAT_0073578c + 8);
              if ((iVar6 == 0) ||
                 ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                  (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d8c6b;
              goto LAB_004d8c4b;
            }
            goto LAB_004d8c85;
          }
LAB_004d8c4b:
          if ((iVar5 == 0) ||
             (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 = DAT_0073578c, iVar6 == 0))
          goto LAB_004d8c6b;
        }
        FUN_004f6910(iVar6);
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d8d08:
          if (iVar5 == 0) goto LAB_004d9019;
          iVar4 = FUN_004ef050(uVar3);
        }
        else {
          iVar4 = FUN_004f3f90(&DAT_00746104);
          iVar5 = DAT_0073578c;
          if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_004d8cec:
            if ((iVar4 != 0) && (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 != 0))
            goto LAB_004d901b;
            goto LAB_004d8d08;
          }
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
                (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004d8d08;
            goto LAB_004d8cec;
          }
LAB_004d9019:
          iVar4 = 0;
        }
LAB_004d901b:
        FUN_004f6910(iVar4);
      }
      else if (cVar1 == '\x01') {
        iVar4 = DAT_0073578c;
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d8d9f:
          iVar5 = 0;
          if ((iVar4 != 0) && (iVar6 = FUN_004ef050(uVar3), iVar5 = DAT_0073578c, iVar6 != 0)) {
LAB_004d8db5:
            *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000;
            iVar5 = DAT_0073578c;
            if (*(int *)(iVar6 + 0x18) == 5) {
              uVar3 = *(undefined4 *)(iVar6 + 0x60);
              iVar4 = *(int *)(iVar6 + 0x5c);
              if (0 < iVar4) {
                do {
                  FUN_004f6970(uVar3);
                  uVar3 = *(undefined4 *)(extraout_EDX_01 + 4);
                  iVar4 = iVar4 + -1;
                  iVar5 = DAT_0073578c;
                } while (iVar4 != 0);
              }
            }
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          iVar4 = DAT_0073578c;
          if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004d8d87:
            if ((iVar5 == 0) || (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 == 0))
            goto LAB_004d8d9f;
            goto LAB_004d8db5;
          }
          iVar5 = DAT_0073578c;
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d8d9f;
            goto LAB_004d8d87;
          }
        }
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d8e61:
          if ((iVar5 == 0) || (iVar4 = FUN_004ef050(uVar2), iVar4 == 0)) goto LAB_004d9024;
        }
        else {
          iVar4 = FUN_004f3f90(&DAT_00746104);
          iVar5 = DAT_0073578c;
          if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
            if (DAT_0073578c == 0) goto LAB_004d9024;
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
                (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004d8e61;
          }
          if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 == 0))
          goto LAB_004d8e61;
        }
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000;
        if (*(int *)(iVar4 + 0x18) == 5) {
          uVar2 = *(undefined4 *)(iVar4 + 0x60);
          iVar4 = *(int *)(iVar4 + 0x5c);
          if (0 < iVar4) {
            do {
              FUN_004f6970(uVar2);
              uVar2 = *(undefined4 *)(extraout_EDX_02 + 4);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
      else if (cVar1 == '\x02') {
        iVar4 = DAT_0073578c;
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d8f40:
          iVar5 = 0;
          if ((iVar4 != 0) && (iVar6 = FUN_004ef050(uVar3), iVar5 = DAT_0073578c, iVar6 != 0)) {
LAB_004d8f56:
            *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000;
            iVar5 = DAT_0073578c;
            if (*(int *)(iVar6 + 0x18) == 5) {
              uVar3 = *(undefined4 *)(iVar6 + 0x60);
              iVar4 = *(int *)(iVar6 + 0x5c);
              if (0 < iVar4) {
                do {
                  FUN_004f6970(uVar3);
                  uVar3 = *(undefined4 *)(extraout_EDX_03 + 4);
                  iVar4 = iVar4 + -1;
                  iVar5 = DAT_0073578c;
                } while (iVar4 != 0);
              }
            }
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          iVar4 = DAT_0073578c;
          if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004d8f28:
            if ((iVar5 == 0) || (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 == 0))
            goto LAB_004d8f40;
            goto LAB_004d8f56;
          }
          iVar5 = DAT_0073578c;
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d8f40;
            goto LAB_004d8f28;
          }
        }
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d9005:
          if (iVar5 != 0) {
            iVar4 = FUN_004ef050(uVar2);
            goto LAB_004d901b;
          }
          goto LAB_004d9019;
        }
        iVar4 = FUN_004f3f90(&DAT_00746104);
        iVar5 = DAT_0073578c;
        if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
                (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004d9005;
            goto LAB_004d8fed;
          }
          goto LAB_004d9019;
        }
LAB_004d8fed:
        if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 == 0))
        goto LAB_004d9005;
        goto LAB_004d901b;
      }
LAB_004d9024:
      local_10 = local_10 + 1;
      if (0x1d < local_10) {
        return;
      }
    } while( true );
  }
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0xa16f9ec5);
    }
  }
  FUN_004f6910(iVar4);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0xa3c4c766);
    }
  }
  FUN_004f6910(iVar4);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0x9db42e6c);
    }
  }
  FUN_004f6910(iVar4);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0x9db42e6d);
    }
  }
  FUN_004f6910(iVar4);
  if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
     (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
    if (DAT_0073578c == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004ef050(0x9db42e6e);
    }
  }
  FUN_004f6910(iVar4);
  local_c = (char *)(param_1 + 0xaac);
  local_18 = 10;
  do {
    uVar2 = FUN_004f42f0("LOCKED_ICON_%d",local_c + (-0xaab - param_1));
    uVar3 = FUN_004f42f0("COLORELEMENT_%d",local_c + (-0xaab - param_1));
    cVar1 = *local_c;
    if (cVar1 == '\0') {
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(uVar2);
        }
      }
      FUN_004f6910(iVar4);
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c != 0) {
          uVar2 = FUN_004ef050(uVar3);
          FUN_004f6910(uVar2);
          goto LAB_004d933a;
        }
LAB_004d927c:
        iVar4 = 0;
      }
LAB_004d927e:
      FUN_004f6910(iVar4);
    }
    else if (cVar1 == '\x01') {
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
         (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
        if (DAT_0073578c == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(uVar3);
        }
      }
      FUN_004f6910(iVar4);
      if (((*(int *)(param_1 + 0xc) != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
         (iVar4 = FUN_004ffb70(), iVar4 != 0)) goto LAB_004d927e;
      if (DAT_0073578c == 0) goto LAB_004d927c;
      uVar2 = FUN_004ef050(uVar2);
      FUN_004f6910(uVar2);
    }
    else if (cVar1 == '\x02') {
      FUN_00495fc0();
      FUN_00495f70();
    }
LAB_004d933a:
    local_c = local_c + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  local_c = (char *)(param_1 + 0xab6);
  local_10 = 0x14;
  do {
    uVar2 = FUN_004f42f0("LOCKED_ICON_%d",local_c + (-0xaab - param_1));
    uVar3 = FUN_004f42f0("COLORELEMENT_%d",local_c + (-0xaab - param_1));
    cVar1 = *local_c;
    if (cVar1 == '\0') {
      iVar4 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d9411:
        iVar5 = 0;
        if (iVar4 == 0) {
LAB_004d942b:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004ef050(uVar2);
          iVar5 = DAT_0073578c;
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar4 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          iVar5 = DAT_0073578c;
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d9411;
            goto LAB_004d93f1;
          }
          goto LAB_004d942b;
        }
LAB_004d93f1:
        if ((iVar5 == 0) ||
           (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 = DAT_0073578c, iVar6 == 0))
        goto LAB_004d9411;
      }
      FUN_004f6910(iVar6);
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d94ae:
        if (iVar5 == 0) {
LAB_004d95a3:
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(uVar3);
        }
      }
      else {
        iVar4 = FUN_004f3f90(&DAT_00746104);
        iVar5 = DAT_0073578c;
        if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
                (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004d94ae;
            goto LAB_004d9492;
          }
          goto LAB_004d95a3;
        }
LAB_004d9492:
        if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 == 0))
        goto LAB_004d94ae;
      }
LAB_004d95a5:
      FUN_004f6910(iVar4);
    }
    else {
      if (cVar1 == '\x01') {
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_004ef050(uVar3);
          }
        }
        FUN_004f6910(iVar4);
        iVar4 = *(int *)(param_1 + 0xc);
LAB_004d9513:
        if (((iVar4 == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c == 0) goto LAB_004d95a3;
          iVar4 = FUN_004ef050(uVar2);
        }
        goto LAB_004d95a5;
      }
      if (cVar1 == '\x02') {
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
           (iVar4 = FUN_004ffb70(), iVar4 == 0)) {
          if (DAT_0073578c != 0) {
            uVar3 = FUN_004ef050(uVar3);
            FUN_004f6970(uVar3);
            iVar4 = *(int *)(param_1 + 0xc);
            goto LAB_004d9513;
          }
          iVar4 = 0;
        }
        FUN_004f6970(iVar4);
        iVar4 = *(int *)(param_1 + 0xc);
        goto LAB_004d9513;
      }
    }
    local_c = local_c + 1;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = 0;
  do {
    uVar2 = FUN_004f42f0("LOCKED_ICON_%d",local_18 + 0x1f);
    uVar3 = FUN_004f42f0("COLORELEMENT_%d",local_18 + 0x1f);
    cVar1 = *(char *)(param_1 + 0xaca + local_18);
    if (cVar1 == '\0') {
      iVar4 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d9672:
        iVar5 = 0;
        if (iVar4 == 0) {
LAB_004d968c:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004ef050(uVar2);
          iVar5 = DAT_0073578c;
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar4 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          iVar5 = DAT_0073578c;
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d9672;
            goto LAB_004d9652;
          }
          goto LAB_004d968c;
        }
LAB_004d9652:
        if ((iVar5 == 0) ||
           (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 = DAT_0073578c, iVar6 == 0))
        goto LAB_004d9672;
      }
      FUN_004f6910(iVar6);
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d970f:
        if (iVar5 == 0) {
LAB_004d993a:
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_004ef050(uVar3);
        }
      }
      else {
        iVar4 = FUN_004f3f90(&DAT_00746104);
        iVar5 = DAT_0073578c;
        if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
                (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004d970f;
            goto LAB_004d96f3;
          }
          goto LAB_004d993a;
        }
LAB_004d96f3:
        if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 == 0))
        goto LAB_004d970f;
      }
LAB_004d993c:
      FUN_004f6910(iVar4);
    }
    else {
      if (cVar1 == '\x01') {
        iVar4 = DAT_0073578c;
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d97aa:
          iVar5 = 0;
          if (iVar4 == 0) {
LAB_004d97c4:
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_004ef050(uVar3);
            iVar5 = DAT_0073578c;
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          iVar4 = DAT_0073578c;
          if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
            iVar5 = DAT_0073578c;
            if (DAT_0073578c != 0) {
              iVar6 = *(int *)(DAT_0073578c + 8);
              if ((iVar6 == 0) ||
                 ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                  (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d97aa;
              goto LAB_004d978a;
            }
            goto LAB_004d97c4;
          }
LAB_004d978a:
          if ((iVar5 == 0) ||
             (iVar6 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 = DAT_0073578c, iVar6 == 0))
          goto LAB_004d97aa;
        }
        FUN_004f6910(iVar6);
LAB_004d97cf:
        if (*(int *)(param_1 + 0xc) != 0) {
          iVar4 = FUN_004f3f90(&DAT_00746104);
          iVar5 = DAT_0073578c;
          if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
            if (DAT_0073578c == 0) goto LAB_004d993a;
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar4 = FUN_004fd1e0(iVar6 + 0xdc), iVar4 == 0 &&
                (iVar4 = FUN_004fd1e0(iVar6 + 0xec), iVar4 == 0)))) goto LAB_004d9847;
          }
          if ((iVar4 != 0) && (iVar4 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar4 != 0))
          goto LAB_004d993c;
        }
LAB_004d9847:
        if (iVar5 == 0) goto LAB_004d993a;
        iVar4 = FUN_004ef050(uVar2);
        goto LAB_004d993c;
      }
      if (cVar1 == '\x02') {
        iVar4 = DAT_0073578c;
        if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d98de:
          iVar5 = 0;
          if ((iVar4 != 0) && (iVar6 = FUN_004ef050(uVar3), iVar5 = DAT_0073578c, iVar6 != 0)) {
LAB_004d98f8:
            *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000;
            iVar5 = DAT_0073578c;
            if (*(int *)(iVar6 + 0x18) == 5) {
              uVar3 = *(undefined4 *)(iVar6 + 0x60);
              iVar4 = *(int *)(iVar6 + 0x5c);
              if (0 < iVar4) {
                do {
                  FUN_004f6970(uVar3);
                  uVar3 = *(undefined4 *)(extraout_EDX_04 + 4);
                  iVar4 = iVar4 + -1;
                  iVar5 = DAT_0073578c;
                } while (iVar4 != 0);
              }
            }
          }
        }
        else {
          iVar5 = FUN_004f3f90(&DAT_00746104);
          iVar4 = DAT_0073578c;
          if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_004d98c6:
            if ((iVar5 == 0) || (iVar6 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar6 == 0))
            goto LAB_004d98de;
            goto LAB_004d98f8;
          }
          iVar5 = DAT_0073578c;
          if (DAT_0073578c != 0) {
            iVar6 = *(int *)(DAT_0073578c + 8);
            if ((iVar6 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar6 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar6 + 0xec), iVar5 == 0)))) goto LAB_004d98de;
            goto LAB_004d98c6;
          }
        }
        goto LAB_004d97cf;
      }
    }
    local_18 = local_18 + 1;
    if (0x1d < local_18) {
      return;
    }
  } while( true );
}

