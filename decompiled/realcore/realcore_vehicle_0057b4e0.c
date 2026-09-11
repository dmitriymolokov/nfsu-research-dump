/* spd-match: far pct=50.00 flags=/O1 /c /nologo /TP method=m39 source=m39/m39/va_0057B4E0 */
/* Decompiled from Speed.exe @ 0057b4e0 */
int __stdcall FUN_0057b4e0(int ecx_val, int param_2) {
    int eax_ret;
    int edx_limit;
    int *esi_ptr;
    int *edi_item_ptr;
    int target_val;
    eax_ret = 0;
    edx_limit = *(int*)(ecx_val + 4);
    if (edx_limit <= 0) return -1;
    target_val = *(int*)(param_2 + 0x82c);
    esi_ptr = (int*)(ecx_val + 0x3c);
    while (eax_ret < edx_limit) {
        edi_item_ptr = (int*)*esi_ptr;
        if (*(int*)((char*)edi_item_ptr + 0x1d4) == target_val) return eax_ret;
        eax_ret++;
        esi_ptr += 0xe;
    }
    return -1;
}
