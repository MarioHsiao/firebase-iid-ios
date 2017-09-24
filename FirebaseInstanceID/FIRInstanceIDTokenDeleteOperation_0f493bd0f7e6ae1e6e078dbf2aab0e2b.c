/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2015 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

void *__fastcall -[FIRInstanceIDTokenDeleteOperation initWithScope:checkinPreferences:keyPair:](__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5);
void __cdecl -[FIRInstanceIDTokenDeleteOperation performTokenOperation](struct FIRInstanceIDTokenDeleteOperation *self, SEL);
// int __usercall __58__FIRInstanceIDTokenDeleteOperation_performTokenOperation__block_invoke@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, __int64 a3@<rcx>, __int64 a4@<rdi>, __int64 a5@<rsi>);
int __fastcall __copy_helper_block_(__int64 a1, __int64 a2);
int __fastcall __destroy_helper_block_(__int64 a1);
void __cdecl -[FIRInstanceIDTokenDeleteOperation handleResponseWithData:response:error:](struct FIRInstanceIDTokenDeleteOperation *self, SEL, id, id, id);
// int __fastcall FIRInstanceIDQueryFromQueryItems(_QWORD); weak
// int __fastcall FIRInstanceIDRegisterServer(_QWORD); weak
// int __fastcall FIRInstanceIDSharedLogger(_QWORD, _QWORD); weak
// int __fastcall objc_copyWeak(_QWORD, _QWORD); weak
// int __fastcall objc_destroyWeak(_QWORD); weak
// int __fastcall objc_initWeak(_QWORD, _QWORD); weak
// int __fastcall objc_loadWeakRetained(_QWORD); weak
// void *objc_msgSend(void *, const char *, ...); idb
// void *objc_msgSendSuper2(void *, const char *, ...); idb
// int __fastcall objc_release(_QWORD); weak
// int __fastcall objc_retain(_QWORD); weak
// int __fastcall objc_retainAutoreleasedReturnValue(_QWORD); weak
// int __fastcall objc_retainBlock(_QWORD, _QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

void *classRef_FIRInstanceIDTokenDeleteOperation = &OBJC_CLASS___FIRInstanceIDTokenDeleteOperation; // weak
char *selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ = "initWithAction:forAuthorizedEntity:scope:options:checkinPreferences:keyPair:"; // weak
void *classRef_FIRInstanceIDTokenOperation = &OBJC_CLASS___FIRInstanceIDTokenOperation; // weak
char aDelete[7] = "delete"; // weak
__CFString cfstr_Delete = { &__CFConstantStringClassReference, 1992LL, "delete", 6LL }; // weak
_UNKNOWN __block_descriptor_tmp; // weak
// extern void *_NSConcreteStackBlock[32];


//----- (0000000000000000) ----------------------------------------------------
void *__fastcall -[FIRInstanceIDTokenDeleteOperation initWithScope:checkinPreferences:keyPair:](__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14@1
  __int64 v6; // rbx@1
  __int64 v7; // rax@1
  __int64 v8; // r12@1
  __int64 v9; // rax@1
  __int64 v10; // rbx@1
  void *v11; // r14@1
  __int64 v13; // [sp+8h] [bp-38h]@1
  void *v14; // [sp+10h] [bp-30h]@1

  v5 = a5;
  v6 = a4;
  LODWORD(v7) = objc_retain(a3);
  v8 = v7;
  LODWORD(v9) = objc_retain(v6);
  v10 = v9;
  v13 = a1;
  v14 = classRef_FIRInstanceIDTokenDeleteOperation;
  v11 = objc_msgSendSuper2(
          &v13,
          selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_,
          1LL,
          0LL,
          v8,
          0LL,
          v9,
          v5);
  objc_release(v10);
  objc_release(v8);
  return v11;
}
// 920: using guessed type void *classRef_FIRInstanceIDTokenDeleteOperation;
// BD8: using guessed type char *selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_;
// 4AC0: using guessed type int __fastcall objc_release(_QWORD);
// 4AC8: using guessed type int __fastcall objc_retain(_QWORD);

//----- (0000000000000090) ----------------------------------------------------
// FIRInstanceIDTokenDeleteOperation - (void)performTokenOperation
void __cdecl -[FIRInstanceIDTokenDeleteOperation performTokenOperation](struct FIRInstanceIDTokenDeleteOperation *self, SEL a2)
{
  void *v2; // rax@1
  __int64 v3; // rax@1
  __int64 v4; // rbx@1
  void *v5; // rax@1
  __int64 v6; // rax@1
  __int64 v7; // r14@1
  const char *v8; // rsi@1
  void *v9; // rax@1
  void *v10; // rax@1
  void *v11; // rax@1
  void *v12; // rax@1
  void *v13; // rbx@1
  void *v14; // rax@1
  __int64 v15; // rax@1
  __int64 v16; // r14@1
  void *v17; // rax@1
  __int64 v18; // rax@1
  __int64 v19; // rbx@1
  const char *v20; // rsi@1
  void *v21; // rax@1
  void *v22; // rax@1
  void *v23; // r15@1
  void *v24; // rax@1
  __int64 v25; // rax@1
  __int64 v26; // rbx@1
  const char *v27; // r14@1
  void *v28; // rax@1
  __int64 v29; // rax@1
  __int64 v30; // rbx@1
  void *v31; // rax@2
  __int64 v32; // rax@2
  __int64 v33; // r14@2
  void *v34; // rax@2
  __int64 v35; // rax@2
  __int64 v36; // rbx@2
  __int64 v37; // rax@3
  void *v38; // rax@3
  __int64 v39; // r13@3
  void *v40; // rax@3
  __int64 v41; // rax@3
  __int64 v42; // rbx@3
  const char *v43; // rsi@3
  __int64 v44; // rax@3
  __int64 v45; // rdi@3
  void *v46; // rax@3
  void *v47; // r15@3
  __int64 v48; // rax@3
  __int64 v49; // rax@3
  __int64 v50; // rbx@3
  const char *v51; // rsi@3
  struct FIRInstanceIDTokenDeleteOperation *v52; // rbx@3
  void *v53; // rax@3
  const char *v54; // r12@3
  void *v55; // rax@3
  __int64 v56; // rax@3
  __int64 v57; // r14@3
  void *v58; // rax@4
  __int64 v59; // rax@4
  __int64 v60; // rbx@4
  __int64 v61; // r14@4
  __int64 v62; // r12@4
  void (__fastcall *v63)(void *); // rbx@4
  void *v64; // rax@5
  struct FIRInstanceIDTokenDeleteOperation *v65; // r14@5
  void *v66; // rax@5
  void *v67; // r12@5
  void *v68; // rax@5
  __int64 v69; // rax@5
  __int64 v70; // rbx@5
  void *v71; // rax@5
  void *v72; // rax@5
  void *v73; // rbx@5
  void *v74; // rdi@5
  __int64 v75; // r13@6
  void *v76; // [sp+10h] [bp-90h]@3
  signed int v77; // [sp+18h] [bp-88h]@3
  int v78; // [sp+1Ch] [bp-84h]@3
  int (__usercall *v79)@<eax>(__int64@<rax>, __int64@<rdx>, __int64@<rcx>, __int64@<rdi>, __int64@<rsi>); // [sp+20h] [bp-80h]@3
  void *v80; // [sp+28h] [bp-78h]@3
  char v81; // [sp+30h] [bp-70h]@3
  void *v82; // [sp+38h] [bp-68h]@3
  char v83; // [sp+40h] [bp-60h]@3
  struct FIRInstanceIDTokenDeleteOperation *v84; // [sp+48h] [bp-58h]@1
  __int64 v85; // [sp+50h] [bp-50h]@1
  __int64 v86; // [sp+58h] [bp-48h]@1
  __int64 v87; // [sp+60h] [bp-40h]@3
  void *v88; // [sp+68h] [bp-38h]@1
  void *v89; // [sp+70h] [bp-30h]@1

  v89 = objc_msgSend(
          classRef_FIRInstanceIDTokenOperation,
          *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 1));
  v2 = objc_msgSend(self, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 2));
  LODWORD(v3) = objc_retainAutoreleasedReturnValue(v2);
  v4 = v3;
  v5 = objc_msgSend(
         classRef_FIRInstanceIDTokenOperation,
         *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 3),
         v3);
  LODWORD(v6) = objc_retainAutoreleasedReturnValue(v5);
  v7 = v6;
  objc_release(v4);
  v8 = *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 4);
  v85 = v7;
  v9 = objc_msgSend(classRef_FIRInstanceIDTokenOperation, v8, v7);
  LODWORD(v10) = objc_retainAutoreleasedReturnValue(v9);
  v88 = v10;
  v11 = objc_msgSend(self, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 2));
  LODWORD(v12) = objc_retainAutoreleasedReturnValue(v11);
  v13 = v12;
  v14 = objc_msgSend(v12, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 5));
  LODWORD(v15) = objc_retainAutoreleasedReturnValue(v14);
  v16 = v15;
  objc_release(v13);
  v17 = objc_msgSend(self, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 6));
  LODWORD(v18) = objc_retainAutoreleasedReturnValue(v17);
  v19 = v18;
  v20 = *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 7);
  v86 = v16;
  v21 = objc_msgSend(classRef_FIRInstanceIDTokenOperation, v20, v16, v18);
  LODWORD(v22) = objc_retainAutoreleasedReturnValue(v21);
  v23 = v22;
  objc_release(v19);
  v24 = objc_msgSend(
          *(&classRef_FIRInstanceIDTokenOperation + 1),
          *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 8),
          &cfstr_Delete,
          &cfstr_Delete + 1);
  LODWORD(v25) = objc_retainAutoreleasedReturnValue(v24);
  v26 = v25;
  objc_msgSend(v23, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 9), v25);
  objc_release(v26);
  v27 = *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 10);
  v84 = self;
  v28 = objc_msgSend(self, v27);
  LODWORD(v29) = objc_retainAutoreleasedReturnValue(v28);
  v30 = v29;
  objc_release(v29);
  if ( v30 )
  {
    v31 = objc_msgSend(v84, v27);
    LODWORD(v32) = objc_retainAutoreleasedReturnValue(v31);
    v33 = v32;
    v34 = objc_msgSend(
            v84,
            *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 11),
            v32);
    LODWORD(v35) = objc_retainAutoreleasedReturnValue(v34);
    v36 = v35;
    objc_msgSend(v23, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 12), v35);
    objc_release(v36);
    objc_release(v33);
  }
  v82 = v23;
  LODWORD(v37) = FIRInstanceIDQueryFromQueryItems(v23);
  LODWORD(v38) = objc_retainAutoreleasedReturnValue(v37);
  v39 = (__int64)v38;
  v40 = objc_msgSend(
          v38,
          *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 13),
          4LL);
  LODWORD(v41) = objc_retainAutoreleasedReturnValue(v40);
  v42 = v41;
  v43 = *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 14);
  objc_msgSend(v88, v43, v41);
  objc_release(v42);
  LODWORD(v44) = FIRInstanceIDSharedLogger(v42, v43);
  v45 = v44;
  LODWORD(v46) = objc_retainAutoreleasedReturnValue(v44);
  v47 = v46;
  LODWORD(v48) = FIRInstanceIDRegisterServer(v45);
  LODWORD(v49) = objc_retainAutoreleasedReturnValue(v48);
  v50 = v49;
  v51 = *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 15);
  v87 = v39;
  objc_msgSend(v47, v51, &aDelete[12], 21000LL, &cfstr_Delete + 2, v49, v39);
  objc_release(v50);
  objc_release(v47);
  v52 = v84;
  objc_initWeak(&v83, v84);
  v76 = _NSConcreteStackBlock[0];
  v77 = -1040187392;
  v78 = 0;
  v79 = __58__FIRInstanceIDTokenDeleteOperation_performTokenOperation__block_invoke;
  v80 = &__block_descriptor_tmp;
  objc_copyWeak(&v81, &v83);
  LODWORD(v53) = objc_retainBlock(&v76, &v83);
  v89 = v53;
  v54 = *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 17);
  v55 = objc_msgSend(v52, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 17));
  LODWORD(v56) = objc_retainAutoreleasedReturnValue(v55);
  v57 = v56;
  objc_release(v56);
  if ( v57 )
  {
    v58 = objc_msgSend(v52, v54);
    LODWORD(v59) = objc_retainAutoreleasedReturnValue(v58);
    v60 = v59;
    (*(void (__fastcall **)(__int64, void *, void *))(v59 + 16))(v59, v88, v89);
    objc_release(v60);
    v61 = v85;
    v62 = v86;
    v63 = (void (__fastcall *)(void *))objc_release;
  }
  else
  {
    v64 = objc_msgSend(
            classRef_FIRInstanceIDTokenOperation,
            *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 18));
    v65 = v52;
    LODWORD(v66) = objc_retainAutoreleasedReturnValue(v64);
    v67 = v66;
    v68 = objc_msgSend(
            v66,
            *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 19),
            v88);
    LODWORD(v69) = objc_retainAutoreleasedReturnValue(v68);
    v70 = v69;
    objc_msgSend(v65, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 20), v69);
    objc_release(v70);
    v71 = objc_msgSend(
            v65,
            *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 21));
    LODWORD(v72) = objc_retainAutoreleasedReturnValue(v71);
    v73 = v72;
    objc_msgSend(v72, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 22));
    v74 = v73;
    v63 = (void (__fastcall *)(void *))objc_release;
    objc_release(v74);
    objc_release(v67);
    v61 = v85;
    v62 = v86;
  }
  v75 = v87;
  v63(v89);
  objc_destroyWeak(&v81);
  objc_destroyWeak(&v83);
  v63((void *)v75);
  v63(v82);
  v63((void *)v62);
  v63(v88);
  v63((void *)v61);
}
// BD8: using guessed type char *selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_;
// CC8: using guessed type void *classRef_FIRInstanceIDTokenOperation;
// E30: using guessed type __CFString cfstr_Delete;
// 4A20: using guessed type int __fastcall FIRInstanceIDQueryFromQueryItems(_QWORD);
// 4A28: using guessed type int __fastcall FIRInstanceIDRegisterServer(_QWORD);
// 4A30: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD, _QWORD);
// 4A90: using guessed type int __fastcall objc_copyWeak(_QWORD, _QWORD);
// 4A98: using guessed type int __fastcall objc_destroyWeak(_QWORD);
// 4AA0: using guessed type int __fastcall objc_initWeak(_QWORD, _QWORD);
// 4AC0: using guessed type int __fastcall objc_release(_QWORD);
// 4AD0: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);
// 4AD8: using guessed type int __fastcall objc_retainBlock(_QWORD, _QWORD);

//----- (0000000000000501) ----------------------------------------------------
int __usercall __58__FIRInstanceIDTokenDeleteOperation_performTokenOperation__block_invoke@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, __int64 a3@<rcx>, __int64 a4@<rdi>, __int64 a5@<rsi>)
{
  __int64 v5; // ST00_8@1
  __int64 v6; // r14@1
  __int64 v7; // r12@1
  __int64 v8; // rax@1
  __int64 v9; // r15@1
  __int64 v10; // rax@1
  __int64 v11; // r12@1
  __int64 v12; // rax@1
  __int64 v13; // r14@1
  void *v14; // rax@1
  void *v15; // r13@1

  v5 = a1;
  v6 = a3;
  v7 = a2;
  LODWORD(v8) = objc_retain(a5);
  v9 = v8;
  LODWORD(v10) = objc_retain(v7);
  v11 = v10;
  LODWORD(v12) = objc_retain(v6);
  v13 = v12;
  LODWORD(v14) = objc_loadWeakRetained(a4 + 32);
  v15 = v14;
  objc_msgSend(
    v14,
    *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 16),
    v9,
    v11,
    v13,
    v5);
  objc_release(v13);
  objc_release(v11);
  objc_release(v9);
  return objc_release(v15);
}
// BD8: using guessed type char *selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_;
// 4AA8: using guessed type int __fastcall objc_loadWeakRetained(_QWORD);
// 4AC0: using guessed type int __fastcall objc_release(_QWORD);
// 4AC8: using guessed type int __fastcall objc_retain(_QWORD);

//----- (000000000000058E) ----------------------------------------------------
int __fastcall __copy_helper_block_(__int64 a1, __int64 a2)
{
  return objc_copyWeak(a1 + 32, a2 + 32);
}
// 4A90: using guessed type int __fastcall objc_copyWeak(_QWORD, _QWORD);

//----- (00000000000005A0) ----------------------------------------------------
int __fastcall __destroy_helper_block_(__int64 a1)
{
  return objc_destroyWeak(a1 + 32);
}
// 4A98: using guessed type int __fastcall objc_destroyWeak(_QWORD);

//----- (00000000000005AE) ----------------------------------------------------
// FIRInstanceIDTokenDeleteOperation - (void)handleResponseWithData:(id) response:(id) error:(id) 
void __cdecl -[FIRInstanceIDTokenDeleteOperation handleResponseWithData:response:error:](struct FIRInstanceIDTokenDeleteOperation *self, SEL a2, id a3, id a4, id a5)
{
  id v5; // r13@1
  id v6; // rbx@1
  __int64 v7; // rax@1
  __int64 v8; // r15@1
  __int64 v9; // rax@1
  __int64 v10; // r12@1
  id v11; // rdi@1
  void *v12; // rax@1
  void *v13; // r13@1
  __int64 v14; // rax@2
  void *v15; // rax@2
  void *v16; // rbx@2
  void *v17; // rax@2
  void *v18; // rax@3
  void *v19; // rbx@3
  void *v20; // rax@6
  __int64 v21; // rax@6
  __int64 v22; // r14@6
  __int64 v23; // r12@6
  __int64 v24; // rdi@6
  __int64 v25; // rax@7
  void *v26; // rax@7
  __int64 v27; // ST18_8@7
  void *v28; // r12@7
  void *v29; // rax@7
  __int64 v30; // rax@7
  __int64 v31; // r12@7
  struct FIRInstanceIDTokenDeleteOperation *v32; // [sp+20h] [bp-30h]@1

  v5 = a5;
  v6 = a4;
  v32 = self;
  LODWORD(v7) = objc_retain(a3);
  v8 = v7;
  LODWORD(v9) = objc_retain(v6);
  v10 = v9;
  v11 = v5;
  LODWORD(v12) = objc_retain(v5);
  v13 = v12;
  if ( !v12 )
  {
    v18 = objc_msgSend(
            *(&classRef_FIRInstanceIDTokenOperation + 2),
            *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 25));
    v19 = objc_msgSend(
            v18,
            *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 26),
            v8,
            4LL);
    if ( objc_msgSend(v19, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 27)) )
    {
      if ( (unsigned __int8)objc_msgSend(
                              v19,
                              *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 29),
                              &cfstr_Delete + 4) )
      {
        objc_msgSend(
          v32,
          *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 24),
          0LL,
          0LL,
          0LL);
LABEL_9:
        objc_release(v19);
        goto LABEL_10;
      }
      LODWORD(v25) = ((int (*)(void))FIRInstanceIDSharedLogger)();
      LODWORD(v26) = objc_retainAutoreleasedReturnValue(v25);
      v27 = v10;
      v28 = v26;
      objc_msgSend(
        v26,
        *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 15),
        &aDelete[155],
        21002LL,
        &cfstr_Delete + 5,
        v27);
      objc_release(v28);
      v29 = objc_msgSend(
              *(&classRef_FIRInstanceIDTokenOperation + 3),
              *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 28),
              0LL);
      LODWORD(v30) = objc_retainAutoreleasedReturnValue(v29);
      v31 = v30;
      objc_msgSend(
        v32,
        *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 24),
        1LL,
        0LL,
        v30);
      v24 = v31;
      v10 = v27;
    }
    else
    {
      v20 = objc_msgSend(
              *(&classRef_FIRInstanceIDTokenOperation + 3),
              *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 28),
              0LL);
      LODWORD(v21) = objc_retainAutoreleasedReturnValue(v20);
      v22 = v10;
      v23 = v21;
      objc_msgSend(
        v32,
        *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 24),
        1LL,
        0LL,
        v21);
      v24 = v23;
      v10 = v22;
    }
    objc_release(v24);
    goto LABEL_9;
  }
  LODWORD(v14) = FIRInstanceIDSharedLogger(v11, a2);
  LODWORD(v15) = objc_retainAutoreleasedReturnValue(v14);
  v16 = v15;
  v17 = objc_msgSend(v13, *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 23));
  objc_msgSend(
    v16,
    *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 15),
    &aDelete[155],
    21001LL,
    &cfstr_Delete + 3,
    v17);
  objc_release(v16);
  objc_msgSend(
    v32,
    *(&selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_ + 24),
    1LL,
    0LL,
    v13);
LABEL_10:
  objc_release(v13);
  objc_release(v10);
  objc_release(v8);
}
// BD8: using guessed type char *selRef_initWithAction_forAuthorizedEntity_scope_options_checkinPreferences_keyPair_;
// CC8: using guessed type void *classRef_FIRInstanceIDTokenOperation;
// E30: using guessed type __CFString cfstr_Delete;
// 4A30: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD, _QWORD);
// 4AC0: using guessed type int __fastcall objc_release(_QWORD);
// 4AC8: using guessed type int __fastcall objc_retain(_QWORD);
// 4AD0: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

// ALL OK, 6 function(s) have been successfully decompiled
