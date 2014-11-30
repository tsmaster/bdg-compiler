/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the Mips target                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*125 cases */, 54|128,11/*1462*/,  TARGET_VAL(ISD::LOAD),// ->1467
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_Scope, 123, /*->132*/ // 5 children in Scope
/*9*/         OPC_RecordChild1, // #1 = $a
/*10*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*12*/        OPC_CheckType, MVT::i32,
/*14*/        OPC_Scope, 19, /*->35*/ // 6 children in Scope
/*16*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*18*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*20*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*22*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*25*/          OPC_EmitMergeInputChains1_0,
/*26*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu:i32 addrRegImm:i32:$a)
/*35*/        /*Scope*/ 19, /*->55*/
/*36*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*38*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*40*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*42*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*45*/          OPC_EmitMergeInputChains1_0,
/*46*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH:i32 addrRegImm:i32:$a)
/*55*/        /*Scope*/ 17, /*->73*/
/*56*/          OPC_CheckPredicate, 5, // Predicate_load
/*58*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*60*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*63*/          OPC_EmitMergeInputChains1_0,
/*64*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW:i32 addrRegImm:i32:$a)
/*73*/        /*Scope*/ 19, /*->93*/
/*74*/          OPC_CheckPredicate, 1, // Predicate_zextload
/*76*/          OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*78*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*80*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*83*/          OPC_EmitMergeInputChains1_0,
/*84*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 53
                // Dst: (LBu_P8:i32 addrRegImm:i64:$a)
/*93*/        /*Scope*/ 19, /*->113*/
/*94*/          OPC_CheckPredicate, 3, // Predicate_sextload
/*96*/          OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*98*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*100*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*103*/         OPC_EmitMergeInputChains1_0,
/*104*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 53
                // Dst: (LH_P8:i32 addrRegImm:i64:$a)
/*113*/       /*Scope*/ 17, /*->131*/
/*114*/         OPC_CheckPredicate, 5, // Predicate_load
/*116*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*118*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*121*/         OPC_EmitMergeInputChains1_0,
/*122*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                // Dst: (LW_P8:i32 addrRegImm:i64:$a)
/*131*/       0, /*End of Scope*/
/*132*/     /*Scope*/ 65, /*->198*/
/*133*/       OPC_MoveChild, 1,
/*135*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*138*/       OPC_RecordChild0, // #1 = $base
/*139*/       OPC_RecordChild1, // #2 = $index
/*140*/       OPC_CheckType, MVT::i32,
/*142*/       OPC_MoveParent,
/*143*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*145*/       OPC_CheckType, MVT::i32,
/*147*/       OPC_Scope, 16, /*->165*/ // 3 children in Scope
/*149*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*151*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*153*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*155*/         OPC_EmitMergeInputChains1_0,
/*156*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 27
                // Dst: (LBUX:i32 i32:i32:$base, i32:i32:$index)
/*165*/       /*Scope*/ 16, /*->182*/
/*166*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*168*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*170*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*172*/         OPC_EmitMergeInputChains1_0,
/*173*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 27
                // Dst: (LHX:i32 i32:i32:$base, i32:i32:$index)
/*182*/       /*Scope*/ 14, /*->197*/
/*183*/         OPC_CheckPredicate, 5, // Predicate_load
/*185*/         OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*187*/         OPC_EmitMergeInputChains1_0,
/*188*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 (add:i32 i32:i32:$base, i32:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                // Dst: (LWX:i32 i32:i32:$base, i32:i32:$index)
/*197*/       0, /*End of Scope*/
/*198*/     /*Scope*/ 115|128,7/*1011*/, /*->1211*/
/*200*/       OPC_RecordChild1, // #1 = $addr
/*201*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*203*/       OPC_Scope, 22, /*->227*/ // 21 children in Scope
/*205*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*207*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*209*/         OPC_CheckType, MVT::i32,
/*211*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*213*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*216*/         OPC_EmitMergeInputChains1_0,
/*217*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                // Dst: (LbRxRyOffMemX16:i32 addr16:i32:$addr)
/*227*/       /*Scope*/ 22, /*->250*/
/*228*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*230*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*232*/         OPC_CheckType, MVT::i32,
/*234*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*236*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*239*/         OPC_EmitMergeInputChains1_0,
/*240*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$addr)
/*250*/       /*Scope*/ 22, /*->273*/
/*251*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*253*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*255*/         OPC_CheckType, MVT::i32,
/*257*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*259*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*262*/         OPC_EmitMergeInputChains1_0,
/*263*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                // Dst: (LhRxRyOffMemX16:i32 addr16:i32:$addr)
/*273*/       /*Scope*/ 22, /*->296*/
/*274*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*276*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*278*/         OPC_CheckType, MVT::i32,
/*280*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*282*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*285*/         OPC_EmitMergeInputChains1_0,
/*286*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$addr)
/*296*/       /*Scope*/ 20, /*->317*/
/*297*/         OPC_CheckPredicate, 5, // Predicate_load
/*299*/         OPC_CheckType, MVT::i32,
/*301*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*303*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$addr #2 #3 #4
/*306*/         OPC_EmitMergeInputChains1_0,
/*307*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 addr16:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (LwRxRyOffMemX16:i32 addr16:i32:$addr)
/*317*/       /*Scope*/ 44, /*->362*/
/*318*/         OPC_CheckPredicate, 8, // Predicate_extload
/*320*/         OPC_CheckType, MVT::i32,
/*322*/         OPC_Scope, 18, /*->342*/ // 2 children in Scope
/*324*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*326*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*328*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*331*/           OPC_EmitMergeInputChains1_0,
/*332*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LbuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (LbuRxRyOffMemX16:i32 addr16:i32:$src)
/*342*/         /*Scope*/ 18, /*->361*/
/*343*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*345*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*347*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // selectAddr16:$src #2 #3 #4
/*350*/           OPC_EmitMergeInputChains1_0,
/*351*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LhuRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 addr16:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (LhuRxRyOffMemX16:i32 addr16:i32:$src)
/*361*/         0, /*End of Scope*/
/*362*/       /*Scope*/ 40, /*->403*/
/*363*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*365*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*367*/         OPC_CheckType, MVT::i32,
/*369*/         OPC_Scope, 15, /*->386*/ // 2 children in Scope
/*371*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*373*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*376*/           OPC_EmitMergeInputChains1_0,
/*377*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB:i32 addr:i32:$addr)
/*386*/         /*Scope*/ 15, /*->402*/
/*387*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*389*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*392*/           OPC_EmitMergeInputChains1_0,
/*393*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB_P8:i32 addr:i64:$addr)
/*402*/         0, /*End of Scope*/
/*403*/       /*Scope*/ 40, /*->444*/
/*404*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*406*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*408*/         OPC_CheckType, MVT::i32,
/*410*/         OPC_Scope, 15, /*->427*/ // 2 children in Scope
/*412*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*414*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*417*/           OPC_EmitMergeInputChains1_0,
/*418*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addrDefault:i32:$addr)
/*427*/         /*Scope*/ 15, /*->443*/
/*428*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*430*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*433*/           OPC_EmitMergeInputChains1_0,
/*434*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addrDefault:i64:$addr)
/*443*/         0, /*End of Scope*/
/*444*/       /*Scope*/ 40, /*->485*/
/*445*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*447*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*449*/         OPC_CheckType, MVT::i32,
/*451*/         OPC_Scope, 15, /*->468*/ // 2 children in Scope
/*453*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*455*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*458*/           OPC_EmitMergeInputChains1_0,
/*459*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH:i32 addrDefault:i32:$addr)
/*468*/         /*Scope*/ 15, /*->484*/
/*469*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*471*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*474*/           OPC_EmitMergeInputChains1_0,
/*475*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH_P8:i32 addrDefault:i64:$addr)
/*484*/         0, /*End of Scope*/
/*485*/       /*Scope*/ 40, /*->526*/
/*486*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*488*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*490*/         OPC_CheckType, MVT::i32,
/*492*/         OPC_Scope, 15, /*->509*/ // 2 children in Scope
/*494*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*496*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*499*/           OPC_EmitMergeInputChains1_0,
/*500*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$addr)
/*509*/         /*Scope*/ 15, /*->525*/
/*510*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*512*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*515*/           OPC_EmitMergeInputChains1_0,
/*516*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$addr)
/*525*/         0, /*End of Scope*/
/*526*/       /*Scope*/ 38, /*->565*/
/*527*/         OPC_CheckPredicate, 5, // Predicate_load
/*529*/         OPC_CheckType, MVT::i32,
/*531*/         OPC_Scope, 15, /*->548*/ // 2 children in Scope
/*533*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*535*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*538*/           OPC_EmitMergeInputChains1_0,
/*539*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW:i32 addrDefault:i32:$addr)
/*548*/         /*Scope*/ 15, /*->564*/
/*549*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*551*/           OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*554*/           OPC_EmitMergeInputChains1_0,
/*555*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LW_P8:i32 addrDefault:i64:$addr)
/*564*/         0, /*End of Scope*/
/*565*/       /*Scope*/ 114, /*->680*/
/*566*/         OPC_CheckPredicate, 8, // Predicate_extload
/*568*/         OPC_CheckType, MVT::i32,
/*570*/         OPC_Scope, 17, /*->589*/ // 6 children in Scope
/*572*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*574*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*576*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*579*/           OPC_EmitMergeInputChains1_0,
/*580*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*589*/         /*Scope*/ 17, /*->607*/
/*590*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*592*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*594*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*597*/           OPC_EmitMergeInputChains1_0,
/*598*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu:i32 addr:i32:$src)
/*607*/         /*Scope*/ 17, /*->625*/
/*608*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*610*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*612*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*615*/           OPC_EmitMergeInputChains1_0,
/*616*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu:i32 addr:i32:$src)
/*625*/         /*Scope*/ 17, /*->643*/
/*626*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*628*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*630*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*633*/           OPC_EmitMergeInputChains1_0,
/*634*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*643*/         /*Scope*/ 17, /*->661*/
/*644*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*646*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*648*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*651*/           OPC_EmitMergeInputChains1_0,
/*652*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBu_P8:i32 addr:i64:$src)
/*661*/         /*Scope*/ 17, /*->679*/
/*662*/           OPC_CheckPredicate, 10, // Predicate_extloadi16
/*664*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*666*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*669*/           OPC_EmitMergeInputChains1_0,
/*670*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHu_P8:i32 addr:i64:$src)
/*679*/         0, /*End of Scope*/
/*680*/       /*Scope*/ 40, /*->721*/
/*681*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*683*/         OPC_CheckPredicate, 6, // Predicate_sextloadi8
/*685*/         OPC_CheckType, MVT::i64,
/*687*/         OPC_Scope, 15, /*->704*/ // 2 children in Scope
/*689*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*691*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*694*/           OPC_EmitMergeInputChains1_0,
/*695*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$addr)
/*704*/         /*Scope*/ 15, /*->720*/
/*705*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*707*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*710*/           OPC_EmitMergeInputChains1_0,
/*711*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$addr)
/*720*/         0, /*End of Scope*/
/*721*/       /*Scope*/ 40, /*->762*/
/*722*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*724*/         OPC_CheckPredicate, 2, // Predicate_zextloadi8
/*726*/         OPC_CheckType, MVT::i64,
/*728*/         OPC_Scope, 15, /*->745*/ // 2 children in Scope
/*730*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*732*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*735*/           OPC_EmitMergeInputChains1_0,
/*736*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64:i64 addr:i32:$addr)
/*745*/         /*Scope*/ 15, /*->761*/
/*746*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*748*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*751*/           OPC_EmitMergeInputChains1_0,
/*752*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LBu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBu64_P8:i64 addr:i64:$addr)
/*761*/         0, /*End of Scope*/
/*762*/       /*Scope*/ 40, /*->803*/
/*763*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*765*/         OPC_CheckPredicate, 4, // Predicate_sextloadi16
/*767*/         OPC_CheckType, MVT::i64,
/*769*/         OPC_Scope, 15, /*->786*/ // 2 children in Scope
/*771*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*773*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*776*/           OPC_EmitMergeInputChains1_0,
/*777*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$addr)
/*786*/         /*Scope*/ 15, /*->802*/
/*787*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*789*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*792*/           OPC_EmitMergeInputChains1_0,
/*793*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$addr)
/*802*/         0, /*End of Scope*/
/*803*/       /*Scope*/ 40, /*->844*/
/*804*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*806*/         OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*808*/         OPC_CheckType, MVT::i64,
/*810*/         OPC_Scope, 15, /*->827*/ // 2 children in Scope
/*812*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*814*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*817*/           OPC_EmitMergeInputChains1_0,
/*818*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64:i64 addr:i32:$addr)
/*827*/         /*Scope*/ 15, /*->843*/
/*828*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*830*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*833*/           OPC_EmitMergeInputChains1_0,
/*834*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LHu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHu64_P8:i64 addr:i64:$addr)
/*843*/         0, /*End of Scope*/
/*844*/       /*Scope*/ 40, /*->885*/
/*845*/         OPC_CheckPredicate, 3, // Predicate_sextload
/*847*/         OPC_CheckPredicate, 12, // Predicate_sextloadi32
/*849*/         OPC_CheckType, MVT::i64,
/*851*/         OPC_Scope, 15, /*->868*/ // 2 children in Scope
/*853*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*855*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*858*/           OPC_EmitMergeInputChains1_0,
/*859*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$addr)
/*868*/         /*Scope*/ 15, /*->884*/
/*869*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*871*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*874*/           OPC_EmitMergeInputChains1_0,
/*875*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$addr)
/*884*/         0, /*End of Scope*/
/*885*/       /*Scope*/ 40, /*->926*/
/*886*/         OPC_CheckPredicate, 1, // Predicate_zextload
/*888*/         OPC_CheckPredicate, 13, // Predicate_zextloadi32
/*890*/         OPC_CheckType, MVT::i64,
/*892*/         OPC_Scope, 15, /*->909*/ // 2 children in Scope
/*894*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*896*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*899*/           OPC_EmitMergeInputChains1_0,
/*900*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64:i64 addr:i32:$addr)
/*909*/         /*Scope*/ 15, /*->925*/
/*910*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*912*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*915*/           OPC_EmitMergeInputChains1_0,
/*916*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LWu64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                  // Dst: (LWu64_P8:i64 addr:i64:$addr)
/*925*/         0, /*End of Scope*/
/*926*/       /*Scope*/ 38, /*->965*/
/*927*/         OPC_CheckPredicate, 5, // Predicate_load
/*929*/         OPC_CheckType, MVT::i64,
/*931*/         OPC_Scope, 15, /*->948*/ // 2 children in Scope
/*933*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*935*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*938*/           OPC_EmitMergeInputChains1_0,
/*939*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD:i64 addr:i32:$addr)
/*948*/         /*Scope*/ 15, /*->964*/
/*949*/           OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*951*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #2 #3
/*954*/           OPC_EmitMergeInputChains1_0,
/*955*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LD_P8:i64 addr:i64:$addr)
/*964*/         0, /*End of Scope*/
/*965*/       /*Scope*/ 22|128,1/*150*/, /*->1117*/
/*967*/         OPC_CheckPredicate, 8, // Predicate_extload
/*969*/         OPC_CheckType, MVT::i64,
/*971*/         OPC_Scope, 17, /*->990*/ // 8 children in Scope
/*973*/           OPC_CheckPredicate, 11, // Predicate_extloadi1
/*975*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*977*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*980*/           OPC_EmitMergeInputChains1_0,
/*981*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*990*/         /*Scope*/ 17, /*->1008*/
/*991*/           OPC_CheckPredicate, 9, // Predicate_extloadi8
/*993*/           OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*995*/           OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*998*/           OPC_EmitMergeInputChains1_0,
/*999*/           OPC_MorphNodeTo, TARGET_VAL(Mips::LB64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64:i64 addr:i32:$src)
/*1008*/        /*Scope*/ 17, /*->1026*/
/*1009*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1011*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1013*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1016*/          OPC_EmitMergeInputChains1_0,
/*1017*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64:i64 addr:i32:$src)
/*1026*/        /*Scope*/ 17, /*->1044*/
/*1027*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1029*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1031*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1034*/          OPC_EmitMergeInputChains1_0,
/*1035*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64:i64 addr:i32:$src)
/*1044*/        /*Scope*/ 17, /*->1062*/
/*1045*/          OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1047*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1052*/          OPC_EmitMergeInputChains1_0,
/*1053*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1062*/        /*Scope*/ 17, /*->1080*/
/*1063*/          OPC_CheckPredicate, 9, // Predicate_extloadi8
/*1065*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1067*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1070*/          OPC_EmitMergeInputChains1_0,
/*1071*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LB64_P8:i64 addr:i64:$src)
/*1080*/        /*Scope*/ 17, /*->1098*/
/*1081*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*1083*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1085*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1088*/          OPC_EmitMergeInputChains1_0,
/*1089*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LH64_P8:i64 addr:i64:$src)
/*1098*/        /*Scope*/ 17, /*->1116*/
/*1099*/          OPC_CheckPredicate, 14, // Predicate_extloadi32
/*1101*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1103*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$src #2 #3
/*1106*/          OPC_EmitMergeInputChains1_0,
/*1107*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LW64_P8:i64 addr:i64:$src)
/*1116*/        0, /*End of Scope*/
/*1117*/      /*Scope*/ 92, /*->1210*/
/*1118*/        OPC_CheckPredicate, 5, // Predicate_load
/*1120*/        OPC_SwitchType /*2 cases */, 34,  MVT::f32,// ->1157
/*1123*/          OPC_Scope, 15, /*->1140*/ // 2 children in Scope
/*1125*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1127*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1130*/            OPC_EmitMergeInputChains1_0,
/*1131*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1_P8:f32 addrRegImm:i64:$a)
/*1140*/          /*Scope*/ 15, /*->1156*/
/*1141*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1143*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1146*/            OPC_EmitMergeInputChains1_0,
/*1147*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f32 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LWC1:f32 addrRegImm:i32:$a)
/*1156*/          0, /*End of Scope*/
                /*SwitchType*/ 50,  MVT::f64,// ->1209
/*1159*/          OPC_Scope, 15, /*->1176*/ // 3 children in Scope
/*1161*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1163*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1166*/            OPC_EmitMergeInputChains1_0,
/*1167*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164_P8:f64 addrRegImm:i64:$a)
/*1176*/          /*Scope*/ 15, /*->1192*/
/*1177*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1179*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1182*/            OPC_EmitMergeInputChains1_0,
/*1183*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC164:f64 addrRegImm:i32:$a)
/*1192*/          /*Scope*/ 15, /*->1208*/
/*1193*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1195*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // selectAddrRegImm:$a #2 #3
/*1198*/            OPC_EmitMergeInputChains1_0,
/*1199*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:f64 addrRegImm:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 53
                    // Dst: (LDC1:f64 addrRegImm:i32:$a)
/*1208*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1210*/      0, /*End of Scope*/
/*1211*/    /*Scope*/ 99, /*->1311*/
/*1212*/      OPC_MoveChild, 1,
/*1214*/      OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1217*/      OPC_RecordChild0, // #1 = $base
/*1218*/      OPC_RecordChild1, // #2 = $index
/*1219*/      OPC_SwitchType /*2 cases */, 51,  MVT::i32,// ->1273
/*1222*/        OPC_MoveParent,
/*1223*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1225*/        OPC_CheckPredicate, 5, // Predicate_load
/*1227*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1242
/*1230*/          OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1232*/          OPC_EmitMergeInputChains1_0,
/*1233*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1:f32 CPURegs:i32:$base, CPURegs:i32:$index)
                /*SwitchType*/ 28,  MVT::f64,// ->1272
/*1244*/          OPC_Scope, 12, /*->1258*/ // 2 children in Scope
/*1246*/            OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1248*/            OPC_EmitMergeInputChains1_0,
/*1249*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC1:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1258*/          /*Scope*/ 12, /*->1271*/
/*1259*/            OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1261*/            OPC_EmitMergeInputChains1_0,
/*1262*/            OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:f64 (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                    // Dst: (LDXC164:f64 CPURegs:i32:$base, CPURegs:i32:$index)
/*1271*/          0, /*End of Scope*/
                0, // EndSwitchType
              /*SwitchType*/ 35,  MVT::i64,// ->1310
/*1275*/        OPC_MoveParent,
/*1276*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1278*/        OPC_CheckPredicate, 5, // Predicate_load
/*1280*/        OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->1295
/*1283*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1285*/          OPC_EmitMergeInputChains1_0,
/*1286*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f32 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LWXC1_P8:f32 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                /*SwitchType*/ 12,  MVT::f64,// ->1309
/*1297*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1299*/          OPC_EmitMergeInputChains1_0,
/*1300*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:f64 (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 27
                  // Dst: (LDXC164_P8:f64 CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                0, // EndSwitchType
              0, // EndSwitchType
/*1311*/    /*Scope*/ 25|128,1/*153*/, /*->1466*/
/*1313*/      OPC_RecordChild1, // #1 = $addr
/*1314*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1316*/      OPC_CheckPredicate, 5, // Predicate_load
/*1318*/      OPC_SwitchType /*4 cases */, 34,  MVT::f32,// ->1355
/*1321*/        OPC_Scope, 15, /*->1338*/ // 2 children in Scope
/*1323*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1325*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1328*/          OPC_EmitMergeInputChains1_0,
/*1329*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1_P8:f32 addrDefault:i64:$addr)
/*1338*/        /*Scope*/ 15, /*->1354*/
/*1339*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1341*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1344*/          OPC_EmitMergeInputChains1_0,
/*1345*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LWC1:f32 addrDefault:i32:$addr)
/*1354*/        0, /*End of Scope*/
              /*SwitchType*/ 50,  MVT::f64,// ->1407
/*1357*/        OPC_Scope, 15, /*->1374*/ // 3 children in Scope
/*1359*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1361*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1364*/          OPC_EmitMergeInputChains1_0,
/*1365*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164_P8:f64 addrDefault:i64:$addr)
/*1374*/        /*Scope*/ 15, /*->1390*/
/*1375*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1377*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1380*/          OPC_EmitMergeInputChains1_0,
/*1381*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC164:f64 addrDefault:i32:$addr)
/*1390*/        /*Scope*/ 15, /*->1406*/
/*1391*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1393*/          OPC_CheckComplexPat, /*CP*/3, /*#*/1, // selectAddrDefault:$addr #2 #3
/*1396*/          OPC_EmitMergeInputChains1_0,
/*1397*/          OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 addrDefault:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDC1:f64 addrDefault:i32:$addr)
/*1406*/        0, /*End of Scope*/
              /*SwitchType*/ 27,  MVT::v2i16,// ->1436
/*1409*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1411*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1414*/        OPC_EmitMergeInputChains1_0,
/*1415*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1424*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1427*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v2i16 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v2i16 (LW:i32 addr:i32:$a), DSPRegs:i32)
              /*SwitchType*/ 27,  MVT::v4i8,// ->1465
/*1438*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*1440*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$a #2 #3
/*1443*/        OPC_EmitMergeInputChains1_0,
/*1444*/        OPC_EmitNode, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*1453*/        OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*1456*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 4, 5, 
                // Src: (ld:v4i8 addr:iPTR:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:v4i8 (LW:i32 addr:i32:$a), DSPRegs:i32)
              0, // EndSwitchType
/*1466*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36|128,6/*804*/,  TARGET_VAL(ISD::STORE),// ->2275
/*1471*/    OPC_RecordMemRef,
/*1472*/    OPC_RecordNode,   // #0 = 'st' chained node
/*1473*/    OPC_Scope, 93|128,1/*221*/, /*->1697*/ // 3 children in Scope
/*1476*/      OPC_RecordChild1, // #1 = $v
/*1477*/      OPC_Scope, 92, /*->1571*/ // 2 children in Scope
/*1479*/        OPC_CheckChild1Type, MVT::f32,
/*1481*/        OPC_Scope, 39, /*->1522*/ // 2 children in Scope
/*1483*/          OPC_RecordChild2, // #2 = $a
/*1484*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1486*/          OPC_CheckPredicate, 16, // Predicate_store
/*1488*/          OPC_Scope, 15, /*->1505*/ // 2 children in Scope
/*1490*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1492*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1495*/            OPC_EmitMergeInputChains1_0,
/*1496*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1_P8 f32:f32:$v, addrRegImm:i64:$a)
/*1505*/          /*Scope*/ 15, /*->1521*/
/*1506*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1508*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1511*/            OPC_EmitMergeInputChains1_0,
/*1512*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f32:f32:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SWC1 f32:f32:$v, addrRegImm:i32:$a)
/*1521*/          0, /*End of Scope*/
/*1522*/        /*Scope*/ 47, /*->1570*/
/*1523*/          OPC_MoveChild, 2,
/*1525*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1528*/          OPC_RecordChild0, // #2 = $base
/*1529*/          OPC_RecordChild1, // #3 = $index
/*1530*/          OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->1550
/*1533*/            OPC_MoveParent,
/*1534*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1536*/            OPC_CheckPredicate, 16, // Predicate_store
/*1538*/            OPC_CheckPatternPredicate, 6, // (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding())
/*1540*/            OPC_EmitMergeInputChains1_0,
/*1541*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1 FGR32:f32:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
                  /*SwitchType*/ 17,  MVT::i64,// ->1569
/*1552*/            OPC_MoveParent,
/*1553*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1555*/            OPC_CheckPredicate, 16, // Predicate_store
/*1557*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1559*/            OPC_EmitMergeInputChains1_0,
/*1560*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SWXC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR32:f32:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SWXC1_P8 FGR32:f32:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*1570*/        0, /*End of Scope*/
/*1571*/      /*Scope*/ 124, /*->1696*/
/*1572*/        OPC_CheckChild1Type, MVT::f64,
/*1574*/        OPC_Scope, 55, /*->1631*/ // 2 children in Scope
/*1576*/          OPC_RecordChild2, // #2 = $a
/*1577*/          OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1579*/          OPC_CheckPredicate, 16, // Predicate_store
/*1581*/          OPC_Scope, 15, /*->1598*/ // 3 children in Scope
/*1583*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1585*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1588*/            OPC_EmitMergeInputChains1_0,
/*1589*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164_P8 f64:f64:$v, addrRegImm:i64:$a)
/*1598*/          /*Scope*/ 15, /*->1614*/
/*1599*/            OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1601*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1604*/            OPC_EmitMergeInputChains1_0,
/*1605*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC164 f64:f64:$v, addrRegImm:i32:$a)
/*1614*/          /*Scope*/ 15, /*->1630*/
/*1615*/            OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1617*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // selectAddrRegImm:$a #3 #4
/*1620*/            OPC_EmitMergeInputChains1_0,
/*1621*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st f64:f64:$v, addrRegImm:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 53
                    // Dst: (SDC1 f64:f64:$v, addrRegImm:i32:$a)
/*1630*/          0, /*End of Scope*/
/*1631*/        /*Scope*/ 63, /*->1695*/
/*1632*/          OPC_MoveChild, 2,
/*1634*/          OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*1637*/          OPC_RecordChild0, // #2 = $base
/*1638*/          OPC_RecordChild1, // #3 = $index
/*1639*/          OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->1675
/*1642*/            OPC_MoveParent,
/*1643*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1645*/            OPC_CheckPredicate, 16, // Predicate_store
/*1647*/            OPC_Scope, 12, /*->1661*/ // 2 children in Scope
/*1649*/              OPC_CheckPatternPredicate, 7, // (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*1651*/              OPC_EmitMergeInputChains1_0,
/*1652*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC1), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st AFGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC1 AFGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*1661*/            /*Scope*/ 12, /*->1674*/
/*1662*/              OPC_CheckPatternPredicate, 8, // (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1664*/              OPC_EmitMergeInputChains1_0,
/*1665*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (st FGR64:f64:$fs, (add:i32 CPURegs:i32:$base, CPURegs:i32:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                      // Dst: (SDXC164 FGR64:f64:$fs, CPURegs:i32:$base, CPURegs:i32:$index)
/*1674*/            0, /*End of Scope*/
                  /*SwitchType*/ 17,  MVT::i64,// ->1694
/*1677*/            OPC_MoveParent,
/*1678*/            OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1680*/            OPC_CheckPredicate, 16, // Predicate_store
/*1682*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1684*/            OPC_EmitMergeInputChains1_0,
/*1685*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SDXC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (st FGR64:f64:$fs, (add:i64 CPU64Regs:i64:$base, CPU64Regs:i64:$index))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 27
                    // Dst: (SDXC164_P8 FGR64:f64:$fs, CPU64Regs:i64:$base, CPU64Regs:i64:$index)
                  0, // EndSwitchType
/*1695*/        0, /*End of Scope*/
/*1696*/      0, /*End of Scope*/
/*1697*/    /*Scope*/ 52, /*->1750*/
/*1698*/      OPC_MoveChild, 1,
/*1700*/      OPC_CheckInteger, 0, 
/*1702*/      OPC_CheckType, MVT::i32,
/*1704*/      OPC_MoveParent,
/*1705*/      OPC_RecordChild2, // #1 = $dst
/*1706*/      OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1708*/      OPC_CheckPredicate, 16, // Predicate_store
/*1710*/      OPC_Scope, 18, /*->1730*/ // 2 children in Scope
/*1712*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1714*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1717*/        OPC_EmitMergeInputChains1_0,
/*1718*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1721*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW ZERO:i32, addr:i32:$dst)
/*1730*/      /*Scope*/ 18, /*->1749*/
/*1731*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1733*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$dst #2 #3
/*1736*/        OPC_EmitMergeInputChains1_0,
/*1737*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1740*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
                // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
                // Dst: (SW_P8 ZERO:i32, addr:i64:$dst)
/*1749*/      0, /*End of Scope*/
/*1750*/    /*Scope*/ 10|128,4/*522*/, /*->2274*/
/*1752*/      OPC_RecordChild1, // #1 = $r
/*1753*/      OPC_Scope, 57|128,1/*185*/, /*->1941*/ // 6 children in Scope
/*1756*/        OPC_CheckChild1Type, MVT::i32,
/*1758*/        OPC_RecordChild2, // #2 = $addr
/*1759*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1761*/        OPC_Scope, 42, /*->1805*/ // 4 children in Scope
/*1763*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1765*/          OPC_Scope, 18, /*->1785*/ // 2 children in Scope
/*1767*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1769*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1771*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SbRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (SbRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1785*/          /*Scope*/ 18, /*->1804*/
/*1786*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1788*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1790*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1793*/            OPC_EmitMergeInputChains1_0,
/*1794*/            OPC_MorphNodeTo, TARGET_VAL(Mips::ShRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (ShRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1804*/          0, /*End of Scope*/
/*1805*/        /*Scope*/ 18, /*->1824*/
/*1806*/          OPC_CheckPredicate, 16, // Predicate_store
/*1808*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*1810*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // selectAddr16:$addr #3 #4 #5
/*1813*/          OPC_EmitMergeInputChains1_0,
/*1814*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SwRxRyOffMemX16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st CPU16Regs:i32:$r, addr16:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (SwRxRyOffMemX16 CPU16Regs:i32:$r, addr16:i32:$addr)
/*1824*/        /*Scope*/ 78, /*->1903*/
/*1825*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*1827*/          OPC_Scope, 36, /*->1865*/ // 2 children in Scope
/*1829*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*1831*/            OPC_Scope, 15, /*->1848*/ // 2 children in Scope
/*1833*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1835*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1838*/              OPC_EmitMergeInputChains1_0,
/*1839*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB CPURegs:i32:$rt, addr:i32:$addr)
/*1848*/            /*Scope*/ 15, /*->1864*/
/*1849*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1851*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1854*/              OPC_EmitMergeInputChains1_0,
/*1855*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1864*/            0, /*End of Scope*/
/*1865*/          /*Scope*/ 36, /*->1902*/
/*1866*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*1868*/            OPC_Scope, 15, /*->1885*/ // 2 children in Scope
/*1870*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1872*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1875*/              OPC_EmitMergeInputChains1_0,
/*1876*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH CPURegs:i32:$rt, addr:i32:$addr)
/*1885*/            /*Scope*/ 15, /*->1901*/
/*1886*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1888*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1891*/              OPC_EmitMergeInputChains1_0,
/*1892*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1901*/            0, /*End of Scope*/
/*1902*/          0, /*End of Scope*/
/*1903*/        /*Scope*/ 36, /*->1940*/
/*1904*/          OPC_CheckPredicate, 16, // Predicate_store
/*1906*/          OPC_Scope, 15, /*->1923*/ // 2 children in Scope
/*1908*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1910*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1913*/            OPC_EmitMergeInputChains1_0,
/*1914*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW CPURegs:i32:$rt, addr:i32:$addr)
/*1923*/          /*Scope*/ 15, /*->1939*/
/*1924*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1926*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*1929*/            OPC_EmitMergeInputChains1_0,
/*1930*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*1939*/          0, /*End of Scope*/
/*1940*/        0, /*End of Scope*/
/*1941*/      /*Scope*/ 41, /*->1983*/
/*1942*/        OPC_CheckChild1Type, MVT::f32,
/*1944*/        OPC_RecordChild2, // #2 = $addr
/*1945*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1947*/        OPC_CheckPredicate, 16, // Predicate_store
/*1949*/        OPC_Scope, 15, /*->1966*/ // 2 children in Scope
/*1951*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1953*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1956*/          OPC_EmitMergeInputChains1_0,
/*1957*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1_P8 FGR32:f32:$rt, addrDefault:i64:$addr)
/*1966*/        /*Scope*/ 15, /*->1982*/
/*1967*/          OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1969*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1972*/          OPC_EmitMergeInputChains1_0,
/*1973*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR32:f32:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWC1 FGR32:f32:$rt, addrDefault:i32:$addr)
/*1982*/        0, /*End of Scope*/
/*1983*/      /*Scope*/ 57, /*->2041*/
/*1984*/        OPC_CheckChild1Type, MVT::f64,
/*1986*/        OPC_RecordChild2, // #2 = $addr
/*1987*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*1989*/        OPC_CheckPredicate, 16, // Predicate_store
/*1991*/        OPC_Scope, 15, /*->2008*/ // 3 children in Scope
/*1993*/          OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*1995*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*1998*/          OPC_EmitMergeInputChains1_0,
/*1999*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164_P8 FGR64:f64:$rt, addrDefault:i64:$addr)
/*2008*/        /*Scope*/ 15, /*->2024*/
/*2009*/          OPC_CheckPatternPredicate, 4, // (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2011*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2014*/          OPC_EmitMergeInputChains1_0,
/*2015*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC164), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st FGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC164 FGR64:f64:$rt, addrDefault:i32:$addr)
/*2024*/        /*Scope*/ 15, /*->2040*/
/*2025*/          OPC_CheckPatternPredicate, 5, // (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*2027*/          OPC_CheckComplexPat, /*CP*/3, /*#*/2, // selectAddrDefault:$addr #3 #4
/*2030*/          OPC_EmitMergeInputChains1_0,
/*2031*/          OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st AFGR64:f64:$rt, addrDefault:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SDC1 AFGR64:f64:$rt, addrDefault:i32:$addr)
/*2040*/        0, /*End of Scope*/
/*2041*/      /*Scope*/ 32|128,1/*160*/, /*->2203*/
/*2043*/        OPC_CheckChild1Type, MVT::i64,
/*2045*/        OPC_RecordChild2, // #2 = $addr
/*2046*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2048*/        OPC_Scope, 115, /*->2165*/ // 2 children in Scope
/*2050*/          OPC_CheckPredicate, 17, // Predicate_truncstore
/*2052*/          OPC_Scope, 36, /*->2090*/ // 3 children in Scope
/*2054*/            OPC_CheckPredicate, 18, // Predicate_truncstorei8
/*2056*/            OPC_Scope, 15, /*->2073*/ // 2 children in Scope
/*2058*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2060*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2063*/              OPC_EmitMergeInputChains1_0,
/*2064*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2073*/            /*Scope*/ 15, /*->2089*/
/*2074*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2076*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2079*/              OPC_EmitMergeInputChains1_0,
/*2080*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                      // Dst: (SB64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2089*/            0, /*End of Scope*/
/*2090*/          /*Scope*/ 36, /*->2127*/
/*2091*/            OPC_CheckPredicate, 19, // Predicate_truncstorei16
/*2093*/            OPC_Scope, 15, /*->2110*/ // 2 children in Scope
/*2095*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2097*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2100*/              OPC_EmitMergeInputChains1_0,
/*2101*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2110*/            /*Scope*/ 15, /*->2126*/
/*2111*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2113*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2116*/              OPC_EmitMergeInputChains1_0,
/*2117*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                      // Dst: (SH64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2126*/            0, /*End of Scope*/
/*2127*/          /*Scope*/ 36, /*->2164*/
/*2128*/            OPC_CheckPredicate, 20, // Predicate_truncstorei32
/*2130*/            OPC_Scope, 15, /*->2147*/ // 2 children in Scope
/*2132*/              OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2134*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2137*/              OPC_EmitMergeInputChains1_0,
/*2138*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2147*/            /*Scope*/ 15, /*->2163*/
/*2148*/              OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2150*/              OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2153*/              OPC_EmitMergeInputChains1_0,
/*2154*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SW64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                      // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                      // Dst: (SW64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2163*/            0, /*End of Scope*/
/*2164*/          0, /*End of Scope*/
/*2165*/        /*Scope*/ 36, /*->2202*/
/*2166*/          OPC_CheckPredicate, 16, // Predicate_store
/*2168*/          OPC_Scope, 15, /*->2185*/ // 2 children in Scope
/*2170*/            OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2172*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2175*/            OPC_EmitMergeInputChains1_0,
/*2176*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD CPU64Regs:i64:$rt, addr:i32:$addr)
/*2185*/          /*Scope*/ 15, /*->2201*/
/*2186*/            OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2188*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2191*/            OPC_EmitMergeInputChains1_0,
/*2192*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SD_P8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPU64Regs:i64:$rt, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SD_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2201*/          0, /*End of Scope*/
/*2202*/        0, /*End of Scope*/
/*2203*/      /*Scope*/ 34, /*->2238*/
/*2204*/        OPC_CheckChild1Type, MVT::v2i16,
/*2206*/        OPC_RecordChild2, // #2 = $a
/*2207*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2209*/        OPC_CheckPredicate, 16, // Predicate_store
/*2211*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2213*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2216*/        OPC_EmitMergeInputChains1_0,
/*2217*/        OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*2220*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2229*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v2i16:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$val, CPURegs:i32), addr:i32:$a)
/*2238*/      /*Scope*/ 34, /*->2273*/
/*2239*/        OPC_CheckChild1Type, MVT::v4i8,
/*2241*/        OPC_RecordChild2, // #2 = $a
/*2242*/        OPC_CheckPredicate, 15, // Predicate_unindexedstore
/*2244*/        OPC_CheckPredicate, 16, // Predicate_store
/*2246*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2248*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$a #3 #4
/*2251*/        OPC_EmitMergeInputChains1_0,
/*2252*/        OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*2255*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*2264*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 6, 3, 4, 
                // Src: (st DSPRegs:v4i8:$val, addr:iPTR:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SW (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$val, CPURegs:i32), addr:i32:$a)
/*2273*/      0, /*End of Scope*/
/*2274*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 57,  TARGET_VAL(MipsISD::ExtractLOHI),// ->2335
/*2278*/    OPC_RecordChild0, // #0 = $ac
/*2279*/    OPC_RecordChild1, // #1 = $lohi_idx
/*2280*/    OPC_MoveChild, 1,
/*2282*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2285*/    OPC_MoveParent,
/*2286*/    OPC_SwitchType /*2 cases */, 30,  MVT::i32,// ->2319
/*2289*/      OPC_Scope, 13, /*->2304*/ // 2 children in Scope
/*2291*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2293*/        OPC_EmitConvertToTarget, 1,
/*2295*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 26
                // Dst: (EXTRACT_SUBREG:i32 ACRegsDSP:Untyped:$ac, (imm:i32):$lohi_idx)
/*2304*/      /*Scope*/ 13, /*->2318*/
/*2305*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2307*/        OPC_EmitConvertToTarget, 1,
/*2309*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (ExtractLOHI:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
                // Dst: (EXTRACT_SUBREG:i32 ACRegs:Untyped:$ac, (imm:i32):$lohi_idx)
/*2318*/      0, /*End of Scope*/
            /*SwitchType*/ 13,  MVT::i64,// ->2334
/*2321*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2323*/      OPC_EmitConvertToTarget, 1,
/*2325*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
              // Src: (ExtractLOHI:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx) - Complexity = 6
              // Dst: (EXTRACT_SUBREG:i64 ACRegs128:Untyped:$ac, (imm:i32):$lohi_idx)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Mult),// ->2386
/*2338*/    OPC_RecordChild0, // #0 = $rs
/*2339*/    OPC_Scope, 29, /*->2370*/ // 2 children in Scope
/*2341*/      OPC_CheckChild0Type, MVT::i32,
/*2343*/      OPC_RecordChild1, // #1 = $rt
/*2344*/      OPC_Scope, 11, /*->2357*/ // 2 children in Scope
/*2346*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2348*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULT_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 23
                // Dst: (MULT_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2357*/      /*Scope*/ 11, /*->2369*/
/*2358*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2360*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULT), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMult:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULT:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*2369*/      0, /*End of Scope*/
/*2370*/    /*Scope*/ 14, /*->2385*/
/*2371*/      OPC_CheckChild0Type, MVT::i64,
/*2373*/      OPC_RecordChild1, // #1 = $rt
/*2374*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2376*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULT), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMult:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULT:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*2385*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(MipsISD::Multu),// ->2437
/*2389*/    OPC_RecordChild0, // #0 = $rs
/*2390*/    OPC_Scope, 29, /*->2421*/ // 2 children in Scope
/*2392*/      OPC_CheckChild0Type, MVT::i32,
/*2394*/      OPC_RecordChild1, // #1 = $rt
/*2395*/      OPC_Scope, 11, /*->2408*/ // 2 children in Scope
/*2397*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2399*/        OPC_MorphNodeTo, TARGET_VAL(Mips::MULTU_DSP), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 23
                // Dst: (MULTU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt)
/*2408*/      /*Scope*/ 11, /*->2420*/
/*2409*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2411*/        OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMULTu), 0,
                    1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
                // Src: (MipsMultu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (PseudoMULTu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*2420*/      0, /*End of Scope*/
/*2421*/    /*Scope*/ 14, /*->2436*/
/*2422*/      OPC_CheckChild0Type, MVT::i64,
/*2424*/      OPC_RecordChild1, // #1 = $rt
/*2425*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2427*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDMULTu), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsMultu:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDMULTu:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*2436*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAdd),// ->2471
/*2440*/    OPC_RecordChild0, // #0 = $rs
/*2441*/    OPC_RecordChild1, // #1 = $rt
/*2442*/    OPC_RecordChild2, // #2 = $acin
/*2443*/    OPC_Scope, 12, /*->2457*/ // 2 children in Scope
/*2445*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2447*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADD_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2457*/    /*Scope*/ 12, /*->2470*/
/*2458*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2460*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADD), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAdd:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADD:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2470*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MAddu),// ->2505
/*2474*/    OPC_RecordChild0, // #0 = $rs
/*2475*/    OPC_RecordChild1, // #1 = $rt
/*2476*/    OPC_RecordChild2, // #2 = $acin
/*2477*/    OPC_Scope, 12, /*->2491*/ // 2 children in Scope
/*2479*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2481*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MADDU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2491*/    /*Scope*/ 12, /*->2504*/
/*2492*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2494*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMADDU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMAddu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMADDU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2504*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSub),// ->2539
/*2508*/    OPC_RecordChild0, // #0 = $rs
/*2509*/    OPC_RecordChild1, // #1 = $rt
/*2510*/    OPC_RecordChild2, // #2 = $acin
/*2511*/    OPC_Scope, 12, /*->2525*/ // 2 children in Scope
/*2513*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2515*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUB_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2525*/    /*Scope*/ 12, /*->2538*/
/*2526*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2528*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUB), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSub:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUB:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2538*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 31,  TARGET_VAL(MipsISD::MSubu),// ->2573
/*2542*/    OPC_RecordChild0, // #0 = $rs
/*2543*/    OPC_RecordChild1, // #1 = $rt
/*2544*/    OPC_RecordChild2, // #2 = $acin
/*2545*/    OPC_Scope, 12, /*->2559*/ // 2 children in Scope
/*2547*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*2549*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU_DSP), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 23
              // Dst: (MSUBU_DSP:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
/*2559*/    /*Scope*/ 12, /*->2572*/
/*2560*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*2562*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoMSUBU), 0,
                  1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsMSubu:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin) - Complexity = 3
              // Dst: (PseudoMSUBU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt, ACRegs:Untyped:$acin)
/*2572*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWL),// ->2658
/*2576*/    OPC_RecordMemRef,
/*2577*/    OPC_RecordNode,   // #0 = 'MipsLWL' chained node
/*2578*/    OPC_RecordChild1, // #1 = $addr
/*2579*/    OPC_RecordChild2, // #2 = $src
/*2580*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2619
/*2583*/      OPC_Scope, 16, /*->2601*/ // 2 children in Scope
/*2585*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2587*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2590*/        OPC_EmitMergeInputChains1_0,
/*2591*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2601*/      /*Scope*/ 16, /*->2618*/
/*2602*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2604*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2607*/        OPC_EmitMergeInputChains1_0,
/*2608*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWL_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2618*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2657
/*2621*/      OPC_Scope, 16, /*->2639*/ // 2 children in Scope
/*2623*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2625*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2628*/        OPC_EmitMergeInputChains1_0,
/*2629*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2639*/      /*Scope*/ 16, /*->2656*/
/*2640*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2642*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2645*/        OPC_EmitMergeInputChains1_0,
/*2646*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWL64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2656*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 82,  TARGET_VAL(MipsISD::LWR),// ->2743
/*2661*/    OPC_RecordMemRef,
/*2662*/    OPC_RecordNode,   // #0 = 'MipsLWR' chained node
/*2663*/    OPC_RecordChild1, // #1 = $addr
/*2664*/    OPC_RecordChild2, // #2 = $src
/*2665*/    OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2704
/*2668*/      OPC_Scope, 16, /*->2686*/ // 2 children in Scope
/*2670*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2672*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2675*/        OPC_EmitMergeInputChains1_0,
/*2676*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR:i32 addr:i32:$addr, CPURegs:i32:$src)
/*2686*/      /*Scope*/ 16, /*->2703*/
/*2687*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2689*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2692*/        OPC_EmitMergeInputChains1_0,
/*2693*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i32 addr:iPTR:$addr, CPURegs:i32:$src) - Complexity = 12
                // Dst: (LWR_P8:i32 addr:i64:$addr, CPURegs:i32:$src)
/*2703*/      0, /*End of Scope*/
            /*SwitchType*/ 36,  MVT::i64,// ->2742
/*2706*/      OPC_Scope, 16, /*->2724*/ // 2 children in Scope
/*2708*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2710*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2713*/        OPC_EmitMergeInputChains1_0,
/*2714*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2724*/      /*Scope*/ 16, /*->2741*/
/*2725*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2727*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2730*/        OPC_EmitMergeInputChains1_0,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (MipsLWR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
                // Dst: (LWR64_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2741*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWL),// ->2827
/*2746*/    OPC_RecordMemRef,
/*2747*/    OPC_RecordNode,   // #0 = 'MipsSWL' chained node
/*2748*/    OPC_RecordChild1, // #1 = $rt
/*2749*/    OPC_Scope, 37, /*->2788*/ // 2 children in Scope
/*2751*/      OPC_CheckChild1Type, MVT::i32,
/*2753*/      OPC_RecordChild2, // #2 = $addr
/*2754*/      OPC_Scope, 15, /*->2771*/ // 2 children in Scope
/*2756*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2758*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2761*/        OPC_EmitMergeInputChains1_0,
/*2762*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL CPURegs:i32:$rt, addr:i32:$addr)
/*2771*/      /*Scope*/ 15, /*->2787*/
/*2772*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2774*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2777*/        OPC_EmitMergeInputChains1_0,
/*2778*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2787*/      0, /*End of Scope*/
/*2788*/    /*Scope*/ 37, /*->2826*/
/*2789*/      OPC_CheckChild1Type, MVT::i64,
/*2791*/      OPC_RecordChild2, // #2 = $addr
/*2792*/      OPC_Scope, 15, /*->2809*/ // 2 children in Scope
/*2794*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2796*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2799*/        OPC_EmitMergeInputChains1_0,
/*2800*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2809*/      /*Scope*/ 15, /*->2825*/
/*2810*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2812*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2815*/        OPC_EmitMergeInputChains1_0,
/*2816*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWL64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWL64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2825*/      0, /*End of Scope*/
/*2826*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 81,  TARGET_VAL(MipsISD::SWR),// ->2911
/*2830*/    OPC_RecordMemRef,
/*2831*/    OPC_RecordNode,   // #0 = 'MipsSWR' chained node
/*2832*/    OPC_RecordChild1, // #1 = $rt
/*2833*/    OPC_Scope, 37, /*->2872*/ // 2 children in Scope
/*2835*/      OPC_CheckChild1Type, MVT::i32,
/*2837*/      OPC_RecordChild2, // #2 = $addr
/*2838*/      OPC_Scope, 15, /*->2855*/ // 2 children in Scope
/*2840*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2842*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2845*/        OPC_EmitMergeInputChains1_0,
/*2846*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR CPURegs:i32:$rt, addr:i32:$addr)
/*2855*/      /*Scope*/ 15, /*->2871*/
/*2856*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2858*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2861*/        OPC_EmitMergeInputChains1_0,
/*2862*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPURegs:i32:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR_P8 CPURegs:i32:$rt, addr:i64:$addr)
/*2871*/      0, /*End of Scope*/
/*2872*/    /*Scope*/ 37, /*->2910*/
/*2873*/      OPC_CheckChild1Type, MVT::i64,
/*2875*/      OPC_RecordChild2, // #2 = $addr
/*2876*/      OPC_Scope, 15, /*->2893*/ // 2 children in Scope
/*2878*/        OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2880*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2883*/        OPC_EmitMergeInputChains1_0,
/*2884*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64 CPU64Regs:i64:$rt, addr:i32:$addr)
/*2893*/      /*Scope*/ 15, /*->2909*/
/*2894*/        OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2896*/        OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*2899*/        OPC_EmitMergeInputChains1_0,
/*2900*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SWR64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (MipsSWR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
                // Dst: (SWR64_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*2909*/      0, /*End of Scope*/
/*2910*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDL),// ->2956
/*2914*/    OPC_RecordMemRef,
/*2915*/    OPC_RecordNode,   // #0 = 'MipsLDL' chained node
/*2916*/    OPC_RecordChild1, // #1 = $addr
/*2917*/    OPC_RecordChild2, // #2 = $src
/*2918*/    OPC_CheckType, MVT::i64,
/*2920*/    OPC_Scope, 16, /*->2938*/ // 2 children in Scope
/*2922*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2924*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2927*/      OPC_EmitMergeInputChains1_0,
/*2928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2938*/    /*Scope*/ 16, /*->2955*/
/*2939*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2941*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2944*/      OPC_EmitMergeInputChains1_0,
/*2945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDL:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDL_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*2955*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::LDR),// ->3001
/*2959*/    OPC_RecordMemRef,
/*2960*/    OPC_RecordNode,   // #0 = 'MipsLDR' chained node
/*2961*/    OPC_RecordChild1, // #1 = $addr
/*2962*/    OPC_RecordChild2, // #2 = $src
/*2963*/    OPC_CheckType, MVT::i64,
/*2965*/    OPC_Scope, 16, /*->2983*/ // 2 children in Scope
/*2967*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2969*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2972*/      OPC_EmitMergeInputChains1_0,
/*2973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR:i64 addr:i32:$addr, CPU64Regs:i64:$src)
/*2983*/    /*Scope*/ 16, /*->3000*/
/*2984*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*2986*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // selectIntAddr:$addr #3 #4
/*2989*/      OPC_EmitMergeInputChains1_0,
/*2990*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (MipsLDR:i64 addr:iPTR:$addr, CPU64Regs:i64:$src) - Complexity = 12
              // Dst: (LDR_P8:i64 addr:i64:$addr, CPU64Regs:i64:$src)
/*3000*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDL),// ->3044
/*3004*/    OPC_RecordMemRef,
/*3005*/    OPC_RecordNode,   // #0 = 'MipsSDL' chained node
/*3006*/    OPC_RecordChild1, // #1 = $rt
/*3007*/    OPC_CheckChild1Type, MVT::i64,
/*3009*/    OPC_RecordChild2, // #2 = $addr
/*3010*/    OPC_Scope, 15, /*->3027*/ // 2 children in Scope
/*3012*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3014*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3017*/      OPC_EmitMergeInputChains1_0,
/*3018*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL CPU64Regs:i64:$rt, addr:i32:$addr)
/*3027*/    /*Scope*/ 15, /*->3043*/
/*3028*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3030*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3033*/      OPC_EmitMergeInputChains1_0,
/*3034*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDL_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDL CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDL_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*3043*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SDR),// ->3087
/*3047*/    OPC_RecordMemRef,
/*3048*/    OPC_RecordNode,   // #0 = 'MipsSDR' chained node
/*3049*/    OPC_RecordChild1, // #1 = $rt
/*3050*/    OPC_CheckChild1Type, MVT::i64,
/*3052*/    OPC_RecordChild2, // #2 = $addr
/*3053*/    OPC_Scope, 15, /*->3070*/ // 2 children in Scope
/*3055*/      OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3057*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3060*/      OPC_EmitMergeInputChains1_0,
/*3061*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR CPU64Regs:i64:$rt, addr:i32:$addr)
/*3070*/    /*Scope*/ 15, /*->3086*/
/*3071*/      OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*3073*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // selectIntAddr:$addr #3 #4
/*3076*/      OPC_EmitMergeInputChains1_0,
/*3077*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SDR_P8), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (MipsSDR CPU64Regs:i64:$rt, addr:iPTR:$addr) - Complexity = 12
              // Dst: (SDR_P8 CPU64Regs:i64:$rt, addr:i64:$addr)
/*3086*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 54,  TARGET_VAL(ISD::FrameIndex),// ->3144
/*3090*/    OPC_RecordNode,   // #0 = $addr
/*3091*/    OPC_SwitchType /*2 cases */, 33,  MVT::i32,// ->3127
/*3094*/      OPC_Scope, 15, /*->3111*/ // 2 children in Scope
/*3096*/        OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*3098*/        OPC_CheckComplexPat, /*CP*/1, /*#*/0, // selectAddr16:$addr #1 #2 #3
/*3101*/        OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRyOffMemX16), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                // Src: addr16:i32:$addr - Complexity = 12
                // Dst: (AddiuRxRyOffMemX16:i32 addr16:i32:$addr)
/*3111*/      /*Scope*/ 14, /*->3126*/
/*3112*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3114*/        OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3117*/        OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: addr:i32:$addr - Complexity = 9
                // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
/*3126*/      0, /*End of Scope*/
            /*SwitchType*/ 14,  MVT::i64,// ->3143
/*3129*/      OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*3131*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // selectIntAddr:$addr #1 #2
/*3134*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: addr:i64:$addr - Complexity = 9
              // Dst: (LEA_ADDiu64:i64 addr:i64:$addr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 37|128,8/*1061*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->4209
/*3148*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*3149*/    OPC_MoveChild, 1,
/*3151*/    OPC_Scope, 44, /*->3197*/ // 50 children in Scope
/*3153*/      OPC_CheckInteger, 124|128,8/*1148*/, 
/*3156*/      OPC_MoveParent,
/*3157*/      OPC_RecordChild2, // #1 = $rt
/*3158*/      OPC_RecordChild3, // #2 = $rs_sa
/*3159*/      OPC_Scope, 22, /*->3183*/ // 2 children in Scope
/*3161*/        OPC_MoveChild, 3,
/*3163*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3166*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*3168*/        OPC_MoveParent,
/*3169*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3171*/        OPC_EmitMergeInputChains1_0,
/*3172*/        OPC_EmitConvertToTarget, 2,
/*3174*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*3183*/      /*Scope*/ 12, /*->3196*/
/*3184*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3186*/        OPC_EmitMergeInputChains1_0,
/*3187*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_W), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 1148:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*3196*/      0, /*End of Scope*/
/*3197*/    /*Scope*/ 26, /*->3224*/
/*3198*/      OPC_CheckInteger, 117|128,8/*1141*/, 
/*3201*/      OPC_MoveParent,
/*3202*/      OPC_RecordChild2, // #1 = $mask
/*3203*/      OPC_MoveChild, 2,
/*3205*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3208*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*3210*/      OPC_MoveParent,
/*3211*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3213*/      OPC_EmitMergeInputChains1_0,
/*3214*/      OPC_EmitConvertToTarget, 1,
/*3216*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RDDSP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1141:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (RDDSP:i32 (imm:i32):$mask)
/*3224*/    /*Scope*/ 44, /*->3269*/
/*3225*/      OPC_CheckInteger, 123|128,8/*1147*/, 
/*3228*/      OPC_MoveParent,
/*3229*/      OPC_RecordChild2, // #1 = $rt
/*3230*/      OPC_RecordChild3, // #2 = $rs_sa
/*3231*/      OPC_Scope, 22, /*->3255*/ // 2 children in Scope
/*3233*/        OPC_MoveChild, 3,
/*3235*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3238*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3240*/        OPC_MoveParent,
/*3241*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3243*/        OPC_EmitMergeInputChains1_0,
/*3244*/        OPC_EmitConvertToTarget, 2,
/*3246*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHLL_S_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*3255*/      /*Scope*/ 12, /*->3268*/
/*3256*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3258*/        OPC_EmitMergeInputChains1_0,
/*3259*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_S_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1147:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_S_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3268*/      0, /*End of Scope*/
/*3269*/    /*Scope*/ 44, /*->3314*/
/*3270*/      OPC_CheckInteger, 121|128,8/*1145*/, 
/*3273*/      OPC_MoveParent,
/*3274*/      OPC_RecordChild2, // #1 = $a
/*3275*/      OPC_RecordChild3, // #2 = $shamt
/*3276*/      OPC_Scope, 22, /*->3300*/ // 2 children in Scope
/*3278*/        OPC_MoveChild, 3,
/*3280*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3283*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*3285*/        OPC_MoveParent,
/*3286*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3288*/        OPC_EmitMergeInputChains1_0,
/*3289*/        OPC_EmitConvertToTarget, 2,
/*3291*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*3300*/      /*Scope*/ 12, /*->3313*/
/*3301*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3303*/        OPC_EmitMergeInputChains1_0,
/*3304*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_PH), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v2i16 1145:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*3313*/      0, /*End of Scope*/
/*3314*/    /*Scope*/ 44, /*->3359*/
/*3315*/      OPC_CheckInteger, 122|128,8/*1146*/, 
/*3318*/      OPC_MoveParent,
/*3319*/      OPC_RecordChild2, // #1 = $a
/*3320*/      OPC_RecordChild3, // #2 = $shamt
/*3321*/      OPC_Scope, 22, /*->3345*/ // 2 children in Scope
/*3323*/        OPC_MoveChild, 3,
/*3325*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3328*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*3330*/        OPC_MoveParent,
/*3331*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3333*/        OPC_EmitMergeInputChains1_0,
/*3334*/        OPC_EmitConvertToTarget, 2,
/*3336*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*3345*/      /*Scope*/ 12, /*->3358*/
/*3346*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3348*/        OPC_EmitMergeInputChains1_0,
/*3349*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHLLV_QB), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i8 1146:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHLLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*3358*/      0, /*End of Scope*/
/*3359*/    /*Scope*/ 18, /*->3378*/
/*3360*/      OPC_CheckInteger, 16|128,8/*1040*/, 
/*3363*/      OPC_MoveParent,
/*3364*/      OPC_RecordChild2, // #1 = $rs
/*3365*/      OPC_RecordChild3, // #2 = $rt
/*3366*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3368*/      OPC_EmitMergeInputChains1_0,
/*3369*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1040:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3378*/    /*Scope*/ 18, /*->3397*/
/*3379*/      OPC_CheckInteger, 6|128,9/*1158*/, 
/*3382*/      OPC_MoveParent,
/*3383*/      OPC_RecordChild2, // #1 = $rs
/*3384*/      OPC_RecordChild3, // #2 = $rt
/*3385*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3387*/      OPC_EmitMergeInputChains1_0,
/*3388*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1158:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3397*/    /*Scope*/ 16, /*->3414*/
/*3398*/      OPC_CheckInteger, 13|128,8/*1037*/, 
/*3401*/      OPC_MoveParent,
/*3402*/      OPC_RecordChild2, // #1 = $rt
/*3403*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3405*/      OPC_EmitMergeInputChains1_0,
/*3406*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1037:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ABSQ_S_W:i32 CPURegs:i32:$rt)
/*3414*/    /*Scope*/ 18, /*->3433*/
/*3415*/      OPC_CheckInteger, 83|128,8/*1107*/, 
/*3418*/      OPC_MoveParent,
/*3419*/      OPC_RecordChild2, // #1 = $rs
/*3420*/      OPC_RecordChild3, // #2 = $rt
/*3421*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3423*/      OPC_EmitMergeInputChains1_0,
/*3424*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1107:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHL:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3433*/    /*Scope*/ 18, /*->3452*/
/*3434*/      OPC_CheckInteger, 84|128,8/*1108*/, 
/*3437*/      OPC_MoveParent,
/*3438*/      OPC_RecordChild2, // #1 = $rs
/*3439*/      OPC_RecordChild3, // #2 = $rt
/*3440*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3442*/      OPC_EmitMergeInputChains1_0,
/*3443*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEQ_S_W_PHR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1108:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEQ_S_W_PHR:i32 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3452*/    /*Scope*/ 18, /*->3471*/
/*3453*/      OPC_CheckInteger, 39|128,8/*1063*/, 
/*3456*/      OPC_MoveParent,
/*3457*/      OPC_RecordChild2, // #1 = $rs
/*3458*/      OPC_RecordChild3, // #2 = $rt
/*3459*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3461*/      OPC_EmitMergeInputChains1_0,
/*3462*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1063:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3471*/    /*Scope*/ 18, /*->3490*/
/*3472*/      OPC_CheckInteger, 41|128,8/*1065*/, 
/*3475*/      OPC_MoveParent,
/*3476*/      OPC_RecordChild2, // #1 = $rs
/*3477*/      OPC_RecordChild3, // #2 = $rt
/*3478*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3480*/      OPC_EmitMergeInputChains1_0,
/*3481*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1065:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3490*/    /*Scope*/ 18, /*->3509*/
/*3491*/      OPC_CheckInteger, 40|128,8/*1064*/, 
/*3494*/      OPC_MoveParent,
/*3495*/      OPC_RecordChild2, // #1 = $rs
/*3496*/      OPC_RecordChild3, // #2 = $rt
/*3497*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3499*/      OPC_EmitMergeInputChains1_0,
/*3500*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1064:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3509*/    /*Scope*/ 20, /*->3530*/
/*3510*/      OPC_CheckInteger, 70|128,8/*1094*/, 
/*3513*/      OPC_MoveParent,
/*3514*/      OPC_RecordChild2, // #1 = $base
/*3515*/      OPC_CheckChild2Type, MVT::i32,
/*3517*/      OPC_RecordChild3, // #2 = $index
/*3518*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3520*/      OPC_EmitMergeInputChains1_0,
/*3521*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1094:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LWX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3530*/    /*Scope*/ 20, /*->3551*/
/*3531*/      OPC_CheckInteger, 69|128,8/*1093*/, 
/*3534*/      OPC_MoveParent,
/*3535*/      OPC_RecordChild2, // #1 = $base
/*3536*/      OPC_CheckChild2Type, MVT::i32,
/*3538*/      OPC_RecordChild3, // #2 = $index
/*3539*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3541*/      OPC_EmitMergeInputChains1_0,
/*3542*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1093:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LHX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3551*/    /*Scope*/ 20, /*->3572*/
/*3552*/      OPC_CheckInteger, 68|128,8/*1092*/, 
/*3555*/      OPC_MoveParent,
/*3556*/      OPC_RecordChild2, // #1 = $base
/*3557*/      OPC_CheckChild2Type, MVT::i32,
/*3559*/      OPC_RecordChild3, // #2 = $index
/*3560*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3562*/      OPC_EmitMergeInputChains1_0,
/*3563*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LBUX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1092:iPTR, CPURegs:i32:$base, CPURegs:i32:$index) - Complexity = 8
              // Dst: (LBUX:i32 CPURegs:i32:$base, CPURegs:i32:$index)
/*3572*/    /*Scope*/ 18, /*->3591*/
/*3573*/      OPC_CheckInteger, 67|128,8/*1091*/, 
/*3576*/      OPC_MoveParent,
/*3577*/      OPC_RecordChild2, // #1 = $src
/*3578*/      OPC_RecordChild3, // #2 = $rs
/*3579*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3581*/      OPC_EmitMergeInputChains1_0,
/*3582*/      OPC_MorphNodeTo, TARGET_VAL(Mips::INSV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1091:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs) - Complexity = 8
              // Dst: (INSV:i32 CPURegs:i32:$src, CPURegs:i32:$rs)
/*3591*/    /*Scope*/ 18, /*->3610*/
/*3592*/      OPC_CheckInteger, 36|128,8/*1060*/, 
/*3595*/      OPC_MoveParent,
/*3596*/      OPC_RecordChild2, // #1 = $rs
/*3597*/      OPC_RecordChild3, // #2 = $rt
/*3598*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3600*/      OPC_EmitMergeInputChains1_0,
/*3601*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_EQ_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1060:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_EQ_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3610*/    /*Scope*/ 18, /*->3629*/
/*3611*/      OPC_CheckInteger, 38|128,8/*1062*/, 
/*3614*/      OPC_MoveParent,
/*3615*/      OPC_RecordChild2, // #1 = $rs
/*3616*/      OPC_RecordChild3, // #2 = $rt
/*3617*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3619*/      OPC_EmitMergeInputChains1_0,
/*3620*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LT_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1062:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LT_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3629*/    /*Scope*/ 18, /*->3648*/
/*3630*/      OPC_CheckInteger, 37|128,8/*1061*/, 
/*3633*/      OPC_MoveParent,
/*3634*/      OPC_RecordChild2, // #1 = $rs
/*3635*/      OPC_RecordChild3, // #2 = $rt
/*3636*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3638*/      OPC_EmitMergeInputChains1_0,
/*3639*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPGDU_LE_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1061:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPGDU_LE_QB:i32 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3648*/    /*Scope*/ 18, /*->3667*/
/*3649*/      OPC_CheckInteger, 90|128,8/*1114*/, 
/*3652*/      OPC_MoveParent,
/*3653*/      OPC_RecordChild2, // #1 = $rs
/*3654*/      OPC_RecordChild3, // #2 = $rt
/*3655*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3657*/      OPC_EmitMergeInputChains1_0,
/*3658*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1114:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_S_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3667*/    /*Scope*/ 18, /*->3686*/
/*3668*/      OPC_CheckInteger, 88|128,8/*1112*/, 
/*3671*/      OPC_MoveParent,
/*3672*/      OPC_RecordChild2, // #1 = $rs
/*3673*/      OPC_RecordChild3, // #2 = $rt
/*3674*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3676*/      OPC_EmitMergeInputChains1_0,
/*3677*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1112:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MULQ_RS_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3686*/    /*Scope*/ 18, /*->3705*/
/*3687*/      OPC_CheckInteger, 21|128,8/*1045*/, 
/*3690*/      OPC_MoveParent,
/*3691*/      OPC_RecordChild2, // #1 = $a
/*3692*/      OPC_RecordChild3, // #2 = $b
/*3693*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3695*/      OPC_EmitMergeInputChains1_0,
/*3696*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1045:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*3705*/    /*Scope*/ 18, /*->3724*/
/*3706*/      OPC_CheckInteger, 28|128,8/*1052*/, 
/*3709*/      OPC_MoveParent,
/*3710*/      OPC_RecordChild2, // #1 = $a
/*3711*/      OPC_RecordChild3, // #2 = $b
/*3712*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3714*/      OPC_EmitMergeInputChains1_0,
/*3715*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1052:iPTR, i32:i32:$a, i32:i32:$b) - Complexity = 8
              // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
/*3724*/    /*Scope*/ 12, /*->3737*/
/*3725*/      OPC_CheckInteger, 32|128,8/*1056*/, 
/*3728*/      OPC_MoveParent,
/*3729*/      OPC_EmitMergeInputChains1_0,
/*3730*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BPOSGE32_PSEUDO), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1056:iPTR) - Complexity = 8
              // Dst: (BPOSGE32_PSEUDO:i32)
/*3737*/    /*Scope*/ 18, /*->3756*/
/*3738*/      OPC_CheckInteger, 25|128,8/*1049*/, 
/*3741*/      OPC_MoveParent,
/*3742*/      OPC_RecordChild2, // #1 = $rs
/*3743*/      OPC_RecordChild3, // #2 = $rt
/*3744*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3746*/      OPC_EmitMergeInputChains1_0,
/*3747*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1049:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3756*/    /*Scope*/ 18, /*->3775*/
/*3757*/      OPC_CheckInteger, 14|128,9/*1166*/, 
/*3760*/      OPC_MoveParent,
/*3761*/      OPC_RecordChild2, // #1 = $rs
/*3762*/      OPC_RecordChild3, // #2 = $rt
/*3763*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3765*/      OPC_EmitMergeInputChains1_0,
/*3766*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1166:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBU_S_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3775*/    /*Scope*/ 18, /*->3794*/
/*3776*/      OPC_CheckInteger, 15|128,8/*1039*/, 
/*3779*/      OPC_MoveParent,
/*3780*/      OPC_RecordChild2, // #1 = $rs
/*3781*/      OPC_RecordChild3, // #2 = $rt
/*3782*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3784*/      OPC_EmitMergeInputChains1_0,
/*3785*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1039:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3794*/    /*Scope*/ 18, /*->3813*/
/*3795*/      OPC_CheckInteger, 5|128,9/*1157*/, 
/*3798*/      OPC_MoveParent,
/*3799*/      OPC_RecordChild2, // #1 = $rs
/*3800*/      OPC_RecordChild3, // #2 = $rt
/*3801*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3803*/      OPC_EmitMergeInputChains1_0,
/*3804*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1157:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3813*/    /*Scope*/ 16, /*->3830*/
/*3814*/      OPC_CheckInteger, 11|128,8/*1035*/, 
/*3817*/      OPC_MoveParent,
/*3818*/      OPC_RecordChild2, // #1 = $rt
/*3819*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3821*/      OPC_EmitMergeInputChains1_0,
/*3822*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v2i16 1035:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ABSQ_S_PH:v2i16 DSPRegs:v2i16:$rt)
/*3830*/    /*Scope*/ 18, /*->3849*/
/*3831*/      OPC_CheckInteger, 113|128,8/*1137*/, 
/*3834*/      OPC_MoveParent,
/*3835*/      OPC_RecordChild2, // #1 = $rs
/*3836*/      OPC_RecordChild3, // #2 = $rt
/*3837*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3839*/      OPC_EmitMergeInputChains1_0,
/*3840*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_RS_PH_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1137:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_RS_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*3849*/    /*Scope*/ 18, /*->3868*/
/*3850*/      OPC_CheckInteger, 114|128,8/*1138*/, 
/*3853*/      OPC_MoveParent,
/*3854*/      OPC_RecordChild2, // #1 = $rs
/*3855*/      OPC_RecordChild3, // #2 = $rt
/*3856*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3858*/      OPC_EmitMergeInputChains1_0,
/*3859*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQU_S_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1138:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQU_S_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3868*/    /*Scope*/ 18, /*->3887*/
/*3869*/      OPC_CheckInteger, 85|128,8/*1109*/, 
/*3872*/      OPC_MoveParent,
/*3873*/      OPC_RecordChild2, // #1 = $rs
/*3874*/      OPC_RecordChild3, // #2 = $rt
/*3875*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3877*/      OPC_EmitMergeInputChains1_0,
/*3878*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1109:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBL:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3887*/    /*Scope*/ 18, /*->3906*/
/*3888*/      OPC_CheckInteger, 86|128,8/*1110*/, 
/*3891*/      OPC_MoveParent,
/*3892*/      OPC_RecordChild2, // #1 = $rs
/*3893*/      OPC_RecordChild3, // #2 = $rt
/*3894*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3896*/      OPC_EmitMergeInputChains1_0,
/*3897*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULEU_S_PH_QBR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1110:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULEU_S_PH_QBR:v2i16 DSPRegs:v4i8:$rs, DSPRegs:v2i16:$rt)
/*3906*/    /*Scope*/ 18, /*->3925*/
/*3907*/      OPC_CheckInteger, 87|128,8/*1111*/, 
/*3910*/      OPC_MoveParent,
/*3911*/      OPC_RecordChild2, // #1 = $rs
/*3912*/      OPC_RecordChild3, // #2 = $rt
/*3913*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3915*/      OPC_EmitMergeInputChains1_0,
/*3916*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_RS_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1111:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_RS_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3925*/    /*Scope*/ 18, /*->3944*/
/*3926*/      OPC_CheckInteger, 97|128,8/*1121*/, 
/*3929*/      OPC_MoveParent,
/*3930*/      OPC_RecordChild2, // #1 = $rs
/*3931*/      OPC_RecordChild3, // #2 = $rt
/*3932*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3934*/      OPC_EmitMergeInputChains1_0,
/*3935*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1121:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PICK_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*3944*/    /*Scope*/ 18, /*->3963*/
/*3945*/      OPC_CheckInteger, 96|128,8/*1120*/, 
/*3948*/      OPC_MoveParent,
/*3949*/      OPC_RecordChild2, // #1 = $rs
/*3950*/      OPC_RecordChild3, // #2 = $rt
/*3951*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*3953*/      OPC_EmitMergeInputChains1_0,
/*3954*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PICK_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1120:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PICK_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3963*/    /*Scope*/ 18, /*->3982*/
/*3964*/      OPC_CheckInteger, 22|128,8/*1046*/, 
/*3967*/      OPC_MoveParent,
/*3968*/      OPC_RecordChild2, // #1 = $rs
/*3969*/      OPC_RecordChild3, // #2 = $rt
/*3970*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3972*/      OPC_EmitMergeInputChains1_0,
/*3973*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1046:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*3982*/    /*Scope*/ 18, /*->4001*/
/*3983*/      OPC_CheckInteger, 24|128,8/*1048*/, 
/*3986*/      OPC_MoveParent,
/*3987*/      OPC_RecordChild2, // #1 = $rs
/*3988*/      OPC_RecordChild3, // #2 = $rt
/*3989*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*3991*/      OPC_EmitMergeInputChains1_0,
/*3992*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1048:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4001*/    /*Scope*/ 18, /*->4020*/
/*4002*/      OPC_CheckInteger, 11|128,9/*1163*/, 
/*4005*/      OPC_MoveParent,
/*4006*/      OPC_RecordChild2, // #1 = $rs
/*4007*/      OPC_RecordChild3, // #2 = $rt
/*4008*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4010*/      OPC_EmitMergeInputChains1_0,
/*4011*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1163:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4020*/    /*Scope*/ 18, /*->4039*/
/*4021*/      OPC_CheckInteger, 13|128,9/*1165*/, 
/*4024*/      OPC_MoveParent,
/*4025*/      OPC_RecordChild2, // #1 = $rs
/*4026*/      OPC_RecordChild3, // #2 = $rt
/*4027*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4029*/      OPC_EmitMergeInputChains1_0,
/*4030*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1165:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBU_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4039*/    /*Scope*/ 16, /*->4056*/
/*4040*/      OPC_CheckInteger, 12|128,8/*1036*/, 
/*4043*/      OPC_MoveParent,
/*4044*/      OPC_RecordChild2, // #1 = $rt
/*4045*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4047*/      OPC_EmitMergeInputChains1_0,
/*4048*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ABSQ_S_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:v4i8 1036:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ABSQ_S_QB:v4i8 DSPRegs:v4i8:$rt)
/*4056*/    /*Scope*/ 18, /*->4075*/
/*4057*/      OPC_CheckInteger, 82|128,8/*1106*/, 
/*4060*/      OPC_MoveParent,
/*4061*/      OPC_RecordChild2, // #1 = $rs
/*4062*/      OPC_RecordChild3, // #2 = $rt
/*4063*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4065*/      OPC_EmitMergeInputChains1_0,
/*4066*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1106:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MUL_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4075*/    /*Scope*/ 18, /*->4094*/
/*4076*/      OPC_CheckInteger, 89|128,8/*1113*/, 
/*4079*/      OPC_MoveParent,
/*4080*/      OPC_RecordChild2, // #1 = $rs
/*4081*/      OPC_RecordChild3, // #2 = $rt
/*4082*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4084*/      OPC_EmitMergeInputChains1_0,
/*4085*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MULQ_S_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1113:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (MULQ_S_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4094*/    /*Scope*/ 18, /*->4113*/
/*4095*/      OPC_CheckInteger, 108|128,8/*1132*/, 
/*4098*/      OPC_MoveParent,
/*4099*/      OPC_RecordChild2, // #1 = $rs
/*4100*/      OPC_RecordChild3, // #2 = $rt
/*4101*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4103*/      OPC_EmitMergeInputChains1_0,
/*4104*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_QB_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1132:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECR_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4113*/    /*Scope*/ 18, /*->4132*/
/*4114*/      OPC_CheckInteger, 14|128,8/*1038*/, 
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_RecordChild2, // #1 = $a
/*4119*/      OPC_RecordChild3, // #2 = $b
/*4120*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4122*/      OPC_EmitMergeInputChains1_0,
/*4123*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1038:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4132*/    /*Scope*/ 18, /*->4151*/
/*4133*/      OPC_CheckInteger, 4|128,9/*1156*/, 
/*4136*/      OPC_MoveParent,
/*4137*/      OPC_RecordChild2, // #1 = $a
/*4138*/      OPC_RecordChild3, // #2 = $b
/*4139*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4141*/      OPC_EmitMergeInputChains1_0,
/*4142*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1156:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4151*/    /*Scope*/ 18, /*->4170*/
/*4152*/      OPC_CheckInteger, 81|128,8/*1105*/, 
/*4155*/      OPC_MoveParent,
/*4156*/      OPC_RecordChild2, // #1 = $a
/*4157*/      OPC_RecordChild3, // #2 = $b
/*4158*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4160*/      OPC_EmitMergeInputChains1_0,
/*4161*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v2i16 1105:iPTR, v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 8
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*4170*/    /*Scope*/ 18, /*->4189*/
/*4171*/      OPC_CheckInteger, 23|128,8/*1047*/, 
/*4174*/      OPC_MoveParent,
/*4175*/      OPC_RecordChild2, // #1 = $a
/*4176*/      OPC_RecordChild3, // #2 = $b
/*4177*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4179*/      OPC_EmitMergeInputChains1_0,
/*4180*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1047:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4189*/    /*Scope*/ 18, /*->4208*/
/*4190*/      OPC_CheckInteger, 12|128,9/*1164*/, 
/*4193*/      OPC_MoveParent,
/*4194*/      OPC_RecordChild2, // #1 = $a
/*4195*/      OPC_RecordChild3, // #2 = $b
/*4196*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4198*/      OPC_EmitMergeInputChains1_0,
/*4199*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:v4i8 1164:iPTR, v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 8
              // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*4208*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,7/*1015*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->5228
/*4213*/    OPC_MoveChild, 0,
/*4215*/    OPC_Scope, 42, /*->4259*/ // 42 children in Scope
/*4217*/      OPC_CheckInteger, 1|128,9/*1153*/, 
/*4220*/      OPC_MoveParent,
/*4221*/      OPC_RecordChild1, // #0 = $rt
/*4222*/      OPC_RecordChild2, // #1 = $rs_sa
/*4223*/      OPC_Scope, 21, /*->4246*/ // 2 children in Scope
/*4225*/        OPC_MoveChild, 2,
/*4227*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4230*/        OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4232*/        OPC_MoveParent,
/*4233*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4235*/        OPC_EmitConvertToTarget, 1,
/*4237*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_W:i32 CPURegs:i32:$rt, (imm:i32):$rs_sa)
/*4246*/      /*Scope*/ 11, /*->4258*/
/*4247*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4249*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_W), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1153:iPTR, CPURegs:i32:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_W:i32 CPURegs:i32:$rt, CPURegs:i32:$rs_sa)
/*4258*/      0, /*End of Scope*/
/*4259*/    /*Scope*/ 29, /*->4289*/
/*4260*/      OPC_CheckInteger, 29|128,8/*1053*/, 
/*4263*/      OPC_MoveParent,
/*4264*/      OPC_RecordChild1, // #0 = $src
/*4265*/      OPC_RecordChild2, // #1 = $rs
/*4266*/      OPC_RecordChild3, // #2 = $sa
/*4267*/      OPC_MoveChild, 3,
/*4269*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4272*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4274*/      OPC_MoveParent,
/*4275*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4277*/      OPC_EmitConvertToTarget, 2,
/*4279*/      OPC_MorphNodeTo, TARGET_VAL(Mips::APPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1053:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (APPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4289*/    /*Scope*/ 29, /*->4319*/
/*4290*/      OPC_CheckInteger, 30|128,8/*1054*/, 
/*4293*/      OPC_MoveParent,
/*4294*/      OPC_RecordChild1, // #0 = $src
/*4295*/      OPC_RecordChild2, // #1 = $rs
/*4296*/      OPC_RecordChild3, // #2 = $sa
/*4297*/      OPC_MoveChild, 3,
/*4299*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4302*/      OPC_CheckPredicate, 25, // Predicate_immZExt2
/*4304*/      OPC_MoveParent,
/*4305*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4307*/      OPC_EmitConvertToTarget, 2,
/*4309*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BALIGN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1054:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt2>>:$sa) - Complexity = 12
              // Dst: (BALIGN:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4319*/    /*Scope*/ 29, /*->4349*/
/*4320*/      OPC_CheckInteger, 115|128,8/*1139*/, 
/*4323*/      OPC_MoveParent,
/*4324*/      OPC_RecordChild1, // #0 = $src
/*4325*/      OPC_RecordChild2, // #1 = $rs
/*4326*/      OPC_RecordChild3, // #2 = $sa
/*4327*/      OPC_MoveChild, 3,
/*4329*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4332*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4334*/      OPC_MoveParent,
/*4335*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4337*/      OPC_EmitConvertToTarget, 2,
/*4339*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PREPEND), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:i32 1139:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PREPEND:i32 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4349*/    /*Scope*/ 42, /*->4392*/
/*4350*/      OPC_CheckInteger, 127|128,8/*1151*/, 
/*4353*/      OPC_MoveParent,
/*4354*/      OPC_RecordChild1, // #0 = $rt
/*4355*/      OPC_RecordChild2, // #1 = $rs_sa
/*4356*/      OPC_Scope, 21, /*->4379*/ // 2 children in Scope
/*4358*/        OPC_MoveChild, 2,
/*4360*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4363*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4365*/        OPC_MoveParent,
/*4366*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4368*/        OPC_EmitConvertToTarget, 1,
/*4370*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, (imm:i32)<<P:Predicate_immZExt4>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_PH:v2i16 DSPRegs:v2i16:$rt, (imm:i32):$rs_sa)
/*4379*/      /*Scope*/ 11, /*->4391*/
/*4380*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4382*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1151:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4391*/      0, /*End of Scope*/
/*4392*/    /*Scope*/ 39, /*->4432*/
/*4393*/      OPC_CheckInteger, 119|128,8/*1143*/, 
/*4396*/      OPC_MoveParent,
/*4397*/      OPC_RecordChild1, // #0 = $imm
/*4398*/      OPC_Scope, 20, /*->4420*/ // 2 children in Scope
/*4400*/        OPC_MoveChild, 1,
/*4402*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4405*/        OPC_CheckPredicate, 26, // Predicate_immZExt8
/*4407*/        OPC_MoveParent,
/*4408*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4410*/        OPC_EmitConvertToTarget, 0,
/*4412*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, (imm:i32)<<P:Predicate_immZExt8>>:$imm) - Complexity = 12
                // Dst: (REPL_QB:v4i8 (imm:i32):$imm)
/*4420*/      /*Scope*/ 10, /*->4431*/
/*4421*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4423*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i8 1143:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_QB:v4i8 CPURegs:i32:$rt)
/*4431*/      0, /*End of Scope*/
/*4432*/    /*Scope*/ 39, /*->4472*/
/*4433*/      OPC_CheckInteger, 118|128,8/*1142*/, 
/*4436*/      OPC_MoveParent,
/*4437*/      OPC_RecordChild1, // #0 = $imm
/*4438*/      OPC_Scope, 20, /*->4460*/ // 2 children in Scope
/*4440*/        OPC_MoveChild, 1,
/*4442*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4445*/        OPC_CheckPredicate, 22, // Predicate_immZExt10
/*4447*/        OPC_MoveParent,
/*4448*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4450*/        OPC_EmitConvertToTarget, 0,
/*4452*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, (imm:i32)<<P:Predicate_immZExt10>>:$imm) - Complexity = 12
                // Dst: (REPL_PH:v2i16 (imm:i32):$imm)
/*4460*/      /*Scope*/ 10, /*->4471*/
/*4461*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4463*/        OPC_MorphNodeTo, TARGET_VAL(Mips::REPLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v2i16 1142:iPTR, CPURegs:i32:$rt) - Complexity = 8
                // Dst: (REPLV_PH:v2i16 CPURegs:i32:$rt)
/*4471*/      0, /*End of Scope*/
/*4472*/    /*Scope*/ 29, /*->4502*/
/*4473*/      OPC_CheckInteger, 109|128,8/*1133*/, 
/*4476*/      OPC_MoveParent,
/*4477*/      OPC_RecordChild1, // #0 = $src
/*4478*/      OPC_RecordChild2, // #1 = $rs
/*4479*/      OPC_RecordChild3, // #2 = $sa
/*4480*/      OPC_MoveChild, 3,
/*4482*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4485*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4487*/      OPC_MoveParent,
/*4488*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4490*/      OPC_EmitConvertToTarget, 2,
/*4492*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1133:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4502*/    /*Scope*/ 29, /*->4532*/
/*4503*/      OPC_CheckInteger, 110|128,8/*1134*/, 
/*4506*/      OPC_MoveParent,
/*4507*/      OPC_RecordChild1, // #0 = $src
/*4508*/      OPC_RecordChild2, // #1 = $rs
/*4509*/      OPC_RecordChild3, // #2 = $sa
/*4510*/      OPC_MoveChild, 3,
/*4512*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4515*/      OPC_CheckPredicate, 21, // Predicate_immZExt5
/*4517*/      OPC_MoveParent,
/*4518*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4520*/      OPC_EmitConvertToTarget, 2,
/*4522*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECR_SRA_R_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 1, 3, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1134:iPTR, CPURegs:i32:$src, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt5>>:$sa) - Complexity = 12
              // Dst: (PRECR_SRA_R_PH_W:v2i16 CPURegs:i32:$rs, (imm:i32):$sa, CPURegs:i32:$src)
/*4532*/    /*Scope*/ 42, /*->4575*/
/*4533*/      OPC_CheckInteger, 0|128,9/*1152*/, 
/*4536*/      OPC_MoveParent,
/*4537*/      OPC_RecordChild1, // #0 = $rt
/*4538*/      OPC_RecordChild2, // #1 = $rs_sa
/*4539*/      OPC_Scope, 21, /*->4562*/ // 2 children in Scope
/*4541*/        OPC_MoveChild, 2,
/*4543*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4546*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4548*/        OPC_MoveParent,
/*4549*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4551*/        OPC_EmitConvertToTarget, 1,
/*4553*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, (imm:i32)<<P:Predicate_immZExt3>>:$rs_sa) - Complexity = 12
                // Dst: (SHRA_R_QB:v4i8 DSPRegs:v4i8:$rt, (imm:i32):$rs_sa)
/*4562*/      /*Scope*/ 11, /*->4574*/
/*4563*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4565*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_R_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1152:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_R_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4574*/      0, /*End of Scope*/
/*4575*/    /*Scope*/ 42, /*->4618*/
/*4576*/      OPC_CheckInteger, 125|128,8/*1149*/, 
/*4579*/      OPC_MoveParent,
/*4580*/      OPC_RecordChild1, // #0 = $a
/*4581*/      OPC_RecordChild2, // #1 = $shamt
/*4582*/      OPC_Scope, 21, /*->4605*/ // 2 children in Scope
/*4584*/        OPC_MoveChild, 2,
/*4586*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4589*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4591*/        OPC_MoveParent,
/*4592*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4594*/        OPC_EmitConvertToTarget, 1,
/*4596*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4605*/      /*Scope*/ 11, /*->4617*/
/*4606*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4608*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1149:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4617*/      0, /*End of Scope*/
/*4618*/    /*Scope*/ 42, /*->4661*/
/*4619*/      OPC_CheckInteger, 2|128,9/*1154*/, 
/*4622*/      OPC_MoveParent,
/*4623*/      OPC_RecordChild1, // #0 = $a
/*4624*/      OPC_RecordChild2, // #1 = $shamt
/*4625*/      OPC_Scope, 21, /*->4648*/ // 2 children in Scope
/*4627*/        OPC_MoveChild, 2,
/*4629*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4632*/        OPC_CheckPredicate, 23, // Predicate_immZExt4
/*4634*/        OPC_MoveParent,
/*4635*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4637*/        OPC_EmitConvertToTarget, 1,
/*4639*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt) - Complexity = 12
                // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32)<<P:Predicate_immZExt4>>:$shamt)
/*4648*/      /*Scope*/ 11, /*->4660*/
/*4649*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4651*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v2i16 1154:iPTR, DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_PH:v2i16 DSPRegs:v2i16:$rt, CPURegs:i32:$rs_sa)
/*4660*/      0, /*End of Scope*/
/*4661*/    /*Scope*/ 42, /*->4704*/
/*4662*/      OPC_CheckInteger, 126|128,8/*1150*/, 
/*4665*/      OPC_MoveParent,
/*4666*/      OPC_RecordChild1, // #0 = $a
/*4667*/      OPC_RecordChild2, // #1 = $shamt
/*4668*/      OPC_Scope, 21, /*->4691*/ // 2 children in Scope
/*4670*/        OPC_MoveChild, 2,
/*4672*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4675*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4677*/        OPC_MoveParent,
/*4678*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4680*/        OPC_EmitConvertToTarget, 1,
/*4682*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4691*/      /*Scope*/ 11, /*->4703*/
/*4692*/        OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4694*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRAV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1150:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRAV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4703*/      0, /*End of Scope*/
/*4704*/    /*Scope*/ 42, /*->4747*/
/*4705*/      OPC_CheckInteger, 3|128,9/*1155*/, 
/*4708*/      OPC_MoveParent,
/*4709*/      OPC_RecordChild1, // #0 = $a
/*4710*/      OPC_RecordChild2, // #1 = $shamt
/*4711*/      OPC_Scope, 21, /*->4734*/ // 2 children in Scope
/*4713*/        OPC_MoveChild, 2,
/*4715*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4718*/        OPC_CheckPredicate, 24, // Predicate_immZExt3
/*4720*/        OPC_MoveParent,
/*4721*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4723*/        OPC_EmitConvertToTarget, 1,
/*4725*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt) - Complexity = 12
                // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32)<<P:Predicate_immZExt3>>:$shamt)
/*4734*/      /*Scope*/ 11, /*->4746*/
/*4735*/        OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4737*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SHRLV_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i8 1155:iPTR, DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa) - Complexity = 8
                // Dst: (SHRLV_QB:v4i8 DSPRegs:v4i8:$rt, CPURegs:i32:$rs_sa)
/*4746*/      0, /*End of Scope*/
/*4747*/    /*Scope*/ 17, /*->4765*/
/*4748*/      OPC_CheckInteger, 77|128,8/*1101*/, 
/*4751*/      OPC_MoveParent,
/*4752*/      OPC_RecordChild1, // #0 = $rs
/*4753*/      OPC_RecordChild2, // #1 = $rt
/*4754*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4756*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MODSUB), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1101:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (MODSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4765*/    /*Scope*/ 15, /*->4781*/
/*4766*/      OPC_CheckInteger, 116|128,8/*1140*/, 
/*4769*/      OPC_MoveParent,
/*4770*/      OPC_RecordChild1, // #0 = $rs
/*4771*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4773*/      OPC_MorphNodeTo, TARGET_VAL(Mips::RADDU_W_QB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1140:iPTR, DSPRegs:v4i8:$rs) - Complexity = 8
              // Dst: (RADDU_W_QB:i32 DSPRegs:v4i8:$rs)
/*4781*/    /*Scope*/ 15, /*->4797*/
/*4782*/      OPC_CheckInteger, 98|128,8/*1122*/, 
/*4785*/      OPC_MoveParent,
/*4786*/      OPC_RecordChild1, // #0 = $rt
/*4787*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4789*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHL), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1122:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHL:i32 DSPRegs:v2i16:$rt)
/*4797*/    /*Scope*/ 15, /*->4813*/
/*4798*/      OPC_CheckInteger, 99|128,8/*1123*/, 
/*4801*/      OPC_MoveParent,
/*4802*/      OPC_RecordChild1, // #0 = $rt
/*4803*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4805*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQ_W_PHR), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1123:iPTR, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECEQ_W_PHR:i32 DSPRegs:v2i16:$rt)
/*4813*/    /*Scope*/ 15, /*->4829*/
/*4814*/      OPC_CheckInteger, 31|128,8/*1055*/, 
/*4817*/      OPC_MoveParent,
/*4818*/      OPC_RecordChild1, // #0 = $rt
/*4819*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4821*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BITREV), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1055:iPTR, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (BITREV:i32 CPURegs:i32:$rt)
/*4829*/    /*Scope*/ 17, /*->4847*/
/*4830*/      OPC_CheckInteger, 20|128,8/*1044*/, 
/*4833*/      OPC_MoveParent,
/*4834*/      OPC_RecordChild1, // #0 = $rs
/*4835*/      OPC_RecordChild2, // #1 = $rt
/*4836*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4838*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1044:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4847*/    /*Scope*/ 17, /*->4865*/
/*4848*/      OPC_CheckInteger, 19|128,8/*1043*/, 
/*4851*/      OPC_MoveParent,
/*4852*/      OPC_RecordChild1, // #0 = $rs
/*4853*/      OPC_RecordChild2, // #1 = $rt
/*4854*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4856*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1043:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (ADDQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4865*/    /*Scope*/ 17, /*->4883*/
/*4866*/      OPC_CheckInteger, 10|128,9/*1162*/, 
/*4869*/      OPC_MoveParent,
/*4870*/      OPC_RecordChild1, // #0 = $rs
/*4871*/      OPC_RecordChild2, // #1 = $rt
/*4872*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4874*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1162:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4883*/    /*Scope*/ 17, /*->4901*/
/*4884*/      OPC_CheckInteger, 9|128,9/*1161*/, 
/*4887*/      OPC_MoveParent,
/*4888*/      OPC_RecordChild1, // #0 = $rs
/*4889*/      OPC_RecordChild2, // #1 = $rt
/*4890*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*4892*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_W), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i32 1161:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (SUBQH_R_W:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4901*/    /*Scope*/ 17, /*->4919*/
/*4902*/      OPC_CheckInteger, 112|128,8/*1136*/, 
/*4905*/      OPC_MoveParent,
/*4906*/      OPC_RecordChild1, // #0 = $rs
/*4907*/      OPC_RecordChild2, // #1 = $rt
/*4908*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4910*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_QB_PH), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1136:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PRECRQ_QB_PH:v4i8 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*4919*/    /*Scope*/ 17, /*->4937*/
/*4920*/      OPC_CheckInteger, 111|128,8/*1135*/, 
/*4923*/      OPC_MoveParent,
/*4924*/      OPC_RecordChild1, // #0 = $rs
/*4925*/      OPC_RecordChild2, // #1 = $rt
/*4926*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4928*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECRQ_PH_W), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1135:iPTR, CPURegs:i32:$rs, CPURegs:i32:$rt) - Complexity = 8
              // Dst: (PRECRQ_PH_W:v2i16 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*4937*/    /*Scope*/ 15, /*->4953*/
/*4938*/      OPC_CheckInteger, 100|128,8/*1124*/, 
/*4941*/      OPC_MoveParent,
/*4942*/      OPC_RecordChild1, // #0 = $rt
/*4943*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1124:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*4953*/    /*Scope*/ 15, /*->4969*/
/*4954*/      OPC_CheckInteger, 102|128,8/*1126*/, 
/*4957*/      OPC_MoveParent,
/*4958*/      OPC_RecordChild1, // #0 = $rt
/*4959*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4961*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1126:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*4969*/    /*Scope*/ 15, /*->4985*/
/*4970*/      OPC_CheckInteger, 101|128,8/*1125*/, 
/*4973*/      OPC_MoveParent,
/*4974*/      OPC_RecordChild1, // #0 = $rt
/*4975*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4977*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1125:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*4985*/    /*Scope*/ 15, /*->5001*/
/*4986*/      OPC_CheckInteger, 103|128,8/*1127*/, 
/*4989*/      OPC_MoveParent,
/*4990*/      OPC_RecordChild1, // #0 = $rt
/*4991*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*4993*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEQU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1127:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEQU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5001*/    /*Scope*/ 15, /*->5017*/
/*5002*/      OPC_CheckInteger, 104|128,8/*1128*/, 
/*5005*/      OPC_MoveParent,
/*5006*/      OPC_RecordChild1, // #0 = $rt
/*5007*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5009*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBL), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1128:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBL:v2i16 DSPRegs:v4i8:$rt)
/*5017*/    /*Scope*/ 15, /*->5033*/
/*5018*/      OPC_CheckInteger, 106|128,8/*1130*/, 
/*5021*/      OPC_MoveParent,
/*5022*/      OPC_RecordChild1, // #0 = $rt
/*5023*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5025*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBR), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1130:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBR:v2i16 DSPRegs:v4i8:$rt)
/*5033*/    /*Scope*/ 15, /*->5049*/
/*5034*/      OPC_CheckInteger, 105|128,8/*1129*/, 
/*5037*/      OPC_MoveParent,
/*5038*/      OPC_RecordChild1, // #0 = $rt
/*5039*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5041*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBLA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1129:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBLA:v2i16 DSPRegs:v4i8:$rt)
/*5049*/    /*Scope*/ 15, /*->5065*/
/*5050*/      OPC_CheckInteger, 107|128,8/*1131*/, 
/*5053*/      OPC_MoveParent,
/*5054*/      OPC_RecordChild1, // #0 = $rt
/*5055*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5057*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PRECEU_PH_QBRA), 0,
                  1/*#VTs*/, MVT::v2i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v2i16 1131:iPTR, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (PRECEU_PH_QBRA:v2i16 DSPRegs:v4i8:$rt)
/*5065*/    /*Scope*/ 17, /*->5083*/
/*5066*/      OPC_CheckInteger, 95|128,8/*1119*/, 
/*5069*/      OPC_MoveParent,
/*5070*/      OPC_RecordChild1, // #0 = $rs
/*5071*/      OPC_RecordChild2, // #1 = $rt
/*5072*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5074*/      OPC_MorphNodeTo, TARGET_VAL(Mips::PACKRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1119:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (PACKRL_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5083*/    /*Scope*/ 17, /*->5101*/
/*5084*/      OPC_CheckInteger, 26|128,8/*1050*/, 
/*5087*/      OPC_MoveParent,
/*5088*/      OPC_RecordChild1, // #0 = $rs
/*5089*/      OPC_RecordChild2, // #1 = $rt
/*5090*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5092*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1050:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5101*/    /*Scope*/ 17, /*->5119*/
/*5102*/      OPC_CheckInteger, 27|128,8/*1051*/, 
/*5105*/      OPC_MoveParent,
/*5106*/      OPC_RecordChild1, // #0 = $rs
/*5107*/      OPC_RecordChild2, // #1 = $rt
/*5108*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5110*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1051:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (ADDUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5119*/    /*Scope*/ 17, /*->5137*/
/*5120*/      OPC_CheckInteger, 15|128,9/*1167*/, 
/*5123*/      OPC_MoveParent,
/*5124*/      OPC_RecordChild1, // #0 = $rs
/*5125*/      OPC_RecordChild2, // #1 = $rt
/*5126*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5128*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1167:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5137*/    /*Scope*/ 17, /*->5155*/
/*5138*/      OPC_CheckInteger, 16|128,9/*1168*/, 
/*5141*/      OPC_MoveParent,
/*5142*/      OPC_RecordChild1, // #0 = $rs
/*5143*/      OPC_RecordChild2, // #1 = $rt
/*5144*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5146*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBUH_R_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i8 1168:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (SUBUH_R_QB:v4i8 DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5155*/    /*Scope*/ 17, /*->5173*/
/*5156*/      OPC_CheckInteger, 17|128,8/*1041*/, 
/*5159*/      OPC_MoveParent,
/*5160*/      OPC_RecordChild1, // #0 = $rs
/*5161*/      OPC_RecordChild2, // #1 = $rt
/*5162*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5164*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1041:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5173*/    /*Scope*/ 17, /*->5191*/
/*5174*/      OPC_CheckInteger, 18|128,8/*1042*/, 
/*5177*/      OPC_MoveParent,
/*5178*/      OPC_RecordChild1, // #0 = $rs
/*5179*/      OPC_RecordChild2, // #1 = $rt
/*5180*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5182*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1042:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (ADDQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5191*/    /*Scope*/ 17, /*->5209*/
/*5192*/      OPC_CheckInteger, 7|128,9/*1159*/, 
/*5195*/      OPC_MoveParent,
/*5196*/      OPC_RecordChild1, // #0 = $rs
/*5197*/      OPC_RecordChild2, // #1 = $rt
/*5198*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5200*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1159:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5209*/    /*Scope*/ 17, /*->5227*/
/*5210*/      OPC_CheckInteger, 8|128,9/*1160*/, 
/*5213*/      OPC_MoveParent,
/*5214*/      OPC_RecordChild1, // #0 = $rs
/*5215*/      OPC_RecordChild2, // #1 = $rt
/*5216*/      OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*5218*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQH_R_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v2i16 1160:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (SUBQH_R_PH:v2i16 DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5227*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->5373
/*5232*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*5233*/    OPC_MoveChild, 1,
/*5235*/    OPC_Scope, 27, /*->5264*/ // 7 children in Scope
/*5237*/      OPC_CheckInteger, 17|128,9/*1169*/, 
/*5240*/      OPC_MoveParent,
/*5241*/      OPC_RecordChild2, // #1 = $rs
/*5242*/      OPC_RecordChild3, // #2 = $mask
/*5243*/      OPC_MoveChild, 3,
/*5245*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5248*/      OPC_CheckPredicate, 22, // Predicate_immZExt10
/*5250*/      OPC_MoveParent,
/*5251*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5253*/      OPC_EmitMergeInputChains1_0,
/*5254*/      OPC_EmitConvertToTarget, 2,
/*5256*/      OPC_MorphNodeTo, TARGET_VAL(Mips::WRDSP), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (intrinsic_void 1169:iPTR, CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immZExt10>>:$mask) - Complexity = 12
              // Dst: (WRDSP CPURegs:i32:$rs, (imm:i32):$mask)
/*5264*/    /*Scope*/ 17, /*->5282*/
/*5265*/      OPC_CheckInteger, 42|128,8/*1066*/, 
/*5268*/      OPC_MoveParent,
/*5269*/      OPC_RecordChild2, // #1 = $rs
/*5270*/      OPC_RecordChild3, // #2 = $rt
/*5271*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5273*/      OPC_EmitMergeInputChains1_0,
/*5274*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_EQ_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1066:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_EQ_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5282*/    /*Scope*/ 17, /*->5300*/
/*5283*/      OPC_CheckInteger, 44|128,8/*1068*/, 
/*5286*/      OPC_MoveParent,
/*5287*/      OPC_RecordChild2, // #1 = $rs
/*5288*/      OPC_RecordChild3, // #2 = $rt
/*5289*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5291*/      OPC_EmitMergeInputChains1_0,
/*5292*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LT_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1068:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LT_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5300*/    /*Scope*/ 17, /*->5318*/
/*5301*/      OPC_CheckInteger, 43|128,8/*1067*/, 
/*5304*/      OPC_MoveParent,
/*5305*/      OPC_RecordChild2, // #1 = $rs
/*5306*/      OPC_RecordChild3, // #2 = $rt
/*5307*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5309*/      OPC_EmitMergeInputChains1_0,
/*5310*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMPU_LE_QB), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1067:iPTR, DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt) - Complexity = 8
              // Dst: (CMPU_LE_QB DSPRegs:v4i8:$rs, DSPRegs:v4i8:$rt)
/*5318*/    /*Scope*/ 17, /*->5336*/
/*5319*/      OPC_CheckInteger, 33|128,8/*1057*/, 
/*5322*/      OPC_MoveParent,
/*5323*/      OPC_RecordChild2, // #1 = $rs
/*5324*/      OPC_RecordChild3, // #2 = $rt
/*5325*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5327*/      OPC_EmitMergeInputChains1_0,
/*5328*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_EQ_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1057:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_EQ_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5336*/    /*Scope*/ 17, /*->5354*/
/*5337*/      OPC_CheckInteger, 35|128,8/*1059*/, 
/*5340*/      OPC_MoveParent,
/*5341*/      OPC_RecordChild2, // #1 = $rs
/*5342*/      OPC_RecordChild3, // #2 = $rt
/*5343*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5345*/      OPC_EmitMergeInputChains1_0,
/*5346*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LT_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1059:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LT_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5354*/    /*Scope*/ 17, /*->5372*/
/*5355*/      OPC_CheckInteger, 34|128,8/*1058*/, 
/*5358*/      OPC_MoveParent,
/*5359*/      OPC_RecordChild2, // #1 = $rs
/*5360*/      OPC_RecordChild3, // #2 = $rt
/*5361*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*5363*/      OPC_EmitMergeInputChains1_0,
/*5364*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CMP_LE_PH), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1058:iPTR, DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt) - Complexity = 8
              // Dst: (CMP_LE_PH DSPRegs:v2i16:$rs, DSPRegs:v2i16:$rt)
/*5372*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::XOR),// ->5574
/*5377*/    OPC_Scope, 50, /*->5429*/ // 2 children in Scope
/*5379*/      OPC_MoveChild, 0,
/*5381*/      OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*5384*/      OPC_RecordChild0, // #0 = $rs
/*5385*/      OPC_RecordChild1, // #1 = $rt
/*5386*/      OPC_MoveParent,
/*5387*/      OPC_MoveChild, 1,
/*5389*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5400*/      OPC_MoveParent,
/*5401*/      OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->5415
/*5404*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5406*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt), -1:i32) - Complexity = 11
                // Dst: (NOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->5428
/*5417*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5419*/        OPC_MorphNodeTo, TARGET_VAL(Mips::NOR64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt), -1:i64) - Complexity = 11
                // Dst: (NOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*5429*/    /*Scope*/ 14|128,1/*142*/, /*->5573*/
/*5431*/      OPC_RecordChild0, // #0 = $in
/*5432*/      OPC_Scope, 44, /*->5478*/ // 2 children in Scope
/*5434*/        OPC_MoveChild, 1,
/*5436*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5447*/        OPC_MoveParent,
/*5448*/        OPC_CheckType, MVT::i32,
/*5450*/        OPC_Scope, 14, /*->5466*/ // 2 children in Scope
/*5452*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5454*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5457*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 CPURegsOpnd:i32:$in, ZERO:i32)
/*5466*/        /*Scope*/ 10, /*->5477*/
/*5467*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5469*/          OPC_MorphNodeTo, TARGET_VAL(Mips::NotRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (xor:i32 CPU16Regs:i32:$r, -1:i32) - Complexity = 8
                  // Dst: (NotRxRy16:i32 CPU16Regs:i32:$r)
/*5477*/        0, /*End of Scope*/
/*5478*/      /*Scope*/ 93, /*->5572*/
/*5479*/        OPC_RecordChild1, // #1 = $imm16
/*5480*/        OPC_Scope, 46, /*->5528*/ // 3 children in Scope
/*5482*/          OPC_MoveChild, 1,
/*5484*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5487*/          OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5489*/          OPC_MoveParent,
/*5490*/          OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->5509
/*5493*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5495*/            OPC_EmitConvertToTarget, 1,
/*5497*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5500*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
                  /*SwitchType*/ 16,  MVT::i64,// ->5527
/*5511*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5513*/            OPC_EmitConvertToTarget, 1,
/*5515*/            OPC_EmitNodeXForm, 0, 2, // LO16
/*5518*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XORi64), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                    // Dst: (XORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
                  0, // EndSwitchType
/*5528*/        /*Scope*/ 28, /*->5557*/
/*5529*/          OPC_CheckType, MVT::i32,
/*5531*/          OPC_Scope, 11, /*->5544*/ // 2 children in Scope
/*5533*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5535*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                    // Dst: (XOR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*5544*/          /*Scope*/ 11, /*->5556*/
/*5545*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5547*/            OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*5556*/          0, /*End of Scope*/
/*5557*/        /*Scope*/ 13, /*->5571*/
/*5558*/          OPC_CheckType, MVT::i64,
/*5560*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5562*/          OPC_MorphNodeTo, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                  // Dst: (XOR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*5571*/        0, /*End of Scope*/
/*5572*/      0, /*End of Scope*/
/*5573*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 98|128,10/*1378*/,  TARGET_VAL(ISD::BRCOND),// ->6956
/*5578*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*5579*/    OPC_Scope, 24|128,10/*1304*/, /*->6886*/ // 2 children in Scope
/*5582*/      OPC_MoveChild, 1,
/*5584*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*5587*/      OPC_RecordChild0, // #1 = $rs
/*5588*/      OPC_Scope, 43|128,6/*811*/, /*->6402*/ // 2 children in Scope
/*5591*/        OPC_CheckChild0Type, MVT::i32,
/*5593*/        OPC_Scope, 79|128,1/*207*/, /*->5803*/ // 2 children in Scope
/*5596*/          OPC_MoveChild, 1,
/*5598*/          OPC_CheckInteger, 0, 
/*5600*/          OPC_MoveParent,
/*5601*/          OPC_MoveChild, 2,
/*5603*/          OPC_Scope, 24, /*->5629*/ // 7 children in Scope
/*5605*/            OPC_CheckCondCode, ISD::SETGE,
/*5607*/            OPC_MoveParent,
/*5608*/            OPC_CheckType, MVT::i32,
/*5610*/            OPC_MoveParent,
/*5611*/            OPC_RecordChild2, // #2 = $offset
/*5612*/            OPC_MoveChild, 2,
/*5614*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5617*/            OPC_MoveParent,
/*5618*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5620*/            OPC_EmitMergeInputChains1_0,
/*5621*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGEZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5629*/          /*Scope*/ 24, /*->5654*/
/*5630*/            OPC_CheckCondCode, ISD::SETGT,
/*5632*/            OPC_MoveParent,
/*5633*/            OPC_CheckType, MVT::i32,
/*5635*/            OPC_MoveParent,
/*5636*/            OPC_RecordChild2, // #2 = $offset
/*5637*/            OPC_MoveChild, 2,
/*5639*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5642*/            OPC_MoveParent,
/*5643*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5645*/            OPC_EmitMergeInputChains1_0,
/*5646*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGTZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5654*/          /*Scope*/ 24, /*->5679*/
/*5655*/            OPC_CheckCondCode, ISD::SETLE,
/*5657*/            OPC_MoveParent,
/*5658*/            OPC_CheckType, MVT::i32,
/*5660*/            OPC_MoveParent,
/*5661*/            OPC_RecordChild2, // #2 = $offset
/*5662*/            OPC_MoveChild, 2,
/*5664*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5667*/            OPC_MoveParent,
/*5668*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5670*/            OPC_EmitMergeInputChains1_0,
/*5671*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLEZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5679*/          /*Scope*/ 24, /*->5704*/
/*5680*/            OPC_CheckCondCode, ISD::SETLT,
/*5682*/            OPC_MoveParent,
/*5683*/            OPC_CheckType, MVT::i32,
/*5685*/            OPC_MoveParent,
/*5686*/            OPC_RecordChild2, // #2 = $offset
/*5687*/            OPC_MoveChild, 2,
/*5689*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5692*/            OPC_MoveParent,
/*5693*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5695*/            OPC_EmitMergeInputChains1_0,
/*5696*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$rs, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLTZ CPURegs:i32:$rs, (bb:Other):$offset)
/*5704*/          /*Scope*/ 28, /*->5733*/
/*5705*/            OPC_CheckCondCode, ISD::SETNE,
/*5707*/            OPC_MoveParent,
/*5708*/            OPC_CheckType, MVT::i32,
/*5710*/            OPC_MoveParent,
/*5711*/            OPC_RecordChild2, // #2 = $dst
/*5712*/            OPC_MoveChild, 2,
/*5714*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5717*/            OPC_MoveParent,
/*5718*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5720*/            OPC_EmitMergeInputChains1_0,
/*5721*/            OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5724*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5733*/          /*Scope*/ 43, /*->5777*/
/*5734*/            OPC_CheckCondCode, ISD::SETEQ,
/*5736*/            OPC_MoveParent,
/*5737*/            OPC_CheckType, MVT::i32,
/*5739*/            OPC_MoveParent,
/*5740*/            OPC_RecordChild2, // #2 = $dst
/*5741*/            OPC_MoveChild, 2,
/*5743*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5746*/            OPC_MoveParent,
/*5747*/            OPC_Scope, 15, /*->5764*/ // 2 children in Scope
/*5749*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5751*/              OPC_EmitMergeInputChains1_0,
/*5752*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5755*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                      // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*5764*/            /*Scope*/ 11, /*->5776*/
/*5765*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5767*/              OPC_EmitMergeInputChains1_0,
/*5768*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BeqzRxImmX16), 0|OPFL_Chain,
                          0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETEQ:Other), (bb:Other):$targ16) - Complexity = 11
                      // Dst: (BeqzRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5776*/            0, /*End of Scope*/
/*5777*/          /*Scope*/ 24, /*->5802*/
/*5778*/            OPC_CheckCondCode, ISD::SETNE,
/*5780*/            OPC_MoveParent,
/*5781*/            OPC_CheckType, MVT::i32,
/*5783*/            OPC_MoveParent,
/*5784*/            OPC_RecordChild2, // #2 = $targ16
/*5785*/            OPC_MoveChild, 2,
/*5787*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5790*/            OPC_MoveParent,
/*5791*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5793*/            OPC_EmitMergeInputChains1_0,
/*5794*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, 0:i32, SETNE:Other), (bb:Other):$targ16) - Complexity = 11
                    // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*5802*/          0, /*End of Scope*/
/*5803*/        /*Scope*/ 84|128,4/*596*/, /*->6401*/
/*5805*/          OPC_RecordChild1, // #2 = $rhs
/*5806*/          OPC_Scope, 97|128,1/*225*/, /*->6034*/ // 2 children in Scope
/*5809*/            OPC_MoveChild, 1,
/*5811*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5814*/            OPC_Scope, 87, /*->5903*/ // 4 children in Scope
/*5816*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5818*/              OPC_MoveParent,
/*5819*/              OPC_MoveChild, 2,
/*5821*/              OPC_Scope, 39, /*->5862*/ // 2 children in Scope
/*5823*/                OPC_CheckCondCode, ISD::SETGE,
/*5825*/                OPC_MoveParent,
/*5826*/                OPC_CheckType, MVT::i32,
/*5828*/                OPC_MoveParent,
/*5829*/                OPC_RecordChild2, // #3 = $dst
/*5830*/                OPC_MoveChild, 2,
/*5832*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5835*/                OPC_MoveParent,
/*5836*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5838*/                OPC_EmitMergeInputChains1_0,
/*5839*/                OPC_EmitConvertToTarget, 2,
/*5841*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5850*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5853*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5862*/              /*Scope*/ 39, /*->5902*/
/*5863*/                OPC_CheckCondCode, ISD::SETUGE,
/*5865*/                OPC_MoveParent,
/*5866*/                OPC_CheckType, MVT::i32,
/*5868*/                OPC_MoveParent,
/*5869*/                OPC_RecordChild2, // #3 = $dst
/*5870*/                OPC_MoveChild, 2,
/*5872*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5875*/                OPC_MoveParent,
/*5876*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*5878*/                OPC_EmitMergeInputChains1_0,
/*5879*/                OPC_EmitConvertToTarget, 2,
/*5881*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*5890*/                OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*5893*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                        // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                        // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*5902*/              0, /*End of Scope*/
/*5903*/            /*Scope*/ 32, /*->5936*/
/*5904*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*5906*/              OPC_MoveParent,
/*5907*/              OPC_MoveChild, 2,
/*5909*/              OPC_CheckCondCode, ISD::SETEQ,
/*5911*/              OPC_MoveParent,
/*5912*/              OPC_CheckType, MVT::i32,
/*5914*/              OPC_MoveParent,
/*5915*/              OPC_RecordChild2, // #3 = $targ16
/*5916*/              OPC_MoveChild, 2,
/*5918*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5921*/              OPC_MoveParent,
/*5922*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5924*/              OPC_EmitMergeInputChains1_0,
/*5925*/              OPC_EmitConvertToTarget, 2,
/*5927*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETEQ:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BteqzT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*5936*/            /*Scope*/ 63, /*->6000*/
/*5937*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*5939*/              OPC_MoveParent,
/*5940*/              OPC_MoveChild, 2,
/*5942*/              OPC_Scope, 27, /*->5971*/ // 2 children in Scope
/*5944*/                OPC_CheckCondCode, ISD::SETGE,
/*5946*/                OPC_MoveParent,
/*5947*/                OPC_CheckType, MVT::i32,
/*5949*/                OPC_MoveParent,
/*5950*/                OPC_RecordChild2, // #3 = $imm16
/*5951*/                OPC_MoveChild, 2,
/*5953*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5956*/                OPC_MoveParent,
/*5957*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5959*/                OPC_EmitMergeInputChains1_0,
/*5960*/                OPC_EmitConvertToTarget, 2,
/*5962*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETGE:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BteqzT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*5971*/              /*Scope*/ 27, /*->5999*/
/*5972*/                OPC_CheckCondCode, ISD::SETLT,
/*5974*/                OPC_MoveParent,
/*5975*/                OPC_CheckType, MVT::i32,
/*5977*/                OPC_MoveParent,
/*5978*/                OPC_RecordChild2, // #3 = $imm16
/*5979*/                OPC_MoveChild, 2,
/*5981*/                OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5984*/                OPC_MoveParent,
/*5985*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*5987*/                OPC_EmitMergeInputChains1_0,
/*5988*/                OPC_EmitConvertToTarget, 2,
/*5990*/                OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltiX16), 0|OPFL_Chain,
                            0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                        // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, SETLT:Other), (bb:Other):$imm16) - Complexity = 10
                        // Dst: (BtnezT8SltiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$imm16)
/*5999*/              0, /*End of Scope*/
/*6000*/            /*Scope*/ 32, /*->6033*/
/*6001*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*6003*/              OPC_MoveParent,
/*6004*/              OPC_MoveChild, 2,
/*6006*/              OPC_CheckCondCode, ISD::SETNE,
/*6008*/              OPC_MoveParent,
/*6009*/              OPC_CheckType, MVT::i32,
/*6011*/              OPC_MoveParent,
/*6012*/              OPC_RecordChild2, // #3 = $targ16
/*6013*/              OPC_MoveChild, 2,
/*6015*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6018*/              OPC_MoveParent,
/*6019*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6021*/              OPC_EmitMergeInputChains1_0,
/*6022*/              OPC_EmitConvertToTarget, 2,
/*6024*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpiX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 4, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm, SETNE:Other), (bb:Other):$targ16) - Complexity = 10
                      // Dst: (BtnezT8CmpiX16 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm, (bb:Other):$targ16)
/*6033*/            0, /*End of Scope*/
/*6034*/          /*Scope*/ 108|128,2/*364*/, /*->6400*/
/*6036*/            OPC_MoveChild, 2,
/*6038*/            OPC_Scope, 25, /*->6065*/ // 12 children in Scope
/*6040*/              OPC_CheckCondCode, ISD::SETEQ,
/*6042*/              OPC_MoveParent,
/*6043*/              OPC_CheckType, MVT::i32,
/*6045*/              OPC_MoveParent,
/*6046*/              OPC_RecordChild2, // #3 = $offset
/*6047*/              OPC_MoveChild, 2,
/*6049*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6052*/              OPC_MoveParent,
/*6053*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6055*/              OPC_EmitMergeInputChains1_0,
/*6056*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$offset)
/*6065*/            /*Scope*/ 25, /*->6091*/
/*6066*/              OPC_CheckCondCode, ISD::SETNE,
/*6068*/              OPC_MoveParent,
/*6069*/              OPC_CheckType, MVT::i32,
/*6071*/              OPC_MoveParent,
/*6072*/              OPC_RecordChild2, // #3 = $offset
/*6073*/              OPC_MoveChild, 2,
/*6075*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6078*/              OPC_MoveParent,
/*6079*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6081*/              OPC_EmitMergeInputChains1_0,
/*6082*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE CPURegs:i32:$rs, CPURegs:i32:$rt, (bb:Other):$offset)
/*6091*/            /*Scope*/ 37, /*->6129*/
/*6092*/              OPC_CheckCondCode, ISD::SETGE,
/*6094*/              OPC_MoveParent,
/*6095*/              OPC_CheckType, MVT::i32,
/*6097*/              OPC_MoveParent,
/*6098*/              OPC_RecordChild2, // #3 = $dst
/*6099*/              OPC_MoveChild, 2,
/*6101*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6104*/              OPC_MoveParent,
/*6105*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6107*/              OPC_EmitMergeInputChains1_0,
/*6108*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6117*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6120*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6129*/            /*Scope*/ 37, /*->6167*/
/*6130*/              OPC_CheckCondCode, ISD::SETUGE,
/*6132*/              OPC_MoveParent,
/*6133*/              OPC_CheckType, MVT::i32,
/*6135*/              OPC_MoveParent,
/*6136*/              OPC_RecordChild2, // #3 = $dst
/*6137*/              OPC_MoveChild, 2,
/*6139*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6142*/              OPC_MoveParent,
/*6143*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6145*/              OPC_EmitMergeInputChains1_0,
/*6146*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6155*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6158*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*6167*/            /*Scope*/ 37, /*->6205*/
/*6168*/              OPC_CheckCondCode, ISD::SETLE,
/*6170*/              OPC_MoveParent,
/*6171*/              OPC_CheckType, MVT::i32,
/*6173*/              OPC_MoveParent,
/*6174*/              OPC_RecordChild2, // #3 = $dst
/*6175*/              OPC_MoveChild, 2,
/*6177*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6180*/              OPC_MoveParent,
/*6181*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6183*/              OPC_EmitMergeInputChains1_0,
/*6184*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6193*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6196*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6205*/            /*Scope*/ 37, /*->6243*/
/*6206*/              OPC_CheckCondCode, ISD::SETULE,
/*6208*/              OPC_MoveParent,
/*6209*/              OPC_CheckType, MVT::i32,
/*6211*/              OPC_MoveParent,
/*6212*/              OPC_RecordChild2, // #3 = $dst
/*6213*/              OPC_MoveChild, 2,
/*6215*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6218*/              OPC_MoveParent,
/*6219*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6221*/              OPC_EmitMergeInputChains1_0,
/*6222*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6231*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6234*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*6243*/            /*Scope*/ 25, /*->6269*/
/*6244*/              OPC_CheckCondCode, ISD::SETEQ,
/*6246*/              OPC_MoveParent,
/*6247*/              OPC_CheckType, MVT::i32,
/*6249*/              OPC_MoveParent,
/*6250*/              OPC_RecordChild2, // #3 = $imm16
/*6251*/              OPC_MoveChild, 2,
/*6253*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6256*/              OPC_MoveParent,
/*6257*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6259*/              OPC_EmitMergeInputChains1_0,
/*6260*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETEQ:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6269*/            /*Scope*/ 25, /*->6295*/
/*6270*/              OPC_CheckCondCode, ISD::SETGT,
/*6272*/              OPC_MoveParent,
/*6273*/              OPC_CheckType, MVT::i32,
/*6275*/              OPC_MoveParent,
/*6276*/              OPC_RecordChild2, // #3 = $imm16
/*6277*/              OPC_MoveChild, 2,
/*6279*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6282*/              OPC_MoveParent,
/*6283*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6285*/              OPC_EmitMergeInputChains1_0,
/*6286*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6295*/            /*Scope*/ 25, /*->6321*/
/*6296*/              OPC_CheckCondCode, ISD::SETGE,
/*6298*/              OPC_MoveParent,
/*6299*/              OPC_CheckType, MVT::i32,
/*6301*/              OPC_MoveParent,
/*6302*/              OPC_RecordChild2, // #3 = $imm16
/*6303*/              OPC_MoveChild, 2,
/*6305*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6308*/              OPC_MoveParent,
/*6309*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6311*/              OPC_EmitMergeInputChains1_0,
/*6312*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETGE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6321*/            /*Scope*/ 25, /*->6347*/
/*6322*/              OPC_CheckCondCode, ISD::SETLT,
/*6324*/              OPC_MoveParent,
/*6325*/              OPC_CheckType, MVT::i32,
/*6327*/              OPC_MoveParent,
/*6328*/              OPC_RecordChild2, // #3 = $imm16
/*6329*/              OPC_MoveChild, 2,
/*6331*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6334*/              OPC_MoveParent,
/*6335*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6337*/              OPC_EmitMergeInputChains1_0,
/*6338*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8SltX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6347*/            /*Scope*/ 25, /*->6373*/
/*6348*/              OPC_CheckCondCode, ISD::SETLE,
/*6350*/              OPC_MoveParent,
/*6351*/              OPC_CheckType, MVT::i32,
/*6353*/              OPC_MoveParent,
/*6354*/              OPC_RecordChild2, // #3 = $imm16
/*6355*/              OPC_MoveChild, 2,
/*6357*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6360*/              OPC_MoveParent,
/*6361*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6363*/              OPC_EmitMergeInputChains1_0,
/*6364*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BteqzT8SltX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 2, 1, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BteqzT8SltX16 CPU16Regs:i32:$ry, CPU16Regs:i32:$rx, (bb:Other):$imm16)
/*6373*/            /*Scope*/ 25, /*->6399*/
/*6374*/              OPC_CheckCondCode, ISD::SETNE,
/*6376*/              OPC_MoveParent,
/*6377*/              OPC_CheckType, MVT::i32,
/*6379*/              OPC_MoveParent,
/*6380*/              OPC_RecordChild2, // #3 = $imm16
/*6381*/              OPC_MoveChild, 2,
/*6383*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6386*/              OPC_MoveParent,
/*6387*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6389*/              OPC_EmitMergeInputChains1_0,
/*6390*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BtnezT8CmpX16), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETNE:Other), (bb:Other):$imm16) - Complexity = 6
                      // Dst: (BtnezT8CmpX16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, (bb:Other):$imm16)
/*6399*/            0, /*End of Scope*/
/*6400*/          0, /*End of Scope*/
/*6401*/        0, /*End of Scope*/
/*6402*/      /*Scope*/ 97|128,3/*481*/, /*->6885*/
/*6404*/        OPC_CheckChild0Type, MVT::i64,
/*6406*/        OPC_Scope, 39|128,1/*167*/, /*->6576*/ // 2 children in Scope
/*6409*/          OPC_MoveChild, 1,
/*6411*/          OPC_CheckInteger, 0, 
/*6413*/          OPC_MoveParent,
/*6414*/          OPC_MoveChild, 2,
/*6416*/          OPC_Scope, 24, /*->6442*/ // 6 children in Scope
/*6418*/            OPC_CheckCondCode, ISD::SETGE,
/*6420*/            OPC_MoveParent,
/*6421*/            OPC_CheckType, MVT::i32,
/*6423*/            OPC_MoveParent,
/*6424*/            OPC_RecordChild2, // #2 = $offset
/*6425*/            OPC_MoveChild, 2,
/*6427*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6430*/            OPC_MoveParent,
/*6431*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6433*/            OPC_EmitMergeInputChains1_0,
/*6434*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGEZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6442*/          /*Scope*/ 24, /*->6467*/
/*6443*/            OPC_CheckCondCode, ISD::SETGT,
/*6445*/            OPC_MoveParent,
/*6446*/            OPC_CheckType, MVT::i32,
/*6448*/            OPC_MoveParent,
/*6449*/            OPC_RecordChild2, // #2 = $offset
/*6450*/            OPC_MoveChild, 2,
/*6452*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6455*/            OPC_MoveParent,
/*6456*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6458*/            OPC_EmitMergeInputChains1_0,
/*6459*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BGTZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6467*/          /*Scope*/ 24, /*->6492*/
/*6468*/            OPC_CheckCondCode, ISD::SETLE,
/*6470*/            OPC_MoveParent,
/*6471*/            OPC_CheckType, MVT::i32,
/*6473*/            OPC_MoveParent,
/*6474*/            OPC_RecordChild2, // #2 = $offset
/*6475*/            OPC_MoveChild, 2,
/*6477*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6480*/            OPC_MoveParent,
/*6481*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6483*/            OPC_EmitMergeInputChains1_0,
/*6484*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLEZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6492*/          /*Scope*/ 24, /*->6517*/
/*6493*/            OPC_CheckCondCode, ISD::SETLT,
/*6495*/            OPC_MoveParent,
/*6496*/            OPC_CheckType, MVT::i32,
/*6498*/            OPC_MoveParent,
/*6499*/            OPC_RecordChild2, // #2 = $offset
/*6500*/            OPC_MoveChild, 2,
/*6502*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6505*/            OPC_MoveParent,
/*6506*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6508*/            OPC_EmitMergeInputChains1_0,
/*6509*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ64), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, 0:i64, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                    // Dst: (BLTZ64 CPU64Regs:i64:$rs, (bb:Other):$offset)
/*6517*/          /*Scope*/ 28, /*->6546*/
/*6518*/            OPC_CheckCondCode, ISD::SETNE,
/*6520*/            OPC_MoveParent,
/*6521*/            OPC_CheckType, MVT::i32,
/*6523*/            OPC_MoveParent,
/*6524*/            OPC_RecordChild2, // #2 = $dst
/*6525*/            OPC_MoveChild, 2,
/*6527*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6530*/            OPC_MoveParent,
/*6531*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6533*/            OPC_EmitMergeInputChains1_0,
/*6534*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6537*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BNE64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6546*/          /*Scope*/ 28, /*->6575*/
/*6547*/            OPC_CheckCondCode, ISD::SETEQ,
/*6549*/            OPC_MoveParent,
/*6550*/            OPC_CheckType, MVT::i32,
/*6552*/            OPC_MoveParent,
/*6553*/            OPC_RecordChild2, // #2 = $dst
/*6554*/            OPC_MoveChild, 2,
/*6556*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6559*/            OPC_MoveParent,
/*6560*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6562*/            OPC_EmitMergeInputChains1_0,
/*6563*/            OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6566*/            OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                    // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BEQ64 CPU64Regs:i64:$lhs, ZERO_64:i64, (bb:Other):$dst)
/*6575*/          0, /*End of Scope*/
/*6576*/        /*Scope*/ 50|128,2/*306*/, /*->6884*/
/*6578*/          OPC_RecordChild1, // #2 = $rhs
/*6579*/          OPC_Scope, 92, /*->6673*/ // 2 children in Scope
/*6581*/            OPC_MoveChild, 1,
/*6583*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6586*/            OPC_CheckPredicate, 28, // Predicate_immSExt16
/*6588*/            OPC_MoveParent,
/*6589*/            OPC_MoveChild, 2,
/*6591*/            OPC_Scope, 39, /*->6632*/ // 2 children in Scope
/*6593*/              OPC_CheckCondCode, ISD::SETGE,
/*6595*/              OPC_MoveParent,
/*6596*/              OPC_CheckType, MVT::i32,
/*6598*/              OPC_MoveParent,
/*6599*/              OPC_RecordChild2, // #3 = $dst
/*6600*/              OPC_MoveChild, 2,
/*6602*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6605*/              OPC_MoveParent,
/*6606*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6608*/              OPC_EmitMergeInputChains1_0,
/*6609*/              OPC_EmitConvertToTarget, 2,
/*6611*/              OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6620*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6623*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6632*/            /*Scope*/ 39, /*->6672*/
/*6633*/              OPC_CheckCondCode, ISD::SETUGE,
/*6635*/              OPC_MoveParent,
/*6636*/              OPC_CheckType, MVT::i32,
/*6638*/              OPC_MoveParent,
/*6639*/              OPC_RecordChild2, // #3 = $dst
/*6640*/              OPC_MoveChild, 2,
/*6642*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6645*/              OPC_MoveParent,
/*6646*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6648*/              OPC_EmitMergeInputChains1_0,
/*6649*/              OPC_EmitConvertToTarget, 2,
/*6651*/              OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*6660*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6663*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                      // Dst: (BEQ (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*6672*/            0, /*End of Scope*/
/*6673*/          /*Scope*/ 80|128,1/*208*/, /*->6883*/
/*6675*/            OPC_MoveChild, 2,
/*6677*/            OPC_Scope, 25, /*->6704*/ // 6 children in Scope
/*6679*/              OPC_CheckCondCode, ISD::SETEQ,
/*6681*/              OPC_MoveParent,
/*6682*/              OPC_CheckType, MVT::i32,
/*6684*/              OPC_MoveParent,
/*6685*/              OPC_RecordChild2, // #3 = $offset
/*6686*/              OPC_MoveChild, 2,
/*6688*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6691*/              OPC_MoveParent,
/*6692*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6694*/              OPC_EmitMergeInputChains1_0,
/*6695*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BEQ64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$offset)
/*6704*/            /*Scope*/ 25, /*->6730*/
/*6705*/              OPC_CheckCondCode, ISD::SETNE,
/*6707*/              OPC_MoveParent,
/*6708*/              OPC_CheckType, MVT::i32,
/*6710*/              OPC_MoveParent,
/*6711*/              OPC_RecordChild2, // #3 = $offset
/*6712*/              OPC_MoveChild, 2,
/*6714*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6717*/              OPC_MoveParent,
/*6718*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6720*/              OPC_EmitMergeInputChains1_0,
/*6721*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                      // Dst: (BNE64 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, (bb:Other):$offset)
/*6730*/            /*Scope*/ 37, /*->6768*/
/*6731*/              OPC_CheckCondCode, ISD::SETGE,
/*6733*/              OPC_MoveParent,
/*6734*/              OPC_CheckType, MVT::i32,
/*6736*/              OPC_MoveParent,
/*6737*/              OPC_RecordChild2, // #3 = $dst
/*6738*/              OPC_MoveChild, 2,
/*6740*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6743*/              OPC_MoveParent,
/*6744*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6746*/              OPC_EmitMergeInputChains1_0,
/*6747*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6756*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6759*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6768*/            /*Scope*/ 37, /*->6806*/
/*6769*/              OPC_CheckCondCode, ISD::SETUGE,
/*6771*/              OPC_MoveParent,
/*6772*/              OPC_CheckType, MVT::i32,
/*6774*/              OPC_MoveParent,
/*6775*/              OPC_RecordChild2, // #3 = $dst
/*6776*/              OPC_MoveChild, 2,
/*6778*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6781*/              OPC_MoveParent,
/*6782*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6784*/              OPC_EmitMergeInputChains1_0,
/*6785*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4
/*6794*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6797*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), ZERO:i32, (bb:Other):$dst)
/*6806*/            /*Scope*/ 37, /*->6844*/
/*6807*/              OPC_CheckCondCode, ISD::SETLE,
/*6809*/              OPC_MoveParent,
/*6810*/              OPC_CheckType, MVT::i32,
/*6812*/              OPC_MoveParent,
/*6813*/              OPC_RecordChild2, // #3 = $dst
/*6814*/              OPC_MoveChild, 2,
/*6816*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6819*/              OPC_MoveParent,
/*6820*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6822*/              OPC_EmitMergeInputChains1_0,
/*6823*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6832*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6835*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*6844*/            /*Scope*/ 37, /*->6882*/
/*6845*/              OPC_CheckCondCode, ISD::SETULE,
/*6847*/              OPC_MoveParent,
/*6848*/              OPC_CheckType, MVT::i32,
/*6850*/              OPC_MoveParent,
/*6851*/              OPC_RecordChild2, // #3 = $dst
/*6852*/              OPC_MoveChild, 2,
/*6854*/              OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6857*/              OPC_MoveParent,
/*6858*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6860*/              OPC_EmitMergeInputChains1_0,
/*6861*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4
/*6870*/              OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6873*/              OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                          0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (brcond (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                      // Dst: (BEQ (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), ZERO:i32, (bb:Other):$dst)
/*6882*/            0, /*End of Scope*/
/*6883*/          0, /*End of Scope*/
/*6884*/        0, /*End of Scope*/
/*6885*/      0, /*End of Scope*/
/*6886*/    /*Scope*/ 68, /*->6955*/
/*6887*/      OPC_RecordChild1, // #1 = $cond
/*6888*/      OPC_Scope, 39, /*->6929*/ // 2 children in Scope
/*6890*/        OPC_CheckChild1Type, MVT::i32,
/*6892*/        OPC_RecordChild2, // #2 = $dst
/*6893*/        OPC_MoveChild, 2,
/*6895*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6898*/        OPC_MoveParent,
/*6899*/        OPC_Scope, 15, /*->6916*/ // 2 children in Scope
/*6901*/          OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6903*/          OPC_EmitMergeInputChains1_0,
/*6904*/          OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*6907*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
                  // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*6916*/        /*Scope*/ 11, /*->6928*/
/*6917*/          OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*6919*/          OPC_EmitMergeInputChains1_0,
/*6920*/          OPC_MorphNodeTo, TARGET_VAL(Mips::BnezRxImmX16), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond CPU16Regs:i32:$rx, (bb:Other):$targ16) - Complexity = 3
                  // Dst: (BnezRxImmX16 CPU16Regs:i32:$rx, (bb:Other):$targ16)
/*6928*/        0, /*End of Scope*/
/*6929*/      /*Scope*/ 24, /*->6954*/
/*6930*/        OPC_CheckChild1Type, MVT::i64,
/*6932*/        OPC_RecordChild2, // #2 = $dst
/*6933*/        OPC_MoveChild, 2,
/*6935*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6938*/        OPC_MoveParent,
/*6939*/        OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*6941*/        OPC_EmitMergeInputChains1_0,
/*6942*/        OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*6945*/        OPC_MorphNodeTo, TARGET_VAL(Mips::BNE64), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                // Src: (brcond CPU64Regs:i64:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (BNE64 CPU64Regs:i64:$cond, ZERO_64:i64, (bb:Other):$dst)
/*6954*/      0, /*End of Scope*/
/*6955*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 78,  TARGET_VAL(ISD::CTLZ),// ->7037
/*6959*/    OPC_Scope, 47, /*->7008*/ // 2 children in Scope
/*6961*/      OPC_MoveChild, 0,
/*6963*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*6966*/      OPC_RecordChild0, // #0 = $rs
/*6967*/      OPC_MoveChild, 1,
/*6969*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*6980*/      OPC_MoveParent,
/*6981*/      OPC_MoveParent,
/*6982*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6995
/*6985*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6987*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 (xor:i32 CPURegsOpnd:i32:$rs, -1:i32)) - Complexity = 11
                // Dst: (CLO:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7007
/*6997*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*6999*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLO), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 (xor:i64 CPU64RegsOpnd:i64:$rs, -1:i64)) - Complexity = 11
                // Dst: (DCLO:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*7008*/    /*Scope*/ 27, /*->7036*/
/*7009*/      OPC_RecordChild0, // #0 = $rs
/*7010*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->7023
/*7013*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7015*/        OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (ctlz:i32 CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (CLZ:i32 CPURegsOpnd:i32:$rs)
              /*SwitchType*/ 10,  MVT::i64,// ->7035
/*7025*/        OPC_CheckPatternPredicate, 11, // (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding())
/*7027*/        OPC_MorphNodeTo, TARGET_VAL(Mips::DCLZ), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (ctlz:i64 CPU64RegsOpnd:i64:$rs) - Complexity = 3
                // Dst: (DCLZ:i64 CPU64RegsOpnd:i64:$rs)
              0, // EndSwitchType
/*7036*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 64|128,33/*4288*/,  TARGET_VAL(ISD::SELECT),// ->11329
/*7041*/    OPC_Scope, 44|128,24/*3116*/, /*->10160*/ // 4 children in Scope
/*7044*/      OPC_MoveChild, 0,
/*7046*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*7049*/      OPC_RecordChild0, // #0 = $lhs
/*7050*/      OPC_Scope, 39|128,14/*1831*/, /*->8884*/ // 2 children in Scope
/*7053*/        OPC_CheckChild0Type, MVT::i32,
/*7055*/        OPC_Scope, 15|128,2/*271*/, /*->7329*/ // 2 children in Scope
/*7058*/          OPC_MoveChild, 1,
/*7060*/          OPC_CheckInteger, 0, 
/*7062*/          OPC_MoveParent,
/*7063*/          OPC_MoveChild, 2,
/*7065*/          OPC_Scope, 38, /*->7105*/ // 10 children in Scope
/*7067*/            OPC_CheckCondCode, ISD::SETEQ,
/*7069*/            OPC_MoveParent,
/*7070*/            OPC_CheckType, MVT::i32,
/*7072*/            OPC_MoveParent,
/*7073*/            OPC_RecordChild1, // #1 = $T
/*7074*/            OPC_RecordChild2, // #2 = $F
/*7075*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7090
/*7078*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7080*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7104
/*7092*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7094*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7105*/          /*Scope*/ 38, /*->7144*/
/*7106*/            OPC_CheckCondCode, ISD::SETNE,
/*7108*/            OPC_MoveParent,
/*7109*/            OPC_CheckType, MVT::i32,
/*7111*/            OPC_MoveParent,
/*7112*/            OPC_RecordChild1, // #1 = $T
/*7113*/            OPC_RecordChild2, // #2 = $F
/*7114*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->7129
/*7117*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7119*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->7143
/*7131*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7133*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*7144*/          /*Scope*/ 22, /*->7167*/
/*7145*/            OPC_CheckCondCode, ISD::SETEQ,
/*7147*/            OPC_MoveParent,
/*7148*/            OPC_CheckType, MVT::i32,
/*7150*/            OPC_MoveParent,
/*7151*/            OPC_RecordChild1, // #1 = $x
/*7152*/            OPC_RecordChild2, // #2 = $y
/*7153*/            OPC_CheckType, MVT::i32,
/*7155*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7157*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBeqZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBeqZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7167*/          /*Scope*/ 22, /*->7190*/
/*7168*/            OPC_CheckCondCode, ISD::SETNE,
/*7170*/            OPC_MoveParent,
/*7171*/            OPC_CheckType, MVT::i32,
/*7173*/            OPC_MoveParent,
/*7174*/            OPC_RecordChild1, // #1 = $x
/*7175*/            OPC_RecordChild2, // #2 = $y
/*7176*/            OPC_CheckType, MVT::i32,
/*7178*/            OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7180*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, 0:i32, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 11
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*7190*/          /*Scope*/ 22, /*->7213*/
/*7191*/            OPC_CheckCondCode, ISD::SETEQ,
/*7193*/            OPC_MoveParent,
/*7194*/            OPC_CheckType, MVT::i32,
/*7196*/            OPC_MoveParent,
/*7197*/            OPC_RecordChild1, // #1 = $T
/*7198*/            OPC_RecordChild2, // #2 = $F
/*7199*/            OPC_CheckType, MVT::f32,
/*7201*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7203*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*7213*/          /*Scope*/ 22, /*->7236*/
/*7214*/            OPC_CheckCondCode, ISD::SETNE,
/*7216*/            OPC_MoveParent,
/*7217*/            OPC_CheckType, MVT::i32,
/*7219*/            OPC_MoveParent,
/*7220*/            OPC_RecordChild1, // #1 = $T
/*7221*/            OPC_RecordChild2, // #2 = $F
/*7222*/            OPC_CheckType, MVT::f32,
/*7224*/            OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7226*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$lhs, FGR32:f32:$F)
/*7236*/          /*Scope*/ 22, /*->7259*/
/*7237*/            OPC_CheckCondCode, ISD::SETEQ,
/*7239*/            OPC_MoveParent,
/*7240*/            OPC_CheckType, MVT::i32,
/*7242*/            OPC_MoveParent,
/*7243*/            OPC_RecordChild1, // #1 = $T
/*7244*/            OPC_RecordChild2, // #2 = $F
/*7245*/            OPC_CheckType, MVT::f64,
/*7247*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7249*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*7259*/          /*Scope*/ 22, /*->7282*/
/*7260*/            OPC_CheckCondCode, ISD::SETNE,
/*7262*/            OPC_MoveParent,
/*7263*/            OPC_CheckType, MVT::i32,
/*7265*/            OPC_MoveParent,
/*7266*/            OPC_RecordChild1, // #1 = $T
/*7267*/            OPC_RecordChild2, // #2 = $F
/*7268*/            OPC_CheckType, MVT::f64,
/*7270*/            OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7272*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$lhs, AFGR64:f64:$F)
/*7282*/          /*Scope*/ 22, /*->7305*/
/*7283*/            OPC_CheckCondCode, ISD::SETEQ,
/*7285*/            OPC_MoveParent,
/*7286*/            OPC_CheckType, MVT::i32,
/*7288*/            OPC_MoveParent,
/*7289*/            OPC_RecordChild1, // #1 = $T
/*7290*/            OPC_RecordChild2, // #2 = $F
/*7291*/            OPC_CheckType, MVT::f64,
/*7293*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7295*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*7305*/          /*Scope*/ 22, /*->7328*/
/*7306*/            OPC_CheckCondCode, ISD::SETNE,
/*7308*/            OPC_MoveParent,
/*7309*/            OPC_CheckType, MVT::i32,
/*7311*/            OPC_MoveParent,
/*7312*/            OPC_RecordChild1, // #1 = $T
/*7313*/            OPC_RecordChild2, // #2 = $F
/*7314*/            OPC_CheckType, MVT::f64,
/*7316*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*7318*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$lhs, FGR64:f64:$F)
/*7328*/          0, /*End of Scope*/
/*7329*/        /*Scope*/ 16|128,12/*1552*/, /*->8883*/
/*7331*/          OPC_RecordChild1, // #1 = $rhs
/*7332*/          OPC_Scope, 76|128,7/*972*/, /*->8307*/ // 2 children in Scope
/*7335*/            OPC_MoveChild, 1,
/*7337*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7340*/            OPC_Scope, 75, /*->7417*/ // 14 children in Scope
/*7342*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7344*/              OPC_MoveParent,
/*7345*/              OPC_MoveChild, 2,
/*7347*/              OPC_Scope, 33, /*->7382*/ // 2 children in Scope
/*7349*/                OPC_CheckCondCode, ISD::SETGE,
/*7351*/                OPC_MoveParent,
/*7352*/                OPC_CheckType, MVT::i32,
/*7354*/                OPC_MoveParent,
/*7355*/                OPC_RecordChild1, // #2 = $T
/*7356*/                OPC_RecordChild2, // #3 = $F
/*7357*/                OPC_CheckType, MVT::i32,
/*7359*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7361*/                OPC_EmitConvertToTarget, 1,
/*7363*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7372*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*7382*/              /*Scope*/ 33, /*->7416*/
/*7383*/                OPC_CheckCondCode, ISD::SETUGE,
/*7385*/                OPC_MoveParent,
/*7386*/                OPC_CheckType, MVT::i32,
/*7388*/                OPC_MoveParent,
/*7389*/                OPC_RecordChild1, // #2 = $T
/*7390*/                OPC_RecordChild2, // #3 = $F
/*7391*/                OPC_CheckType, MVT::i32,
/*7393*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7395*/                OPC_EmitConvertToTarget, 1,
/*7397*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7406*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*7416*/              0, /*End of Scope*/
/*7417*/            /*Scope*/ 81, /*->7499*/
/*7418*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7420*/              OPC_MoveParent,
/*7421*/              OPC_MoveChild, 2,
/*7423*/              OPC_Scope, 36, /*->7461*/ // 2 children in Scope
/*7425*/                OPC_CheckCondCode, ISD::SETGT,
/*7427*/                OPC_MoveParent,
/*7428*/                OPC_CheckType, MVT::i32,
/*7430*/                OPC_MoveParent,
/*7431*/                OPC_RecordChild1, // #2 = $T
/*7432*/                OPC_RecordChild2, // #3 = $F
/*7433*/                OPC_CheckType, MVT::i32,
/*7435*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7437*/                OPC_EmitConvertToTarget, 1,
/*7439*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7442*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7451*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPURegs:i32:$F)
/*7461*/              /*Scope*/ 36, /*->7498*/
/*7462*/                OPC_CheckCondCode, ISD::SETUGT,
/*7464*/                OPC_MoveParent,
/*7465*/                OPC_CheckType, MVT::i32,
/*7467*/                OPC_MoveParent,
/*7468*/                OPC_RecordChild1, // #2 = $T
/*7469*/                OPC_RecordChild2, // #3 = $F
/*7470*/                OPC_CheckType, MVT::i32,
/*7472*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7474*/                OPC_EmitConvertToTarget, 1,
/*7476*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7479*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7488*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPURegs:i32:$F)
/*7498*/              0, /*End of Scope*/
/*7499*/            /*Scope*/ 38, /*->7538*/
/*7500*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7502*/              OPC_MoveParent,
/*7503*/              OPC_MoveChild, 2,
/*7505*/              OPC_CheckCondCode, ISD::SETEQ,
/*7507*/              OPC_MoveParent,
/*7508*/              OPC_CheckType, MVT::i32,
/*7510*/              OPC_MoveParent,
/*7511*/              OPC_RecordChild1, // #2 = $T
/*7512*/              OPC_RecordChild2, // #3 = $F
/*7513*/              OPC_CheckType, MVT::i32,
/*7515*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7517*/              OPC_EmitConvertToTarget, 1,
/*7519*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7528*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
/*7538*/            /*Scope*/ 75, /*->7614*/
/*7539*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7541*/              OPC_MoveParent,
/*7542*/              OPC_MoveChild, 2,
/*7544*/              OPC_Scope, 33, /*->7579*/ // 2 children in Scope
/*7546*/                OPC_CheckCondCode, ISD::SETGE,
/*7548*/                OPC_MoveParent,
/*7549*/                OPC_CheckType, MVT::i32,
/*7551*/                OPC_MoveParent,
/*7552*/                OPC_RecordChild1, // #2 = $T
/*7553*/                OPC_RecordChild2, // #3 = $F
/*7554*/                OPC_CheckType, MVT::i64,
/*7556*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7558*/                OPC_EmitConvertToTarget, 1,
/*7560*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7569*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*7579*/              /*Scope*/ 33, /*->7613*/
/*7580*/                OPC_CheckCondCode, ISD::SETUGE,
/*7582*/                OPC_MoveParent,
/*7583*/                OPC_CheckType, MVT::i32,
/*7585*/                OPC_MoveParent,
/*7586*/                OPC_RecordChild1, // #2 = $T
/*7587*/                OPC_RecordChild2, // #3 = $F
/*7588*/                OPC_CheckType, MVT::i64,
/*7590*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7592*/                OPC_EmitConvertToTarget, 1,
/*7594*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7603*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*7613*/              0, /*End of Scope*/
/*7614*/            /*Scope*/ 81, /*->7696*/
/*7615*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7617*/              OPC_MoveParent,
/*7618*/              OPC_MoveChild, 2,
/*7620*/              OPC_Scope, 36, /*->7658*/ // 2 children in Scope
/*7622*/                OPC_CheckCondCode, ISD::SETGT,
/*7624*/                OPC_MoveParent,
/*7625*/                OPC_CheckType, MVT::i32,
/*7627*/                OPC_MoveParent,
/*7628*/                OPC_RecordChild1, // #2 = $T
/*7629*/                OPC_RecordChild2, // #3 = $F
/*7630*/                OPC_CheckType, MVT::i64,
/*7632*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7634*/                OPC_EmitConvertToTarget, 1,
/*7636*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7639*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7648*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPU64Regs:i64:$F)
/*7658*/              /*Scope*/ 36, /*->7695*/
/*7659*/                OPC_CheckCondCode, ISD::SETUGT,
/*7661*/                OPC_MoveParent,
/*7662*/                OPC_CheckType, MVT::i32,
/*7664*/                OPC_MoveParent,
/*7665*/                OPC_RecordChild1, // #2 = $T
/*7666*/                OPC_RecordChild2, // #3 = $F
/*7667*/                OPC_CheckType, MVT::i64,
/*7669*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7671*/                OPC_EmitConvertToTarget, 1,
/*7673*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7676*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7685*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), CPU64Regs:i64:$F)
/*7695*/              0, /*End of Scope*/
/*7696*/            /*Scope*/ 38, /*->7735*/
/*7697*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7699*/              OPC_MoveParent,
/*7700*/              OPC_MoveChild, 2,
/*7702*/              OPC_CheckCondCode, ISD::SETEQ,
/*7704*/              OPC_MoveParent,
/*7705*/              OPC_CheckType, MVT::i32,
/*7707*/              OPC_MoveParent,
/*7708*/              OPC_RecordChild1, // #2 = $T
/*7709*/              OPC_RecordChild2, // #3 = $F
/*7710*/              OPC_CheckType, MVT::i64,
/*7712*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*7714*/              OPC_EmitConvertToTarget, 1,
/*7716*/              OPC_EmitNode, TARGET_VAL(Mips::XORi), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7725*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XORi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
/*7735*/            /*Scope*/ 30, /*->7766*/
/*7736*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7738*/              OPC_MoveParent,
/*7739*/              OPC_MoveChild, 2,
/*7741*/              OPC_CheckCondCode, ISD::SETLT,
/*7743*/              OPC_MoveParent,
/*7744*/              OPC_CheckType, MVT::i32,
/*7746*/              OPC_MoveParent,
/*7747*/              OPC_RecordChild1, // #2 = $x
/*7748*/              OPC_RecordChild2, // #3 = $y
/*7749*/              OPC_CheckType, MVT::i32,
/*7751*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7753*/              OPC_EmitConvertToTarget, 1,
/*7755*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlti), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 4, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b, SETLT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                      // Dst: (SelTBtneZSlti:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immSExt16>>:$b)
/*7766*/            /*Scope*/ 65, /*->7832*/
/*7767*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*7769*/              OPC_MoveParent,
/*7770*/              OPC_MoveChild, 2,
/*7772*/              OPC_Scope, 28, /*->7802*/ // 2 children in Scope
/*7774*/                OPC_CheckCondCode, ISD::SETEQ,
/*7776*/                OPC_MoveParent,
/*7777*/                OPC_CheckType, MVT::i32,
/*7779*/                OPC_MoveParent,
/*7780*/                OPC_RecordChild1, // #2 = $x
/*7781*/                OPC_RecordChild2, // #3 = $y
/*7782*/                OPC_CheckType, MVT::i32,
/*7784*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7786*/                OPC_EmitConvertToTarget, 1,
/*7788*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*7791*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBteqZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*7802*/              /*Scope*/ 28, /*->7831*/
/*7803*/                OPC_CheckCondCode, ISD::SETNE,
/*7805*/                OPC_MoveParent,
/*7806*/                OPC_CheckType, MVT::i32,
/*7808*/                OPC_MoveParent,
/*7809*/                OPC_RecordChild1, // #2 = $x
/*7810*/                OPC_RecordChild2, // #3 = $y
/*7811*/                OPC_CheckType, MVT::i32,
/*7813*/                OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*7815*/                OPC_EmitConvertToTarget, 1,
/*7817*/                OPC_EmitNodeXForm, 0, 4, // LO16
/*7820*/                OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmpi), 0,
                            1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 5, 
                        // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$k, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 10
                        // Dst: (SelTBtneZCmpi:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$k))
/*7831*/              0, /*End of Scope*/
/*7832*/            /*Scope*/ 75, /*->7908*/
/*7833*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7835*/              OPC_MoveParent,
/*7836*/              OPC_MoveChild, 2,
/*7838*/              OPC_Scope, 33, /*->7873*/ // 2 children in Scope
/*7840*/                OPC_CheckCondCode, ISD::SETGE,
/*7842*/                OPC_MoveParent,
/*7843*/                OPC_CheckType, MVT::i32,
/*7845*/                OPC_MoveParent,
/*7846*/                OPC_RecordChild1, // #2 = $T
/*7847*/                OPC_RecordChild2, // #3 = $F
/*7848*/                OPC_CheckType, MVT::f32,
/*7850*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7852*/                OPC_EmitConvertToTarget, 1,
/*7854*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7863*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*7873*/              /*Scope*/ 33, /*->7907*/
/*7874*/                OPC_CheckCondCode, ISD::SETUGE,
/*7876*/                OPC_MoveParent,
/*7877*/                OPC_CheckType, MVT::i32,
/*7879*/                OPC_MoveParent,
/*7880*/                OPC_RecordChild1, // #2 = $T
/*7881*/                OPC_RecordChild2, // #3 = $F
/*7882*/                OPC_CheckType, MVT::f32,
/*7884*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7886*/                OPC_EmitConvertToTarget, 1,
/*7888*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*7897*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*7907*/              0, /*End of Scope*/
/*7908*/            /*Scope*/ 81, /*->7990*/
/*7909*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*7911*/              OPC_MoveParent,
/*7912*/              OPC_MoveChild, 2,
/*7914*/              OPC_Scope, 36, /*->7952*/ // 2 children in Scope
/*7916*/                OPC_CheckCondCode, ISD::SETGT,
/*7918*/                OPC_MoveParent,
/*7919*/                OPC_CheckType, MVT::i32,
/*7921*/                OPC_MoveParent,
/*7922*/                OPC_RecordChild1, // #2 = $T
/*7923*/                OPC_RecordChild2, // #3 = $F
/*7924*/                OPC_CheckType, MVT::f32,
/*7926*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7928*/                OPC_EmitConvertToTarget, 1,
/*7930*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7933*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7942*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*7952*/              /*Scope*/ 36, /*->7989*/
/*7953*/                OPC_CheckCondCode, ISD::SETUGT,
/*7955*/                OPC_MoveParent,
/*7956*/                OPC_CheckType, MVT::i32,
/*7958*/                OPC_MoveParent,
/*7959*/                OPC_RecordChild1, // #2 = $T
/*7960*/                OPC_RecordChild2, // #3 = $F
/*7961*/                OPC_CheckType, MVT::f32,
/*7963*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*7965*/                OPC_EmitConvertToTarget, 1,
/*7967*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*7970*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*7979*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR32:f32:$F)
/*7989*/              0, /*End of Scope*/
/*7990*/            /*Scope*/ 75, /*->8066*/
/*7991*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*7993*/              OPC_MoveParent,
/*7994*/              OPC_MoveChild, 2,
/*7996*/              OPC_Scope, 33, /*->8031*/ // 2 children in Scope
/*7998*/                OPC_CheckCondCode, ISD::SETGE,
/*8000*/                OPC_MoveParent,
/*8001*/                OPC_CheckType, MVT::i32,
/*8003*/                OPC_MoveParent,
/*8004*/                OPC_RecordChild1, // #2 = $T
/*8005*/                OPC_RecordChild2, // #3 = $F
/*8006*/                OPC_CheckType, MVT::f64,
/*8008*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8010*/                OPC_EmitConvertToTarget, 1,
/*8012*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8021*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), AFGR64:f64:$F)
/*8031*/              /*Scope*/ 33, /*->8065*/
/*8032*/                OPC_CheckCondCode, ISD::SETUGE,
/*8034*/                OPC_MoveParent,
/*8035*/                OPC_CheckType, MVT::i32,
/*8037*/                OPC_MoveParent,
/*8038*/                OPC_RecordChild1, // #2 = $T
/*8039*/                OPC_RecordChild2, // #3 = $F
/*8040*/                OPC_CheckType, MVT::f64,
/*8042*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8044*/                OPC_EmitConvertToTarget, 1,
/*8046*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8055*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), AFGR64:f64:$F)
/*8065*/              0, /*End of Scope*/
/*8066*/            /*Scope*/ 81, /*->8148*/
/*8067*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8069*/              OPC_MoveParent,
/*8070*/              OPC_MoveChild, 2,
/*8072*/              OPC_Scope, 36, /*->8110*/ // 2 children in Scope
/*8074*/                OPC_CheckCondCode, ISD::SETGT,
/*8076*/                OPC_MoveParent,
/*8077*/                OPC_CheckType, MVT::i32,
/*8079*/                OPC_MoveParent,
/*8080*/                OPC_RecordChild1, // #2 = $T
/*8081*/                OPC_RecordChild2, // #3 = $F
/*8082*/                OPC_CheckType, MVT::f64,
/*8084*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8086*/                OPC_EmitConvertToTarget, 1,
/*8088*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8091*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8100*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*8110*/              /*Scope*/ 36, /*->8147*/
/*8111*/                OPC_CheckCondCode, ISD::SETUGT,
/*8113*/                OPC_MoveParent,
/*8114*/                OPC_CheckType, MVT::i32,
/*8116*/                OPC_MoveParent,
/*8117*/                OPC_RecordChild1, // #2 = $T
/*8118*/                OPC_RecordChild2, // #3 = $F
/*8119*/                OPC_CheckType, MVT::f64,
/*8121*/                OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8123*/                OPC_EmitConvertToTarget, 1,
/*8125*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8128*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8137*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), AFGR64:f64:$F)
/*8147*/              0, /*End of Scope*/
/*8148*/            /*Scope*/ 75, /*->8224*/
/*8149*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*8151*/              OPC_MoveParent,
/*8152*/              OPC_MoveChild, 2,
/*8154*/              OPC_Scope, 33, /*->8189*/ // 2 children in Scope
/*8156*/                OPC_CheckCondCode, ISD::SETGE,
/*8158*/                OPC_MoveParent,
/*8159*/                OPC_CheckType, MVT::i32,
/*8161*/                OPC_MoveParent,
/*8162*/                OPC_RecordChild1, // #2 = $T
/*8163*/                OPC_RecordChild2, // #3 = $F
/*8164*/                OPC_CheckType, MVT::f64,
/*8166*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8168*/                OPC_EmitConvertToTarget, 1,
/*8170*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8179*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*8189*/              /*Scope*/ 33, /*->8223*/
/*8190*/                OPC_CheckCondCode, ISD::SETUGE,
/*8192*/                OPC_MoveParent,
/*8193*/                OPC_CheckType, MVT::i32,
/*8195*/                OPC_MoveParent,
/*8196*/                OPC_RecordChild1, // #2 = $T
/*8197*/                OPC_RecordChild2, // #3 = $F
/*8198*/                OPC_CheckType, MVT::f64,
/*8200*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8202*/                OPC_EmitConvertToTarget, 1,
/*8204*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*8213*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*8223*/              0, /*End of Scope*/
/*8224*/            /*Scope*/ 81, /*->8306*/
/*8225*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*8227*/              OPC_MoveParent,
/*8228*/              OPC_MoveChild, 2,
/*8230*/              OPC_Scope, 36, /*->8268*/ // 2 children in Scope
/*8232*/                OPC_CheckCondCode, ISD::SETGT,
/*8234*/                OPC_MoveParent,
/*8235*/                OPC_CheckType, MVT::i32,
/*8237*/                OPC_MoveParent,
/*8238*/                OPC_RecordChild1, // #2 = $T
/*8239*/                OPC_RecordChild2, // #3 = $F
/*8240*/                OPC_CheckType, MVT::f64,
/*8242*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8244*/                OPC_EmitConvertToTarget, 1,
/*8246*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8249*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8258*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*8268*/              /*Scope*/ 36, /*->8305*/
/*8269*/                OPC_CheckCondCode, ISD::SETUGT,
/*8271*/                OPC_MoveParent,
/*8272*/                OPC_CheckType, MVT::i32,
/*8274*/                OPC_MoveParent,
/*8275*/                OPC_RecordChild1, // #2 = $T
/*8276*/                OPC_RecordChild2, // #3 = $F
/*8277*/                OPC_CheckType, MVT::f64,
/*8279*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*8281*/                OPC_EmitConvertToTarget, 1,
/*8283*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*8286*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*8295*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), FGR64:f64:$F)
/*8305*/              0, /*End of Scope*/
/*8306*/            0, /*End of Scope*/
/*8307*/          /*Scope*/ 61|128,4/*573*/, /*->8882*/
/*8309*/            OPC_MoveChild, 2,
/*8311*/            OPC_Scope, 31, /*->8344*/ // 19 children in Scope
/*8313*/              OPC_CheckCondCode, ISD::SETGE,
/*8315*/              OPC_MoveParent,
/*8316*/              OPC_CheckType, MVT::i32,
/*8318*/              OPC_MoveParent,
/*8319*/              OPC_RecordChild1, // #2 = $T
/*8320*/              OPC_RecordChild2, // #3 = $F
/*8321*/              OPC_CheckType, MVT::i32,
/*8323*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8325*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8334*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*8344*/            /*Scope*/ 31, /*->8376*/
/*8345*/              OPC_CheckCondCode, ISD::SETUGE,
/*8347*/              OPC_MoveParent,
/*8348*/              OPC_CheckType, MVT::i32,
/*8350*/              OPC_MoveParent,
/*8351*/              OPC_RecordChild1, // #2 = $T
/*8352*/              OPC_RecordChild2, // #3 = $F
/*8353*/              OPC_CheckType, MVT::i32,
/*8355*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8357*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8366*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*8376*/            /*Scope*/ 31, /*->8408*/
/*8377*/              OPC_CheckCondCode, ISD::SETLE,
/*8379*/              OPC_MoveParent,
/*8380*/              OPC_CheckType, MVT::i32,
/*8382*/              OPC_MoveParent,
/*8383*/              OPC_RecordChild1, // #2 = $T
/*8384*/              OPC_RecordChild2, // #3 = $F
/*8385*/              OPC_CheckType, MVT::i32,
/*8387*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8389*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8398*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*8408*/            /*Scope*/ 31, /*->8440*/
/*8409*/              OPC_CheckCondCode, ISD::SETULE,
/*8411*/              OPC_MoveParent,
/*8412*/              OPC_CheckType, MVT::i32,
/*8414*/              OPC_MoveParent,
/*8415*/              OPC_RecordChild1, // #2 = $T
/*8416*/              OPC_RecordChild2, // #3 = $F
/*8417*/              OPC_CheckType, MVT::i32,
/*8419*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8421*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8430*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPURegs:i32:$F)
/*8440*/            /*Scope*/ 31, /*->8472*/
/*8441*/              OPC_CheckCondCode, ISD::SETEQ,
/*8443*/              OPC_MoveParent,
/*8444*/              OPC_CheckType, MVT::i32,
/*8446*/              OPC_MoveParent,
/*8447*/              OPC_RecordChild1, // #2 = $T
/*8448*/              OPC_RecordChild2, // #3 = $F
/*8449*/              OPC_CheckType, MVT::i32,
/*8451*/              OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8453*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8462*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
/*8472*/            /*Scope*/ 31, /*->8504*/
/*8473*/              OPC_CheckCondCode, ISD::SETGE,
/*8475*/              OPC_MoveParent,
/*8476*/              OPC_CheckType, MVT::i32,
/*8478*/              OPC_MoveParent,
/*8479*/              OPC_RecordChild1, // #2 = $T
/*8480*/              OPC_RecordChild2, // #3 = $F
/*8481*/              OPC_CheckType, MVT::i64,
/*8483*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8485*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8494*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*8504*/            /*Scope*/ 31, /*->8536*/
/*8505*/              OPC_CheckCondCode, ISD::SETUGE,
/*8507*/              OPC_MoveParent,
/*8508*/              OPC_CheckType, MVT::i32,
/*8510*/              OPC_MoveParent,
/*8511*/              OPC_RecordChild1, // #2 = $T
/*8512*/              OPC_RecordChild2, // #3 = $F
/*8513*/              OPC_CheckType, MVT::i64,
/*8515*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8517*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8526*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*8536*/            /*Scope*/ 31, /*->8568*/
/*8537*/              OPC_CheckCondCode, ISD::SETLE,
/*8539*/              OPC_MoveParent,
/*8540*/              OPC_CheckType, MVT::i32,
/*8542*/              OPC_MoveParent,
/*8543*/              OPC_RecordChild1, // #2 = $T
/*8544*/              OPC_RecordChild2, // #3 = $F
/*8545*/              OPC_CheckType, MVT::i64,
/*8547*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8549*/              OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8558*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*8568*/            /*Scope*/ 31, /*->8600*/
/*8569*/              OPC_CheckCondCode, ISD::SETULE,
/*8571*/              OPC_MoveParent,
/*8572*/              OPC_CheckType, MVT::i32,
/*8574*/              OPC_MoveParent,
/*8575*/              OPC_RecordChild1, // #2 = $T
/*8576*/              OPC_RecordChild2, // #3 = $F
/*8577*/              OPC_CheckType, MVT::i64,
/*8579*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8581*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*8590*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), CPU64Regs:i64:$F)
/*8600*/            /*Scope*/ 31, /*->8632*/
/*8601*/              OPC_CheckCondCode, ISD::SETEQ,
/*8603*/              OPC_MoveParent,
/*8604*/              OPC_CheckType, MVT::i32,
/*8606*/              OPC_MoveParent,
/*8607*/              OPC_RecordChild1, // #2 = $T
/*8608*/              OPC_RecordChild2, // #3 = $F
/*8609*/              OPC_CheckType, MVT::i64,
/*8611*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8613*/              OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8622*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
/*8632*/            /*Scope*/ 56, /*->8689*/
/*8633*/              OPC_CheckCondCode, ISD::SETNE,
/*8635*/              OPC_MoveParent,
/*8636*/              OPC_CheckType, MVT::i32,
/*8638*/              OPC_MoveParent,
/*8639*/              OPC_RecordChild1, // #2 = $T
/*8640*/              OPC_RecordChild2, // #3 = $F
/*8641*/              OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8665
/*8644*/                OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*8646*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8655*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->8688
/*8667*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8669*/                OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*8678*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*8689*/            /*Scope*/ 23, /*->8713*/
/*8690*/              OPC_CheckCondCode, ISD::SETGE,
/*8692*/              OPC_MoveParent,
/*8693*/              OPC_CheckType, MVT::i32,
/*8695*/              OPC_MoveParent,
/*8696*/              OPC_RecordChild1, // #2 = $x
/*8697*/              OPC_RecordChild2, // #3 = $y
/*8698*/              OPC_CheckType, MVT::i32,
/*8700*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8702*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8713*/            /*Scope*/ 23, /*->8737*/
/*8714*/              OPC_CheckCondCode, ISD::SETGT,
/*8716*/              OPC_MoveParent,
/*8717*/              OPC_CheckType, MVT::i32,
/*8719*/              OPC_MoveParent,
/*8720*/              OPC_RecordChild1, // #2 = $x
/*8721*/              OPC_RecordChild2, // #3 = $y
/*8722*/              OPC_CheckType, MVT::i32,
/*8724*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8726*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8737*/            /*Scope*/ 23, /*->8761*/
/*8738*/              OPC_CheckCondCode, ISD::SETUGE,
/*8740*/              OPC_MoveParent,
/*8741*/              OPC_CheckType, MVT::i32,
/*8743*/              OPC_MoveParent,
/*8744*/              OPC_RecordChild1, // #2 = $x
/*8745*/              OPC_RecordChild2, // #3 = $y
/*8746*/              OPC_CheckType, MVT::i32,
/*8748*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8750*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 0, 1, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a, CPU16Regs:i32:$b)
/*8761*/            /*Scope*/ 23, /*->8785*/
/*8762*/              OPC_CheckCondCode, ISD::SETUGT,
/*8764*/              OPC_MoveParent,
/*8765*/              OPC_CheckType, MVT::i32,
/*8767*/              OPC_MoveParent,
/*8768*/              OPC_RecordChild1, // #2 = $x
/*8769*/              OPC_RecordChild2, // #3 = $y
/*8770*/              OPC_CheckType, MVT::i32,
/*8772*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8774*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETUGT:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8785*/            /*Scope*/ 23, /*->8809*/
/*8786*/              OPC_CheckCondCode, ISD::SETLE,
/*8788*/              OPC_MoveParent,
/*8789*/              OPC_CheckType, MVT::i32,
/*8791*/              OPC_MoveParent,
/*8792*/              OPC_RecordChild1, // #2 = $x
/*8793*/              OPC_RecordChild2, // #3 = $y
/*8794*/              OPC_CheckType, MVT::i32,
/*8796*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8798*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSlt), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETLE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSlt:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8809*/            /*Scope*/ 23, /*->8833*/
/*8810*/              OPC_CheckCondCode, ISD::SETULE,
/*8812*/              OPC_MoveParent,
/*8813*/              OPC_CheckType, MVT::i32,
/*8815*/              OPC_MoveParent,
/*8816*/              OPC_RecordChild1, // #2 = $x
/*8817*/              OPC_RecordChild2, // #3 = $y
/*8818*/              OPC_CheckType, MVT::i32,
/*8820*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8822*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZSltu), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETULE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZSltu:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8833*/            /*Scope*/ 23, /*->8857*/
/*8834*/              OPC_CheckCondCode, ISD::SETEQ,
/*8836*/              OPC_MoveParent,
/*8837*/              OPC_CheckType, MVT::i32,
/*8839*/              OPC_MoveParent,
/*8840*/              OPC_RecordChild1, // #2 = $x
/*8841*/              OPC_RecordChild2, // #3 = $y
/*8842*/              OPC_CheckType, MVT::i32,
/*8844*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8846*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBteqZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETEQ:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBteqZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8857*/            /*Scope*/ 23, /*->8881*/
/*8858*/              OPC_CheckCondCode, ISD::SETNE,
/*8860*/              OPC_MoveParent,
/*8861*/              OPC_CheckType, MVT::i32,
/*8863*/              OPC_MoveParent,
/*8864*/              OPC_RecordChild1, // #2 = $x
/*8865*/              OPC_RecordChild2, // #3 = $y
/*8866*/              OPC_CheckType, MVT::i32,
/*8868*/              OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*8870*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SelTBtneZCmp), 0,
                          1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 1, 0, 
                      // Src: (select:i32 (setcc:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$b, SETNE:Other), CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 6
                      // Dst: (SelTBtneZCmp:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$b, CPU16Regs:i32:$a)
/*8881*/            0, /*End of Scope*/
/*8882*/          0, /*End of Scope*/
/*8883*/        0, /*End of Scope*/
/*8884*/      /*Scope*/ 121|128,9/*1273*/, /*->10159*/
/*8886*/        OPC_CheckChild0Type, MVT::i64,
/*8888*/        OPC_Scope, 51|128,1/*179*/, /*->9070*/ // 2 children in Scope
/*8891*/          OPC_MoveChild, 1,
/*8893*/          OPC_CheckInteger, 0, 
/*8895*/          OPC_MoveParent,
/*8896*/          OPC_MoveChild, 2,
/*8898*/          OPC_Scope, 38, /*->8938*/ // 6 children in Scope
/*8900*/            OPC_CheckCondCode, ISD::SETEQ,
/*8902*/            OPC_MoveParent,
/*8903*/            OPC_CheckType, MVT::i32,
/*8905*/            OPC_MoveParent,
/*8906*/            OPC_RecordChild1, // #1 = $T
/*8907*/            OPC_RecordChild2, // #2 = $F
/*8908*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8923
/*8911*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8913*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8937
/*8925*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8927*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*8938*/          /*Scope*/ 38, /*->8977*/
/*8939*/            OPC_CheckCondCode, ISD::SETNE,
/*8941*/            OPC_MoveParent,
/*8942*/            OPC_CheckType, MVT::i32,
/*8944*/            OPC_MoveParent,
/*8945*/            OPC_RecordChild1, // #1 = $T
/*8946*/            OPC_RecordChild2, // #2 = $F
/*8947*/            OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8962
/*8950*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8952*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$lhs, CPURegs:i32:$F)
                    /*SwitchType*/ 12,  MVT::i64,// ->8976
/*8964*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8966*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 11
                      // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$lhs, CPU64Regs:i64:$F)
                    0, // EndSwitchType
/*8977*/          /*Scope*/ 22, /*->9000*/
/*8978*/            OPC_CheckCondCode, ISD::SETEQ,
/*8980*/            OPC_MoveParent,
/*8981*/            OPC_CheckType, MVT::i32,
/*8983*/            OPC_MoveParent,
/*8984*/            OPC_RecordChild1, // #1 = $T
/*8985*/            OPC_RecordChild2, // #2 = $F
/*8986*/            OPC_CheckType, MVT::f32,
/*8988*/            OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*8990*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*9000*/          /*Scope*/ 22, /*->9023*/
/*9001*/            OPC_CheckCondCode, ISD::SETNE,
/*9003*/            OPC_MoveParent,
/*9004*/            OPC_CheckType, MVT::i32,
/*9006*/            OPC_MoveParent,
/*9007*/            OPC_RecordChild1, // #1 = $T
/*9008*/            OPC_RecordChild2, // #2 = $F
/*9009*/            OPC_CheckType, MVT::f32,
/*9011*/            OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9013*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 11
                    // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$lhs, FGR32:f32:$F)
/*9023*/          /*Scope*/ 22, /*->9046*/
/*9024*/            OPC_CheckCondCode, ISD::SETEQ,
/*9026*/            OPC_MoveParent,
/*9027*/            OPC_CheckType, MVT::i32,
/*9029*/            OPC_MoveParent,
/*9030*/            OPC_RecordChild1, // #1 = $T
/*9031*/            OPC_RecordChild2, // #2 = $F
/*9032*/            OPC_CheckType, MVT::f64,
/*9034*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9036*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*9046*/          /*Scope*/ 22, /*->9069*/
/*9047*/            OPC_CheckCondCode, ISD::SETNE,
/*9049*/            OPC_MoveParent,
/*9050*/            OPC_CheckType, MVT::i32,
/*9052*/            OPC_MoveParent,
/*9053*/            OPC_RecordChild1, // #1 = $T
/*9054*/            OPC_RecordChild2, // #2 = $F
/*9055*/            OPC_CheckType, MVT::f64,
/*9057*/            OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9059*/            OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, 0:i64, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 11
                    // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$lhs, FGR64:f64:$F)
/*9069*/          0, /*End of Scope*/
/*9070*/        /*Scope*/ 62|128,8/*1086*/, /*->10158*/
/*9072*/          OPC_RecordChild1, // #1 = $rhs
/*9073*/          OPC_Scope, 65|128,5/*705*/, /*->9781*/ // 2 children in Scope
/*9076*/            OPC_MoveChild, 1,
/*9078*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9081*/            OPC_Scope, 75, /*->9158*/ // 9 children in Scope
/*9083*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9085*/              OPC_MoveParent,
/*9086*/              OPC_MoveChild, 2,
/*9088*/              OPC_Scope, 33, /*->9123*/ // 2 children in Scope
/*9090*/                OPC_CheckCondCode, ISD::SETGE,
/*9092*/                OPC_MoveParent,
/*9093*/                OPC_CheckType, MVT::i32,
/*9095*/                OPC_MoveParent,
/*9096*/                OPC_RecordChild1, // #2 = $T
/*9097*/                OPC_RecordChild2, // #3 = $F
/*9098*/                OPC_CheckType, MVT::i32,
/*9100*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9102*/                OPC_EmitConvertToTarget, 1,
/*9104*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9113*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPURegs:i32:$F)
/*9123*/              /*Scope*/ 33, /*->9157*/
/*9124*/                OPC_CheckCondCode, ISD::SETUGE,
/*9126*/                OPC_MoveParent,
/*9127*/                OPC_CheckType, MVT::i32,
/*9129*/                OPC_MoveParent,
/*9130*/                OPC_RecordChild1, // #2 = $T
/*9131*/                OPC_RecordChild2, // #3 = $F
/*9132*/                OPC_CheckType, MVT::i32,
/*9134*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9136*/                OPC_EmitConvertToTarget, 1,
/*9138*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9147*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPURegs:i32:$F)
/*9157*/              0, /*End of Scope*/
/*9158*/            /*Scope*/ 81, /*->9240*/
/*9159*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9161*/              OPC_MoveParent,
/*9162*/              OPC_MoveChild, 2,
/*9164*/              OPC_Scope, 36, /*->9202*/ // 2 children in Scope
/*9166*/                OPC_CheckCondCode, ISD::SETGT,
/*9168*/                OPC_MoveParent,
/*9169*/                OPC_CheckType, MVT::i32,
/*9171*/                OPC_MoveParent,
/*9172*/                OPC_RecordChild1, // #2 = $T
/*9173*/                OPC_RecordChild2, // #3 = $F
/*9174*/                OPC_CheckType, MVT::i32,
/*9176*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9178*/                OPC_EmitConvertToTarget, 1,
/*9180*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9183*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9192*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPURegs:i32:$F)
/*9202*/              /*Scope*/ 36, /*->9239*/
/*9203*/                OPC_CheckCondCode, ISD::SETUGT,
/*9205*/                OPC_MoveParent,
/*9206*/                OPC_CheckType, MVT::i32,
/*9208*/                OPC_MoveParent,
/*9209*/                OPC_RecordChild1, // #2 = $T
/*9210*/                OPC_RecordChild2, // #3 = $F
/*9211*/                OPC_CheckType, MVT::i32,
/*9213*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9215*/                OPC_EmitConvertToTarget, 1,
/*9217*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9220*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9229*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPURegs:i32:$F)
/*9239*/              0, /*End of Scope*/
/*9240*/            /*Scope*/ 75, /*->9316*/
/*9241*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9243*/              OPC_MoveParent,
/*9244*/              OPC_MoveChild, 2,
/*9246*/              OPC_Scope, 33, /*->9281*/ // 2 children in Scope
/*9248*/                OPC_CheckCondCode, ISD::SETGE,
/*9250*/                OPC_MoveParent,
/*9251*/                OPC_CheckType, MVT::i32,
/*9253*/                OPC_MoveParent,
/*9254*/                OPC_RecordChild1, // #2 = $T
/*9255*/                OPC_RecordChild2, // #3 = $F
/*9256*/                OPC_CheckType, MVT::i64,
/*9258*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9260*/                OPC_EmitConvertToTarget, 1,
/*9262*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9271*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), CPU64Regs:i64:$F)
/*9281*/              /*Scope*/ 33, /*->9315*/
/*9282*/                OPC_CheckCondCode, ISD::SETUGE,
/*9284*/                OPC_MoveParent,
/*9285*/                OPC_CheckType, MVT::i32,
/*9287*/                OPC_MoveParent,
/*9288*/                OPC_RecordChild1, // #2 = $T
/*9289*/                OPC_RecordChild2, // #3 = $F
/*9290*/                OPC_CheckType, MVT::i64,
/*9292*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9294*/                OPC_EmitConvertToTarget, 1,
/*9296*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9305*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), CPU64Regs:i64:$F)
/*9315*/              0, /*End of Scope*/
/*9316*/            /*Scope*/ 81, /*->9398*/
/*9317*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9319*/              OPC_MoveParent,
/*9320*/              OPC_MoveChild, 2,
/*9322*/              OPC_Scope, 36, /*->9360*/ // 2 children in Scope
/*9324*/                OPC_CheckCondCode, ISD::SETGT,
/*9326*/                OPC_MoveParent,
/*9327*/                OPC_CheckType, MVT::i32,
/*9329*/                OPC_MoveParent,
/*9330*/                OPC_RecordChild1, // #2 = $T
/*9331*/                OPC_RecordChild2, // #3 = $F
/*9332*/                OPC_CheckType, MVT::i64,
/*9334*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9336*/                OPC_EmitConvertToTarget, 1,
/*9338*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9341*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9350*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPU64Regs:i64:$F)
/*9360*/              /*Scope*/ 36, /*->9397*/
/*9361*/                OPC_CheckCondCode, ISD::SETUGT,
/*9363*/                OPC_MoveParent,
/*9364*/                OPC_CheckType, MVT::i32,
/*9366*/                OPC_MoveParent,
/*9367*/                OPC_RecordChild1, // #2 = $T
/*9368*/                OPC_RecordChild2, // #3 = $F
/*9369*/                OPC_CheckType, MVT::i64,
/*9371*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9373*/                OPC_EmitConvertToTarget, 1,
/*9375*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9378*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9387*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), CPU64Regs:i64:$F)
/*9397*/              0, /*End of Scope*/
/*9398*/            /*Scope*/ 65, /*->9464*/
/*9399*/              OPC_CheckPredicate, 27, // Predicate_immZExt16
/*9401*/              OPC_MoveParent,
/*9402*/              OPC_MoveChild, 2,
/*9404*/              OPC_CheckCondCode, ISD::SETEQ,
/*9406*/              OPC_MoveParent,
/*9407*/              OPC_CheckType, MVT::i32,
/*9409*/              OPC_MoveParent,
/*9410*/              OPC_RecordChild1, // #2 = $T
/*9411*/              OPC_RecordChild2, // #3 = $F
/*9412*/              OPC_SwitchType /*2 cases */, 23,  MVT::i32,// ->9438
/*9415*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9417*/                OPC_EmitConvertToTarget, 1,
/*9419*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*9428*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPURegs:i32:$F)
                      /*SwitchType*/ 23,  MVT::i64,// ->9463
/*9440*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9442*/                OPC_EmitConvertToTarget, 1,
/*9444*/                OPC_EmitNode, TARGET_VAL(Mips::XORi64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 4,  // Results = #5
/*9453*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 10
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XORi64:i64 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$uimm16), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*9464*/            /*Scope*/ 75, /*->9540*/
/*9465*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9467*/              OPC_MoveParent,
/*9468*/              OPC_MoveChild, 2,
/*9470*/              OPC_Scope, 33, /*->9505*/ // 2 children in Scope
/*9472*/                OPC_CheckCondCode, ISD::SETGE,
/*9474*/                OPC_MoveParent,
/*9475*/                OPC_CheckType, MVT::i32,
/*9477*/                OPC_MoveParent,
/*9478*/                OPC_RecordChild1, // #2 = $T
/*9479*/                OPC_RecordChild2, // #3 = $F
/*9480*/                OPC_CheckType, MVT::f32,
/*9482*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9484*/                OPC_EmitConvertToTarget, 1,
/*9486*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9495*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR32:f32:$F)
/*9505*/              /*Scope*/ 33, /*->9539*/
/*9506*/                OPC_CheckCondCode, ISD::SETUGE,
/*9508*/                OPC_MoveParent,
/*9509*/                OPC_CheckType, MVT::i32,
/*9511*/                OPC_MoveParent,
/*9512*/                OPC_RecordChild1, // #2 = $T
/*9513*/                OPC_RecordChild2, // #3 = $F
/*9514*/                OPC_CheckType, MVT::f32,
/*9516*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9518*/                OPC_EmitConvertToTarget, 1,
/*9520*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9529*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR32:f32:$F)
/*9539*/              0, /*End of Scope*/
/*9540*/            /*Scope*/ 81, /*->9622*/
/*9541*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9543*/              OPC_MoveParent,
/*9544*/              OPC_MoveChild, 2,
/*9546*/              OPC_Scope, 36, /*->9584*/ // 2 children in Scope
/*9548*/                OPC_CheckCondCode, ISD::SETGT,
/*9550*/                OPC_MoveParent,
/*9551*/                OPC_CheckType, MVT::i32,
/*9553*/                OPC_MoveParent,
/*9554*/                OPC_RecordChild1, // #2 = $T
/*9555*/                OPC_RecordChild2, // #3 = $F
/*9556*/                OPC_CheckType, MVT::f32,
/*9558*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9560*/                OPC_EmitConvertToTarget, 1,
/*9562*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9565*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9574*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*9584*/              /*Scope*/ 36, /*->9621*/
/*9585*/                OPC_CheckCondCode, ISD::SETUGT,
/*9587*/                OPC_MoveParent,
/*9588*/                OPC_CheckType, MVT::i32,
/*9590*/                OPC_MoveParent,
/*9591*/                OPC_RecordChild1, // #2 = $T
/*9592*/                OPC_RecordChild2, // #3 = $F
/*9593*/                OPC_CheckType, MVT::f32,
/*9595*/                OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9597*/                OPC_EmitConvertToTarget, 1,
/*9599*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9602*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9611*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                            1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 10
                        // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR32:f32:$F)
/*9621*/              0, /*End of Scope*/
/*9622*/            /*Scope*/ 75, /*->9698*/
/*9623*/              OPC_CheckPredicate, 28, // Predicate_immSExt16
/*9625*/              OPC_MoveParent,
/*9626*/              OPC_MoveChild, 2,
/*9628*/              OPC_Scope, 33, /*->9663*/ // 2 children in Scope
/*9630*/                OPC_CheckCondCode, ISD::SETGE,
/*9632*/                OPC_MoveParent,
/*9633*/                OPC_CheckType, MVT::i32,
/*9635*/                OPC_MoveParent,
/*9636*/                OPC_RecordChild1, // #2 = $T
/*9637*/                OPC_RecordChild2, // #3 = $F
/*9638*/                OPC_CheckType, MVT::f64,
/*9640*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9642*/                OPC_EmitConvertToTarget, 1,
/*9644*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9653*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), FGR64:f64:$F)
/*9663*/              /*Scope*/ 33, /*->9697*/
/*9664*/                OPC_CheckCondCode, ISD::SETUGE,
/*9666*/                OPC_MoveParent,
/*9667*/                OPC_CheckType, MVT::i32,
/*9669*/                OPC_MoveParent,
/*9670*/                OPC_RecordChild1, // #2 = $T
/*9671*/                OPC_RecordChild2, // #3 = $F
/*9672*/                OPC_CheckType, MVT::f64,
/*9674*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9676*/                OPC_EmitConvertToTarget, 1,
/*9678*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5
/*9687*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 5, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lh, (imm:i64)<<P:Predicate_immSExt16>>:$rh), FGR64:f64:$F)
/*9697*/              0, /*End of Scope*/
/*9698*/            /*Scope*/ 81, /*->9780*/
/*9699*/              OPC_CheckPredicate, 29, // Predicate_immSExt16Plus1
/*9701*/              OPC_MoveParent,
/*9702*/              OPC_MoveChild, 2,
/*9704*/              OPC_Scope, 36, /*->9742*/ // 2 children in Scope
/*9706*/                OPC_CheckCondCode, ISD::SETGT,
/*9708*/                OPC_MoveParent,
/*9709*/                OPC_CheckType, MVT::i32,
/*9711*/                OPC_MoveParent,
/*9712*/                OPC_RecordChild1, // #2 = $T
/*9713*/                OPC_RecordChild2, // #3 = $F
/*9714*/                OPC_CheckType, MVT::f64,
/*9716*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9718*/                OPC_EmitConvertToTarget, 1,
/*9720*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9723*/                OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9732*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTi64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*9742*/              /*Scope*/ 36, /*->9779*/
/*9743*/                OPC_CheckCondCode, ISD::SETUGT,
/*9745*/                OPC_MoveParent,
/*9746*/                OPC_CheckType, MVT::i32,
/*9748*/                OPC_MoveParent,
/*9749*/                OPC_RecordChild1, // #2 = $T
/*9750*/                OPC_RecordChild2, // #3 = $F
/*9751*/                OPC_CheckType, MVT::f64,
/*9753*/                OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*9755*/                OPC_EmitConvertToTarget, 1,
/*9757*/                OPC_EmitNodeXForm, 1, 4, // Plus1
/*9760*/                OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                            1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 5,  // Results = #6
/*9769*/                OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 6, 3, 
                        // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 10
                        // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTiu64:i32 CPU64Regs:i64:$lhs, (Plus1:i64 (imm:i64):$rhs)), FGR64:f64:$F)
/*9779*/              0, /*End of Scope*/
/*9780*/            0, /*End of Scope*/
/*9781*/          /*Scope*/ 118|128,2/*374*/, /*->10157*/
/*9783*/            OPC_MoveChild, 2,
/*9785*/            OPC_Scope, 31, /*->9818*/ // 10 children in Scope
/*9787*/              OPC_CheckCondCode, ISD::SETGE,
/*9789*/              OPC_MoveParent,
/*9790*/              OPC_CheckType, MVT::i32,
/*9792*/              OPC_MoveParent,
/*9793*/              OPC_RecordChild1, // #2 = $T
/*9794*/              OPC_RecordChild2, // #3 = $F
/*9795*/              OPC_CheckType, MVT::i32,
/*9797*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9799*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9808*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*9818*/            /*Scope*/ 31, /*->9850*/
/*9819*/              OPC_CheckCondCode, ISD::SETUGE,
/*9821*/              OPC_MoveParent,
/*9822*/              OPC_CheckType, MVT::i32,
/*9824*/              OPC_MoveParent,
/*9825*/              OPC_RecordChild1, // #2 = $T
/*9826*/              OPC_RecordChild2, // #3 = $F
/*9827*/              OPC_CheckType, MVT::i32,
/*9829*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9831*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9840*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
/*9850*/            /*Scope*/ 31, /*->9882*/
/*9851*/              OPC_CheckCondCode, ISD::SETLE,
/*9853*/              OPC_MoveParent,
/*9854*/              OPC_CheckType, MVT::i32,
/*9856*/              OPC_MoveParent,
/*9857*/              OPC_RecordChild1, // #2 = $T
/*9858*/              OPC_RecordChild2, // #3 = $F
/*9859*/              OPC_CheckType, MVT::i32,
/*9861*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9863*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9872*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*9882*/            /*Scope*/ 31, /*->9914*/
/*9883*/              OPC_CheckCondCode, ISD::SETULE,
/*9885*/              OPC_MoveParent,
/*9886*/              OPC_CheckType, MVT::i32,
/*9888*/              OPC_MoveParent,
/*9889*/              OPC_RecordChild1, // #2 = $T
/*9890*/              OPC_RecordChild2, // #3 = $F
/*9891*/              OPC_CheckType, MVT::i32,
/*9893*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9895*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*9904*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I), 0,
                          1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I:i32 CPURegs:i32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPURegs:i32:$F)
/*9914*/            /*Scope*/ 31, /*->9946*/
/*9915*/              OPC_CheckCondCode, ISD::SETGE,
/*9917*/              OPC_MoveParent,
/*9918*/              OPC_CheckType, MVT::i32,
/*9920*/              OPC_MoveParent,
/*9921*/              OPC_RecordChild1, // #2 = $T
/*9922*/              OPC_RecordChild2, // #3 = $F
/*9923*/              OPC_CheckType, MVT::i64,
/*9925*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9927*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9936*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*9946*/            /*Scope*/ 31, /*->9978*/
/*9947*/              OPC_CheckCondCode, ISD::SETUGE,
/*9949*/              OPC_MoveParent,
/*9950*/              OPC_CheckType, MVT::i32,
/*9952*/              OPC_MoveParent,
/*9953*/              OPC_RecordChild1, // #2 = $T
/*9954*/              OPC_RecordChild2, // #3 = $F
/*9955*/              OPC_CheckType, MVT::i64,
/*9957*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9959*/              OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*9968*/              OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
/*9978*/            /*Scope*/ 31, /*->10010*/
/*9979*/              OPC_CheckCondCode, ISD::SETLE,
/*9981*/              OPC_MoveParent,
/*9982*/              OPC_CheckType, MVT::i32,
/*9984*/              OPC_MoveParent,
/*9985*/              OPC_RecordChild1, // #2 = $T
/*9986*/              OPC_RecordChild2, // #3 = $F
/*9987*/              OPC_CheckType, MVT::i64,
/*9989*/              OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*9991*/              OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10000*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*10010*/           /*Scope*/ 31, /*->10042*/
/*10011*/             OPC_CheckCondCode, ISD::SETULE,
/*10013*/             OPC_MoveParent,
/*10014*/             OPC_CheckType, MVT::i32,
/*10016*/             OPC_MoveParent,
/*10017*/             OPC_RecordChild1, // #2 = $T
/*10018*/             OPC_RecordChild2, // #3 = $F
/*10019*/             OPC_CheckType, MVT::i64,
/*10021*/             OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10023*/             OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10032*/             OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_I64), 0,
                          1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                      // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                      // Dst: (MOVZ_I_I64:i64 CPU64Regs:i64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), CPU64Regs:i64:$F)
/*10042*/           /*Scope*/ 56, /*->10099*/
/*10043*/             OPC_CheckCondCode, ISD::SETEQ,
/*10045*/             OPC_MoveParent,
/*10046*/             OPC_CheckType, MVT::i32,
/*10048*/             OPC_MoveParent,
/*10049*/             OPC_RecordChild1, // #2 = $T
/*10050*/             OPC_RecordChild2, // #3 = $F
/*10051*/             OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->10075
/*10054*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10056*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10065*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->10098
/*10077*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10079*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10088*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVZ_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*10099*/           /*Scope*/ 56, /*->10156*/
/*10100*/             OPC_CheckCondCode, ISD::SETNE,
/*10102*/             OPC_MoveParent,
/*10103*/             OPC_CheckType, MVT::i32,
/*10105*/             OPC_MoveParent,
/*10106*/             OPC_RecordChild1, // #2 = $T
/*10107*/             OPC_RecordChild2, // #3 = $F
/*10108*/             OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->10132
/*10111*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10113*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10122*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                            1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPURegs:i32:$F)
                      /*SwitchType*/ 21,  MVT::i64,// ->10155
/*10134*/               OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10136*/               OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                            1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*10145*/               OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                            1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 4, 3, 
                        // Src: (select:i64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 6
                        // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), CPU64Regs:i64:$F)
                      0, // EndSwitchType
/*10156*/           0, /*End of Scope*/
/*10157*/         0, /*End of Scope*/
/*10158*/       0, /*End of Scope*/
/*10159*/     0, /*End of Scope*/
/*10160*/   /*Scope*/ 89, /*->10250*/
/*10161*/     OPC_RecordChild0, // #0 = $cond
/*10162*/     OPC_Scope, 50, /*->10214*/ // 2 children in Scope
/*10164*/       OPC_CheckChild0Type, MVT::i32,
/*10166*/       OPC_RecordChild1, // #1 = $T
/*10167*/       OPC_RecordChild2, // #2 = $F
/*10168*/       OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->10199
/*10171*/         OPC_Scope, 12, /*->10185*/ // 2 children in Scope
/*10173*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10175*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                    // Dst: (MOVN_I_I:i32 CPURegs:i32:$T, CPURegs:i32:$cond, CPURegs:i32:$F)
/*10185*/         /*Scope*/ 12, /*->10198*/
/*10186*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*10188*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SelBneZ), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (select:i32 CPU16Regs:i32:$a, CPU16Regs:i32:$x, CPU16Regs:i32:$y) - Complexity = 3
                    // Dst: (SelBneZ:i32 CPU16Regs:i32:$x, CPU16Regs:i32:$y, CPU16Regs:i32:$a)
/*10198*/         0, /*End of Scope*/
                /*SwitchType*/ 12,  MVT::i64,// ->10213
/*10201*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10203*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPURegs:i32:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I_I64:i64 CPU64Regs:i64:$T, CPURegs:i32:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*10214*/     /*Scope*/ 34, /*->10249*/
/*10215*/       OPC_CheckChild0Type, MVT::i64,
/*10217*/       OPC_RecordChild1, // #1 = $T
/*10218*/       OPC_RecordChild2, // #2 = $F
/*10219*/       OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->10234
/*10222*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10224*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i32 CPU64Regs:i64:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I:i32 CPURegs:i32:$T, CPU64Regs:i64:$cond, CPURegs:i32:$F)
                /*SwitchType*/ 12,  MVT::i64,// ->10248
/*10236*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10238*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_I64), 0,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:i64 CPU64Regs:i64:$cond, CPU64Regs:i64:$T, CPU64Regs:i64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_I64:i64 CPU64Regs:i64:$T, CPU64Regs:i64:$cond, CPU64Regs:i64:$F)
                0, // EndSwitchType
/*10249*/     0, /*End of Scope*/
/*10250*/   /*Scope*/ 90|128,7/*986*/, /*->11238*/
/*10252*/     OPC_MoveChild, 0,
/*10254*/     OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*10257*/     OPC_RecordChild0, // #0 = $lhs
/*10258*/     OPC_Scope, 71|128,4/*583*/, /*->10844*/ // 2 children in Scope
/*10261*/       OPC_CheckChild0Type, MVT::i32,
/*10263*/       OPC_RecordChild1, // #1 = $rhs
/*10264*/       OPC_MoveChild, 2,
/*10266*/       OPC_Scope, 31, /*->10299*/ // 18 children in Scope
/*10268*/         OPC_CheckCondCode, ISD::SETGE,
/*10270*/         OPC_MoveParent,
/*10271*/         OPC_CheckType, MVT::i32,
/*10273*/         OPC_MoveParent,
/*10274*/         OPC_RecordChild1, // #2 = $T
/*10275*/         OPC_RecordChild2, // #3 = $F
/*10276*/         OPC_CheckType, MVT::f32,
/*10278*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10280*/         OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10289*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*10299*/       /*Scope*/ 31, /*->10331*/
/*10300*/         OPC_CheckCondCode, ISD::SETUGE,
/*10302*/         OPC_MoveParent,
/*10303*/         OPC_CheckType, MVT::i32,
/*10305*/         OPC_MoveParent,
/*10306*/         OPC_RecordChild1, // #2 = $T
/*10307*/         OPC_RecordChild2, // #3 = $F
/*10308*/         OPC_CheckType, MVT::f32,
/*10310*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10312*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10321*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*10331*/       /*Scope*/ 31, /*->10363*/
/*10332*/         OPC_CheckCondCode, ISD::SETLE,
/*10334*/         OPC_MoveParent,
/*10335*/         OPC_CheckType, MVT::i32,
/*10337*/         OPC_MoveParent,
/*10338*/         OPC_RecordChild1, // #2 = $T
/*10339*/         OPC_RecordChild2, // #3 = $F
/*10340*/         OPC_CheckType, MVT::f32,
/*10342*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10344*/         OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10353*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*10363*/       /*Scope*/ 31, /*->10395*/
/*10364*/         OPC_CheckCondCode, ISD::SETULE,
/*10366*/         OPC_MoveParent,
/*10367*/         OPC_CheckType, MVT::i32,
/*10369*/         OPC_MoveParent,
/*10370*/         OPC_RecordChild1, // #2 = $T
/*10371*/         OPC_RecordChild2, // #3 = $F
/*10372*/         OPC_CheckType, MVT::f32,
/*10374*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10376*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10385*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR32:f32:$F)
/*10395*/       /*Scope*/ 31, /*->10427*/
/*10396*/         OPC_CheckCondCode, ISD::SETEQ,
/*10398*/         OPC_MoveParent,
/*10399*/         OPC_CheckType, MVT::i32,
/*10401*/         OPC_MoveParent,
/*10402*/         OPC_RecordChild1, // #2 = $T
/*10403*/         OPC_RecordChild2, // #3 = $F
/*10404*/         OPC_CheckType, MVT::f32,
/*10406*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10408*/         OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10417*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*10427*/       /*Scope*/ 31, /*->10459*/
/*10428*/         OPC_CheckCondCode, ISD::SETNE,
/*10430*/         OPC_MoveParent,
/*10431*/         OPC_CheckType, MVT::i32,
/*10433*/         OPC_MoveParent,
/*10434*/         OPC_RecordChild1, // #2 = $T
/*10435*/         OPC_RecordChild2, // #3 = $F
/*10436*/         OPC_CheckType, MVT::f32,
/*10438*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*10440*/         OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10449*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR32:f32:$F)
/*10459*/       /*Scope*/ 31, /*->10491*/
/*10460*/         OPC_CheckCondCode, ISD::SETGE,
/*10462*/         OPC_MoveParent,
/*10463*/         OPC_CheckType, MVT::i32,
/*10465*/         OPC_MoveParent,
/*10466*/         OPC_RecordChild1, // #2 = $T
/*10467*/         OPC_RecordChild2, // #3 = $F
/*10468*/         OPC_CheckType, MVT::f64,
/*10470*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10472*/         OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10481*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10491*/       /*Scope*/ 31, /*->10523*/
/*10492*/         OPC_CheckCondCode, ISD::SETUGE,
/*10494*/         OPC_MoveParent,
/*10495*/         OPC_CheckType, MVT::i32,
/*10497*/         OPC_MoveParent,
/*10498*/         OPC_RecordChild1, // #2 = $T
/*10499*/         OPC_RecordChild2, // #3 = $F
/*10500*/         OPC_CheckType, MVT::f64,
/*10502*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10504*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10513*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10523*/       /*Scope*/ 31, /*->10555*/
/*10524*/         OPC_CheckCondCode, ISD::SETLE,
/*10526*/         OPC_MoveParent,
/*10527*/         OPC_CheckType, MVT::i32,
/*10529*/         OPC_MoveParent,
/*10530*/         OPC_RecordChild1, // #2 = $T
/*10531*/         OPC_RecordChild2, // #3 = $F
/*10532*/         OPC_CheckType, MVT::f64,
/*10534*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10536*/         OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10545*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*10555*/       /*Scope*/ 31, /*->10587*/
/*10556*/         OPC_CheckCondCode, ISD::SETULE,
/*10558*/         OPC_MoveParent,
/*10559*/         OPC_CheckType, MVT::i32,
/*10561*/         OPC_MoveParent,
/*10562*/         OPC_RecordChild1, // #2 = $T
/*10563*/         OPC_RecordChild2, // #3 = $F
/*10564*/         OPC_CheckType, MVT::f64,
/*10566*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10568*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10577*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), AFGR64:f64:$F)
/*10587*/       /*Scope*/ 31, /*->10619*/
/*10588*/         OPC_CheckCondCode, ISD::SETEQ,
/*10590*/         OPC_MoveParent,
/*10591*/         OPC_CheckType, MVT::i32,
/*10593*/         OPC_MoveParent,
/*10594*/         OPC_RecordChild1, // #2 = $T
/*10595*/         OPC_RecordChild2, // #3 = $F
/*10596*/         OPC_CheckType, MVT::f64,
/*10598*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10600*/         OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10609*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10619*/       /*Scope*/ 31, /*->10651*/
/*10620*/         OPC_CheckCondCode, ISD::SETNE,
/*10622*/         OPC_MoveParent,
/*10623*/         OPC_CheckType, MVT::i32,
/*10625*/         OPC_MoveParent,
/*10626*/         OPC_RecordChild1, // #2 = $T
/*10627*/         OPC_RecordChild2, // #3 = $F
/*10628*/         OPC_CheckType, MVT::f64,
/*10630*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10632*/         OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10641*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), AFGR64:f64:$F)
/*10651*/       /*Scope*/ 31, /*->10683*/
/*10652*/         OPC_CheckCondCode, ISD::SETGE,
/*10654*/         OPC_MoveParent,
/*10655*/         OPC_CheckType, MVT::i32,
/*10657*/         OPC_MoveParent,
/*10658*/         OPC_RecordChild1, // #2 = $T
/*10659*/         OPC_RecordChild2, // #3 = $F
/*10660*/         OPC_CheckType, MVT::f64,
/*10662*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10664*/         OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10673*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10683*/       /*Scope*/ 31, /*->10715*/
/*10684*/         OPC_CheckCondCode, ISD::SETUGE,
/*10686*/         OPC_MoveParent,
/*10687*/         OPC_CheckType, MVT::i32,
/*10689*/         OPC_MoveParent,
/*10690*/         OPC_RecordChild1, // #2 = $T
/*10691*/         OPC_RecordChild2, // #3 = $F
/*10692*/         OPC_CheckType, MVT::f64,
/*10694*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10696*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10705*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10715*/       /*Scope*/ 31, /*->10747*/
/*10716*/         OPC_CheckCondCode, ISD::SETLE,
/*10718*/         OPC_MoveParent,
/*10719*/         OPC_CheckType, MVT::i32,
/*10721*/         OPC_MoveParent,
/*10722*/         OPC_RecordChild1, // #2 = $T
/*10723*/         OPC_RecordChild2, // #3 = $F
/*10724*/         OPC_CheckType, MVT::f64,
/*10726*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10728*/         OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10737*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*10747*/       /*Scope*/ 31, /*->10779*/
/*10748*/         OPC_CheckCondCode, ISD::SETULE,
/*10750*/         OPC_MoveParent,
/*10751*/         OPC_CheckType, MVT::i32,
/*10753*/         OPC_MoveParent,
/*10754*/         OPC_RecordChild1, // #2 = $T
/*10755*/         OPC_RecordChild2, // #3 = $F
/*10756*/         OPC_CheckType, MVT::f64,
/*10758*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10760*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10769*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), FGR64:f64:$F)
/*10779*/       /*Scope*/ 31, /*->10811*/
/*10780*/         OPC_CheckCondCode, ISD::SETEQ,
/*10782*/         OPC_MoveParent,
/*10783*/         OPC_CheckType, MVT::i32,
/*10785*/         OPC_MoveParent,
/*10786*/         OPC_RecordChild1, // #2 = $T
/*10787*/         OPC_RecordChild2, // #3 = $F
/*10788*/         OPC_CheckType, MVT::f64,
/*10790*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10792*/         OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10801*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10811*/       /*Scope*/ 31, /*->10843*/
/*10812*/         OPC_CheckCondCode, ISD::SETNE,
/*10814*/         OPC_MoveParent,
/*10815*/         OPC_CheckType, MVT::i32,
/*10817*/         OPC_MoveParent,
/*10818*/         OPC_RecordChild1, // #2 = $T
/*10819*/         OPC_RecordChild2, // #3 = $F
/*10820*/         OPC_CheckType, MVT::f64,
/*10822*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*10824*/         OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10833*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), FGR64:f64:$F)
/*10843*/       0, /*End of Scope*/
/*10844*/     /*Scope*/ 7|128,3/*391*/, /*->11237*/
/*10846*/       OPC_CheckChild0Type, MVT::i64,
/*10848*/       OPC_RecordChild1, // #1 = $rhs
/*10849*/       OPC_MoveChild, 2,
/*10851*/       OPC_Scope, 31, /*->10884*/ // 12 children in Scope
/*10853*/         OPC_CheckCondCode, ISD::SETGE,
/*10855*/         OPC_MoveParent,
/*10856*/         OPC_CheckType, MVT::i32,
/*10858*/         OPC_MoveParent,
/*10859*/         OPC_RecordChild1, // #2 = $T
/*10860*/         OPC_RecordChild2, // #3 = $F
/*10861*/         OPC_CheckType, MVT::f32,
/*10863*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10865*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10874*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*10884*/       /*Scope*/ 31, /*->10916*/
/*10885*/         OPC_CheckCondCode, ISD::SETUGE,
/*10887*/         OPC_MoveParent,
/*10888*/         OPC_CheckType, MVT::i32,
/*10890*/         OPC_MoveParent,
/*10891*/         OPC_RecordChild1, // #2 = $T
/*10892*/         OPC_RecordChild2, // #3 = $F
/*10893*/         OPC_CheckType, MVT::f32,
/*10895*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10897*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*10906*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*10916*/       /*Scope*/ 31, /*->10948*/
/*10917*/         OPC_CheckCondCode, ISD::SETLE,
/*10919*/         OPC_MoveParent,
/*10920*/         OPC_CheckType, MVT::i32,
/*10922*/         OPC_MoveParent,
/*10923*/         OPC_RecordChild1, // #2 = $T
/*10924*/         OPC_RecordChild2, // #3 = $F
/*10925*/         OPC_CheckType, MVT::f32,
/*10927*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10929*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10938*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*10948*/       /*Scope*/ 31, /*->10980*/
/*10949*/         OPC_CheckCondCode, ISD::SETULE,
/*10951*/         OPC_MoveParent,
/*10952*/         OPC_CheckType, MVT::i32,
/*10954*/         OPC_MoveParent,
/*10955*/         OPC_RecordChild1, // #2 = $T
/*10956*/         OPC_RecordChild2, // #3 = $F
/*10957*/         OPC_CheckType, MVT::f32,
/*10959*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10961*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*10970*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I_S:f32 FGR32:f32:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR32:f32:$F)
/*10980*/       /*Scope*/ 31, /*->11012*/
/*10981*/         OPC_CheckCondCode, ISD::SETEQ,
/*10983*/         OPC_MoveParent,
/*10984*/         OPC_CheckType, MVT::i32,
/*10986*/         OPC_MoveParent,
/*10987*/         OPC_RecordChild1, // #2 = $T
/*10988*/         OPC_RecordChild2, // #3 = $F
/*10989*/         OPC_CheckType, MVT::f32,
/*10991*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*10993*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11002*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVZ_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*11012*/       /*Scope*/ 31, /*->11044*/
/*11013*/         OPC_CheckCondCode, ISD::SETNE,
/*11015*/         OPC_MoveParent,
/*11016*/         OPC_CheckType, MVT::i32,
/*11018*/         OPC_MoveParent,
/*11019*/         OPC_RecordChild1, // #2 = $T
/*11020*/         OPC_RecordChild2, // #3 = $F
/*11021*/         OPC_CheckType, MVT::f32,
/*11023*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11025*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11034*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f32 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR32:f32:$T, FGR32:f32:$F) - Complexity = 6
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR32:f32:$F)
/*11044*/       /*Scope*/ 31, /*->11076*/
/*11045*/         OPC_CheckCondCode, ISD::SETGE,
/*11047*/         OPC_MoveParent,
/*11048*/         OPC_CheckType, MVT::i32,
/*11050*/         OPC_MoveParent,
/*11051*/         OPC_RecordChild1, // #2 = $T
/*11052*/         OPC_RecordChild2, // #3 = $F
/*11053*/         OPC_CheckType, MVT::f64,
/*11055*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11057*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11066*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11076*/       /*Scope*/ 31, /*->11108*/
/*11077*/         OPC_CheckCondCode, ISD::SETUGE,
/*11079*/         OPC_MoveParent,
/*11080*/         OPC_CheckType, MVT::i32,
/*11082*/         OPC_MoveParent,
/*11083*/         OPC_RecordChild1, // #2 = $T
/*11084*/         OPC_RecordChild2, // #3 = $F
/*11085*/         OPC_CheckType, MVT::f64,
/*11087*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11089*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*11098*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11108*/       /*Scope*/ 31, /*->11140*/
/*11109*/         OPC_CheckCondCode, ISD::SETLE,
/*11111*/         OPC_MoveParent,
/*11112*/         OPC_CheckType, MVT::i32,
/*11114*/         OPC_MoveParent,
/*11115*/         OPC_RecordChild1, // #2 = $T
/*11116*/         OPC_RecordChild2, // #3 = $F
/*11117*/         OPC_CheckType, MVT::f64,
/*11119*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11121*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11130*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*11140*/       /*Scope*/ 31, /*->11172*/
/*11141*/         OPC_CheckCondCode, ISD::SETULE,
/*11143*/         OPC_MoveParent,
/*11144*/         OPC_CheckType, MVT::i32,
/*11146*/         OPC_MoveParent,
/*11147*/         OPC_RecordChild1, // #2 = $T
/*11148*/         OPC_RecordChild2, // #3 = $F
/*11149*/         OPC_CheckType, MVT::f64,
/*11151*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11153*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4
/*11162*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I_D64:f64 FGR64:f64:$T, (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), FGR64:f64:$F)
/*11172*/       /*Scope*/ 31, /*->11204*/
/*11173*/         OPC_CheckCondCode, ISD::SETEQ,
/*11175*/         OPC_MoveParent,
/*11176*/         OPC_CheckType, MVT::i32,
/*11178*/         OPC_MoveParent,
/*11179*/         OPC_RecordChild1, // #2 = $T
/*11180*/         OPC_RecordChild2, // #3 = $F
/*11181*/         OPC_CheckType, MVT::f64,
/*11183*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11185*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11194*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVZ_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11204*/       /*Scope*/ 31, /*->11236*/
/*11205*/         OPC_CheckCondCode, ISD::SETNE,
/*11207*/         OPC_MoveParent,
/*11208*/         OPC_CheckType, MVT::i32,
/*11210*/         OPC_MoveParent,
/*11211*/         OPC_RecordChild1, // #2 = $T
/*11212*/         OPC_RecordChild2, // #3 = $F
/*11213*/         OPC_CheckType, MVT::f64,
/*11215*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11217*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #4
/*11226*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 4, 3, 
                  // Src: (select:f64 (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other), FGR64:f64:$T, FGR64:f64:$F) - Complexity = 6
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), FGR64:f64:$F)
/*11236*/       0, /*End of Scope*/
/*11237*/     0, /*End of Scope*/
/*11238*/   /*Scope*/ 89, /*->11328*/
/*11239*/     OPC_RecordChild0, // #0 = $cond
/*11240*/     OPC_Scope, 50, /*->11292*/ // 2 children in Scope
/*11242*/       OPC_CheckChild0Type, MVT::i32,
/*11244*/       OPC_RecordChild1, // #1 = $T
/*11245*/       OPC_RecordChild2, // #2 = $F
/*11246*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11261
/*11249*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11251*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPURegs:i32:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I_S:f32 FGR32:f32:$T, CPURegs:i32:$cond, FGR32:f32:$F)
                /*SwitchType*/ 28,  MVT::f64,// ->11291
/*11263*/         OPC_Scope, 12, /*->11277*/ // 2 children in Scope
/*11265*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11267*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D32:f64 AFGR64:f64:$T, CPURegs:i32:$cond, AFGR64:f64:$F)
/*11277*/         /*Scope*/ 12, /*->11290*/
/*11278*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11280*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                    // Src: (select:f64 CPURegs:i32:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                    // Dst: (MOVN_I_D64:f64 FGR64:f64:$T, CPURegs:i32:$cond, FGR64:f64:$F)
/*11290*/         0, /*End of Scope*/
                0, // EndSwitchType
/*11292*/     /*Scope*/ 34, /*->11327*/
/*11293*/       OPC_CheckChild0Type, MVT::i64,
/*11295*/       OPC_RecordChild1, // #1 = $T
/*11296*/       OPC_RecordChild2, // #2 = $F
/*11297*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11312
/*11300*/         OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*11302*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f32 CPU64Regs:i64:$cond, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
                  // Dst: (MOVN_I64_S:f32 FGR32:f32:$T, CPU64Regs:i64:$cond, FGR32:f32:$F)
                /*SwitchType*/ 12,  MVT::f64,// ->11326
/*11314*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11316*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN_I64_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (select:f64 CPU64Regs:i64:$cond, FGR64:f64:$T, FGR64:f64:$F) - Complexity = 3
                  // Dst: (MOVN_I64_D64:f64 FGR64:f64:$T, CPU64Regs:i64:$cond, FGR64:f64:$F)
                0, // EndSwitchType
/*11327*/     0, /*End of Scope*/
/*11328*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40|128,2/*296*/,  TARGET_VAL(ISD::FSUB),// ->11629
/*11333*/   OPC_Scope, 118|128,1/*246*/, /*->11582*/ // 2 children in Scope
/*11336*/     OPC_MoveChild, 0,
/*11338*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(ISD::ConstantFP),// ->11528
/*11343*/       OPC_CheckPredicate, 30, // Predicate_fpimm0
/*11345*/       OPC_MoveParent,
/*11346*/       OPC_MoveChild, 1,
/*11348*/       OPC_SwitchOpcode /*2 cases */, 116,  TARGET_VAL(ISD::FADD),// ->11468
/*11352*/         OPC_Scope, 56, /*->11410*/ // 2 children in Scope
/*11354*/           OPC_MoveChild, 0,
/*11356*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*11359*/           OPC_RecordChild0, // #0 = $fs
/*11360*/           OPC_RecordChild1, // #1 = $ft
/*11361*/           OPC_MoveParent,
/*11362*/           OPC_RecordChild1, // #2 = $fr
/*11363*/           OPC_MoveParent,
/*11364*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11379
/*11367*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11369*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->11409
/*11381*/             OPC_Scope, 12, /*->11395*/ // 2 children in Scope
/*11383*/               OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11385*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*11395*/             /*Scope*/ 12, /*->11408*/
/*11396*/               OPC_CheckPatternPredicate, 17, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11398*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*11408*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*11410*/         /*Scope*/ 56, /*->11467*/
/*11411*/           OPC_RecordChild0, // #0 = $fr
/*11412*/           OPC_MoveChild, 1,
/*11414*/           OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*11417*/           OPC_RecordChild0, // #1 = $fs
/*11418*/           OPC_RecordChild1, // #2 = $ft
/*11419*/           OPC_MoveParent,
/*11420*/           OPC_MoveParent,
/*11421*/           OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11436
/*11424*/             OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11426*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_S), 0,
                          1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                      // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft))) - Complexity = 13
                      // Dst: (NMADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                    /*SwitchType*/ 28,  MVT::f64,// ->11466
/*11438*/             OPC_Scope, 12, /*->11452*/ // 2 children in Scope
/*11440*/               OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11442*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D32), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*11452*/             /*Scope*/ 12, /*->11465*/
/*11453*/               OPC_CheckPatternPredicate, 17, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11455*/               OPC_MorphNodeTo, TARGET_VAL(Mips::NMADD_D64), 0,
                            1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                        // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft))) - Complexity = 13
                        // Dst: (NMADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*11465*/             0, /*End of Scope*/
                    0, // EndSwitchType
/*11467*/         0, /*End of Scope*/
                /*SwitchOpcode*/ 56,  TARGET_VAL(ISD::FSUB),// ->11527
/*11471*/         OPC_MoveChild, 0,
/*11473*/         OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*11476*/         OPC_RecordChild0, // #0 = $fs
/*11477*/         OPC_RecordChild1, // #1 = $ft
/*11478*/         OPC_MoveParent,
/*11479*/         OPC_RecordChild1, // #2 = $fr
/*11480*/         OPC_MoveParent,
/*11481*/         OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11496
/*11484*/           OPC_CheckPatternPredicate, 15, // (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11486*/           OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_S), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f32 (fpimm:f32)<<P:Predicate_fpimm0>>, (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr)) - Complexity = 13
                    // Dst: (NMSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                  /*SwitchType*/ 28,  MVT::f64,// ->11526
/*11498*/           OPC_Scope, 12, /*->11512*/ // 2 children in Scope
/*11500*/             OPC_CheckPatternPredicate, 16, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11502*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D32), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*11512*/           /*Scope*/ 12, /*->11525*/
/*11513*/             OPC_CheckPatternPredicate, 17, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*11515*/             OPC_MorphNodeTo, TARGET_VAL(Mips::NMSUB_D64), 0,
                          1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                      // Src: (fsub:f64 (fpimm:f64)<<P:Predicate_fpimm0>>, (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr)) - Complexity = 13
                      // Dst: (NMSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*11525*/           0, /*End of Scope*/
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::FMUL),// ->11581
/*11531*/       OPC_RecordChild0, // #0 = $fs
/*11532*/       OPC_RecordChild1, // #1 = $ft
/*11533*/       OPC_MoveParent,
/*11534*/       OPC_RecordChild1, // #2 = $fr
/*11535*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->11550
/*11538*/         OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11540*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fsub:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                  // Dst: (MSUB_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->11580
/*11552*/         OPC_Scope, 12, /*->11566*/ // 2 children in Scope
/*11554*/           OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11556*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*11566*/         /*Scope*/ 12, /*->11579*/
/*11567*/           OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11569*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                    // Src: (fsub:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                    // Dst: (MSUB_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*11579*/         0, /*End of Scope*/
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*11582*/   /*Scope*/ 45, /*->11628*/
/*11583*/     OPC_RecordChild0, // #0 = $fs
/*11584*/     OPC_RecordChild1, // #1 = $ft
/*11585*/     OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->11599
/*11588*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11590*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                // Dst: (FSUB_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 26,  MVT::f64,// ->11627
/*11601*/       OPC_Scope, 11, /*->11614*/ // 2 children in Scope
/*11603*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11605*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*11614*/       /*Scope*/ 11, /*->11626*/
/*11615*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*11617*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D64), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                  // Dst: (FSUB_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*11626*/       0, /*End of Scope*/
              0, // EndSwitchType
/*11628*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->11657
/*11632*/   OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*11633*/   OPC_CaptureGlueInput,
/*11634*/   OPC_RecordChild1, // #1 = $amt1
/*11635*/   OPC_MoveChild, 1,
/*11637*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11640*/   OPC_MoveParent,
/*11641*/   OPC_RecordChild2, // #2 = $amt2
/*11642*/   OPC_MoveChild, 2,
/*11644*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11647*/   OPC_MoveParent,
/*11648*/   OPC_EmitMergeInputChains1_0,
/*11649*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 53,  TARGET_VAL(MipsISD::Ext),// ->11713
/*11660*/   OPC_RecordChild0, // #0 = $rs
/*11661*/   OPC_RecordChild1, // #1 = $pos
/*11662*/   OPC_MoveChild, 1,
/*11664*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11667*/   OPC_MoveParent,
/*11668*/   OPC_RecordChild2, // #2 = $size
/*11669*/   OPC_MoveChild, 2,
/*11671*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11674*/   OPC_MoveParent,
/*11675*/   OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->11694
/*11678*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11680*/     OPC_EmitConvertToTarget, 1,
/*11682*/     OPC_EmitConvertToTarget, 2,
/*11684*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXT), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (EXT:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size)
            /*SwitchType*/ 16,  MVT::i64,// ->11712
/*11696*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11698*/     OPC_EmitConvertToTarget, 1,
/*11700*/     OPC_EmitConvertToTarget, 2,
/*11702*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DEXT), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
              // Src: (MipsExt:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size) - Complexity = 9
              // Dst: (DEXT:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size)
            0, // EndSwitchType
          /*SwitchOpcode*/ 56,  TARGET_VAL(MipsISD::Ins),// ->11772
/*11716*/   OPC_RecordChild0, // #0 = $rs
/*11717*/   OPC_RecordChild1, // #1 = $pos
/*11718*/   OPC_MoveChild, 1,
/*11720*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11723*/   OPC_MoveParent,
/*11724*/   OPC_RecordChild2, // #2 = $size
/*11725*/   OPC_MoveChild, 2,
/*11727*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*11730*/   OPC_MoveParent,
/*11731*/   OPC_RecordChild3, // #3 = $src
/*11732*/   OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->11752
/*11735*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11737*/     OPC_EmitConvertToTarget, 1,
/*11739*/     OPC_EmitConvertToTarget, 2,
/*11741*/     OPC_MorphNodeTo, TARGET_VAL(Mips::INS), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src) - Complexity = 9
              // Dst: (INS:i32 CPURegsOpnd:i32:$rs, (imm:i32):$pos, (imm:i32):$size, CPURegsOpnd:i32:$src)
            /*SwitchType*/ 17,  MVT::i64,// ->11771
/*11754*/     OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*11756*/     OPC_EmitConvertToTarget, 1,
/*11758*/     OPC_EmitConvertToTarget, 2,
/*11760*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DINS), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 4, 5, 3, 
              // Src: (MipsIns:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src) - Complexity = 9
              // Dst: (DINS:i64 CPU64RegsOpnd:i64:$rs, (imm:i32):$pos, (imm:i32):$size, CPU64RegsOpnd:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7|128,5/*647*/,  TARGET_VAL(ISD::ADD),// ->12423
/*11776*/   OPC_Scope, 110|128,1/*238*/, /*->12017*/ // 3 children in Scope
/*11779*/     OPC_RecordChild0, // #0 = $hi
/*11780*/     OPC_MoveChild, 1,
/*11782*/     OPC_SwitchOpcode /*2 cases */, 57|128,1/*185*/,  TARGET_VAL(MipsISD::Lo),// ->11972
/*11787*/       OPC_RecordChild0, // #1 = $lo
/*11788*/       OPC_MoveChild, 0,
/*11790*/       OPC_SwitchOpcode /*5 cases */, 45,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11839
/*11794*/         OPC_MoveParent,
/*11795*/         OPC_MoveParent,
/*11796*/         OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->11825
/*11799*/           OPC_Scope, 11, /*->11812*/ // 2 children in Scope
/*11801*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11803*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*11812*/           /*Scope*/ 11, /*->11824*/
/*11813*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*11815*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                      // Src: (add:i32 CPU16Regs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*11824*/           0, /*End of Scope*/
                  /*SwitchType*/ 11,  MVT::i64,// ->11838
/*11827*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11829*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaladdr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetBlockAddress),// ->11872
/*11842*/         OPC_MoveParent,
/*11843*/         OPC_MoveParent,
/*11844*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11858
/*11847*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11849*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11871
/*11860*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11862*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tblockaddress:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetJumpTable),// ->11905
/*11875*/         OPC_MoveParent,
/*11876*/         OPC_MoveParent,
/*11877*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11891
/*11880*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11882*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11904
/*11893*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11895*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tjumptable:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetConstantPool),// ->11938
/*11908*/         OPC_MoveParent,
/*11909*/         OPC_MoveParent,
/*11910*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11924
/*11913*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11915*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11937
/*11926*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11928*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tconstpool:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->11971
/*11941*/         OPC_MoveParent,
/*11942*/         OPC_MoveParent,
/*11943*/         OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11957
/*11946*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11948*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaltlsaddr:i32):$lo)) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  /*SwitchType*/ 11,  MVT::i64,// ->11970
/*11959*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11961*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 CPU64Regs:i64:$hi, (MipsLo:i64 (tglobaltlsaddr:i64):$lo)) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::GPRel),// ->12016
/*11975*/       OPC_RecordChild0, // #1 = $in
/*11976*/       OPC_MoveChild, 0,
/*11978*/       OPC_SwitchOpcode /*2 cases */, 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11997
/*11982*/         OPC_MoveParent,
/*11983*/         OPC_MoveParent,
/*11984*/         OPC_CheckType, MVT::i32,
/*11986*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*11988*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetConstantPool),// ->12015
/*12000*/         OPC_MoveParent,
/*12001*/         OPC_MoveParent,
/*12002*/         OPC_CheckType, MVT::i32,
/*12004*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12006*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12017*/   /*Scope*/ 116|128,1/*244*/, /*->12263*/
/*12019*/     OPC_MoveChild, 0,
/*12021*/     OPC_SwitchOpcode /*2 cases */, 62|128,1/*190*/,  TARGET_VAL(MipsISD::Lo),// ->12216
/*12026*/       OPC_RecordChild0, // #0 = $lo
/*12027*/       OPC_MoveChild, 0,
/*12029*/       OPC_SwitchOpcode /*5 cases */, 46,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12079
/*12033*/         OPC_MoveParent,
/*12034*/         OPC_MoveParent,
/*12035*/         OPC_RecordChild1, // #1 = $hi
/*12036*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12050
/*12039*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12041*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaladdr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaladdr:i64):$lo)
                  /*SwitchType*/ 26,  MVT::i32,// ->12078
/*12052*/           OPC_Scope, 11, /*->12065*/ // 2 children in Scope
/*12054*/             OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12056*/             OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPU16Regs:i32:$hi) - Complexity = 9
                      // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$hi, (tglobaladdr:i32):$lo)
/*12065*/           /*Scope*/ 11, /*->12077*/
/*12066*/             OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12068*/             OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                          1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                      // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                      // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*12077*/           0, /*End of Scope*/
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->12113
/*12082*/         OPC_MoveParent,
/*12083*/         OPC_MoveParent,
/*12084*/         OPC_RecordChild1, // #1 = $hi
/*12085*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12099
/*12088*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12090*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tblockaddress:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tblockaddress:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12112
/*12101*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12103*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->12147
/*12116*/         OPC_MoveParent,
/*12117*/         OPC_MoveParent,
/*12118*/         OPC_RecordChild1, // #1 = $hi
/*12119*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12133
/*12122*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12124*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tjumptable:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tjumptable:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12146
/*12135*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12137*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->12181
/*12150*/         OPC_MoveParent,
/*12151*/         OPC_MoveParent,
/*12152*/         OPC_RecordChild1, // #1 = $hi
/*12153*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12167
/*12156*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12158*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tconstpool:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tconstpool:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12180
/*12169*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12171*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->12215
/*12184*/         OPC_MoveParent,
/*12185*/         OPC_MoveParent,
/*12186*/         OPC_RecordChild1, // #1 = $hi
/*12187*/         OPC_SwitchType /*2 cases */, 11,  MVT::i64,// ->12201
/*12190*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12192*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (MipsLo:i64 (tglobaltlsaddr:i64):$lo), CPU64Regs:i64:$hi) - Complexity = 9
                    // Dst: (DADDiu:i64 CPU64Regs:i64:$hi, (tglobaltlsaddr:i64):$lo)
                  /*SwitchType*/ 11,  MVT::i32,// ->12214
/*12203*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12205*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (MipsLo:i32 (tglobaltlsaddr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaltlsaddr:i32):$lo)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::GPRel),// ->12262
/*12219*/       OPC_RecordChild0, // #0 = $in
/*12220*/       OPC_MoveChild, 0,
/*12222*/       OPC_SwitchOpcode /*2 cases */, 16,  TARGET_VAL(ISD::TargetGlobalAddress),// ->12242
/*12226*/         OPC_MoveParent,
/*12227*/         OPC_MoveParent,
/*12228*/         OPC_RecordChild1, // #1 = $gp
/*12229*/         OPC_CheckType, MVT::i32,
/*12231*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12233*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::TargetConstantPool),// ->12261
/*12245*/         OPC_MoveParent,
/*12246*/         OPC_MoveParent,
/*12247*/         OPC_RecordChild1, // #1 = $gp
/*12248*/         OPC_CheckType, MVT::i32,
/*12250*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12252*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*12263*/   /*Scope*/ 29|128,1/*157*/, /*->12422*/
/*12265*/     OPC_RecordChild0, // #0 = $rs
/*12266*/     OPC_RecordChild1, // #1 = $imm16
/*12267*/     OPC_Scope, 81, /*->12350*/ // 5 children in Scope
/*12269*/       OPC_MoveChild, 1,
/*12271*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12274*/       OPC_Scope, 35, /*->12311*/ // 3 children in Scope
/*12276*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12278*/         OPC_MoveParent,
/*12279*/         OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->12295
/*12282*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12284*/           OPC_EmitConvertToTarget, 1,
/*12286*/           OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (ADDiu:i32 CPURegsOpnd:i32:$rs, (imm:i32):$imm16)
                  /*SwitchType*/ 13,  MVT::i64,// ->12310
/*12297*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12299*/           OPC_EmitConvertToTarget, 1,
/*12301*/           OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16) - Complexity = 7
                    // Dst: (DADDiu:i64 CPU64RegsOpnd:i64:$rs, (imm:i64):$imm16)
                  0, // EndSwitchType
/*12311*/       /*Scope*/ 18, /*->12330*/
/*12312*/         OPC_CheckPredicate, 31, // Predicate_immSExt8
/*12314*/         OPC_MoveParent,
/*12315*/         OPC_CheckType, MVT::i32,
/*12317*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12319*/         OPC_EmitConvertToTarget, 1,
/*12321*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImm16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImm16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt8>>:$imm)
/*12330*/       /*Scope*/ 18, /*->12349*/
/*12331*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12333*/         OPC_MoveParent,
/*12334*/         OPC_CheckType, MVT::i32,
/*12336*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12338*/         OPC_EmitConvertToTarget, 1,
/*12340*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
/*12349*/       0, /*End of Scope*/
/*12350*/     /*Scope*/ 28, /*->12379*/
/*12351*/       OPC_CheckType, MVT::i32,
/*12353*/       OPC_Scope, 11, /*->12366*/ // 2 children in Scope
/*12355*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12357*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (ADDu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12366*/       /*Scope*/ 11, /*->12378*/
/*12367*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12369*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12378*/       0, /*End of Scope*/
/*12379*/     /*Scope*/ 13, /*->12393*/
/*12380*/       OPC_CheckType, MVT::i64,
/*12382*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12384*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DADDu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*12393*/     /*Scope*/ 13, /*->12407*/
/*12394*/       OPC_CheckType, MVT::v2i16,
/*12396*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12398*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (ADDQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
/*12407*/     /*Scope*/ 13, /*->12421*/
/*12408*/       OPC_CheckType, MVT::v4i8,
/*12410*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12412*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (ADDU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
/*12421*/     0, /*End of Scope*/
/*12422*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(MipsISD::FPBrcond),// ->12476
/*12426*/   OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*12427*/   OPC_CaptureGlueInput,
/*12428*/   OPC_MoveChild, 1,
/*12430*/   OPC_CheckType, MVT::i32,
/*12432*/   OPC_Scope, 20, /*->12454*/ // 2 children in Scope
/*12434*/     OPC_CheckInteger, 0, 
/*12436*/     OPC_MoveParent,
/*12437*/     OPC_RecordChild2, // #1 = $offset
/*12438*/     OPC_MoveChild, 2,
/*12440*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12443*/     OPC_MoveParent,
/*12444*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12446*/     OPC_EmitMergeInputChains1_0,
/*12447*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1F (bb:Other):$offset)
/*12454*/   /*Scope*/ 20, /*->12475*/
/*12455*/     OPC_CheckInteger, 1, 
/*12457*/     OPC_MoveParent,
/*12458*/     OPC_RecordChild2, // #1 = $offset
/*12459*/     OPC_MoveChild, 2,
/*12461*/     OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12464*/     OPC_MoveParent,
/*12465*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12467*/     OPC_EmitMergeInputChains1_0,
/*12468*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$offset) - Complexity = 8
              // Dst: (BC1T (bb:Other):$offset)
/*12475*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 93,  TARGET_VAL(ISD::SUB),// ->12572
/*12479*/   OPC_Scope, 18, /*->12499*/ // 2 children in Scope
/*12481*/     OPC_MoveChild, 0,
/*12483*/     OPC_CheckInteger, 0, 
/*12485*/     OPC_MoveParent,
/*12486*/     OPC_RecordChild1, // #0 = $r
/*12487*/     OPC_CheckType, MVT::i32,
/*12489*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12491*/     OPC_MorphNodeTo, TARGET_VAL(Mips::NegRxRy16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, CPU16Regs:i32:$r) - Complexity = 8
              // Dst: (NegRxRy16:i32 CPU16Regs:i32:$r)
/*12499*/   /*Scope*/ 71, /*->12571*/
/*12500*/     OPC_RecordChild0, // #0 = $rs
/*12501*/     OPC_RecordChild1, // #1 = $rt
/*12502*/     OPC_SwitchType /*4 cases */, 26,  MVT::i32,// ->12531
/*12505*/       OPC_Scope, 11, /*->12518*/ // 2 children in Scope
/*12507*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12509*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                  // Dst: (SUBu:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*12518*/       /*Scope*/ 11, /*->12530*/
/*12519*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12521*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                  // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*12530*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->12544
/*12533*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12535*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSUBu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
                // Dst: (DSUBu:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
              /*SwitchType*/ 11,  MVT::v2i16,// ->12557
/*12546*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12548*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
                // Dst: (SUBQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
              /*SwitchType*/ 11,  MVT::v4i8,// ->12570
/*12559*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*12561*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SUBU_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b) - Complexity = 3
                // Dst: (SUBU_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b)
              0, // EndSwitchType
/*12571*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,9/*1157*/,  TARGET_VAL(ISD::SETCC),// ->13733
/*12576*/   OPC_RecordChild0, // #0 = $lhs
/*12577*/   OPC_Scope, 16|128,6/*784*/, /*->13364*/ // 2 children in Scope
/*12580*/     OPC_CheckChild0Type, MVT::i32,
/*12582*/     OPC_Scope, 92, /*->12676*/ // 2 children in Scope
/*12584*/       OPC_MoveChild, 1,
/*12586*/       OPC_Scope, 24, /*->12612*/ // 2 children in Scope
/*12588*/         OPC_CheckInteger, 0, 
/*12590*/         OPC_MoveParent,
/*12591*/         OPC_MoveChild, 2,
/*12593*/         OPC_CheckCondCode, ISD::SETEQ,
/*12595*/         OPC_MoveParent,
/*12596*/         OPC_CheckType, MVT::i32,
/*12598*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12600*/         OPC_EmitInteger, MVT::i32, 1, 
/*12603*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, 0:i32, SETEQ:Other) - Complexity = 8
                  // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$lhs, 1:i32)
/*12612*/       /*Scope*/ 62, /*->12675*/
/*12613*/         OPC_CheckInteger, 127|128,127|128,125|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518847*/, 
/*12624*/         OPC_MoveParent,
/*12625*/         OPC_MoveChild, 2,
/*12627*/         OPC_CheckCondCode, ISD::SETGT,
/*12629*/         OPC_MoveParent,
/*12630*/         OPC_CheckType, MVT::i32,
/*12632*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12634*/         OPC_EmitInteger, MVT::i32, 0|128,0|128,126|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709518848*/, 
/*12646*/         OPC_EmitNode, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12655*/         OPC_EmitInteger, MVT::i32, 1, 
/*12658*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*12666*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                  // Src: (setcc:i32 CPU16Regs:i32:$lhs, -32769:i32, SETGT:Other) - Complexity = 8
                  // Dst: (XorRxRxRy16:i32 (SltiCCRxImmX16:i32 CPU16Regs:i32:$lhs, -32768:i32), (LiRxImmX16:i32 1:i32))
/*12675*/       0, /*End of Scope*/
/*12676*/     /*Scope*/ 45|128,5/*685*/, /*->13363*/
/*12678*/       OPC_RecordChild1, // #1 = $imm16
/*12679*/       OPC_Scope, 22|128,1/*150*/, /*->12832*/ // 2 children in Scope
/*12682*/         OPC_MoveChild, 1,
/*12684*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*12687*/         OPC_CheckPredicate, 28, // Predicate_immSExt16
/*12689*/         OPC_MoveParent,
/*12690*/         OPC_MoveChild, 2,
/*12692*/         OPC_Scope, 18, /*->12712*/ // 6 children in Scope
/*12694*/           OPC_CheckCondCode, ISD::SETLT,
/*12696*/           OPC_MoveParent,
/*12697*/           OPC_CheckType, MVT::i32,
/*12699*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12701*/           OPC_EmitConvertToTarget, 1,
/*12703*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SLTi:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*12712*/         /*Scope*/ 18, /*->12731*/
/*12713*/           OPC_CheckCondCode, ISD::SETULT,
/*12715*/           OPC_MoveParent,
/*12716*/           OPC_CheckType, MVT::i32,
/*12718*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12720*/           OPC_EmitConvertToTarget, 1,
/*12722*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SLTiu:i32 CPURegs:i32:$rs, (imm:i32):$imm16)
/*12731*/         /*Scope*/ 30, /*->12762*/
/*12732*/           OPC_CheckCondCode, ISD::SETGE,
/*12734*/           OPC_MoveParent,
/*12735*/           OPC_CheckType, MVT::i32,
/*12737*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12739*/           OPC_EmitConvertToTarget, 1,
/*12741*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12750*/           OPC_EmitInteger, MVT::i32, 1, 
/*12753*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12762*/         /*Scope*/ 30, /*->12793*/
/*12763*/           OPC_CheckCondCode, ISD::SETUGE,
/*12765*/           OPC_MoveParent,
/*12766*/           OPC_CheckType, MVT::i32,
/*12768*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12770*/           OPC_EmitConvertToTarget, 1,
/*12772*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*12781*/           OPC_EmitInteger, MVT::i32, 1, 
/*12784*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                    // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*12793*/         /*Scope*/ 18, /*->12812*/
/*12794*/           OPC_CheckCondCode, ISD::SETLT,
/*12796*/           OPC_MoveParent,
/*12797*/           OPC_CheckType, MVT::i32,
/*12799*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12801*/           OPC_EmitConvertToTarget, 1,
/*12803*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                    // Dst: (SltiCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12812*/         /*Scope*/ 18, /*->12831*/
/*12813*/           OPC_CheckCondCode, ISD::SETULT,
/*12815*/           OPC_MoveParent,
/*12816*/           OPC_CheckType, MVT::i32,
/*12818*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*12820*/           OPC_EmitConvertToTarget, 1,
/*12822*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                    // Dst: (SltiuCCRxImmX16:i32 CPU16Regs:i32:$rx, (imm:i32)<<P:Predicate_immSExt16>>:$imm16)
/*12831*/         0, /*End of Scope*/
/*12832*/       /*Scope*/ 16|128,4/*528*/, /*->13362*/
/*12834*/         OPC_MoveChild, 2,
/*12836*/         OPC_Scope, 16, /*->12854*/ // 20 children in Scope
/*12838*/           OPC_CheckCondCode, ISD::SETLT,
/*12840*/           OPC_MoveParent,
/*12841*/           OPC_CheckType, MVT::i32,
/*12843*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12845*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETLT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*12854*/         /*Scope*/ 16, /*->12871*/
/*12855*/           OPC_CheckCondCode, ISD::SETULT,
/*12857*/           OPC_MoveParent,
/*12858*/           OPC_CheckType, MVT::i32,
/*12860*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12862*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPURegs:i32:$rs, CPURegs:i32:$rt, SETULT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
/*12871*/         /*Scope*/ 16, /*->12888*/
/*12872*/           OPC_CheckCondCode, ISD::SETGT,
/*12874*/           OPC_MoveParent,
/*12875*/           OPC_CheckType, MVT::i32,
/*12877*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12879*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*12888*/         /*Scope*/ 16, /*->12905*/
/*12889*/           OPC_CheckCondCode, ISD::SETUGT,
/*12891*/           OPC_MoveParent,
/*12892*/           OPC_CheckType, MVT::i32,
/*12894*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12896*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*12905*/         /*Scope*/ 28, /*->12934*/
/*12906*/           OPC_CheckCondCode, ISD::SETEQ,
/*12908*/           OPC_MoveParent,
/*12909*/           OPC_CheckType, MVT::i32,
/*12911*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12913*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*12922*/           OPC_EmitInteger, MVT::i32, 1, 
/*12925*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SLTiu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*12934*/         /*Scope*/ 28, /*->12963*/
/*12935*/           OPC_CheckCondCode, ISD::SETNE,
/*12937*/           OPC_MoveParent,
/*12938*/           OPC_CheckType, MVT::i32,
/*12940*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12942*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*12945*/           OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3
/*12954*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*12963*/         /*Scope*/ 28, /*->12992*/
/*12964*/           OPC_CheckCondCode, ISD::SETLE,
/*12966*/           OPC_MoveParent,
/*12967*/           OPC_CheckType, MVT::i32,
/*12969*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*12971*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*12980*/           OPC_EmitInteger, MVT::i32, 1, 
/*12983*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*12992*/         /*Scope*/ 28, /*->13021*/
/*12993*/           OPC_CheckCondCode, ISD::SETULE,
/*12995*/           OPC_MoveParent,
/*12996*/           OPC_CheckType, MVT::i32,
/*12998*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13000*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13009*/           OPC_EmitInteger, MVT::i32, 1, 
/*13012*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*13021*/         /*Scope*/ 28, /*->13050*/
/*13022*/           OPC_CheckCondCode, ISD::SETGE,
/*13024*/           OPC_MoveParent,
/*13025*/           OPC_CheckType, MVT::i32,
/*13027*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13029*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13038*/           OPC_EmitInteger, MVT::i32, 1, 
/*13041*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*13050*/         /*Scope*/ 28, /*->13079*/
/*13051*/           OPC_CheckCondCode, ISD::SETUGE,
/*13053*/           OPC_MoveParent,
/*13054*/           OPC_CheckType, MVT::i32,
/*13056*/           OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13058*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13067*/           OPC_EmitInteger, MVT::i32, 1, 
/*13070*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*13079*/         /*Scope*/ 16, /*->13096*/
/*13080*/           OPC_CheckCondCode, ISD::SETGT,
/*13082*/           OPC_MoveParent,
/*13083*/           OPC_CheckType, MVT::i32,
/*13085*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13087*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*13096*/         /*Scope*/ 16, /*->13113*/
/*13097*/           OPC_CheckCondCode, ISD::SETLT,
/*13099*/           OPC_MoveParent,
/*13100*/           OPC_CheckType, MVT::i32,
/*13102*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13104*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETLT:Other) - Complexity = 3
                    // Dst: (SltCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*13113*/         /*Scope*/ 16, /*->13130*/
/*13114*/           OPC_CheckCondCode, ISD::SETUGT,
/*13116*/           OPC_MoveParent,
/*13117*/           OPC_CheckType, MVT::i32,
/*13119*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13121*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs)
/*13130*/         /*Scope*/ 16, /*->13147*/
/*13131*/           OPC_CheckCondCode, ISD::SETULT,
/*13133*/           OPC_MoveParent,
/*13134*/           OPC_CheckType, MVT::i32,
/*13136*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13138*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (setcc:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry, SETULT:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
/*13147*/         /*Scope*/ 28, /*->13176*/
/*13148*/           OPC_CheckCondCode, ISD::SETEQ,
/*13150*/           OPC_MoveParent,
/*13151*/           OPC_CheckType, MVT::i32,
/*13153*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13155*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13164*/           OPC_EmitInteger, MVT::i32, 1, 
/*13167*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltiuCCRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETEQ:Other) - Complexity = 3
                    // Dst: (SltiuCCRxImmX16:i32 (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), 1:i32)
/*13176*/         /*Scope*/ 36, /*->13213*/
/*13177*/           OPC_CheckCondCode, ISD::SETGE,
/*13179*/           OPC_MoveParent,
/*13180*/           OPC_CheckType, MVT::i32,
/*13182*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13184*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13193*/           OPC_EmitInteger, MVT::i32, 1, 
/*13196*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13204*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13213*/         /*Scope*/ 36, /*->13250*/
/*13214*/           OPC_CheckCondCode, ISD::SETLE,
/*13216*/           OPC_MoveParent,
/*13217*/           OPC_CheckType, MVT::i32,
/*13219*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13221*/           OPC_EmitNode, TARGET_VAL(Mips::SltCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13230*/           OPC_EmitInteger, MVT::i32, 1, 
/*13233*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImm16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13241*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETLE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImm16:i32 1:i32))
/*13250*/         /*Scope*/ 36, /*->13287*/
/*13251*/           OPC_CheckCondCode, ISD::SETNE,
/*13253*/           OPC_MoveParent,
/*13254*/           OPC_CheckType, MVT::i32,
/*13256*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13258*/           OPC_EmitInteger, MVT::i32, 0, 
/*13261*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*13269*/           OPC_EmitNode, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4
/*13278*/           OPC_MorphNodeTo, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETNE:Other) - Complexity = 3
                    // Dst: (SltuCCRxRy16:i32 (LiRxImmX16:i32 0:i32), (XorRxRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs))
/*13287*/         /*Scope*/ 36, /*->13324*/
/*13288*/           OPC_CheckCondCode, ISD::SETUGE,
/*13290*/           OPC_MoveParent,
/*13291*/           OPC_CheckType, MVT::i32,
/*13293*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13295*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13304*/           OPC_EmitInteger, MVT::i32, 1, 
/*13307*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13315*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETUGE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs), (LiRxImmX16:i32 1:i32))
/*13324*/         /*Scope*/ 36, /*->13361*/
/*13325*/           OPC_CheckCondCode, ISD::SETULE,
/*13327*/           OPC_MoveParent,
/*13328*/           OPC_CheckType, MVT::i32,
/*13330*/           OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13332*/           OPC_EmitNode, TARGET_VAL(Mips::SltuCCRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13341*/           OPC_EmitInteger, MVT::i32, 1, 
/*13344*/           OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                        1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/*13352*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XorRxRxRy16), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 4, 
                    // Src: (setcc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs, SETULE:Other) - Complexity = 3
                    // Dst: (XorRxRxRy16:i32 (SltuCCRxRy16:i32 CPU16Regs:i32:$rhs, CPU16Regs:i32:$lhs), (LiRxImmX16:i32 1:i32))
/*13361*/         0, /*End of Scope*/
/*13362*/       0, /*End of Scope*/
/*13363*/     0, /*End of Scope*/
/*13364*/   /*Scope*/ 110|128,2/*366*/, /*->13732*/
/*13366*/     OPC_CheckChild0Type, MVT::i64,
/*13368*/     OPC_RecordChild1, // #1 = $imm16
/*13369*/     OPC_Scope, 112, /*->13483*/ // 2 children in Scope
/*13371*/       OPC_MoveChild, 1,
/*13373*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13376*/       OPC_CheckPredicate, 28, // Predicate_immSExt16
/*13378*/       OPC_MoveParent,
/*13379*/       OPC_MoveChild, 2,
/*13381*/       OPC_Scope, 18, /*->13401*/ // 4 children in Scope
/*13383*/         OPC_CheckCondCode, ISD::SETLT,
/*13385*/         OPC_MoveParent,
/*13386*/         OPC_CheckType, MVT::i32,
/*13388*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13390*/         OPC_EmitConvertToTarget, 1,
/*13392*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETLT:Other) - Complexity = 7
                  // Dst: (SLTi64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*13401*/       /*Scope*/ 18, /*->13420*/
/*13402*/         OPC_CheckCondCode, ISD::SETULT,
/*13404*/         OPC_MoveParent,
/*13405*/         OPC_CheckType, MVT::i32,
/*13407*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13409*/         OPC_EmitConvertToTarget, 1,
/*13411*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, (imm:i64)<<P:Predicate_immSExt16>>:$imm16, SETULT:Other) - Complexity = 7
                  // Dst: (SLTiu64:i32 CPU64Regs:i64:$rs, (imm:i64):$imm16)
/*13420*/       /*Scope*/ 30, /*->13451*/
/*13421*/         OPC_CheckCondCode, ISD::SETGE,
/*13423*/         OPC_MoveParent,
/*13424*/         OPC_CheckType, MVT::i32,
/*13426*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13428*/         OPC_EmitConvertToTarget, 1,
/*13430*/         OPC_EmitNode, TARGET_VAL(Mips::SLTi64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13439*/         OPC_EmitInteger, MVT::i32, 1, 
/*13442*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTi64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13451*/       /*Scope*/ 30, /*->13482*/
/*13452*/         OPC_CheckCondCode, ISD::SETUGE,
/*13454*/         OPC_MoveParent,
/*13455*/         OPC_CheckType, MVT::i32,
/*13457*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13459*/         OPC_EmitConvertToTarget, 1,
/*13461*/         OPC_EmitNode, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3
/*13470*/         OPC_EmitInteger, MVT::i32, 1, 
/*13473*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                  // Dst: (XORi:i32 (SLTiu64:i32 CPU64Regs:i64:$lhs, (imm:i64)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*13482*/       0, /*End of Scope*/
/*13483*/     /*Scope*/ 118|128,1/*246*/, /*->13731*/
/*13485*/       OPC_MoveChild, 2,
/*13487*/       OPC_Scope, 16, /*->13505*/ // 10 children in Scope
/*13489*/         OPC_CheckCondCode, ISD::SETLT,
/*13491*/         OPC_MoveParent,
/*13492*/         OPC_CheckType, MVT::i32,
/*13494*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13496*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETLT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*13505*/       /*Scope*/ 16, /*->13522*/
/*13506*/         OPC_CheckCondCode, ISD::SETULT,
/*13508*/         OPC_MoveParent,
/*13509*/         OPC_CheckType, MVT::i32,
/*13511*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13513*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (setcc:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt, SETULT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rs, CPU64Regs:i64:$rt)
/*13522*/       /*Scope*/ 16, /*->13539*/
/*13523*/         OPC_CheckCondCode, ISD::SETGT,
/*13525*/         OPC_MoveParent,
/*13526*/         OPC_CheckType, MVT::i32,
/*13528*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13530*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGT:Other) - Complexity = 3
                  // Dst: (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*13539*/       /*Scope*/ 16, /*->13556*/
/*13540*/         OPC_CheckCondCode, ISD::SETUGT,
/*13542*/         OPC_MoveParent,
/*13543*/         OPC_CheckType, MVT::i32,
/*13545*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13547*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGT:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs)
/*13556*/       /*Scope*/ 28, /*->13585*/
/*13557*/         OPC_CheckCondCode, ISD::SETEQ,
/*13559*/         OPC_MoveParent,
/*13560*/         OPC_CheckType, MVT::i32,
/*13562*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13564*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*13573*/         OPC_EmitInteger, MVT::i64, 1, 
/*13576*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETEQ:Other) - Complexity = 3
                  // Dst: (SLTiu64:i32 (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i64)
/*13585*/       /*Scope*/ 28, /*->13614*/
/*13586*/         OPC_CheckCondCode, ISD::SETNE,
/*13588*/         OPC_MoveParent,
/*13589*/         OPC_CheckType, MVT::i32,
/*13591*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13593*/         OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*13596*/         OPC_EmitNode, TARGET_VAL(Mips::XOR64), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #3
/*13605*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETNE:Other) - Complexity = 3
                  // Dst: (SLTu64:i32 ZERO_64:i64, (XOR64:i64 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs))
/*13614*/       /*Scope*/ 28, /*->13643*/
/*13615*/         OPC_CheckCondCode, ISD::SETLE,
/*13617*/         OPC_MoveParent,
/*13618*/         OPC_CheckType, MVT::i32,
/*13620*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13622*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13631*/         OPC_EmitInteger, MVT::i32, 1, 
/*13634*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETLE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*13643*/       /*Scope*/ 28, /*->13672*/
/*13644*/         OPC_CheckCondCode, ISD::SETULE,
/*13646*/         OPC_MoveParent,
/*13647*/         OPC_CheckType, MVT::i32,
/*13649*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13651*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2
/*13660*/         OPC_EmitInteger, MVT::i32, 1, 
/*13663*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETULE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$rhs, CPU64Regs:i64:$lhs), 1:i32)
/*13672*/       /*Scope*/ 28, /*->13701*/
/*13673*/         OPC_CheckCondCode, ISD::SETGE,
/*13675*/         OPC_MoveParent,
/*13676*/         OPC_CheckType, MVT::i32,
/*13678*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13680*/         OPC_EmitNode, TARGET_VAL(Mips::SLT64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13689*/         OPC_EmitInteger, MVT::i32, 1, 
/*13692*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLT64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*13701*/       /*Scope*/ 28, /*->13730*/
/*13702*/         OPC_CheckCondCode, ISD::SETUGE,
/*13704*/         OPC_MoveParent,
/*13705*/         OPC_CheckType, MVT::i32,
/*13707*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13709*/         OPC_EmitNode, TARGET_VAL(Mips::SLTu64), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*13718*/         OPC_EmitInteger, MVT::i32, 1, 
/*13721*/         OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (setcc:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs, SETUGE:Other) - Complexity = 3
                  // Dst: (XORi:i32 (SLTu64:i32 CPU64Regs:i64:$lhs, CPU64Regs:i64:$rhs), 1:i32)
/*13730*/       0, /*End of Scope*/
/*13731*/     0, /*End of Scope*/
/*13732*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::AND),// ->13830
/*13736*/   OPC_RecordChild0, // #0 = $rs
/*13737*/   OPC_RecordChild1, // #1 = $imm16
/*13738*/   OPC_Scope, 46, /*->13786*/ // 3 children in Scope
/*13740*/     OPC_MoveChild, 1,
/*13742*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13745*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13747*/     OPC_MoveParent,
/*13748*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->13767
/*13751*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13753*/       OPC_EmitConvertToTarget, 1,
/*13755*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13758*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ANDi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->13785
/*13769*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13771*/       OPC_EmitConvertToTarget, 1,
/*13773*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13776*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DANDi), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (and:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (DANDi:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*13786*/   /*Scope*/ 28, /*->13815*/
/*13787*/     OPC_CheckType, MVT::i32,
/*13789*/     OPC_Scope, 11, /*->13802*/ // 2 children in Scope
/*13791*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13793*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (AND:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13802*/     /*Scope*/ 11, /*->13814*/
/*13803*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13805*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AndRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (AndRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13814*/     0, /*End of Scope*/
/*13815*/   /*Scope*/ 13, /*->13829*/
/*13816*/     OPC_CheckType, MVT::i64,
/*13818*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13820*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AND64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (and:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (AND64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*13829*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::OR),// ->13927
/*13833*/   OPC_RecordChild0, // #0 = $rs
/*13834*/   OPC_RecordChild1, // #1 = $imm16
/*13835*/   OPC_Scope, 46, /*->13883*/ // 3 children in Scope
/*13837*/     OPC_MoveChild, 1,
/*13839*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13842*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*13844*/     OPC_MoveParent,
/*13845*/     OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->13864
/*13848*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13850*/       OPC_EmitConvertToTarget, 1,
/*13852*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13855*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi:i32 CPURegsOpnd:i32:$rs, (LO16:i32 (imm:i32):$imm16))
              /*SwitchType*/ 16,  MVT::i64,// ->13882
/*13866*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13868*/       OPC_EmitConvertToTarget, 1,
/*13870*/       OPC_EmitNodeXForm, 0, 2, // LO16
/*13873*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi64), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (or:i64 CPU64RegsOpnd:i64:$rs, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$imm16) - Complexity = 7
                // Dst: (ORi64:i64 CPU64RegsOpnd:i64:$rs, (LO16:i64 (imm:i64):$imm16))
              0, // EndSwitchType
/*13883*/   /*Scope*/ 28, /*->13912*/
/*13884*/     OPC_CheckType, MVT::i32,
/*13886*/     OPC_Scope, 11, /*->13899*/ // 2 children in Scope
/*13888*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13890*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (OR:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*13899*/     /*Scope*/ 11, /*->13911*/
/*13900*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13902*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (OrRxRxRy16:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*13911*/     0, /*End of Scope*/
/*13912*/   /*Scope*/ 13, /*->13926*/
/*13913*/     OPC_CheckType, MVT::i64,
/*13915*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13917*/     OPC_MorphNodeTo, TARGET_VAL(Mips::OR64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (or:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (OR64:i64 CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*13926*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SHL),// ->14047
/*13930*/   OPC_RecordChild0, // #0 = $rt
/*13931*/   OPC_RecordChild1, // #1 = $shamt
/*13932*/   OPC_Scope, 66, /*->14000*/ // 2 children in Scope
/*13934*/     OPC_MoveChild, 1,
/*13936*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*13939*/     OPC_CheckType, MVT::i32,
/*13941*/     OPC_Scope, 18, /*->13961*/ // 3 children in Scope
/*13943*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13945*/       OPC_MoveParent,
/*13946*/       OPC_CheckType, MVT::i32,
/*13948*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13950*/       OPC_EmitConvertToTarget, 1,
/*13952*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SLL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*13961*/     /*Scope*/ 18, /*->13980*/
/*13962*/       OPC_CheckPredicate, 32, // Predicate_immZExt6
/*13964*/       OPC_MoveParent,
/*13965*/       OPC_CheckType, MVT::i64,
/*13967*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*13969*/       OPC_EmitConvertToTarget, 1,
/*13971*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSLL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*13980*/     /*Scope*/ 18, /*->13999*/
/*13981*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*13983*/       OPC_MoveParent,
/*13984*/       OPC_CheckType, MVT::i32,
/*13986*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*13988*/       OPC_EmitConvertToTarget, 1,
/*13990*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (shl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SllX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*13999*/     0, /*End of Scope*/
/*14000*/   /*Scope*/ 45, /*->14046*/
/*14001*/     OPC_CheckChild1Type, MVT::i32,
/*14003*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14032
/*14006*/       OPC_Scope, 11, /*->14019*/ // 2 children in Scope
/*14008*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14010*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (shl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SLLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*14019*/       /*Scope*/ 11, /*->14031*/
/*14020*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14022*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (shl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SllvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14031*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14045
/*14034*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14036*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSLLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (shl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSLLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14046*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRL),// ->14167
/*14050*/   OPC_RecordChild0, // #0 = $rt
/*14051*/   OPC_RecordChild1, // #1 = $shamt
/*14052*/   OPC_Scope, 66, /*->14120*/ // 2 children in Scope
/*14054*/     OPC_MoveChild, 1,
/*14056*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14059*/     OPC_CheckType, MVT::i32,
/*14061*/     OPC_Scope, 18, /*->14081*/ // 3 children in Scope
/*14063*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14065*/       OPC_MoveParent,
/*14066*/       OPC_CheckType, MVT::i32,
/*14068*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14070*/       OPC_EmitConvertToTarget, 1,
/*14072*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRL:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*14081*/     /*Scope*/ 18, /*->14100*/
/*14082*/       OPC_CheckPredicate, 32, // Predicate_immZExt6
/*14084*/       OPC_MoveParent,
/*14085*/       OPC_CheckType, MVT::i64,
/*14087*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14089*/       OPC_EmitConvertToTarget, 1,
/*14091*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRL:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*14100*/     /*Scope*/ 18, /*->14119*/
/*14101*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14103*/       OPC_MoveParent,
/*14104*/       OPC_CheckType, MVT::i32,
/*14106*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14108*/       OPC_EmitConvertToTarget, 1,
/*14110*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SrlX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (srl:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SrlX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14119*/     0, /*End of Scope*/
/*14120*/   /*Scope*/ 45, /*->14166*/
/*14121*/     OPC_CheckChild1Type, MVT::i32,
/*14123*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14152
/*14126*/       OPC_Scope, 11, /*->14139*/ // 2 children in Scope
/*14128*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14130*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (srl:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRLV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*14139*/       /*Scope*/ 11, /*->14151*/
/*14140*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14142*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SrlvRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SrlvRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14151*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14165
/*14154*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14156*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRLV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (srl:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRLV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14166*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 117,  TARGET_VAL(ISD::SRA),// ->14287
/*14170*/   OPC_RecordChild0, // #0 = $rt
/*14171*/   OPC_RecordChild1, // #1 = $shamt
/*14172*/   OPC_Scope, 66, /*->14240*/ // 2 children in Scope
/*14174*/     OPC_MoveChild, 1,
/*14176*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14179*/     OPC_CheckType, MVT::i32,
/*14181*/     OPC_Scope, 18, /*->14201*/ // 3 children in Scope
/*14183*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14185*/       OPC_MoveParent,
/*14186*/       OPC_CheckType, MVT::i32,
/*14188*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14190*/       OPC_EmitConvertToTarget, 1,
/*14192*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (SRA:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*14201*/     /*Scope*/ 18, /*->14220*/
/*14202*/       OPC_CheckPredicate, 32, // Predicate_immZExt6
/*14204*/       OPC_MoveParent,
/*14205*/       OPC_CheckType, MVT::i64,
/*14207*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14209*/       OPC_EmitConvertToTarget, 1,
/*14211*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRA), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DSRA:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*14220*/     /*Scope*/ 18, /*->14239*/
/*14221*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14223*/       OPC_MoveParent,
/*14224*/       OPC_CheckType, MVT::i32,
/*14226*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14228*/       OPC_EmitConvertToTarget, 1,
/*14230*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SraX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm) - Complexity = 7
                // Dst: (SraX16:i32 CPU16Regs:i32:$in, (imm:i32)<<P:Predicate_immZExt5>>:$imm)
/*14239*/     0, /*End of Scope*/
/*14240*/   /*Scope*/ 45, /*->14286*/
/*14241*/     OPC_CheckChild1Type, MVT::i32,
/*14243*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->14272
/*14246*/       OPC_Scope, 11, /*->14259*/ // 2 children in Scope
/*14248*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14250*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sra:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                  // Dst: (SRAV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*14259*/       /*Scope*/ 11, /*->14271*/
/*14260*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14262*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SravRxRy16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra) - Complexity = 3
                  // Dst: (SravRxRy16:i32 CPU16Regs:i32:$r, CPU16Regs:i32:$ra)
/*14271*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->14285
/*14274*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14276*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DSRAV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (sra:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DSRAV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14286*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ROTR),// ->14373
/*14290*/   OPC_RecordChild0, // #0 = $rt
/*14291*/   OPC_RecordChild1, // #1 = $shamt
/*14292*/   OPC_Scope, 47, /*->14341*/ // 2 children in Scope
/*14294*/     OPC_MoveChild, 1,
/*14296*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14299*/     OPC_CheckType, MVT::i32,
/*14301*/     OPC_Scope, 18, /*->14321*/ // 2 children in Scope
/*14303*/       OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14305*/       OPC_MoveParent,
/*14306*/       OPC_CheckType, MVT::i32,
/*14308*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14310*/       OPC_EmitConvertToTarget, 1,
/*14312*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, (imm:i32)<<P:Predicate_immZExt5>>:$shamt) - Complexity = 7
                // Dst: (ROTR:i32 CPURegsOpnd:i32:$rt, (imm:i32):$shamt)
/*14321*/     /*Scope*/ 18, /*->14340*/
/*14322*/       OPC_CheckPredicate, 32, // Predicate_immZExt6
/*14324*/       OPC_MoveParent,
/*14325*/       OPC_CheckType, MVT::i64,
/*14327*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14329*/       OPC_EmitConvertToTarget, 1,
/*14331*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTR), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, (imm:i32)<<P:Predicate_immZExt6>>:$shamt) - Complexity = 7
                // Dst: (DROTR:i64 CPU64RegsOpnd:i64:$rt, (imm:i32):$shamt)
/*14340*/     0, /*End of Scope*/
/*14341*/   /*Scope*/ 30, /*->14372*/
/*14342*/     OPC_CheckChild1Type, MVT::i32,
/*14344*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->14358
/*14347*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*14349*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i32 CPURegsOpnd:i32:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (ROTRV:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
              /*SwitchType*/ 11,  MVT::i64,// ->14371
/*14360*/       OPC_CheckPatternPredicate, 21, // (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding())
/*14362*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DROTRV), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (rotr:i64 CPU64RegsOpnd:i64:$rt, CPURegsOpnd:i32:$rs) - Complexity = 3
                // Dst: (DROTRV:i64 CPURegsOpnd:i32:$rs, CPU64RegsOpnd:i64:$rt)
              0, // EndSwitchType
/*14372*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 86,  TARGET_VAL(ISD::ADDC),// ->14462
/*14376*/   OPC_RecordChild0, // #0 = $src
/*14377*/   OPC_RecordChild1, // #1 = $imm
/*14378*/   OPC_Scope, 40, /*->14420*/ // 2 children in Scope
/*14380*/     OPC_MoveChild, 1,
/*14382*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14385*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*14387*/     OPC_MoveParent,
/*14388*/     OPC_CheckType, MVT::i32,
/*14390*/     OPC_Scope, 13, /*->14405*/ // 2 children in Scope
/*14392*/       OPC_CheckPatternPredicate, 22, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14394*/       OPC_EmitConvertToTarget, 1,
/*14396*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*14405*/     /*Scope*/ 13, /*->14419*/
/*14406*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14408*/       OPC_EmitConvertToTarget, 1,
/*14410*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 CPU16Regs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$src, (imm:i32):$imm)
/*14419*/     0, /*End of Scope*/
/*14420*/   /*Scope*/ 40, /*->14461*/
/*14421*/     OPC_CheckType, MVT::i32,
/*14423*/     OPC_Scope, 11, /*->14436*/ // 3 children in Scope
/*14425*/       OPC_CheckPatternPredicate, 22, // (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP())
/*14427*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*14436*/     /*Scope*/ 11, /*->14448*/
/*14437*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14439*/       OPC_MorphNodeTo, TARGET_VAL(Mips::AdduRxRyRz16), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
                // Dst: (AdduRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*14448*/     /*Scope*/ 11, /*->14460*/
/*14449*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14451*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDSC), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
                // Dst: (ADDSC:i32 i32:i32:$a, i32:i32:$b)
/*14460*/     0, /*End of Scope*/
/*14461*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(MipsISD::SHILO),// ->14504
/*14465*/   OPC_RecordChild0, // #0 = $shift
/*14466*/   OPC_Scope, 22, /*->14490*/ // 2 children in Scope
/*14468*/     OPC_MoveChild, 0,
/*14470*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14473*/     OPC_CheckPredicate, 33, // Predicate_immSExt6
/*14475*/     OPC_MoveParent,
/*14476*/     OPC_RecordChild1, // #1 = $acin
/*14477*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14479*/     OPC_EmitConvertToTarget, 0,
/*14481*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILO), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 2, 1, 
              // Src: (MipsSHILO:Untyped (imm:i32)<<P:Predicate_immSExt6>>:$shift, ACRegsDSP:Untyped:$acin) - Complexity = 7
              // Dst: (SHILO:Untyped (imm:i32):$shift, ACRegsDSP:Untyped:$acin)
/*14490*/   /*Scope*/ 12, /*->14503*/
/*14491*/     OPC_RecordChild1, // #1 = $acin
/*14492*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14494*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHILOV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsSHILO:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
              // Dst: (SHILOV:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin)
/*14503*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTP),// ->14549
/*14507*/   OPC_RecordNode,   // #0 = 'MipsEXTP' chained node
/*14508*/   OPC_RecordChild1, // #1 = $shift
/*14509*/   OPC_Scope, 23, /*->14534*/ // 2 children in Scope
/*14511*/     OPC_MoveChild, 1,
/*14513*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14516*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14518*/     OPC_MoveParent,
/*14519*/     OPC_RecordChild2, // #2 = $ac
/*14520*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14522*/     OPC_EmitMergeInputChains1_0,
/*14523*/     OPC_EmitConvertToTarget, 1,
/*14525*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14534*/   /*Scope*/ 13, /*->14548*/
/*14535*/     OPC_RecordChild2, // #2 = $ac
/*14536*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14538*/     OPC_EmitMergeInputChains1_0,
/*14539*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTP:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPV:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14548*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTPDP),// ->14594
/*14552*/   OPC_RecordNode,   // #0 = 'MipsEXTPDP' chained node
/*14553*/   OPC_RecordChild1, // #1 = $shift
/*14554*/   OPC_Scope, 23, /*->14579*/ // 2 children in Scope
/*14556*/     OPC_MoveChild, 1,
/*14558*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14561*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14563*/     OPC_MoveParent,
/*14564*/     OPC_RecordChild2, // #2 = $ac
/*14565*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14567*/     OPC_EmitMergeInputChains1_0,
/*14568*/     OPC_EmitConvertToTarget, 1,
/*14570*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDP), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTPDP:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTPDP:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14579*/   /*Scope*/ 13, /*->14593*/
/*14580*/     OPC_RecordChild2, // #2 = $ac
/*14581*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14583*/     OPC_EmitMergeInputChains1_0,
/*14584*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTPDPV), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTPDP:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTPDPV:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14593*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_W),// ->14639
/*14597*/   OPC_RecordNode,   // #0 = 'MipsEXTR_W' chained node
/*14598*/   OPC_RecordChild1, // #1 = $shift
/*14599*/   OPC_Scope, 23, /*->14624*/ // 2 children in Scope
/*14601*/     OPC_MoveChild, 1,
/*14603*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14606*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14608*/     OPC_MoveParent,
/*14609*/     OPC_RecordChild2, // #2 = $ac
/*14610*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14612*/     OPC_EmitMergeInputChains1_0,
/*14613*/     OPC_EmitConvertToTarget, 1,
/*14615*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14624*/   /*Scope*/ 13, /*->14638*/
/*14625*/     OPC_RecordChild2, // #2 = $ac
/*14626*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14628*/     OPC_EmitMergeInputChains1_0,
/*14629*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14638*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_R_W),// ->14684
/*14642*/   OPC_RecordNode,   // #0 = 'MipsEXTR_R_W' chained node
/*14643*/   OPC_RecordChild1, // #1 = $shift
/*14644*/   OPC_Scope, 23, /*->14669*/ // 2 children in Scope
/*14646*/     OPC_MoveChild, 1,
/*14648*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14651*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14653*/     OPC_MoveParent,
/*14654*/     OPC_RecordChild2, // #2 = $ac
/*14655*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14657*/     OPC_EmitMergeInputChains1_0,
/*14658*/     OPC_EmitConvertToTarget, 1,
/*14660*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_R_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_R_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14669*/   /*Scope*/ 13, /*->14683*/
/*14670*/     OPC_RecordChild2, // #2 = $ac
/*14671*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14673*/     OPC_EmitMergeInputChains1_0,
/*14674*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_R_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_R_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_R_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14683*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_RS_W),// ->14729
/*14687*/   OPC_RecordNode,   // #0 = 'MipsEXTR_RS_W' chained node
/*14688*/   OPC_RecordChild1, // #1 = $shift
/*14689*/   OPC_Scope, 23, /*->14714*/ // 2 children in Scope
/*14691*/     OPC_MoveChild, 1,
/*14693*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14696*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14698*/     OPC_MoveParent,
/*14699*/     OPC_RecordChild2, // #2 = $ac
/*14700*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14702*/     OPC_EmitMergeInputChains1_0,
/*14703*/     OPC_EmitConvertToTarget, 1,
/*14705*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_RS_W:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_RS_W:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14714*/   /*Scope*/ 13, /*->14728*/
/*14715*/     OPC_RecordChild2, // #2 = $ac
/*14716*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14718*/     OPC_EmitMergeInputChains1_0,
/*14719*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_RS_W), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_RS_W:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_RS_W:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14728*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(MipsISD::EXTR_S_H),// ->14774
/*14732*/   OPC_RecordNode,   // #0 = 'MipsEXTR_S_H' chained node
/*14733*/   OPC_RecordChild1, // #1 = $shift
/*14734*/   OPC_Scope, 23, /*->14759*/ // 2 children in Scope
/*14736*/     OPC_MoveChild, 1,
/*14738*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14741*/     OPC_CheckPredicate, 21, // Predicate_immZExt5
/*14743*/     OPC_MoveParent,
/*14744*/     OPC_RecordChild2, // #2 = $ac
/*14745*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14747*/     OPC_EmitMergeInputChains1_0,
/*14748*/     OPC_EmitConvertToTarget, 1,
/*14750*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTR_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (MipsEXTR_S_H:i32 (imm:i32)<<P:Predicate_immZExt5>>:$shift, ACRegsDSP:Untyped:$ac) - Complexity = 7
              // Dst: (EXTR_S_H:i32 ACRegsDSP:Untyped:$ac, (imm:i32)<<P:Predicate_immZExt5>>:$shift)
/*14759*/   /*Scope*/ 13, /*->14773*/
/*14760*/     OPC_RecordChild2, // #2 = $ac
/*14761*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*14763*/     OPC_EmitMergeInputChains1_0,
/*14764*/     OPC_MorphNodeTo, TARGET_VAL(Mips::EXTRV_S_H), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (MipsEXTR_S_H:i32 CPURegs:i32:$rs, ACRegsDSP:Untyped:$ac) - Complexity = 3
              // Dst: (EXTRV_S_H:i32 ACRegsDSP:Untyped:$ac, CPURegs:i32:$rs)
/*14773*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->14793
/*14777*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*14778*/   OPC_RecordChild1, // #1 = $amt
/*14779*/   OPC_MoveChild, 1,
/*14781*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*14784*/   OPC_MoveParent,
/*14785*/   OPC_EmitMergeInputChains1_0,
/*14786*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::Sync),// ->14816
/*14796*/   OPC_RecordNode,   // #0 = 'MipsSync' chained node
/*14797*/   OPC_RecordChild1, // #1 = $stype
/*14798*/   OPC_MoveChild, 1,
/*14800*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*14803*/   OPC_MoveParent,
/*14804*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14806*/   OPC_EmitMergeInputChains1_0,
/*14807*/   OPC_EmitConvertToTarget, 1,
/*14809*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (MipsSync (imm:i32):$stype) - Complexity = 6
            // Dst: (SYNC (imm:i32):$stype)
          /*SwitchOpcode*/ 126,  TARGET_VAL(MipsISD::JmpLink),// ->14945
/*14819*/   OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*14820*/   OPC_CaptureGlueInput,
/*14821*/   OPC_RecordChild1, // #1 = $target
/*14822*/   OPC_Scope, 80, /*->14904*/ // 3 children in Scope
/*14824*/     OPC_MoveChild, 1,
/*14826*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->14843
/*14830*/       OPC_MoveParent,
/*14831*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14833*/       OPC_EmitMergeInputChains1_0,
/*14834*/       OPC_EmitConvertToTarget, 1,
/*14836*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL (imm:iPTR):$target)
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetGlobalAddress),// ->14873
/*14846*/       OPC_CheckType, MVT::i32,
/*14848*/       OPC_MoveParent,
/*14849*/       OPC_Scope, 10, /*->14861*/ // 2 children in Scope
/*14851*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14853*/         OPC_EmitMergeInputChains1_0,
/*14854*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (JAL (tglobaladdr:i32):$dst)
/*14861*/       /*Scope*/ 10, /*->14872*/
/*14862*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14864*/         OPC_EmitMergeInputChains1_0,
/*14865*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (tglobaladdr:i32):$dst)
/*14872*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->14903
/*14876*/       OPC_CheckType, MVT::i32,
/*14878*/       OPC_MoveParent,
/*14879*/       OPC_Scope, 10, /*->14891*/ // 2 children in Scope
/*14881*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14883*/         OPC_EmitMergeInputChains1_0,
/*14884*/         OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (JAL (texternalsym:i32):$dst)
/*14891*/       /*Scope*/ 10, /*->14902*/
/*14892*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14894*/         OPC_EmitMergeInputChains1_0,
/*14895*/         OPC_MorphNodeTo, TARGET_VAL(Mips::Jal16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                  // Dst: (Jal16 (texternalsym:i32):$dst)
/*14902*/       0, /*End of Scope*/
              0, // EndSwitchOpcode
/*14904*/   /*Scope*/ 26, /*->14931*/
/*14905*/     OPC_CheckChild1Type, MVT::i32,
/*14907*/     OPC_Scope, 10, /*->14919*/ // 2 children in Scope
/*14909*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14911*/       OPC_EmitMergeInputChains1_0,
/*14912*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JALRPseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JALRPseudo CPURegs:i32:$rs)
/*14919*/     /*Scope*/ 10, /*->14930*/
/*14920*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*14922*/       OPC_EmitMergeInputChains1_0,
/*14923*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JumpLinkReg16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JumpLinkReg16 CPU16Regs:i32:$rs)
/*14930*/     0, /*End of Scope*/
/*14931*/   /*Scope*/ 12, /*->14944*/
/*14932*/     OPC_CheckChild1Type, MVT::i64,
/*14934*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14936*/     OPC_EmitMergeInputChains1_0,
/*14937*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JALR64Pseudo), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JALR64Pseudo CPU64Regs:i64:$rs)
/*14944*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 80,  TARGET_VAL(MipsISD::TailCall),// ->15028
/*14948*/   OPC_RecordNode,   // #0 = 'MipsTailCall' chained node
/*14949*/   OPC_CaptureGlueInput,
/*14950*/   OPC_RecordChild1, // #1 = $target
/*14951*/   OPC_Scope, 48, /*->15001*/ // 3 children in Scope
/*14953*/     OPC_MoveChild, 1,
/*14955*/     OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->14972
/*14959*/       OPC_MoveParent,
/*14960*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14962*/       OPC_EmitMergeInputChains1_0,
/*14963*/       OPC_EmitConvertToTarget, 1,
/*14965*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (MipsTailCall (imm:iPTR):$target) - Complexity = 6
                // Dst: (TAILCALL (imm:iPTR):$target)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->14986
/*14975*/       OPC_MoveParent,
/*14976*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14978*/       OPC_EmitMergeInputChains1_0,
/*14979*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (tglobaladdr:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (tglobaladdr:iPTR):$dst)
              /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15000
/*14989*/       OPC_MoveParent,
/*14990*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*14992*/       OPC_EmitMergeInputChains1_0,
/*14993*/       OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (MipsTailCall (texternalsym:iPTR):$dst) - Complexity = 6
                // Dst: (TAILCALL (texternalsym:iPTR):$dst)
              0, // EndSwitchOpcode
/*15001*/   /*Scope*/ 12, /*->15014*/
/*15002*/     OPC_CheckChild1Type, MVT::i32,
/*15004*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15006*/     OPC_EmitMergeInputChains1_0,
/*15007*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPURegs:i32:$rs) - Complexity = 3
              // Dst: (TAILCALL_R CPURegs:i32:$rs)
/*15014*/   /*Scope*/ 12, /*->15027*/
/*15015*/     OPC_CheckChild1Type, MVT::i64,
/*15017*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15019*/     OPC_EmitMergeInputChains1_0,
/*15020*/     OPC_MorphNodeTo, TARGET_VAL(Mips::TAILCALL64_R), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsTailCall CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (TAILCALL64_R CPU64Regs:i64:$rs)
/*15027*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,2/*263*/,  TARGET_VAL(MipsISD::Hi),// ->15295
/*15032*/   OPC_RecordChild0, // #0 = $in
/*15033*/   OPC_MoveChild, 0,
/*15035*/   OPC_SwitchOpcode /*6 cases */, 53,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15092
/*15039*/     OPC_MoveParent,
/*15040*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15079
/*15043*/       OPC_Scope, 10, /*->15055*/ // 2 children in Scope
/*15045*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15047*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaladdr:i32):$in)
/*15055*/       /*Scope*/ 22, /*->15078*/
/*15056*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15058*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15066*/         OPC_EmitInteger, MVT::i32, 16, 
/*15069*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaladdr:i32):$in), 16:i32)
/*15078*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15091
/*15081*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15083*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetBlockAddress),// ->15122
/*15095*/     OPC_MoveParent,
/*15096*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15109
/*15099*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15101*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15121
/*15111*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15113*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetJumpTable),// ->15178
/*15125*/     OPC_MoveParent,
/*15126*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15165
/*15129*/       OPC_Scope, 10, /*->15141*/ // 2 children in Scope
/*15131*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15133*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tjumptable:i32):$in)
/*15141*/       /*Scope*/ 22, /*->15164*/
/*15142*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15144*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15152*/         OPC_EmitInteger, MVT::i32, 16, 
/*15155*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tjumptable:i32):$in), 16:i32)
/*15164*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15177
/*15167*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15169*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetConstantPool),// ->15208
/*15181*/     OPC_MoveParent,
/*15182*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15195
/*15185*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15187*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15207
/*15197*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15199*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15264
/*15211*/     OPC_MoveParent,
/*15212*/     OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->15251
/*15215*/       OPC_Scope, 10, /*->15227*/ // 2 children in Scope
/*15217*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15219*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (LUi:i32 (tglobaltlsaddr:i32):$in)
/*15227*/       /*Scope*/ 22, /*->15250*/
/*15228*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15230*/         OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*15238*/         OPC_EmitInteger, MVT::i32, 16, 
/*15241*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SllX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (MipsHi:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (SllX16:i32 (LiRxImmX16:i32 (tglobaltlsaddr:i32):$in), 16:i32)
/*15250*/       0, /*End of Scope*/
              /*SwitchType*/ 10,  MVT::i64,// ->15263
/*15253*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15255*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15294
/*15267*/     OPC_MoveParent,
/*15268*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->15281
/*15271*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15273*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (LUi:i32 (texternalsym:i32):$in)
              /*SwitchType*/ 10,  MVT::i64,// ->15293
/*15283*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15285*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LUi64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (MipsHi:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (LUi64:i64 (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 105|128,1/*233*/,  TARGET_VAL(MipsISD::Lo),// ->15532
/*15299*/   OPC_RecordChild0, // #0 = $in
/*15300*/   OPC_MoveChild, 0,
/*15302*/   OPC_SwitchOpcode /*6 cases */, 35,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15341
/*15306*/     OPC_MoveParent,
/*15307*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15324
/*15310*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15312*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15315*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaladdr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15340
/*15326*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15328*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15331*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetBlockAddress),// ->15379
/*15344*/     OPC_MoveParent,
/*15345*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15362
/*15348*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15350*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15353*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tblockaddress:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15378
/*15364*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15366*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15369*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetJumpTable),// ->15417
/*15382*/     OPC_MoveParent,
/*15383*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15400
/*15386*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15388*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15391*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tjumptable:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15416
/*15402*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15404*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15407*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetConstantPool),// ->15455
/*15420*/     OPC_MoveParent,
/*15421*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15438
/*15424*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15426*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15429*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tconstpool:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15454
/*15440*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15442*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15445*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15493
/*15458*/     OPC_MoveParent,
/*15459*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15476
/*15462*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15464*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15467*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (tglobaltlsaddr:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (tglobaltlsaddr:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15492
/*15478*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15480*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15483*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15531
/*15496*/     OPC_MoveParent,
/*15497*/     OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->15514
/*15500*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15502*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15505*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i32 (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 ZERO:i32, (texternalsym:i32):$in)
              /*SwitchType*/ 14,  MVT::i64,// ->15530
/*15516*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15518*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*15521*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (MipsLo:i64 (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 ZERO_64:i64, (texternalsym:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 100|128,1/*228*/,  TARGET_VAL(MipsISD::Wrapper),// ->15764
/*15536*/   OPC_RecordChild0, // #0 = $gp
/*15537*/   OPC_RecordChild1, // #1 = $in
/*15538*/   OPC_MoveChild, 1,
/*15540*/   OPC_SwitchOpcode /*6 cases */, 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->15588
/*15544*/     OPC_MoveParent,
/*15545*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15574
/*15548*/       OPC_Scope, 11, /*->15561*/ // 2 children in Scope
/*15550*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15552*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
/*15561*/       /*Scope*/ 11, /*->15573*/
/*15562*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15564*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaladdr:i32):$in)
/*15573*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15587
/*15576*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15578*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetConstantPool),// ->15620
/*15591*/     OPC_MoveParent,
/*15592*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15606
/*15595*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15597*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tconstpool:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15619
/*15608*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15610*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetExternalSymbol),// ->15652
/*15623*/     OPC_MoveParent,
/*15624*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15638
/*15627*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15629*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (texternalsym:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (texternalsym:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15651
/*15640*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15642*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (texternalsym:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetBlockAddress),// ->15684
/*15655*/     OPC_MoveParent,
/*15656*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15670
/*15659*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15661*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tblockaddress:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15683
/*15672*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15674*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TargetJumpTable),// ->15716
/*15687*/     OPC_MoveParent,
/*15688*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->15702
/*15691*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15693*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tjumptable:i32):$in) - Complexity = 6
                // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tjumptable:i32):$in)
              /*SwitchType*/ 11,  MVT::i64,// ->15715
/*15704*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15706*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->15763
/*15719*/     OPC_MoveParent,
/*15720*/     OPC_SwitchType /*2 cases */, 26,  MVT::i32,// ->15749
/*15723*/       OPC_Scope, 11, /*->15736*/ // 2 children in Scope
/*15725*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15727*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15736*/       /*Scope*/ 11, /*->15748*/
/*15737*/         OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15739*/         OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (MipsWrapper:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in) - Complexity = 6
                  // Dst: (AddiuRxRxImmX16:i32 CPU16Regs:i32:$gp, (tglobaltlsaddr:i32):$in)
/*15748*/       0, /*End of Scope*/
              /*SwitchType*/ 11,  MVT::i64,// ->15762
/*15751*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15753*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DADDiu), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsWrapper:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in) - Complexity = 6
                // Dst: (DADDiu:i64 CPU64Regs:i64:$gp, (tglobaltlsaddr:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 71,  TARGET_VAL(MipsISD::FPCmp),// ->15838
/*15767*/   OPC_RecordChild0, // #0 = $fs
/*15768*/   OPC_Scope, 24, /*->15794*/ // 2 children in Scope
/*15770*/     OPC_CheckChild0Type, MVT::f32,
/*15772*/     OPC_RecordChild1, // #1 = $ft
/*15773*/     OPC_RecordChild2, // #2 = $cond
/*15774*/     OPC_MoveChild, 2,
/*15776*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15779*/     OPC_MoveParent,
/*15780*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15782*/     OPC_EmitConvertToTarget, 2,
/*15784*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cond)
/*15794*/   /*Scope*/ 42, /*->15837*/
/*15795*/     OPC_CheckChild0Type, MVT::f64,
/*15797*/     OPC_RecordChild1, // #1 = $ft
/*15798*/     OPC_RecordChild2, // #2 = $cond
/*15799*/     OPC_MoveChild, 2,
/*15801*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15804*/     OPC_MoveParent,
/*15805*/     OPC_Scope, 14, /*->15821*/ // 2 children in Scope
/*15807*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15809*/       OPC_EmitConvertToTarget, 2,
/*15811*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cond)
/*15821*/     /*Scope*/ 14, /*->15836*/
/*15822*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*15824*/       OPC_EmitConvertToTarget, 2,
/*15826*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D64), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MipsFPCmp FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond) - Complexity = 6
                // Dst: (FCMP_D64:i32 FGR64:f64:$fs, FGR64:f64:$ft, (imm:i32):$cond)
/*15836*/     0, /*End of Scope*/
/*15837*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 21,  TARGET_VAL(MipsISD::ExtractElementF64),// ->15862
/*15841*/   OPC_RecordChild0, // #0 = $src
/*15842*/   OPC_RecordChild1, // #1 = $n
/*15843*/   OPC_MoveChild, 1,
/*15845*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*15848*/   OPC_MoveParent,
/*15849*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15851*/   OPC_EmitConvertToTarget, 1,
/*15853*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ExtractElementF64), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
            // Src: (MipsExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n) - Complexity = 6
            // Dst: (ExtractElementF64:i32 AFGR64:f64:$src, (imm:i32):$n)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::Constant),// ->16055
/*15866*/   OPC_RecordNode,   // #0 = $in
/*15867*/   OPC_CheckType, MVT::i32,
/*15869*/   OPC_Scope, 18, /*->15889*/ // 6 children in Scope
/*15871*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15873*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15875*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15878*/     OPC_EmitConvertToTarget, 0,
/*15880*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*15889*/   /*Scope*/ 18, /*->15908*/
/*15890*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15892*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15894*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15897*/     OPC_EmitConvertToTarget, 0,
/*15899*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*15908*/   /*Scope*/ 17, /*->15926*/
/*15909*/     OPC_CheckPredicate, 34, // Predicate_immLow16Zero
/*15911*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15913*/     OPC_EmitConvertToTarget, 0,
/*15915*/     OPC_EmitNodeXForm, 2, 1, // HI16
/*15918*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immLow16Zero>>:$in - Complexity = 4
              // Dst: (LUi:i32 (HI16:i32 (imm:i32):$in))
/*15926*/   /*Scope*/ 17, /*->15944*/
/*15927*/     OPC_CheckPredicate, 27, // Predicate_immZExt16
/*15929*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15931*/     OPC_EmitConvertToTarget, 0,
/*15933*/     OPC_EmitNodeXForm, 0, 1, // LO16
/*15936*/     OPC_MorphNodeTo, TARGET_VAL(Mips::LiRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (LiRxImmX16:i32 (LO16:i32 (imm:i32)<<P:Predicate_immZExt16>>:$in))
/*15944*/   /*Scope*/ 26, /*->15971*/
/*15945*/     OPC_CheckPredicate, 28, // Predicate_immSExt16
/*15947*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*15949*/     OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*15952*/     OPC_EmitNode, TARGET_VAL(Mips::Move32R16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2
/*15960*/     OPC_EmitConvertToTarget, 0,
/*15962*/     OPC_MorphNodeTo, TARGET_VAL(Mips::AddiuRxRxImmX16), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (AddiuRxRxImmX16:i32 (Move32R16:i32 ZERO:i32), (imm:i32)<<P:Predicate_immSExt16>>:$in)
/*15971*/   /*Scope*/ 82, /*->16054*/
/*15972*/     OPC_Scope, 29, /*->16003*/ // 2 children in Scope
/*15974*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*15976*/       OPC_EmitConvertToTarget, 0,
/*15978*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*15981*/       OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*15989*/       OPC_EmitConvertToTarget, 0,
/*15991*/       OPC_EmitNodeXForm, 0, 4, // LO16
/*15994*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*16003*/     /*Scope*/ 49, /*->16053*/
/*16004*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*16006*/       OPC_EmitConvertToTarget, 0,
/*16008*/       OPC_EmitNodeXForm, 2, 1, // HI16
/*16011*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*16019*/       OPC_EmitInteger, MVT::i32, 16, 
/*16022*/       OPC_EmitNode, TARGET_VAL(Mips::SllX16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*16031*/       OPC_EmitConvertToTarget, 0,
/*16033*/       OPC_EmitNodeXForm, 0, 6, // LO16
/*16036*/       OPC_EmitNode, TARGET_VAL(Mips::LiRxImmX16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*16044*/       OPC_MorphNodeTo, TARGET_VAL(Mips::OrRxRxRy16), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 8, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (OrRxRxRy16:i32 (SllX16:i32 (LiRxImmX16:i32 (HI16:i32 (imm:i32):$imm)), 16:i32), (LiRxImmX16:i32 (LO16:i32 (imm:i32):$imm)))
/*16053*/     0, /*End of Scope*/
/*16054*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->16206
/*16059*/   OPC_RecordMemRef,
/*16060*/   OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*16061*/   OPC_RecordChild1, // #1 = $ptr
/*16062*/   OPC_Scope, 70, /*->16134*/ // 2 children in Scope
/*16064*/     OPC_CheckChild1Type, MVT::i32,
/*16066*/     OPC_RecordChild2, // #2 = $incr
/*16067*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16117
/*16070*/       OPC_Scope, 14, /*->16086*/ // 3 children in Scope
/*16072*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_8
/*16074*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16076*/         OPC_EmitMergeInputChains1_0,
/*16077*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16086*/       /*Scope*/ 14, /*->16101*/
/*16087*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_16
/*16089*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16091*/         OPC_EmitMergeInputChains1_0,
/*16092*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16101*/       /*Scope*/ 14, /*->16116*/
/*16102*/         OPC_CheckPredicate, 37, // Predicate_atomic_load_add_32
/*16104*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16106*/         OPC_EmitMergeInputChains1_0,
/*16107*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16116*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16133
/*16119*/       OPC_CheckPredicate, 38, // Predicate_atomic_load_add_64
/*16121*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16123*/       OPC_EmitMergeInputChains1_0,
/*16124*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16134*/   /*Scope*/ 70, /*->16205*/
/*16135*/     OPC_CheckChild1Type, MVT::i64,
/*16137*/     OPC_RecordChild2, // #2 = $incr
/*16138*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16188
/*16141*/       OPC_Scope, 14, /*->16157*/ // 3 children in Scope
/*16143*/         OPC_CheckPredicate, 35, // Predicate_atomic_load_add_8
/*16145*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16147*/         OPC_EmitMergeInputChains1_0,
/*16148*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16157*/       /*Scope*/ 14, /*->16172*/
/*16158*/         OPC_CheckPredicate, 36, // Predicate_atomic_load_add_16
/*16160*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16162*/         OPC_EmitMergeInputChains1_0,
/*16163*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16172*/       /*Scope*/ 14, /*->16187*/
/*16173*/         OPC_CheckPredicate, 37, // Predicate_atomic_load_add_32
/*16175*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16177*/         OPC_EmitMergeInputChains1_0,
/*16178*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_add:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_ADD_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16187*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16204
/*16190*/       OPC_CheckPredicate, 38, // Predicate_atomic_load_add_64
/*16192*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16194*/       OPC_EmitMergeInputChains1_0,
/*16195*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_ADD_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_add:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_ADD_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16205*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->16357
/*16210*/   OPC_RecordMemRef,
/*16211*/   OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*16212*/   OPC_RecordChild1, // #1 = $ptr
/*16213*/   OPC_Scope, 70, /*->16285*/ // 2 children in Scope
/*16215*/     OPC_CheckChild1Type, MVT::i32,
/*16217*/     OPC_RecordChild2, // #2 = $incr
/*16218*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16268
/*16221*/       OPC_Scope, 14, /*->16237*/ // 3 children in Scope
/*16223*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_8
/*16225*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16227*/         OPC_EmitMergeInputChains1_0,
/*16228*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16237*/       /*Scope*/ 14, /*->16252*/
/*16238*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_16
/*16240*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16242*/         OPC_EmitMergeInputChains1_0,
/*16243*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16252*/       /*Scope*/ 14, /*->16267*/
/*16253*/         OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_32
/*16255*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16257*/         OPC_EmitMergeInputChains1_0,
/*16258*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16267*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16284
/*16270*/       OPC_CheckPredicate, 42, // Predicate_atomic_load_sub_64
/*16272*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16274*/       OPC_EmitMergeInputChains1_0,
/*16275*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16285*/   /*Scope*/ 70, /*->16356*/
/*16286*/     OPC_CheckChild1Type, MVT::i64,
/*16288*/     OPC_RecordChild2, // #2 = $incr
/*16289*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16339
/*16292*/       OPC_Scope, 14, /*->16308*/ // 3 children in Scope
/*16294*/         OPC_CheckPredicate, 39, // Predicate_atomic_load_sub_8
/*16296*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16298*/         OPC_EmitMergeInputChains1_0,
/*16299*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16308*/       /*Scope*/ 14, /*->16323*/
/*16309*/         OPC_CheckPredicate, 40, // Predicate_atomic_load_sub_16
/*16311*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16313*/         OPC_EmitMergeInputChains1_0,
/*16314*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16323*/       /*Scope*/ 14, /*->16338*/
/*16324*/         OPC_CheckPredicate, 41, // Predicate_atomic_load_sub_32
/*16326*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16328*/         OPC_EmitMergeInputChains1_0,
/*16329*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_sub:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_SUB_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16338*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16355
/*16341*/       OPC_CheckPredicate, 42, // Predicate_atomic_load_sub_64
/*16343*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16345*/       OPC_EmitMergeInputChains1_0,
/*16346*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_SUB_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_sub:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_SUB_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16356*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->16508
/*16361*/   OPC_RecordMemRef,
/*16362*/   OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*16363*/   OPC_RecordChild1, // #1 = $ptr
/*16364*/   OPC_Scope, 70, /*->16436*/ // 2 children in Scope
/*16366*/     OPC_CheckChild1Type, MVT::i32,
/*16368*/     OPC_RecordChild2, // #2 = $incr
/*16369*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16419
/*16372*/       OPC_Scope, 14, /*->16388*/ // 3 children in Scope
/*16374*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_8
/*16376*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16378*/         OPC_EmitMergeInputChains1_0,
/*16379*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16388*/       /*Scope*/ 14, /*->16403*/
/*16389*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_16
/*16391*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16393*/         OPC_EmitMergeInputChains1_0,
/*16394*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16403*/       /*Scope*/ 14, /*->16418*/
/*16404*/         OPC_CheckPredicate, 45, // Predicate_atomic_load_and_32
/*16406*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16408*/         OPC_EmitMergeInputChains1_0,
/*16409*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16418*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16435
/*16421*/       OPC_CheckPredicate, 46, // Predicate_atomic_load_and_64
/*16423*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16425*/       OPC_EmitMergeInputChains1_0,
/*16426*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16436*/   /*Scope*/ 70, /*->16507*/
/*16437*/     OPC_CheckChild1Type, MVT::i64,
/*16439*/     OPC_RecordChild2, // #2 = $incr
/*16440*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16490
/*16443*/       OPC_Scope, 14, /*->16459*/ // 3 children in Scope
/*16445*/         OPC_CheckPredicate, 43, // Predicate_atomic_load_and_8
/*16447*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16449*/         OPC_EmitMergeInputChains1_0,
/*16450*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16459*/       /*Scope*/ 14, /*->16474*/
/*16460*/         OPC_CheckPredicate, 44, // Predicate_atomic_load_and_16
/*16462*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16464*/         OPC_EmitMergeInputChains1_0,
/*16465*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16474*/       /*Scope*/ 14, /*->16489*/
/*16475*/         OPC_CheckPredicate, 45, // Predicate_atomic_load_and_32
/*16477*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16479*/         OPC_EmitMergeInputChains1_0,
/*16480*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_and:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_AND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16489*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16506
/*16492*/       OPC_CheckPredicate, 46, // Predicate_atomic_load_and_64
/*16494*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16496*/       OPC_EmitMergeInputChains1_0,
/*16497*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_AND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_and:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_AND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16507*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->16659
/*16512*/   OPC_RecordMemRef,
/*16513*/   OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*16514*/   OPC_RecordChild1, // #1 = $ptr
/*16515*/   OPC_Scope, 70, /*->16587*/ // 2 children in Scope
/*16517*/     OPC_CheckChild1Type, MVT::i32,
/*16519*/     OPC_RecordChild2, // #2 = $incr
/*16520*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16570
/*16523*/       OPC_Scope, 14, /*->16539*/ // 3 children in Scope
/*16525*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_8
/*16527*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16529*/         OPC_EmitMergeInputChains1_0,
/*16530*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16539*/       /*Scope*/ 14, /*->16554*/
/*16540*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_16
/*16542*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16544*/         OPC_EmitMergeInputChains1_0,
/*16545*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16554*/       /*Scope*/ 14, /*->16569*/
/*16555*/         OPC_CheckPredicate, 49, // Predicate_atomic_load_or_32
/*16557*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16559*/         OPC_EmitMergeInputChains1_0,
/*16560*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16569*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16586
/*16572*/       OPC_CheckPredicate, 50, // Predicate_atomic_load_or_64
/*16574*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16576*/       OPC_EmitMergeInputChains1_0,
/*16577*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16587*/   /*Scope*/ 70, /*->16658*/
/*16588*/     OPC_CheckChild1Type, MVT::i64,
/*16590*/     OPC_RecordChild2, // #2 = $incr
/*16591*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16641
/*16594*/       OPC_Scope, 14, /*->16610*/ // 3 children in Scope
/*16596*/         OPC_CheckPredicate, 47, // Predicate_atomic_load_or_8
/*16598*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16600*/         OPC_EmitMergeInputChains1_0,
/*16601*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16610*/       /*Scope*/ 14, /*->16625*/
/*16611*/         OPC_CheckPredicate, 48, // Predicate_atomic_load_or_16
/*16613*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16615*/         OPC_EmitMergeInputChains1_0,
/*16616*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16625*/       /*Scope*/ 14, /*->16640*/
/*16626*/         OPC_CheckPredicate, 49, // Predicate_atomic_load_or_32
/*16628*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16630*/         OPC_EmitMergeInputChains1_0,
/*16631*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_or:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_OR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16640*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16657
/*16643*/       OPC_CheckPredicate, 50, // Predicate_atomic_load_or_64
/*16645*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16647*/       OPC_EmitMergeInputChains1_0,
/*16648*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_OR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_or:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_OR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16658*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->16810
/*16663*/   OPC_RecordMemRef,
/*16664*/   OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*16665*/   OPC_RecordChild1, // #1 = $ptr
/*16666*/   OPC_Scope, 70, /*->16738*/ // 2 children in Scope
/*16668*/     OPC_CheckChild1Type, MVT::i32,
/*16670*/     OPC_RecordChild2, // #2 = $incr
/*16671*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16721
/*16674*/       OPC_Scope, 14, /*->16690*/ // 3 children in Scope
/*16676*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_8
/*16678*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16680*/         OPC_EmitMergeInputChains1_0,
/*16681*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16690*/       /*Scope*/ 14, /*->16705*/
/*16691*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_16
/*16693*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16695*/         OPC_EmitMergeInputChains1_0,
/*16696*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16705*/       /*Scope*/ 14, /*->16720*/
/*16706*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_32
/*16708*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16710*/         OPC_EmitMergeInputChains1_0,
/*16711*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16720*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16737
/*16723*/       OPC_CheckPredicate, 54, // Predicate_atomic_load_xor_64
/*16725*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16727*/       OPC_EmitMergeInputChains1_0,
/*16728*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16738*/   /*Scope*/ 70, /*->16809*/
/*16739*/     OPC_CheckChild1Type, MVT::i64,
/*16741*/     OPC_RecordChild2, // #2 = $incr
/*16742*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16792
/*16745*/       OPC_Scope, 14, /*->16761*/ // 3 children in Scope
/*16747*/         OPC_CheckPredicate, 51, // Predicate_atomic_load_xor_8
/*16749*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16751*/         OPC_EmitMergeInputChains1_0,
/*16752*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16761*/       /*Scope*/ 14, /*->16776*/
/*16762*/         OPC_CheckPredicate, 52, // Predicate_atomic_load_xor_16
/*16764*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16766*/         OPC_EmitMergeInputChains1_0,
/*16767*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16776*/       /*Scope*/ 14, /*->16791*/
/*16777*/         OPC_CheckPredicate, 53, // Predicate_atomic_load_xor_32
/*16779*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16781*/         OPC_EmitMergeInputChains1_0,
/*16782*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_xor:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_XOR_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16791*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16808
/*16794*/       OPC_CheckPredicate, 54, // Predicate_atomic_load_xor_64
/*16796*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16798*/       OPC_EmitMergeInputChains1_0,
/*16799*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_XOR_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_xor:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_XOR_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16809*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->16961
/*16814*/   OPC_RecordMemRef,
/*16815*/   OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*16816*/   OPC_RecordChild1, // #1 = $ptr
/*16817*/   OPC_Scope, 70, /*->16889*/ // 2 children in Scope
/*16819*/     OPC_CheckChild1Type, MVT::i32,
/*16821*/     OPC_RecordChild2, // #2 = $incr
/*16822*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16872
/*16825*/       OPC_Scope, 14, /*->16841*/ // 3 children in Scope
/*16827*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_8
/*16829*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16831*/         OPC_EmitMergeInputChains1_0,
/*16832*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16841*/       /*Scope*/ 14, /*->16856*/
/*16842*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_16
/*16844*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16846*/         OPC_EmitMergeInputChains1_0,
/*16847*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16856*/       /*Scope*/ 14, /*->16871*/
/*16857*/         OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_32
/*16859*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16861*/         OPC_EmitMergeInputChains1_0,
/*16862*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16871*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16888
/*16874*/       OPC_CheckPredicate, 58, // Predicate_atomic_load_nand_64
/*16876*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16878*/       OPC_EmitMergeInputChains1_0,
/*16879*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16889*/   /*Scope*/ 70, /*->16960*/
/*16890*/     OPC_CheckChild1Type, MVT::i64,
/*16892*/     OPC_RecordChild2, // #2 = $incr
/*16893*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->16943
/*16896*/       OPC_Scope, 14, /*->16912*/ // 3 children in Scope
/*16898*/         OPC_CheckPredicate, 55, // Predicate_atomic_load_nand_8
/*16900*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16902*/         OPC_EmitMergeInputChains1_0,
/*16903*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16912*/       /*Scope*/ 14, /*->16927*/
/*16913*/         OPC_CheckPredicate, 56, // Predicate_atomic_load_nand_16
/*16915*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16917*/         OPC_EmitMergeInputChains1_0,
/*16918*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16927*/       /*Scope*/ 14, /*->16942*/
/*16928*/         OPC_CheckPredicate, 57, // Predicate_atomic_load_nand_32
/*16930*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16932*/         OPC_EmitMergeInputChains1_0,
/*16933*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_load_nand:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
                  // Dst: (ATOMIC_LOAD_NAND_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*16942*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->16959
/*16945*/       OPC_CheckPredicate, 58, // Predicate_atomic_load_nand_64
/*16947*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*16949*/       OPC_EmitMergeInputChains1_0,
/*16950*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_LOAD_NAND_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_load_nand:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 4
                // Dst: (ATOMIC_LOAD_NAND_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*16960*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 19|128,1/*147*/,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->17112
/*16965*/   OPC_RecordMemRef,
/*16966*/   OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*16967*/   OPC_RecordChild1, // #1 = $ptr
/*16968*/   OPC_Scope, 70, /*->17040*/ // 2 children in Scope
/*16970*/     OPC_CheckChild1Type, MVT::i32,
/*16972*/     OPC_RecordChild2, // #2 = $incr
/*16973*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17023
/*16976*/       OPC_Scope, 14, /*->16992*/ // 3 children in Scope
/*16978*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_8
/*16980*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16982*/         OPC_EmitMergeInputChains1_0,
/*16983*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*16992*/       /*Scope*/ 14, /*->17007*/
/*16993*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_16
/*16995*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*16997*/         OPC_EmitMergeInputChains1_0,
/*16998*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*17007*/       /*Scope*/ 14, /*->17022*/
/*17008*/         OPC_CheckPredicate, 61, // Predicate_atomic_swap_32
/*17010*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17012*/         OPC_EmitMergeInputChains1_0,
/*17013*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$incr)
/*17022*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17039
/*17025*/       OPC_CheckPredicate, 62, // Predicate_atomic_swap_64
/*17027*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17029*/       OPC_EmitMergeInputChains1_0,
/*17030*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*17040*/   /*Scope*/ 70, /*->17111*/
/*17041*/     OPC_CheckChild1Type, MVT::i64,
/*17043*/     OPC_RecordChild2, // #2 = $incr
/*17044*/     OPC_SwitchType /*2 cases */, 47,  MVT::i32,// ->17094
/*17047*/       OPC_Scope, 14, /*->17063*/ // 3 children in Scope
/*17049*/         OPC_CheckPredicate, 59, // Predicate_atomic_swap_8
/*17051*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17053*/         OPC_EmitMergeInputChains1_0,
/*17054*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*17063*/       /*Scope*/ 14, /*->17078*/
/*17064*/         OPC_CheckPredicate, 60, // Predicate_atomic_swap_16
/*17066*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17068*/         OPC_EmitMergeInputChains1_0,
/*17069*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*17078*/       /*Scope*/ 14, /*->17093*/
/*17079*/         OPC_CheckPredicate, 61, // Predicate_atomic_swap_32
/*17081*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17083*/         OPC_EmitMergeInputChains1_0,
/*17084*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (atomic_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)<<P:Predicate_atomic_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$incr)
/*17093*/       0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::i64,// ->17110
/*17096*/       OPC_CheckPredicate, 62, // Predicate_atomic_swap_64
/*17098*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17100*/       OPC_EmitMergeInputChains1_0,
/*17101*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: (atomic_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)<<P:Predicate_atomic_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$incr)
              0, // EndSwitchType
/*17111*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,1/*157*/,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->17273
/*17116*/   OPC_RecordMemRef,
/*17117*/   OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*17118*/   OPC_RecordChild1, // #1 = $ptr
/*17119*/   OPC_Scope, 75, /*->17196*/ // 2 children in Scope
/*17121*/     OPC_CheckChild1Type, MVT::i32,
/*17123*/     OPC_RecordChild2, // #2 = $cmp
/*17124*/     OPC_RecordChild3, // #3 = $swap
/*17125*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->17178
/*17128*/       OPC_Scope, 15, /*->17145*/ // 3 children in Scope
/*17130*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_8
/*17132*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17134*/         OPC_EmitMergeInputChains1_0,
/*17135*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*17145*/       /*Scope*/ 15, /*->17161*/
/*17146*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_16
/*17148*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17150*/         OPC_EmitMergeInputChains1_0,
/*17151*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*17161*/       /*Scope*/ 15, /*->17177*/
/*17162*/         OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_32
/*17164*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17166*/         OPC_EmitMergeInputChains1_0,
/*17167*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32:i32 CPURegs:i32:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*17177*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->17195
/*17180*/       OPC_CheckPredicate, 66, // Predicate_atomic_cmp_swap_64
/*17182*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17184*/       OPC_EmitMergeInputChains1_0,
/*17185*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64:i64 CPURegs:i32:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*17196*/   /*Scope*/ 75, /*->17272*/
/*17197*/     OPC_CheckChild1Type, MVT::i64,
/*17199*/     OPC_RecordChild2, // #2 = $cmp
/*17200*/     OPC_RecordChild3, // #3 = $swap
/*17201*/     OPC_SwitchType /*2 cases */, 50,  MVT::i32,// ->17254
/*17204*/       OPC_Scope, 15, /*->17221*/ // 3 children in Scope
/*17206*/         OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_8
/*17208*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17210*/         OPC_EmitMergeInputChains1_0,
/*17211*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I8_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I8_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*17221*/       /*Scope*/ 15, /*->17237*/
/*17222*/         OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_16
/*17224*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17226*/         OPC_EmitMergeInputChains1_0,
/*17227*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I16_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I16_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*17237*/       /*Scope*/ 15, /*->17253*/
/*17238*/         OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_32
/*17240*/         OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*17242*/         OPC_EmitMergeInputChains1_0,
/*17243*/         OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I32_P8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (atomic_cmp_swap:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
                  // Dst: (ATOMIC_CMP_SWAP_I32_P8:i32 CPU64Regs:i64:$ptr, CPURegs:i32:$cmp, CPURegs:i32:$swap)
/*17253*/       0, /*End of Scope*/
              /*SwitchType*/ 15,  MVT::i64,// ->17271
/*17256*/       OPC_CheckPredicate, 66, // Predicate_atomic_cmp_swap_64
/*17258*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17260*/       OPC_EmitMergeInputChains1_0,
/*17261*/       OPC_MorphNodeTo, TARGET_VAL(Mips::ATOMIC_CMP_SWAP_I64_P8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
                // Src: (atomic_cmp_swap:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 4
                // Dst: (ATOMIC_CMP_SWAP_I64_P8:i64 CPU64Regs:i64:$ptr, CPU64Regs:i64:$cmp, CPU64Regs:i64:$swap)
              0, // EndSwitchType
/*17272*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(MipsISD::Ret),// ->17300
/*17276*/   OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*17277*/   OPC_CaptureGlueInput,
/*17278*/   OPC_Scope, 9, /*->17289*/ // 2 children in Scope
/*17280*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17282*/     OPC_EmitMergeInputChains1_0,
/*17283*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA)
/*17289*/   /*Scope*/ 9, /*->17299*/
/*17290*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17292*/     OPC_EmitMergeInputChains1_0,
/*17293*/     OPC_MorphNodeTo, TARGET_VAL(Mips::RetRA16), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (MipsRet) - Complexity = 3
              // Dst: (RetRA16)
/*17299*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::MUL),// ->17349
/*17303*/   OPC_RecordChild0, // #0 = $rs
/*17304*/   OPC_RecordChild1, // #1 = $rt
/*17305*/   OPC_SwitchType /*2 cases */, 27,  MVT::i32,// ->17335
/*17308*/     OPC_Scope, 11, /*->17321*/ // 2 children in Scope
/*17310*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17312*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
                // Dst: (MUL:i32 CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17321*/     /*Scope*/ 12, /*->17334*/
/*17322*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17324*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MultRxRyRz16), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r) - Complexity = 3
                // Dst: (MultRxRyRz16:i32:i32 CPU16Regs:i32:$l, CPU16Regs:i32:$r)
/*17334*/     0, /*End of Scope*/
            /*SwitchType*/ 11,  MVT::v2i16,// ->17348
/*17337*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*17339*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MUL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
              // Src: (mul:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b) - Complexity = 3
              // Dst: (MUL_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b)
            0, // EndSwitchType
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::BR),// ->17395
/*17352*/   OPC_RecordNode,   // #0 = 'br' chained node
/*17353*/   OPC_RecordChild1, // #1 = $target
/*17354*/   OPC_MoveChild, 1,
/*17356*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*17359*/   OPC_MoveParent,
/*17360*/   OPC_Scope, 10, /*->17372*/ // 3 children in Scope
/*17362*/     OPC_CheckPatternPredicate, 23, // (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding())
/*17364*/     OPC_EmitMergeInputChains1_0,
/*17365*/     OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$target) - Complexity = 3
              // Dst: (J (bb:Other):$target)
/*17372*/   /*Scope*/ 10, /*->17383*/
/*17373*/     OPC_CheckPatternPredicate, 24, // (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding())
/*17375*/     OPC_EmitMergeInputChains1_0,
/*17376*/     OPC_MorphNodeTo, TARGET_VAL(Mips::B), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$offset) - Complexity = 3
              // Dst: (B (bb:Other):$offset)
/*17383*/   /*Scope*/ 10, /*->17394*/
/*17384*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17386*/     OPC_EmitMergeInputChains1_0,
/*17387*/     OPC_MorphNodeTo, TARGET_VAL(Mips::BimmX16), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm16) - Complexity = 3
              // Dst: (BimmX16 (bb:Other):$imm16)
/*17394*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::BRIND),// ->17442
/*17398*/   OPC_RecordNode,   // #0 = 'brind' chained node
/*17399*/   OPC_RecordChild1, // #1 = $rs
/*17400*/   OPC_Scope, 26, /*->17428*/ // 2 children in Scope
/*17402*/     OPC_CheckChild1Type, MVT::i32,
/*17404*/     OPC_Scope, 10, /*->17416*/ // 2 children in Scope
/*17406*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17408*/       OPC_EmitMergeInputChains1_0,
/*17409*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPURegs:i32:$rs) - Complexity = 3
                // Dst: (JR CPURegs:i32:$rs)
/*17416*/     /*Scope*/ 10, /*->17427*/
/*17417*/       OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17419*/       OPC_EmitMergeInputChains1_0,
/*17420*/       OPC_MorphNodeTo, TARGET_VAL(Mips::JrcRx16), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind CPU16Regs:i32:$rs) - Complexity = 3
                // Dst: (JrcRx16 CPU16Regs:i32:$rs)
/*17427*/     0, /*End of Scope*/
/*17428*/   /*Scope*/ 12, /*->17441*/
/*17429*/     OPC_CheckChild1Type, MVT::i64,
/*17431*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17433*/     OPC_EmitMergeInputChains1_0,
/*17434*/     OPC_MorphNodeTo, TARGET_VAL(Mips::JR64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPU64Regs:i64:$rs) - Complexity = 3
              // Dst: (JR64 CPU64Regs:i64:$rs)
/*17441*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::EH_RETURN),// ->17480
/*17445*/   OPC_RecordNode,   // #0 = 'MIPSehret' chained node
/*17446*/   OPC_CaptureGlueInput,
/*17447*/   OPC_RecordChild1, // #1 = $spoff
/*17448*/   OPC_Scope, 14, /*->17464*/ // 2 children in Scope
/*17450*/     OPC_CheckChild1Type, MVT::i32,
/*17452*/     OPC_RecordChild2, // #2 = $dst
/*17453*/     OPC_CheckChild2Type, MVT::i32,
/*17455*/     OPC_EmitMergeInputChains1_0,
/*17456*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return32), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPURegs:i32:$spoff, CPURegs:i32:$dst) - Complexity = 3
              // Dst: (MIPSeh_return32 CPURegs:i32:$spoff, CPURegs:i32:$dst)
/*17464*/   /*Scope*/ 14, /*->17479*/
/*17465*/     OPC_CheckChild1Type, MVT::i64,
/*17467*/     OPC_RecordChild2, // #2 = $dst
/*17468*/     OPC_CheckChild2Type, MVT::i64,
/*17470*/     OPC_EmitMergeInputChains1_0,
/*17471*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MIPSeh_return64), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (MIPSehret CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst) - Complexity = 3
              // Dst: (MIPSeh_return64 CPU64Regs:i64:$spoff, CPU64Regs:i64:$dst)
/*17479*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRem),// ->17516
/*17483*/   OPC_RecordChild0, // #0 = $rs
/*17484*/   OPC_Scope, 14, /*->17500*/ // 2 children in Scope
/*17486*/     OPC_CheckChild0Type, MVT::i32,
/*17488*/     OPC_RecordChild1, // #1 = $rt
/*17489*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17491*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoSDIV:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17500*/   /*Scope*/ 14, /*->17515*/
/*17501*/     OPC_CheckChild0Type, MVT::i64,
/*17503*/     OPC_RecordChild1, // #1 = $rt
/*17504*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17506*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDSDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRem:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDSDIV:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*17515*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::DivRemU),// ->17552
/*17519*/   OPC_RecordChild0, // #0 = $rs
/*17520*/   OPC_Scope, 14, /*->17536*/ // 2 children in Scope
/*17522*/     OPC_CheckChild0Type, MVT::i32,
/*17524*/     OPC_RecordChild1, // #1 = $rt
/*17525*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17527*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt) - Complexity = 3
              // Dst: (PseudoUDIV:Untyped CPURegsOpnd:i32:$rs, CPURegsOpnd:i32:$rt)
/*17536*/   /*Scope*/ 14, /*->17551*/
/*17537*/     OPC_CheckChild0Type, MVT::i64,
/*17539*/     OPC_RecordChild1, // #1 = $rt
/*17540*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17542*/     OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoDUDIV), 0,
                  1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 0, 1, 
              // Src: (MipsDivRemU:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt) - Complexity = 3
              // Dst: (PseudoDUDIV:Untyped CPU64RegsOpnd:i64:$rs, CPU64RegsOpnd:i64:$rt)
/*17551*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->17634
/*17555*/   OPC_RecordChild0, // #0 = $rt
/*17556*/   OPC_MoveChild, 1,
/*17558*/   OPC_Scope, 29, /*->17589*/ // 3 children in Scope
/*17560*/     OPC_CheckValueType, MVT::i8,
/*17562*/     OPC_MoveParent,
/*17563*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17576
/*17566*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17568*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17588
/*17578*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17580*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEB64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i8:Other) - Complexity = 3
                // Dst: (SEB64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*17589*/   /*Scope*/ 29, /*->17619*/
/*17590*/     OPC_CheckValueType, MVT::i16,
/*17592*/     OPC_MoveParent,
/*17593*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->17606
/*17596*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17598*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 CPURegs:i32:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH:i32 CPURegs:i32:$rt)
              /*SwitchType*/ 10,  MVT::i64,// ->17618
/*17608*/       OPC_CheckPatternPredicate, 25, // (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding())
/*17610*/       OPC_MorphNodeTo, TARGET_VAL(Mips::SEH64), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 CPU64Regs:i64:$rt, i16:Other) - Complexity = 3
                // Dst: (SEH64:i64 CPU64Regs:i64:$rt)
              0, // EndSwitchType
/*17619*/   /*Scope*/ 13, /*->17633*/
/*17620*/     OPC_CheckValueType, MVT::i32,
/*17622*/     OPC_MoveParent,
/*17623*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17625*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 CPU64Regs:i64:$src, i32:Other) - Complexity = 3
              // Dst: (SLL64_64:i64 CPU64Regs:i64:$src)
/*17633*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::SUBC),// ->17667
/*17637*/   OPC_RecordChild0, // #0 = $lhs
/*17638*/   OPC_RecordChild1, // #1 = $rhs
/*17639*/   OPC_CheckType, MVT::i32,
/*17641*/   OPC_Scope, 11, /*->17654*/ // 2 children in Scope
/*17643*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17645*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*17654*/   /*Scope*/ 11, /*->17666*/
/*17655*/     OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*17657*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SubuRxRyRz16), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs) - Complexity = 3
              // Dst: (SubuRxRyRz16:i32 CPU16Regs:i32:$lhs, CPU16Regs:i32:$rhs)
/*17666*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 7|128,1/*135*/,  TARGET_VAL(ISD::BITCAST),// ->17806
/*17671*/   OPC_RecordChild0, // #0 = $fs
/*17672*/   OPC_Scope, 14, /*->17688*/ // 6 children in Scope
/*17674*/     OPC_CheckChild0Type, MVT::f32,
/*17676*/     OPC_CheckType, MVT::i32,
/*17678*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17680*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$fs)
/*17688*/   /*Scope*/ 14, /*->17703*/
/*17689*/     OPC_CheckChild0Type, MVT::f64,
/*17691*/     OPC_CheckType, MVT::i64,
/*17693*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17695*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FGR64:f64:$fs) - Complexity = 3
              // Dst: (DMFC1:i64 FGR64:f64:$fs)
/*17703*/   /*Scope*/ 18, /*->17722*/
/*17704*/     OPC_CheckChild0Type, MVT::v2i16,
/*17706*/     OPC_CheckType, MVT::i32,
/*17708*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17710*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*17713*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v2i16:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v2i16:$src, CPURegs:i32)
/*17722*/   /*Scope*/ 18, /*->17741*/
/*17723*/     OPC_CheckChild0Type, MVT::v4i8,
/*17725*/     OPC_CheckType, MVT::i32,
/*17727*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17729*/     OPC_EmitInteger, MVT::i32, Mips::CPURegsRegClassID,
/*17732*/     OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (bitconvert:i32 DSPRegs:v4i8:$src) - Complexity = 3
              // Dst: (COPY_TO_REGCLASS:i32 DSPRegs:v4i8:$src, CPURegs:i32)
/*17741*/   /*Scope*/ 48, /*->17790*/
/*17742*/     OPC_CheckChild0Type, MVT::i32,
/*17744*/     OPC_SwitchType /*3 cases */, 10,  MVT::f32,// ->17757
/*17747*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17749*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (bitconvert:f32 CPURegs:i32:$rt) - Complexity = 3
                // Dst: (MTC1:f32 CPURegs:i32:$rt)
              /*SwitchType*/ 14,  MVT::v2i16,// ->17773
/*17759*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17761*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*17764*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v2i16 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v2i16 CPURegs:i32:$src, DSPRegs:i32)
              /*SwitchType*/ 14,  MVT::v4i8,// ->17789
/*17775*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*17777*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*17780*/       OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1, 
                // Src: (bitconvert:v4i8 CPURegs:i32:$src) - Complexity = 3
                // Dst: (COPY_TO_REGCLASS:v4i8 CPURegs:i32:$src, DSPRegs:i32)
              0, // EndSwitchType
/*17790*/   /*Scope*/ 14, /*->17805*/
/*17791*/     OPC_CheckChild0Type, MVT::i64,
/*17793*/     OPC_CheckType, MVT::f64,
/*17795*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17797*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DMTC1:f64 CPU64Regs:i64:$rt)
/*17805*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ANY_EXTEND),// ->17824
/*17809*/   OPC_RecordChild0, // #0 = $src
/*17810*/   OPC_CheckChild0Type, MVT::i32,
/*17812*/   OPC_CheckType, MVT::i64,
/*17814*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17816*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (anyext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND),// ->17842
/*17827*/   OPC_RecordChild0, // #0 = $src
/*17828*/   OPC_CheckChild0Type, MVT::i32,
/*17830*/   OPC_CheckType, MVT::i64,
/*17832*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17834*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (SLL64_32:i64 CPURegs:i32:$src)
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_T),// ->17917
/*17845*/   OPC_CaptureGlueInput,
/*17846*/   OPC_RecordChild0, // #0 = $rs
/*17847*/   OPC_RecordChild1, // #1 = $F
/*17848*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->17862
/*17851*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17853*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVT_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->17875
/*17864*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*17866*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVT_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->17888
/*17877*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17879*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_T:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVT_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->17916
/*17890*/     OPC_Scope, 11, /*->17903*/ // 2 children in Scope
/*17892*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17894*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*17903*/     /*Scope*/ 11, /*->17915*/
/*17904*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17906*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVT_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_T:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVT_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*17915*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 72,  TARGET_VAL(MipsISD::CMovFP_F),// ->17992
/*17920*/   OPC_CaptureGlueInput,
/*17921*/   OPC_RecordChild0, // #0 = $rs
/*17922*/   OPC_RecordChild1, // #1 = $F
/*17923*/   OPC_SwitchType /*4 cases */, 11,  MVT::i32,// ->17937
/*17926*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17928*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i32 CPURegs:i32:$rs, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVF_I:i32 CPURegs:i32:$rs, CPURegs:i32:$F)
            /*SwitchType*/ 11,  MVT::i64,// ->17950
/*17939*/     OPC_CheckPatternPredicate, 12, // (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding())
/*17941*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_I64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F) - Complexity = 3
              // Dst: (MOVF_I64:i64 CPU64Regs:i64:$rs, CPU64Regs:i64:$F)
            /*SwitchType*/ 11,  MVT::f32,// ->17963
/*17952*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*17954*/     OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_S), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (MipsCMovFP_F:f32 FGR32:f32:$fs, FGR32:f32:$F) - Complexity = 3
              // Dst: (MOVF_S:f32 FGR32:f32:$fs, FGR32:f32:$F)
            /*SwitchType*/ 26,  MVT::f64,// ->17991
/*17965*/     OPC_Scope, 11, /*->17978*/ // 2 children in Scope
/*17967*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17969*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D32), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 AFGR64:f64:$fs, AFGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$F)
/*17978*/     /*Scope*/ 11, /*->17990*/
/*17979*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*17981*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MOVF_D64), 0|OPFL_GlueInput,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (MipsCMovFP_F:f64 FGR64:f64:$fs, FGR64:f64:$F) - Complexity = 3
                // Dst: (MOVF_D64:f64 FGR64:f64:$fs, FGR64:f64:$F)
/*17990*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRem16),// ->18010
/*17995*/   OPC_RecordChild0, // #0 = $rx
/*17996*/   OPC_CheckChild0Type, MVT::i32,
/*17998*/   OPC_RecordChild1, // #1 = $ry
/*17999*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*18001*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRem16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DivRemU16),// ->18028
/*18013*/   OPC_RecordChild0, // #0 = $rx
/*18014*/   OPC_CheckChild0Type, MVT::i32,
/*18016*/   OPC_RecordChild1, // #1 = $ry
/*18017*/   OPC_CheckPatternPredicate, 3, // (Subtarget.inMips16Mode())
/*18019*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DivuRxRy16), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRemU16 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry) - Complexity = 3
            // Dst: (DivuRxRy16:i32 CPU16Regs:i32:$rx, CPU16Regs:i32:$ry)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MULSAQ_S_W_PH),// ->18048
/*18031*/   OPC_RecordNode,   // #0 = 'MipsMULSAQ_S_W_PH' chained node
/*18032*/   OPC_RecordChild1, // #1 = $rs
/*18033*/   OPC_RecordChild2, // #2 = $rt
/*18034*/   OPC_RecordChild3, // #3 = $acin
/*18035*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18037*/   OPC_EmitMergeInputChains1_0,
/*18038*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMULSAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHL),// ->18068
/*18051*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHL' chained node
/*18052*/   OPC_RecordChild1, // #1 = $rs
/*18053*/   OPC_RecordChild2, // #2 = $rt
/*18054*/   OPC_RecordChild3, // #3 = $acin
/*18055*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18057*/   OPC_EmitMergeInputChains1_0,
/*18058*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_S_W_PHR),// ->18088
/*18071*/   OPC_RecordNode,   // #0 = 'MipsMAQ_S_W_PHR' chained node
/*18072*/   OPC_RecordChild1, // #1 = $rs
/*18073*/   OPC_RecordChild2, // #2 = $rt
/*18074*/   OPC_RecordChild3, // #3 = $acin
/*18075*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18077*/   OPC_EmitMergeInputChains1_0,
/*18078*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_S_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_S_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_S_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHL),// ->18108
/*18091*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHL' chained node
/*18092*/   OPC_RecordChild1, // #1 = $rs
/*18093*/   OPC_RecordChild2, // #2 = $rt
/*18094*/   OPC_RecordChild3, // #3 = $acin
/*18095*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18097*/   OPC_EmitMergeInputChains1_0,
/*18098*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHL), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::MAQ_SA_W_PHR),// ->18128
/*18111*/   OPC_RecordNode,   // #0 = 'MipsMAQ_SA_W_PHR' chained node
/*18112*/   OPC_RecordChild1, // #1 = $rs
/*18113*/   OPC_RecordChild2, // #2 = $rt
/*18114*/   OPC_RecordChild3, // #3 = $acin
/*18115*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18117*/   OPC_EmitMergeInputChains1_0,
/*18118*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MAQ_SA_W_PHR), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsMAQ_SA_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MAQ_SA_W_PHR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBL),// ->18146
/*18131*/   OPC_RecordChild0, // #0 = $rs
/*18132*/   OPC_RecordChild1, // #1 = $rt
/*18133*/   OPC_RecordChild2, // #2 = $acin
/*18134*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18136*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAU_H_QBR),// ->18164
/*18149*/   OPC_RecordChild0, // #0 = $rs
/*18150*/   OPC_RecordChild1, // #1 = $rt
/*18151*/   OPC_RecordChild2, // #2 = $acin
/*18152*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18154*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBL),// ->18182
/*18167*/   OPC_RecordChild0, // #0 = $rs
/*18168*/   OPC_RecordChild1, // #1 = $rt
/*18169*/   OPC_RecordChild2, // #2 = $acin
/*18170*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18172*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBL), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBL:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSU_H_QBR),// ->18200
/*18185*/   OPC_RecordChild0, // #0 = $rs
/*18186*/   OPC_RecordChild1, // #1 = $rt
/*18187*/   OPC_RecordChild2, // #2 = $acin
/*18188*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18190*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSU_H_QBR), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSU_H_QBR:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_S_W_PH),// ->18220
/*18203*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_S_W_PH' chained node
/*18204*/   OPC_RecordChild1, // #1 = $rs
/*18205*/   OPC_RecordChild2, // #2 = $rt
/*18206*/   OPC_RecordChild3, // #3 = $acin
/*18207*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18209*/   OPC_EmitMergeInputChains1_0,
/*18210*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_S_W_PH),// ->18240
/*18223*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_S_W_PH' chained node
/*18224*/   OPC_RecordChild1, // #1 = $rs
/*18225*/   OPC_RecordChild2, // #2 = $rt
/*18226*/   OPC_RecordChild3, // #3 = $acin
/*18227*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18229*/   OPC_EmitMergeInputChains1_0,
/*18230*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQ_SA_L_W),// ->18260
/*18243*/   OPC_RecordNode,   // #0 = 'MipsDPAQ_SA_L_W' chained node
/*18244*/   OPC_RecordChild1, // #1 = $rs
/*18245*/   OPC_RecordChild2, // #2 = $rt
/*18246*/   OPC_RecordChild3, // #3 = $acin
/*18247*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18249*/   OPC_EmitMergeInputChains1_0,
/*18250*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQ_SA_L_W),// ->18280
/*18263*/   OPC_RecordNode,   // #0 = 'MipsDPSQ_SA_L_W' chained node
/*18264*/   OPC_RecordChild1, // #1 = $rs
/*18265*/   OPC_RecordChild2, // #2 = $rt
/*18266*/   OPC_RecordChild3, // #3 = $acin
/*18267*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18269*/   OPC_EmitMergeInputChains1_0,
/*18270*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQ_SA_L_W), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQ_SA_L_W:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MTHLIP),// ->18298
/*18283*/   OPC_RecordNode,   // #0 = 'MipsMTHLIP' chained node
/*18284*/   OPC_RecordChild1, // #1 = $rs
/*18285*/   OPC_RecordChild2, // #2 = $acin
/*18286*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18288*/   OPC_EmitMergeInputChains1_0,
/*18289*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MTHLIP), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 2/*#Ops*/, 1, 2, 
            // Src: (MipsMTHLIP:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MTHLIP:Untyped CPURegs:i32:$rs, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPA_W_PH),// ->18316
/*18301*/   OPC_RecordChild0, // #0 = $rs
/*18302*/   OPC_RecordChild1, // #1 = $rt
/*18303*/   OPC_RecordChild2, // #2 = $acin
/*18304*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18306*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPS_W_PH),// ->18334
/*18319*/   OPC_RecordChild0, // #0 = $rs
/*18320*/   OPC_RecordChild1, // #1 = $rt
/*18321*/   OPC_RecordChild2, // #2 = $acin
/*18322*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18324*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPS_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPS_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPS_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_S_W_PH),// ->18354
/*18337*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_S_W_PH' chained node
/*18338*/   OPC_RecordChild1, // #1 = $rs
/*18339*/   OPC_RecordChild2, // #2 = $rt
/*18340*/   OPC_RecordChild3, // #3 = $acin
/*18341*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18343*/   OPC_EmitMergeInputChains1_0,
/*18344*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPAQX_SA_W_PH),// ->18374
/*18357*/   OPC_RecordNode,   // #0 = 'MipsDPAQX_SA_W_PH' chained node
/*18358*/   OPC_RecordChild1, // #1 = $rs
/*18359*/   OPC_RecordChild2, // #2 = $rt
/*18360*/   OPC_RecordChild3, // #3 = $acin
/*18361*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18363*/   OPC_EmitMergeInputChains1_0,
/*18364*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPAQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPAX_W_PH),// ->18392
/*18377*/   OPC_RecordChild0, // #0 = $rs
/*18378*/   OPC_RecordChild1, // #1 = $rt
/*18379*/   OPC_RecordChild2, // #2 = $acin
/*18380*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18382*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPAX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPAX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPAX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::DPSX_W_PH),// ->18410
/*18395*/   OPC_RecordChild0, // #0 = $rs
/*18396*/   OPC_RecordChild1, // #1 = $rt
/*18397*/   OPC_RecordChild2, // #2 = $acin
/*18398*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18400*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSX_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsDPSX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSX_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_S_W_PH),// ->18430
/*18413*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_S_W_PH' chained node
/*18414*/   OPC_RecordChild1, // #1 = $rs
/*18415*/   OPC_RecordChild2, // #2 = $rt
/*18416*/   OPC_RecordChild3, // #3 = $acin
/*18417*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18419*/   OPC_EmitMergeInputChains1_0,
/*18420*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_S_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_S_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 17,  TARGET_VAL(MipsISD::DPSQX_SA_W_PH),// ->18450
/*18433*/   OPC_RecordNode,   // #0 = 'MipsDPSQX_SA_W_PH' chained node
/*18434*/   OPC_RecordChild1, // #1 = $rs
/*18435*/   OPC_RecordChild2, // #2 = $rt
/*18436*/   OPC_RecordChild3, // #3 = $acin
/*18437*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18439*/   OPC_EmitMergeInputChains1_0,
/*18440*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DPSQX_SA_W_PH), 0|OPFL_Chain,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 1, 2, 3, 
            // Src: (MipsDPSQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (DPSQX_SA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MipsISD::MULSA_W_PH),// ->18468
/*18453*/   OPC_RecordChild0, // #0 = $rs
/*18454*/   OPC_RecordChild1, // #1 = $rt
/*18455*/   OPC_RecordChild2, // #2 = $acin
/*18456*/   OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*18458*/   OPC_MorphNodeTo, TARGET_VAL(Mips::MULSA_W_PH), 0,
                1/*#VTs*/, MVT::Untyped, 3/*#Ops*/, 0, 1, 2, 
            // Src: (MipsMULSA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin) - Complexity = 3
            // Dst: (MULSA_W_PH:Untyped CPURegs:i32:$rs, CPURegs:i32:$rt, ACRegsDSP:Untyped:$acin)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::ADDE),// ->18487
/*18471*/   OPC_CaptureGlueInput,
/*18472*/   OPC_RecordChild0, // #0 = $a
/*18473*/   OPC_RecordChild1, // #1 = $b
/*18474*/   OPC_CheckType, MVT::i32,
/*18476*/   OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*18478*/   OPC_MorphNodeTo, TARGET_VAL(Mips::ADDWC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (adde:i32 i32:i32:$a, i32:i32:$b) - Complexity = 3
            // Dst: (ADDWC:i32 i32:i32:$a, i32:i32:$b)
          /*SwitchOpcode*/ 47,  TARGET_VAL(ISD::BSWAP),// ->18537
/*18490*/   OPC_RecordChild0, // #0 = $rt
/*18491*/   OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->18516
/*18494*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18496*/     OPC_EmitNode, TARGET_VAL(Mips::WSBH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1
/*18504*/     OPC_EmitInteger, MVT::i32, 16, 
/*18507*/     OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (bswap:i32 CPURegs:i32:$rt) - Complexity = 3
              // Dst: (ROTR:i32 (WSBH:i32 CPURegs:i32:$rt), 16:i32)
            /*SwitchType*/ 18,  MVT::i64,// ->18536
/*18518*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18520*/     OPC_EmitNode, TARGET_VAL(Mips::DSBH), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18528*/     OPC_MorphNodeTo, TARGET_VAL(Mips::DSHD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (bswap:i64 CPU64Regs:i64:$rt) - Complexity = 3
              // Dst: (DSHD:i64 (DSBH:i64 CPU64Regs:i64:$rt))
            0, // EndSwitchType
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::FP_TO_SINT),// ->18655
/*18540*/   OPC_RecordChild0, // #0 = $src
/*18541*/   OPC_Scope, 44, /*->18587*/ // 2 children in Scope
/*18543*/     OPC_CheckChild0Type, MVT::f32,
/*18545*/     OPC_SwitchType /*2 cases */, 18,  MVT::i32,// ->18566
/*18548*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18550*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18558*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i32 FGR32:f32:$src) - Complexity = 3
                // Dst: (MFC1:i32 (TRUNC_W_S:f32 FGR32:f32:$src))
              /*SwitchType*/ 18,  MVT::i64,// ->18586
/*18568*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18570*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_S), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*18578*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR32:f32:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_S:f64 FGR32:f32:$src))
              0, // EndSwitchType
/*18587*/   /*Scope*/ 66, /*->18654*/
/*18588*/     OPC_CheckChild0Type, MVT::f64,
/*18590*/     OPC_SwitchType /*2 cases */, 40,  MVT::i32,// ->18633
/*18593*/       OPC_Scope, 18, /*->18613*/ // 2 children in Scope
/*18595*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18597*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D32), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18605*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 AFGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D32:f32 AFGR64:f64:$src))
/*18613*/       /*Scope*/ 18, /*->18632*/
/*18614*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18616*/         OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_D64), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18624*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                  // Src: (fp_to_sint:i32 FGR64:f64:$src) - Complexity = 3
                  // Dst: (MFC1:i32 (TRUNC_W_D64:f32 FGR64:f64:$src))
/*18632*/       0, /*End of Scope*/
              /*SwitchType*/ 18,  MVT::i64,// ->18653
/*18635*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18637*/       OPC_EmitNode, TARGET_VAL(Mips::TRUNC_L_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*18645*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMFC1), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (fp_to_sint:i64 FGR64:f64:$src) - Complexity = 3
                // Dst: (DMFC1:i64 (TRUNC_L_D64:f64 FGR64:f64:$src))
              0, // EndSwitchType
/*18654*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::TRUNCATE),// ->18687
/*18658*/   OPC_RecordChild0, // #0 = $src
/*18659*/   OPC_CheckType, MVT::i32,
/*18661*/   OPC_CheckPatternPredicate, 1, // (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding())
/*18663*/   OPC_EmitInteger, MVT::i32, Mips::sub_32,
/*18666*/   OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2
/*18675*/   OPC_EmitInteger, MVT::i32, 0, 
/*18678*/   OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
            // Src: (trunc:i32 CPU64Regs:i64:$src) - Complexity = 3
            // Dst: (SLL:i32 (EXTRACT_SUBREG:i32 CPU64Regs:i64:$src, sub_32:i32), 0:i32)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::ZERO_EXTEND),// ->18717
/*18690*/   OPC_RecordChild0, // #0 = $src
/*18691*/   OPC_CheckChild0Type, MVT::i32,
/*18693*/   OPC_CheckType, MVT::i64,
/*18695*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18697*/   OPC_EmitNode, TARGET_VAL(Mips::DSLL64_32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*18705*/   OPC_EmitInteger, MVT::i32, 32, 
/*18708*/   OPC_MorphNodeTo, TARGET_VAL(Mips::DSRL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (zext:i64 CPURegs:i32:$src) - Complexity = 3
            // Dst: (DSRL:i64 (DSLL64_32:i64 CPURegs:i32:$src), 32:i32)
          /*SwitchOpcode*/ 34|128,1/*162*/,  TARGET_VAL(ISD::FADD),// ->18883
/*18721*/   OPC_Scope, 55, /*->18778*/ // 2 children in Scope
/*18723*/     OPC_MoveChild, 0,
/*18725*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18728*/     OPC_RecordChild0, // #0 = $fs
/*18729*/     OPC_RecordChild1, // #1 = $ft
/*18730*/     OPC_MoveParent,
/*18731*/     OPC_RecordChild1, // #2 = $fr
/*18732*/     OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18747
/*18735*/       OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18737*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fadd:f32 (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft), FGR32:f32:$fr) - Complexity = 6
                // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
              /*SwitchType*/ 28,  MVT::f64,// ->18777
/*18749*/       OPC_Scope, 12, /*->18763*/ // 2 children in Scope
/*18751*/         OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18753*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft), AFGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18763*/       /*Scope*/ 12, /*->18776*/
/*18764*/         OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18766*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft), FGR64:f64:$fr) - Complexity = 6
                  // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18776*/       0, /*End of Scope*/
              0, // EndSwitchType
/*18778*/   /*Scope*/ 103, /*->18882*/
/*18779*/     OPC_RecordChild0, // #0 = $fr
/*18780*/     OPC_Scope, 54, /*->18836*/ // 2 children in Scope
/*18782*/       OPC_MoveChild, 1,
/*18784*/       OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*18787*/       OPC_RecordChild0, // #1 = $fs
/*18788*/       OPC_RecordChild1, // #2 = $ft
/*18789*/       OPC_MoveParent,
/*18790*/       OPC_SwitchType /*2 cases */, 12,  MVT::f32,// ->18805
/*18793*/         OPC_CheckPatternPredicate, 18, // (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding())
/*18795*/         OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_S), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FGR32:f32:$fr, (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft)) - Complexity = 6
                  // Dst: (MADD_S:f32 FGR32:f32:$fr, FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 28,  MVT::f64,// ->18835
/*18807*/         OPC_Scope, 12, /*->18821*/ // 2 children in Scope
/*18809*/           OPC_CheckPatternPredicate, 19, // (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18811*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 AFGR64:f64:$fr, (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D32:f64 AFGR64:f64:$fr, AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18821*/         /*Scope*/ 12, /*->18834*/
/*18822*/           OPC_CheckPatternPredicate, 20, // (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18824*/           OPC_MorphNodeTo, TARGET_VAL(Mips::MADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fadd:f64 FGR64:f64:$fr, (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft)) - Complexity = 6
                    // Dst: (MADD_D64:f64 FGR64:f64:$fr, FGR64:f64:$fs, FGR64:f64:$ft)
/*18834*/         0, /*End of Scope*/
                0, // EndSwitchType
/*18836*/     /*Scope*/ 44, /*->18881*/
/*18837*/       OPC_RecordChild1, // #1 = $ft
/*18838*/       OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->18852
/*18841*/         OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18843*/         OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
                  // Dst: (FADD_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
                /*SwitchType*/ 26,  MVT::f64,// ->18880
/*18854*/         OPC_Scope, 11, /*->18867*/ // 2 children in Scope
/*18856*/           OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18858*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*18867*/         /*Scope*/ 11, /*->18879*/
/*18868*/           OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18870*/           OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D64), 0,
                        1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                    // Src: (fadd:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                    // Dst: (FADD_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*18879*/         0, /*End of Scope*/
                0, // EndSwitchType
/*18881*/     0, /*End of Scope*/
/*18882*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ConstantFP),// ->18974
/*18886*/   OPC_Scope, 34, /*->18922*/ // 2 children in Scope
/*18888*/     OPC_CheckPredicate, 30, // Predicate_fpimm0
/*18890*/     OPC_SwitchType /*2 cases */, 13,  MVT::f32,// ->18906
/*18893*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18895*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*18898*/       OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (MTC1:f32 ZERO:i32)
              /*SwitchType*/ 13,  MVT::f64,// ->18921
/*18908*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18910*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*18913*/       OPC_MorphNodeTo, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (DMTC1:f64 ZERO_64:i64)
              0, // EndSwitchType
/*18922*/   /*Scope*/ 50, /*->18973*/
/*18923*/     OPC_CheckPredicate, 67, // Predicate_fpimm0neg
/*18925*/     OPC_SwitchType /*2 cases */, 21,  MVT::f32,// ->18949
/*18928*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*18930*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*18933*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*18941*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_S:f32 (MTC1:f32 ZERO:i32))
              /*SwitchType*/ 21,  MVT::f64,// ->18972
/*18951*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*18953*/       OPC_EmitRegister, MVT::i64, Mips::ZERO_64,
/*18956*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*18964*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0neg>> - Complexity = 4
                // Dst: (FNEG_D64:f64 (DMTC1:f64 ZERO_64:i64))
              0, // EndSwitchType
/*18973*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FABS),// ->19016
/*18977*/   OPC_RecordChild0, // #0 = $fs
/*18978*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->18991
/*18981*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18983*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19015
/*18993*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*18995*/     OPC_Scope, 8, /*->19005*/ // 2 children in Scope
/*18997*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
/*19005*/     /*Scope*/ 8, /*->19014*/
/*19006*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fabs:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FABS_D64:f64 FGR64:f64:$fs)
/*19014*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FNEG),// ->19058
/*19019*/   OPC_RecordChild0, // #0 = $fs
/*19020*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19033
/*19023*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19025*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 22,  MVT::f64,// ->19057
/*19035*/     OPC_CheckPatternPredicate, 26, // (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding())
/*19037*/     OPC_Scope, 8, /*->19047*/ // 2 children in Scope
/*19039*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
/*19047*/     /*Scope*/ 8, /*->19056*/
/*19048*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FNEG_D64:f64 FGR64:f64:$fs)
/*19056*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::FSQRT),// ->19102
/*19061*/   OPC_RecordChild0, // #0 = $fs
/*19062*/   OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->19075
/*19065*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19067*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S:f32 FGR32:f32:$fs)
            /*SwitchType*/ 24,  MVT::f64,// ->19101
/*19077*/     OPC_Scope, 10, /*->19089*/ // 2 children in Scope
/*19079*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19081*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
/*19089*/     /*Scope*/ 10, /*->19100*/
/*19090*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19092*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D64), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FGR64:f64:$fs) - Complexity = 3
                // Dst: (FSQRT_D64:f64 FGR64:f64:$fs)
/*19100*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FDIV),// ->19150
/*19105*/   OPC_RecordChild0, // #0 = $fs
/*19106*/   OPC_RecordChild1, // #1 = $ft
/*19107*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19121
/*19110*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19112*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19149
/*19123*/     OPC_Scope, 11, /*->19136*/ // 2 children in Scope
/*19125*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19127*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*19136*/     /*Scope*/ 11, /*->19148*/
/*19137*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19139*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FDIV_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*19148*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->19198
/*19153*/   OPC_RecordChild0, // #0 = $fs
/*19154*/   OPC_RecordChild1, // #1 = $ft
/*19155*/   OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->19169
/*19158*/     OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19160*/     OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 26,  MVT::f64,// ->19197
/*19171*/     OPC_Scope, 11, /*->19184*/ // 2 children in Scope
/*19173*/       OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19175*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
/*19184*/     /*Scope*/ 11, /*->19196*/
/*19185*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19187*/       OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D64), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FGR64:f64:$fs, FGR64:f64:$ft) - Complexity = 3
                // Dst: (FMUL_D64:f64 FGR64:f64:$fs, FGR64:f64:$ft)
/*19196*/     0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(MipsISD::BuildPairF64),// ->19214
/*19201*/   OPC_RecordChild0, // #0 = $lo
/*19202*/   OPC_RecordChild1, // #1 = $hi
/*19203*/   OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19205*/   OPC_MorphNodeTo, TARGET_VAL(Mips::BuildPairF64), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (MipsBuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi) - Complexity = 3
            // Dst: (BuildPairF64:f64 CPURegs:i32:$lo, CPURegs:i32:$hi)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_ROUND),// ->19242
/*19217*/   OPC_RecordChild0, // #0 = $src
/*19218*/   OPC_Scope, 10, /*->19230*/ // 2 children in Scope
/*19220*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19222*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D32:f32 AFGR64:f64:$src)
/*19230*/   /*Scope*/ 10, /*->19241*/
/*19231*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19233*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_D64), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fround:f32 FGR64:f64:$src) - Complexity = 3
              // Dst: (CVT_S_D64:f32 FGR64:f64:$src)
/*19241*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FP_EXTEND),// ->19270
/*19245*/   OPC_RecordChild0, // #0 = $src
/*19246*/   OPC_Scope, 10, /*->19258*/ // 2 children in Scope
/*19248*/     OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19250*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D32_S:f64 FGR32:f32:$src)
/*19258*/   /*Scope*/ 10, /*->19269*/
/*19259*/     OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19261*/     OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_S), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
              // Dst: (CVT_D64_S:f64 FGR32:f32:$src)
/*19269*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 115,  TARGET_VAL(ISD::SINT_TO_FP),// ->19388
/*19273*/   OPC_RecordChild0, // #0 = $src
/*19274*/   OPC_Scope, 66, /*->19342*/ // 2 children in Scope
/*19276*/     OPC_CheckChild0Type, MVT::i32,
/*19278*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->19299
/*19281*/       OPC_CheckPatternPredicate, 9, // (Subtarget.hasStandardEncoding())
/*19283*/       OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19291*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_W), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
                // Dst: (CVT_S_W:f32 (MTC1:f32 CPURegs:i32:$src))
              /*SwitchType*/ 40,  MVT::f64,// ->19341
/*19301*/       OPC_Scope, 18, /*->19321*/ // 2 children in Scope
/*19303*/         OPC_CheckPatternPredicate, 13, // (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19305*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19313*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D32_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D32_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*19321*/       /*Scope*/ 18, /*->19340*/
/*19322*/         OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19324*/         OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1
/*19332*/         OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_W), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                  // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
                  // Dst: (CVT_D64_W:f64 (MTC1:f32 CPURegs:i32:$src))
/*19340*/       0, /*End of Scope*/
              0, // EndSwitchType
/*19342*/   /*Scope*/ 44, /*->19387*/
/*19343*/     OPC_CheckChild0Type, MVT::i64,
/*19345*/     OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->19366
/*19348*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19350*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19358*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_S_L), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f32 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_S_L:f32 (DMTC1:f64 CPU64Regs:i64:$src))
              /*SwitchType*/ 18,  MVT::f64,// ->19386
/*19368*/       OPC_CheckPatternPredicate, 14, // (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding())
/*19370*/       OPC_EmitNode, TARGET_VAL(Mips::DMTC1), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0,  // Results = #1
/*19378*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CVT_D64_L), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
                // Src: (sint_to_fp:f64 CPU64Regs:i64:$src) - Complexity = 3
                // Dst: (CVT_D64_L:f64 (DMTC1:f64 CPU64Regs:i64:$src))
              0, // EndSwitchType
/*19387*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHLL_DSP),// ->19431
/*19391*/   OPC_RecordChild0, // #0 = $a
/*19392*/   OPC_RecordChild1, // #1 = $shamt
/*19393*/   OPC_MoveChild, 1,
/*19395*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19398*/   OPC_MoveParent,
/*19399*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19415
/*19402*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19404*/     OPC_EmitConvertToTarget, 1,
/*19406*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19430
/*19417*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19419*/     OPC_EmitConvertToTarget, 1,
/*19421*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHLL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHLL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHLL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRA_DSP),// ->19474
/*19434*/   OPC_RecordChild0, // #0 = $a
/*19435*/   OPC_RecordChild1, // #1 = $shamt
/*19436*/   OPC_MoveChild, 1,
/*19438*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19441*/   OPC_MoveParent,
/*19442*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19458
/*19445*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19447*/     OPC_EmitConvertToTarget, 1,
/*19449*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19473
/*19460*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19462*/     OPC_EmitConvertToTarget, 1,
/*19464*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRA_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRA_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRA_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(MipsISD::SHRL_DSP),// ->19517
/*19477*/   OPC_RecordChild0, // #0 = $a
/*19478*/   OPC_RecordChild1, // #1 = $shamt
/*19479*/   OPC_MoveChild, 1,
/*19481*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19484*/   OPC_MoveParent,
/*19485*/   OPC_SwitchType /*2 cases */, 13,  MVT::v2i16,// ->19501
/*19488*/     OPC_CheckPatternPredicate, 10, // (Subtarget.hasDSPR2())
/*19490*/     OPC_EmitConvertToTarget, 1,
/*19492*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_PH), 0,
                  1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_PH:v2i16 v2i16:v2i16:$a, (imm:i32):$shamt)
            /*SwitchType*/ 13,  MVT::v4i8,// ->19516
/*19503*/     OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19505*/     OPC_EmitConvertToTarget, 1,
/*19507*/     OPC_MorphNodeTo, TARGET_VAL(Mips::SHRL_QB), 0,
                  1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 2, 
              // Src: (MipsSHRL_DSP:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt) - Complexity = 6
              // Dst: (SHRL_QB:v4i8 v4i8:v4i8:$a, (imm:i32):$shamt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 93|128,2/*349*/,  TARGET_VAL(MipsISD::SELECT_CC_DSP),// ->19870
/*19521*/   OPC_RecordChild0, // #0 = $a
/*19522*/   OPC_Scope, 43|128,1/*171*/, /*->19696*/ // 2 children in Scope
/*19525*/     OPC_CheckChild0Type, MVT::v2i16,
/*19527*/     OPC_RecordChild1, // #1 = $b
/*19528*/     OPC_RecordChild2, // #2 = $c
/*19529*/     OPC_RecordChild3, // #3 = $d
/*19530*/     OPC_MoveChild, 4,
/*19532*/     OPC_Scope, 26, /*->19560*/ // 6 children in Scope
/*19534*/       OPC_CheckCondCode, ISD::SETEQ,
/*19536*/       OPC_MoveParent,
/*19537*/       OPC_CheckType, MVT::v2i16,
/*19539*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19541*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19550*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19560*/     /*Scope*/ 26, /*->19587*/
/*19561*/       OPC_CheckCondCode, ISD::SETLT,
/*19563*/       OPC_MoveParent,
/*19564*/       OPC_CheckType, MVT::v2i16,
/*19566*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19568*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19577*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19587*/     /*Scope*/ 26, /*->19614*/
/*19588*/       OPC_CheckCondCode, ISD::SETLE,
/*19590*/       OPC_MoveParent,
/*19591*/       OPC_CheckType, MVT::v2i16,
/*19593*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19595*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19604*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$c, ?:v2i16:$d)
/*19614*/     /*Scope*/ 26, /*->19641*/
/*19615*/       OPC_CheckCondCode, ISD::SETNE,
/*19617*/       OPC_MoveParent,
/*19618*/       OPC_CheckType, MVT::v2i16,
/*19620*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19622*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19631*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19641*/     /*Scope*/ 26, /*->19668*/
/*19642*/       OPC_CheckCondCode, ISD::SETGE,
/*19644*/       OPC_MoveParent,
/*19645*/       OPC_CheckType, MVT::v2i16,
/*19647*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19649*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19658*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19668*/     /*Scope*/ 26, /*->19695*/
/*19669*/       OPC_CheckCondCode, ISD::SETGT,
/*19671*/       OPC_MoveParent,
/*19672*/       OPC_CheckType, MVT::v2i16,
/*19674*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19676*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #4
/*19685*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, v2i16:v2i16:$c, v2i16:v2i16:$d, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ?:v2i16:$d, ?:v2i16:$c)
/*19695*/     0, /*End of Scope*/
/*19696*/   /*Scope*/ 43|128,1/*171*/, /*->19869*/
/*19698*/     OPC_CheckChild0Type, MVT::v4i8,
/*19700*/     OPC_RecordChild1, // #1 = $b
/*19701*/     OPC_RecordChild2, // #2 = $c
/*19702*/     OPC_RecordChild3, // #3 = $d
/*19703*/     OPC_MoveChild, 4,
/*19705*/     OPC_Scope, 26, /*->19733*/ // 6 children in Scope
/*19707*/       OPC_CheckCondCode, ISD::SETEQ,
/*19709*/       OPC_MoveParent,
/*19710*/       OPC_CheckType, MVT::v4i8,
/*19712*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19714*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19723*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19733*/     /*Scope*/ 26, /*->19760*/
/*19734*/       OPC_CheckCondCode, ISD::SETULT,
/*19736*/       OPC_MoveParent,
/*19737*/       OPC_CheckType, MVT::v4i8,
/*19739*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19741*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19750*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19760*/     /*Scope*/ 26, /*->19787*/
/*19761*/       OPC_CheckCondCode, ISD::SETULE,
/*19763*/       OPC_MoveParent,
/*19764*/       OPC_CheckType, MVT::v4i8,
/*19766*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19768*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19777*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 2, 3, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$c, ?:v4i8:$d)
/*19787*/     /*Scope*/ 26, /*->19814*/
/*19788*/       OPC_CheckCondCode, ISD::SETNE,
/*19790*/       OPC_MoveParent,
/*19791*/       OPC_CheckType, MVT::v4i8,
/*19793*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19795*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19804*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*19814*/     /*Scope*/ 26, /*->19841*/
/*19815*/       OPC_CheckCondCode, ISD::SETUGE,
/*19817*/       OPC_MoveParent,
/*19818*/       OPC_CheckType, MVT::v4i8,
/*19820*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19822*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19831*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*19841*/     /*Scope*/ 26, /*->19868*/
/*19842*/       OPC_CheckCondCode, ISD::SETUGT,
/*19844*/       OPC_MoveParent,
/*19845*/       OPC_CheckType, MVT::v4i8,
/*19847*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19849*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #4
/*19858*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 4, 3, 2, 
                // Src: (MipsSELECT_CC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, v4i8:v4i8:$c, v4i8:v4i8:$d, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ?:v4i8:$d, ?:v4i8:$c)
/*19868*/     0, /*End of Scope*/
/*19869*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,6/*813*/,  TARGET_VAL(MipsISD::SETCC_DSP),// ->20687
/*19874*/   OPC_RecordChild0, // #0 = $a
/*19875*/   OPC_Scope, 19|128,3/*403*/, /*->20281*/ // 2 children in Scope
/*19878*/     OPC_CheckChild0Type, MVT::v2i16,
/*19880*/     OPC_RecordChild1, // #1 = $b
/*19881*/     OPC_MoveChild, 2,
/*19883*/     OPC_Scope, 65, /*->19950*/ // 6 children in Scope
/*19885*/       OPC_CheckCondCode, ISD::SETEQ,
/*19887*/       OPC_MoveParent,
/*19888*/       OPC_CheckType, MVT::v2i16,
/*19890*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19892*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*19901*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*19904*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19916*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*19925*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*19928*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*19937*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*19940*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*19950*/     /*Scope*/ 65, /*->20016*/
/*19951*/       OPC_CheckCondCode, ISD::SETLT,
/*19953*/       OPC_MoveParent,
/*19954*/       OPC_CheckType, MVT::v2i16,
/*19956*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*19958*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*19967*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*19970*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*19982*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*19991*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*19994*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20003*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20006*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20016*/     /*Scope*/ 65, /*->20082*/
/*20017*/       OPC_CheckCondCode, ISD::SETLE,
/*20019*/       OPC_MoveParent,
/*20020*/       OPC_CheckType, MVT::v2i16,
/*20022*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20024*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20033*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20036*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20048*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20057*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20060*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 5, 6,  // Results = #7
/*20069*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20072*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETLE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v2i16)
/*20082*/     /*Scope*/ 65, /*->20148*/
/*20083*/       OPC_CheckCondCode, ISD::SETNE,
/*20085*/       OPC_MoveParent,
/*20086*/       OPC_CheckType, MVT::v2i16,
/*20088*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20090*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_EQ_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20099*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20102*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20105*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20117*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20126*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20129*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20138*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_EQ_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20148*/     /*Scope*/ 65, /*->20214*/
/*20149*/       OPC_CheckCondCode, ISD::SETGE,
/*20151*/       OPC_MoveParent,
/*20152*/       OPC_CheckType, MVT::v2i16,
/*20154*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20156*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LT_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20165*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20168*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20171*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20183*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20192*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20195*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20204*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LT_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20214*/     /*Scope*/ 65, /*->20280*/
/*20215*/       OPC_CheckCondCode, ISD::SETGT,
/*20217*/       OPC_MoveParent,
/*20218*/       OPC_CheckType, MVT::v2i16,
/*20220*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20222*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMP_LE_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 0, 1,  // Results = #2
/*20231*/       OPC_EmitRegister, MVT::v2i16, Mips::ZERO,
/*20234*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20237*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20249*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20258*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20261*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v2i16, 2/*#Ops*/, 6, 7,  // Results = #8
/*20270*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_PH), 0,
                    1/*#VTs*/, MVT::v2i16, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b, SETGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_PH:v2i16 (PseudoCMP_LE_PH:v2i16 v2i16:v2i16:$a, v2i16:v2i16:$b), ZERO:v2i16, (COPY_TO_REGCLASS:v2i16 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20280*/     0, /*End of Scope*/
/*20281*/   /*Scope*/ 19|128,3/*403*/, /*->20686*/
/*20283*/     OPC_CheckChild0Type, MVT::v4i8,
/*20285*/     OPC_RecordChild1, // #1 = $b
/*20286*/     OPC_MoveChild, 2,
/*20288*/     OPC_Scope, 65, /*->20355*/ // 6 children in Scope
/*20290*/       OPC_CheckCondCode, ISD::SETEQ,
/*20292*/       OPC_MoveParent,
/*20293*/       OPC_CheckType, MVT::v4i8,
/*20295*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20297*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20306*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20309*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20321*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20330*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20333*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20342*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20345*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETEQ:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20355*/     /*Scope*/ 65, /*->20421*/
/*20356*/       OPC_CheckCondCode, ISD::SETULT,
/*20358*/       OPC_MoveParent,
/*20359*/       OPC_CheckType, MVT::v4i8,
/*20361*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20363*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20372*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20375*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20387*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20396*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20399*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20408*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20411*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20421*/     /*Scope*/ 65, /*->20487*/
/*20422*/       OPC_CheckCondCode, ISD::SETULE,
/*20424*/       OPC_MoveParent,
/*20425*/       OPC_CheckType, MVT::v4i8,
/*20427*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20429*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20438*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20441*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20453*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4,  // Results = #5
/*20462*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20465*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 5, 6,  // Results = #7
/*20474*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20477*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 7, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETULE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32), ZERO:v4i8)
/*20487*/     /*Scope*/ 65, /*->20553*/
/*20488*/       OPC_CheckCondCode, ISD::SETNE,
/*20490*/       OPC_MoveParent,
/*20491*/       OPC_CheckType, MVT::v4i8,
/*20493*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20495*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_EQ_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20504*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20507*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20510*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20522*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20531*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20534*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20543*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETNE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_EQ_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20553*/     /*Scope*/ 65, /*->20619*/
/*20554*/       OPC_CheckCondCode, ISD::SETUGE,
/*20556*/       OPC_MoveParent,
/*20557*/       OPC_CheckType, MVT::v4i8,
/*20559*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20561*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LT_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20570*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20573*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20576*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20588*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20597*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20600*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20609*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGE:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LT_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20619*/     /*Scope*/ 65, /*->20685*/
/*20620*/       OPC_CheckCondCode, ISD::SETUGT,
/*20622*/       OPC_MoveParent,
/*20623*/       OPC_CheckType, MVT::v4i8,
/*20625*/       OPC_CheckPatternPredicate, 2, // (Subtarget.hasDSP())
/*20627*/       OPC_EmitNode, TARGET_VAL(Mips::PseudoCMPU_LE_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 0, 1,  // Results = #2
/*20636*/       OPC_EmitRegister, MVT::v4i8, Mips::ZERO,
/*20639*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*20642*/       OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*20654*/       OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 5,  // Results = #6
/*20663*/       OPC_EmitInteger, MVT::i32, Mips::DSPRegsRegClassID,
/*20666*/       OPC_EmitNode, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                    1/*#VTs*/, MVT::v4i8, 2/*#Ops*/, 6, 7,  // Results = #8
/*20675*/       OPC_MorphNodeTo, TARGET_VAL(Mips::PseudoPICK_QB), 0,
                    1/*#VTs*/, MVT::v4i8, 3/*#Ops*/, 2, 3, 8, 
                // Src: (MipsSETCC_DSP:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b, SETUGT:Other) - Complexity = 3
                // Dst: (PseudoPICK_QB:v4i8 (PseudoCMPU_LE_QB:v4i8 v4i8:v4i8:$a, v4i8:v4i8:$b), ZERO:v4i8, (COPY_TO_REGCLASS:v4i8 (ADDiu:i32 ZERO:i32, -1:i32), DSPRegs:i32))
/*20685*/     0, /*End of Scope*/
/*20686*/   0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 20689 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 272
  // #OPC_RecordNode                     = 53
  // #OPC_RecordChild                    = 801
  // #OPC_RecordMemRef                   = 18
  // #OPC_CaptureGlueInput               = 9
  // #OPC_MoveChild                      = 191
  // #OPC_MoveParent                     = 698
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 881
  // #OPC_CheckPredicate                 = 259
  // #OPC_CheckOpcode                    = 115
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 407
  // #OPC_SwitchType                     = 110
  // #OPC_CheckChildType                 = 90
  // #OPC_CheckInteger                   = 112
  // #OPC_CheckCondCode                  = 222
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 121
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 42
  // #OPC_EmitStringInteger              = 21
  // #OPC_EmitRegister                   = 66
  // #OPC_EmitConvertToTarget            = 144
  // #OPC_EmitMergeInputChains           = 353
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 211
  // #OPC_EmitNodeXForm                  = 32
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 888

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 1: return (Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 2: return (Subtarget.hasDSP());
  case 3: return (Subtarget.inMips16Mode());
  case 4: return (!Subtarget.isABI_N64()) && (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 5: return (!Subtarget.isABI_N64()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 6: return (Subtarget.hasFPIdx()) && (Subtarget.hasStandardEncoding());
  case 7: return (Subtarget.hasMips32r2()) && (!Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 8: return (Subtarget.hasMips64()) && (!Subtarget.isABI_N64()) && (Subtarget.hasStandardEncoding());
  case 9: return (Subtarget.hasStandardEncoding());
  case 10: return (Subtarget.hasDSPR2());
  case 11: return (Subtarget.hasBitCount()) && (Subtarget.hasStandardEncoding());
  case 12: return (Subtarget.hasMips64()) && (Subtarget.hasStandardEncoding());
  case 13: return (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 14: return (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 15: return (Subtarget.hasMips32r2()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 16: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 17: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  case 18: return (Subtarget.hasMips32r2()) && (Subtarget.hasStandardEncoding());
  case 19: return (Subtarget.hasMips32r2()) && (!Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 20: return (Subtarget.hasMips32r2()) && (Subtarget.isFP64bit()) && (Subtarget.hasStandardEncoding());
  case 21: return (Subtarget.hasMips64r2()) && (Subtarget.hasStandardEncoding());
  case 22: return (Subtarget.hasStandardEncoding()) && (!Subtarget.hasDSP());
  case 23: return (TM.getRelocationModel() == Reloc::Static) && (Subtarget.hasStandardEncoding());
  case 24: return (TM.getRelocationModel() == Reloc::PIC_) && (Subtarget.hasStandardEncoding());
  case 25: return (Subtarget.hasSEInReg()) && (Subtarget.hasStandardEncoding());
  case 26: return (TM.Options.NoNaNsFPMath) && (Subtarget.hasStandardEncoding());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 2: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 3: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 4: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 6: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 9: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 13: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 14: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 18: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 19: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 20: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 21: { // Predicate_immZExt5
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x1f);
  }
  case 22: { // Predicate_immZExt10
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<10>(Imm);
  }
  case 23: { // Predicate_immZExt4
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<4>(Imm);
  }
  case 24: { // Predicate_immZExt3
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<3>(Imm);
  }
  case 25: { // Predicate_immZExt2
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<2>(Imm);
  }
  case 26: { // Predicate_immZExt8
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isUInt<8>(Imm);
  }
  case 27: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 28: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 29: { // Predicate_immSExt16Plus1
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<17>(N->getSExtValue()) && isInt<16>(N->getSExtValue() + 1);

  }
  case 30: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 31: { // Predicate_immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<8>(N->getSExtValue()); 
  }
  case 32: { // Predicate_immZExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return Imm == (Imm & 0x3f);
  }
  case 33: { // Predicate_immSExt6
    int64_t Imm = cast<ConstantSDNode>(Node)->getSExtValue();
return isInt<6>(Imm);
  }
  case 34: { // Predicate_immLow16Zero
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  int64_t Val = N->getSExtValue();
  return isInt<32>(Val) && !(Val & 0xffff);

  }
  case 35: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 36: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 37: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 38: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 39: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 40: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 41: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 42: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 43: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 44: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 45: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 46: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 47: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 48: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 49: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 50: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 51: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 52: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 53: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 54: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 55: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 56: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 57: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 58: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 59: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 60: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 61: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 62: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 63: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 64: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 65: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 66: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 67: { // Predicate_fpimm0neg
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

  }
  }
}

virtual bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                                 SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return selectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+3);
    return selectAddr16(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+2);
    return selectIntAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return selectAddrDefault(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // Plus1
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());
 return getImm(N, N->getSExtValue() + 1); 
  }
  case 2: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getImm(N, (N->getZExtValue() >> 16) & 0xFFFF);

  }
  }
}

