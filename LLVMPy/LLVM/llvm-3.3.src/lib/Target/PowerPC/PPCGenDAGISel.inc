/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the PPC target                                 *|
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
/*0*/     OPC_SwitchOpcode /*127 cases */, 33,  TARGET_VAL(ISD::PREFETCH),// ->37
/*4*/       OPC_RecordMemRef,
/*5*/       OPC_RecordNode,   // #0 = 'prefetch' chained node
/*6*/       OPC_RecordChild1, // #1 = $dst
/*7*/       OPC_MoveChild, 2,
/*9*/       OPC_CheckInteger, 0, 
/*11*/      OPC_CheckType, MVT::i32,
/*13*/      OPC_MoveParent,
/*14*/      OPC_MoveChild, 3,
/*16*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*19*/      OPC_MoveParent,
/*20*/      OPC_MoveChild, 4,
/*22*/      OPC_CheckInteger, 1, 
/*24*/      OPC_MoveParent,
/*25*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*28*/      OPC_EmitMergeInputChains1_0,
/*29*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain|OPFL_MemRefs,
                0/*#VTs*/, 2/*#Ops*/, 2, 3, 
            // Src: (prefetch xoaddr:iPTR:$dst, 0:i32, (imm:i32), 1:i32) - Complexity = 25
            // Dst: (DCBT xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 105|128,4/*617*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->658
/*41*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*42*/      OPC_MoveChild, 1,
/*44*/      OPC_Scope, 17, /*->63*/ // 21 children in Scope
/*46*/        OPC_CheckInteger, 71|128,12/*1607*/, 
/*49*/        OPC_MoveParent,
/*50*/        OPC_RecordChild2, // #1 = $dst
/*51*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*54*/        OPC_EmitMergeInputChains1_0,
/*55*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1607:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*63*/      /*Scope*/ 17, /*->81*/
/*64*/        OPC_CheckInteger, 72|128,12/*1608*/, 
/*67*/        OPC_MoveParent,
/*68*/        OPC_RecordChild2, // #1 = $dst
/*69*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*72*/        OPC_EmitMergeInputChains1_0,
/*73*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1608:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*81*/      /*Scope*/ 17, /*->99*/
/*82*/        OPC_CheckInteger, 73|128,12/*1609*/, 
/*85*/        OPC_MoveParent,
/*86*/        OPC_RecordChild2, // #1 = $dst
/*87*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*90*/        OPC_EmitMergeInputChains1_0,
/*91*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1609:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*99*/      /*Scope*/ 17, /*->117*/
/*100*/       OPC_CheckInteger, 74|128,12/*1610*/, 
/*103*/       OPC_MoveParent,
/*104*/       OPC_RecordChild2, // #1 = $dst
/*105*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*108*/       OPC_EmitMergeInputChains1_0,
/*109*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1610:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*117*/     /*Scope*/ 17, /*->135*/
/*118*/       OPC_CheckInteger, 75|128,12/*1611*/, 
/*121*/       OPC_MoveParent,
/*122*/       OPC_RecordChild2, // #1 = $dst
/*123*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*126*/       OPC_EmitMergeInputChains1_0,
/*127*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1611:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*135*/     /*Scope*/ 17, /*->153*/
/*136*/       OPC_CheckInteger, 76|128,12/*1612*/, 
/*139*/       OPC_MoveParent,
/*140*/       OPC_RecordChild2, // #1 = $dst
/*141*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*144*/       OPC_EmitMergeInputChains1_0,
/*145*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1612:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*153*/     /*Scope*/ 17, /*->171*/
/*154*/       OPC_CheckInteger, 77|128,12/*1613*/, 
/*157*/       OPC_MoveParent,
/*158*/       OPC_RecordChild2, // #1 = $dst
/*159*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*162*/       OPC_EmitMergeInputChains1_0,
/*163*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1613:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*171*/     /*Scope*/ 17, /*->189*/
/*172*/       OPC_CheckInteger, 78|128,12/*1614*/, 
/*175*/       OPC_MoveParent,
/*176*/       OPC_RecordChild2, // #1 = $dst
/*177*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*180*/       OPC_EmitMergeInputChains1_0,
/*181*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 1614:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*189*/     /*Scope*/ 21, /*->211*/
/*190*/       OPC_CheckInteger, 67|128,11/*1475*/, 
/*193*/       OPC_MoveParent,
/*194*/       OPC_RecordChild2, // #1 = $rS
/*195*/       OPC_RecordChild3, // #2 = $dst
/*196*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*198*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*201*/       OPC_EmitMergeInputChains1_0,
/*202*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1475:iPTR, v16i8:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX v16i8:v16i8:$rS, xoaddr:iPTR:$dst)
/*211*/     /*Scope*/ 21, /*->233*/
/*212*/       OPC_CheckInteger, 68|128,11/*1476*/, 
/*215*/       OPC_MoveParent,
/*216*/       OPC_RecordChild2, // #1 = $rS
/*217*/       OPC_RecordChild3, // #2 = $dst
/*218*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*220*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*223*/       OPC_EmitMergeInputChains1_0,
/*224*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1476:iPTR, v8i16:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX v8i16:v8i16:$rS, xoaddr:iPTR:$dst)
/*233*/     /*Scope*/ 21, /*->255*/
/*234*/       OPC_CheckInteger, 69|128,11/*1477*/, 
/*237*/       OPC_MoveParent,
/*238*/       OPC_RecordChild2, // #1 = $rS
/*239*/       OPC_RecordChild3, // #2 = $dst
/*240*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*242*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*245*/       OPC_EmitMergeInputChains1_0,
/*246*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1477:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*255*/     /*Scope*/ 21, /*->277*/
/*256*/       OPC_CheckInteger, 70|128,11/*1478*/, 
/*259*/       OPC_MoveParent,
/*260*/       OPC_RecordChild2, // #1 = $rS
/*261*/       OPC_RecordChild3, // #2 = $dst
/*262*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*264*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*267*/       OPC_EmitMergeInputChains1_0,
/*268*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1478:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*277*/     /*Scope*/ 21, /*->299*/
/*278*/       OPC_CheckInteger, 71|128,11/*1479*/, 
/*281*/       OPC_MoveParent,
/*282*/       OPC_RecordChild2, // #1 = $rS
/*283*/       OPC_RecordChild3, // #2 = $dst
/*284*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*286*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*289*/       OPC_EmitMergeInputChains1_0,
/*290*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 1479:iPTR, v4i32:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL v4i32:v4i32:$rS, xoaddr:iPTR:$dst)
/*299*/     /*Scope*/ 35, /*->335*/
/*300*/       OPC_CheckInteger, 52|128,11/*1460*/, 
/*303*/       OPC_MoveParent,
/*304*/       OPC_RecordChild2, // #1 = $STRM
/*305*/       OPC_MoveChild, 2,
/*307*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*310*/       OPC_MoveParent,
/*311*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*313*/       OPC_EmitMergeInputChains1_0,
/*314*/       OPC_EmitInteger, MVT::i32, 0, 
/*317*/       OPC_EmitConvertToTarget, 1,
/*319*/       OPC_EmitInteger, MVT::i32, 0, 
/*322*/       OPC_EmitInteger, MVT::i32, 0, 
/*325*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 1460:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*335*/     /*Scope*/ 65, /*->401*/
/*336*/       OPC_CheckInteger, 54|128,11/*1462*/, 
/*339*/       OPC_MoveParent,
/*340*/       OPC_RecordChild2, // #1 = $rA
/*341*/       OPC_Scope, 28, /*->371*/ // 2 children in Scope
/*343*/         OPC_CheckChild2Type, MVT::i32,
/*345*/         OPC_RecordChild3, // #2 = $rB
/*346*/         OPC_RecordChild4, // #3 = $STRM
/*347*/         OPC_MoveChild, 4,
/*349*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*352*/         OPC_MoveParent,
/*353*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*355*/         OPC_EmitMergeInputChains1_0,
/*356*/         OPC_EmitInteger, MVT::i32, 0, 
/*359*/         OPC_EmitConvertToTarget, 3,
/*361*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*371*/       /*Scope*/ 28, /*->400*/
/*372*/         OPC_CheckChild2Type, MVT::i64,
/*374*/         OPC_RecordChild3, // #2 = $rB
/*375*/         OPC_RecordChild4, // #3 = $STRM
/*376*/         OPC_MoveChild, 4,
/*378*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*381*/         OPC_MoveParent,
/*382*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*384*/         OPC_EmitMergeInputChains1_0,
/*385*/         OPC_EmitInteger, MVT::i32, 0, 
/*388*/         OPC_EmitConvertToTarget, 3,
/*390*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1462:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*400*/       0, /*End of Scope*/
/*401*/     /*Scope*/ 65, /*->467*/
/*402*/       OPC_CheckInteger, 57|128,11/*1465*/, 
/*405*/       OPC_MoveParent,
/*406*/       OPC_RecordChild2, // #1 = $rA
/*407*/       OPC_Scope, 28, /*->437*/ // 2 children in Scope
/*409*/         OPC_CheckChild2Type, MVT::i32,
/*411*/         OPC_RecordChild3, // #2 = $rB
/*412*/         OPC_RecordChild4, // #3 = $STRM
/*413*/         OPC_MoveChild, 4,
/*415*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*418*/         OPC_MoveParent,
/*419*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*421*/         OPC_EmitMergeInputChains1_0,
/*422*/         OPC_EmitInteger, MVT::i32, 1, 
/*425*/         OPC_EmitConvertToTarget, 3,
/*427*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*437*/       /*Scope*/ 28, /*->466*/
/*438*/         OPC_CheckChild2Type, MVT::i64,
/*440*/         OPC_RecordChild3, // #2 = $rB
/*441*/         OPC_RecordChild4, // #3 = $STRM
/*442*/         OPC_MoveChild, 4,
/*444*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*447*/         OPC_MoveParent,
/*448*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*450*/         OPC_EmitMergeInputChains1_0,
/*451*/         OPC_EmitInteger, MVT::i32, 1, 
/*454*/         OPC_EmitConvertToTarget, 3,
/*456*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1465:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*466*/       0, /*End of Scope*/
/*467*/     /*Scope*/ 65, /*->533*/
/*468*/       OPC_CheckInteger, 55|128,11/*1463*/, 
/*471*/       OPC_MoveParent,
/*472*/       OPC_RecordChild2, // #1 = $rA
/*473*/       OPC_Scope, 28, /*->503*/ // 2 children in Scope
/*475*/         OPC_CheckChild2Type, MVT::i32,
/*477*/         OPC_RecordChild3, // #2 = $rB
/*478*/         OPC_RecordChild4, // #3 = $STRM
/*479*/         OPC_MoveChild, 4,
/*481*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*484*/         OPC_MoveParent,
/*485*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*487*/         OPC_EmitMergeInputChains1_0,
/*488*/         OPC_EmitInteger, MVT::i32, 0, 
/*491*/         OPC_EmitConvertToTarget, 3,
/*493*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*503*/       /*Scope*/ 28, /*->532*/
/*504*/         OPC_CheckChild2Type, MVT::i64,
/*506*/         OPC_RecordChild3, // #2 = $rB
/*507*/         OPC_RecordChild4, // #3 = $STRM
/*508*/         OPC_MoveChild, 4,
/*510*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*513*/         OPC_MoveParent,
/*514*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*516*/         OPC_EmitMergeInputChains1_0,
/*517*/         OPC_EmitInteger, MVT::i32, 0, 
/*520*/         OPC_EmitConvertToTarget, 3,
/*522*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1463:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*532*/       0, /*End of Scope*/
/*533*/     /*Scope*/ 65, /*->599*/
/*534*/       OPC_CheckInteger, 56|128,11/*1464*/, 
/*537*/       OPC_MoveParent,
/*538*/       OPC_RecordChild2, // #1 = $rA
/*539*/       OPC_Scope, 28, /*->569*/ // 2 children in Scope
/*541*/         OPC_CheckChild2Type, MVT::i32,
/*543*/         OPC_RecordChild3, // #2 = $rB
/*544*/         OPC_RecordChild4, // #3 = $STRM
/*545*/         OPC_MoveChild, 4,
/*547*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*550*/         OPC_MoveParent,
/*551*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*553*/         OPC_EmitMergeInputChains1_0,
/*554*/         OPC_EmitInteger, MVT::i32, 1, 
/*557*/         OPC_EmitConvertToTarget, 3,
/*559*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i32:i32:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, ?:i32:$rA, ?:i32:$rB)
/*569*/       /*Scope*/ 28, /*->598*/
/*570*/         OPC_CheckChild2Type, MVT::i64,
/*572*/         OPC_RecordChild3, // #2 = $rB
/*573*/         OPC_RecordChild4, // #3 = $STRM
/*574*/         OPC_MoveChild, 4,
/*576*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*579*/         OPC_MoveParent,
/*580*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*582*/         OPC_EmitMergeInputChains1_0,
/*583*/         OPC_EmitInteger, MVT::i32, 1, 
/*586*/         OPC_EmitConvertToTarget, 3,
/*588*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 1464:iPTR, i64:i64:$rA, i32:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, ?:i64:$rA, ?:i32:$rB)
/*598*/       0, /*End of Scope*/
/*599*/     /*Scope*/ 11, /*->611*/
/*600*/       OPC_CheckInteger, 79|128,12/*1615*/, 
/*603*/       OPC_MoveParent,
/*604*/       OPC_EmitMergeInputChains1_0,
/*605*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1615:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*611*/     /*Scope*/ 15, /*->627*/
/*612*/       OPC_CheckInteger, 66|128,11/*1474*/, 
/*615*/       OPC_MoveParent,
/*616*/       OPC_RecordChild2, // #1 = $vB
/*617*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*619*/       OPC_EmitMergeInputChains1_0,
/*620*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1474:iPTR, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR v4i32:v4i32:$vB)
/*627*/     /*Scope*/ 29, /*->657*/
/*628*/       OPC_CheckInteger, 53|128,11/*1461*/, 
/*631*/       OPC_MoveParent,
/*632*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*634*/       OPC_EmitMergeInputChains1_0,
/*635*/       OPC_EmitInteger, MVT::i32, 1, 
/*638*/       OPC_EmitInteger, MVT::i32, 0, 
/*641*/       OPC_EmitInteger, MVT::i32, 0, 
/*644*/       OPC_EmitInteger, MVT::i32, 0, 
/*647*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 1461:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*657*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 83|128,4/*595*/,  TARGET_VAL(ISD::ADD),// ->1257
/*662*/     OPC_Scope, 49|128,1/*177*/, /*->842*/ // 3 children in Scope
/*665*/       OPC_RecordChild0, // #0 = $rA
/*666*/       OPC_MoveChild, 1,
/*668*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->696
/*672*/         OPC_RecordChild0, // #1 = $sym
/*673*/         OPC_MoveChild, 0,
/*675*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*678*/         OPC_MoveParent,
/*679*/         OPC_MoveChild, 1,
/*681*/         OPC_CheckInteger, 0, 
/*683*/         OPC_MoveParent,
/*684*/         OPC_MoveParent,
/*685*/         OPC_CheckType, MVT::i32,
/*687*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 i32:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->841
/*700*/         OPC_RecordChild0, // #1 = $g
/*701*/         OPC_MoveChild, 0,
/*703*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->738
/*707*/           OPC_MoveParent,
/*708*/           OPC_MoveChild, 1,
/*710*/           OPC_CheckInteger, 0, 
/*712*/           OPC_MoveParent,
/*713*/           OPC_MoveParent,
/*714*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->726
/*717*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->737
/*728*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->772
/*741*/           OPC_MoveParent,
/*742*/           OPC_MoveChild, 1,
/*744*/           OPC_CheckInteger, 0, 
/*746*/           OPC_MoveParent,
/*747*/           OPC_MoveParent,
/*748*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->760
/*751*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->771
/*762*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->806
/*775*/           OPC_MoveParent,
/*776*/           OPC_MoveChild, 1,
/*778*/           OPC_CheckInteger, 0, 
/*780*/           OPC_MoveParent,
/*781*/           OPC_MoveParent,
/*782*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->794
/*785*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->805
/*796*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->840
/*809*/           OPC_MoveParent,
/*810*/           OPC_MoveChild, 1,
/*812*/           OPC_CheckInteger, 0, 
/*814*/           OPC_MoveParent,
/*815*/           OPC_MoveParent,
/*816*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->828
/*819*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 i32:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->839
/*830*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 i64:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*842*/     /*Scope*/ 53|128,1/*181*/, /*->1025*/
/*844*/       OPC_MoveChild, 0,
/*846*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->875
/*850*/         OPC_RecordChild0, // #0 = $sym
/*851*/         OPC_MoveChild, 0,
/*853*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*856*/         OPC_MoveParent,
/*857*/         OPC_MoveChild, 1,
/*859*/         OPC_CheckInteger, 0, 
/*861*/         OPC_MoveParent,
/*862*/         OPC_MoveParent,
/*863*/         OPC_RecordChild1, // #1 = $rA
/*864*/         OPC_CheckType, MVT::i32,
/*866*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), i32:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 i32:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->1024
/*879*/         OPC_RecordChild0, // #0 = $g
/*880*/         OPC_MoveChild, 0,
/*882*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->918
/*886*/           OPC_MoveParent,
/*887*/           OPC_MoveChild, 1,
/*889*/           OPC_CheckInteger, 0, 
/*891*/           OPC_MoveParent,
/*892*/           OPC_MoveParent,
/*893*/           OPC_RecordChild1, // #1 = $in
/*894*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->906
/*897*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->917
/*908*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->953
/*921*/           OPC_MoveParent,
/*922*/           OPC_MoveChild, 1,
/*924*/           OPC_CheckInteger, 0, 
/*926*/           OPC_MoveParent,
/*927*/           OPC_MoveParent,
/*928*/           OPC_RecordChild1, // #1 = $in
/*929*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->941
/*932*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->952
/*943*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->988
/*956*/           OPC_MoveParent,
/*957*/           OPC_MoveChild, 1,
/*959*/           OPC_CheckInteger, 0, 
/*961*/           OPC_MoveParent,
/*962*/           OPC_MoveParent,
/*963*/           OPC_RecordChild1, // #1 = $in
/*964*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->976
/*967*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->987
/*978*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->1023
/*991*/           OPC_MoveParent,
/*992*/           OPC_MoveChild, 1,
/*994*/           OPC_CheckInteger, 0, 
/*996*/           OPC_MoveParent,
/*997*/           OPC_MoveParent,
/*998*/           OPC_RecordChild1, // #1 = $in
/*999*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->1011
/*1002*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), i64:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 ?:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->1022
/*1013*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), i32:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 ?:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1025*/    /*Scope*/ 101|128,1/*229*/, /*->1256*/
/*1027*/      OPC_RecordChild0, // #0 = $rA
/*1028*/      OPC_Scope, 99, /*->1129*/ // 3 children in Scope
/*1030*/        OPC_RecordChild1, // #1 = $imm
/*1031*/        OPC_MoveChild, 1,
/*1033*/        OPC_SwitchOpcode /*2 cases */, 76,  TARGET_VAL(ISD::Constant),// ->1113
/*1037*/          OPC_Scope, 16, /*->1055*/ // 4 children in Scope
/*1039*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1041*/            OPC_MoveParent,
/*1042*/            OPC_CheckType, MVT::i32,
/*1044*/            OPC_EmitConvertToTarget, 1,
/*1046*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI:i32 i32:i32:$rA, (imm:i32):$imm)
/*1055*/          /*Scope*/ 19, /*->1075*/
/*1056*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1058*/            OPC_MoveParent,
/*1059*/            OPC_CheckType, MVT::i32,
/*1061*/            OPC_EmitConvertToTarget, 1,
/*1063*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1066*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS:i32 i32:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1075*/          /*Scope*/ 16, /*->1092*/
/*1076*/            OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1078*/            OPC_MoveParent,
/*1079*/            OPC_CheckType, MVT::i64,
/*1081*/            OPC_EmitConvertToTarget, 1,
/*1083*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                    // Dst: (ADDI8:i64 i64:i64:$rA, (imm:i64):$imm)
/*1092*/          /*Scope*/ 19, /*->1112*/
/*1093*/            OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1095*/            OPC_MoveParent,
/*1096*/            OPC_CheckType, MVT::i64,
/*1098*/            OPC_EmitConvertToTarget, 1,
/*1100*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*1103*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                    // Dst: (ADDIS8:i64 i64:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1112*/          0, /*End of Scope*/
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->1128
/*1116*/          OPC_MoveParent,
/*1117*/          OPC_CheckType, MVT::i64,
/*1119*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB) - Complexity = 6
                  // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
                0, // EndSwitchOpcode
/*1129*/      /*Scope*/ 18, /*->1148*/
/*1130*/        OPC_MoveChild, 0,
/*1132*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*1135*/        OPC_MoveParent,
/*1136*/        OPC_RecordChild1, // #1 = $rA
/*1137*/        OPC_CheckType, MVT::i64,
/*1139*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (add:i64 (tglobaltlsaddr:i64):$rB, i64:i64:$rA) - Complexity = 6
                // Dst: (ADD8TLS:i64 i64:i64:$rA, (tglobaltlsaddr:i64):$rB)
/*1148*/      /*Scope*/ 106, /*->1255*/
/*1149*/        OPC_RecordChild1, // #1 = $imm
/*1150*/        OPC_Scope, 36, /*->1188*/ // 6 children in Scope
/*1152*/          OPC_MoveChild, 1,
/*1154*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1157*/          OPC_MoveParent,
/*1158*/          OPC_CheckType, MVT::i32,
/*1160*/          OPC_EmitConvertToTarget, 1,
/*1162*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1165*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*1174*/          OPC_EmitConvertToTarget, 1,
/*1176*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1179*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1188*/        /*Scope*/ 11, /*->1200*/
/*1189*/          OPC_CheckType, MVT::i32,
/*1191*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                  // Dst: (ADD4:i32 i32:i32:$rA, i32:i32:$rB)
/*1200*/        /*Scope*/ 11, /*->1212*/
/*1201*/          OPC_CheckType, MVT::i64,
/*1203*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                  // Dst: (ADD8:i64 i64:i64:$rA, i64:i64:$rB)
/*1212*/        /*Scope*/ 13, /*->1226*/
/*1213*/          OPC_CheckType, MVT::v16i8,
/*1215*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1217*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VADDUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*1226*/        /*Scope*/ 13, /*->1240*/
/*1227*/          OPC_CheckType, MVT::v8i16,
/*1229*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1231*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*1240*/        /*Scope*/ 13, /*->1254*/
/*1241*/          OPC_CheckType, MVT::v4i32,
/*1243*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*1245*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VADDUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*1254*/        0, /*End of Scope*/
/*1255*/      0, /*End of Scope*/
/*1256*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 117|128,6/*885*/,  TARGET_VAL(ISD::LOAD),// ->2146
/*1261*/    OPC_RecordMemRef,
/*1262*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1263*/    OPC_RecordChild1, // #1 = $src
/*1264*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1266*/    OPC_Scope, 19, /*->1287*/ // 19 children in Scope
/*1268*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1270*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1272*/      OPC_CheckType, MVT::i32,
/*1274*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1277*/      OPC_EmitMergeInputChains1_0,
/*1278*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1287*/    /*Scope*/ 19, /*->1307*/
/*1288*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1290*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1292*/      OPC_CheckType, MVT::i32,
/*1294*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1297*/      OPC_EmitMergeInputChains1_0,
/*1298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1307*/    /*Scope*/ 19, /*->1327*/
/*1308*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1310*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1312*/      OPC_CheckType, MVT::i32,
/*1314*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1317*/      OPC_EmitMergeInputChains1_0,
/*1318*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1327*/    /*Scope*/ 17, /*->1345*/
/*1328*/      OPC_CheckPredicate, 8, // Predicate_load
/*1330*/      OPC_CheckType, MVT::i32,
/*1332*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1335*/      OPC_EmitMergeInputChains1_0,
/*1336*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1345*/    /*Scope*/ 19, /*->1365*/
/*1346*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1348*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1350*/      OPC_CheckType, MVT::i32,
/*1352*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1355*/      OPC_EmitMergeInputChains1_0,
/*1356*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1365*/    /*Scope*/ 19, /*->1385*/
/*1366*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1368*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1370*/      OPC_CheckType, MVT::i32,
/*1372*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1375*/      OPC_EmitMergeInputChains1_0,
/*1376*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1385*/    /*Scope*/ 19, /*->1405*/
/*1386*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1388*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1390*/      OPC_CheckType, MVT::i32,
/*1392*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1395*/      OPC_EmitMergeInputChains1_0,
/*1396*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1405*/    /*Scope*/ 17, /*->1423*/
/*1406*/      OPC_CheckPredicate, 8, // Predicate_load
/*1408*/      OPC_CheckType, MVT::i32,
/*1410*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1413*/      OPC_EmitMergeInputChains1_0,
/*1414*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1423*/    /*Scope*/ 36, /*->1460*/
/*1424*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1426*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1428*/      OPC_CheckType, MVT::i32,
/*1430*/      OPC_Scope, 13, /*->1445*/ // 2 children in Scope
/*1432*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1435*/        OPC_EmitMergeInputChains1_0,
/*1436*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1445*/      /*Scope*/ 13, /*->1459*/
/*1446*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1449*/        OPC_EmitMergeInputChains1_0,
/*1450*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1459*/      0, /*End of Scope*/
/*1460*/    /*Scope*/ 105, /*->1566*/
/*1461*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1463*/      OPC_CheckType, MVT::i32,
/*1465*/      OPC_Scope, 32, /*->1499*/ // 3 children in Scope
/*1467*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1469*/        OPC_Scope, 13, /*->1484*/ // 2 children in Scope
/*1471*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1474*/          OPC_EmitMergeInputChains1_0,
/*1475*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1484*/        /*Scope*/ 13, /*->1498*/
/*1485*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1488*/          OPC_EmitMergeInputChains1_0,
/*1489*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1498*/        0, /*End of Scope*/
/*1499*/      /*Scope*/ 32, /*->1532*/
/*1500*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1502*/        OPC_Scope, 13, /*->1517*/ // 2 children in Scope
/*1504*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1507*/          OPC_EmitMergeInputChains1_0,
/*1508*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1517*/        /*Scope*/ 13, /*->1531*/
/*1518*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1521*/          OPC_EmitMergeInputChains1_0,
/*1522*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1531*/        0, /*End of Scope*/
/*1532*/      /*Scope*/ 32, /*->1565*/
/*1533*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1535*/        OPC_Scope, 13, /*->1550*/ // 2 children in Scope
/*1537*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1540*/          OPC_EmitMergeInputChains1_0,
/*1541*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1550*/        /*Scope*/ 13, /*->1564*/
/*1551*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1554*/          OPC_EmitMergeInputChains1_0,
/*1555*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1564*/        0, /*End of Scope*/
/*1565*/      0, /*End of Scope*/
/*1566*/    /*Scope*/ 72, /*->1639*/
/*1567*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1569*/      OPC_CheckType, MVT::i64,
/*1571*/      OPC_Scope, 15, /*->1588*/ // 4 children in Scope
/*1573*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1575*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1578*/        OPC_EmitMergeInputChains1_0,
/*1579*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1588*/      /*Scope*/ 17, /*->1606*/
/*1589*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1591*/        OPC_CheckPredicate, 15, // Predicate_aligned4sextloadi32
/*1593*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1596*/        OPC_EmitMergeInputChains1_0,
/*1597*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_aligned4sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1606*/      /*Scope*/ 15, /*->1622*/
/*1607*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1609*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1612*/        OPC_EmitMergeInputChains1_0,
/*1613*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1622*/      /*Scope*/ 15, /*->1638*/
/*1623*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1625*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1628*/        OPC_EmitMergeInputChains1_0,
/*1629*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1638*/      0, /*End of Scope*/
/*1639*/    /*Scope*/ 102, /*->1742*/
/*1640*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1642*/      OPC_CheckType, MVT::i64,
/*1644*/      OPC_Scope, 15, /*->1661*/ // 6 children in Scope
/*1646*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1648*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1651*/        OPC_EmitMergeInputChains1_0,
/*1652*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1661*/      /*Scope*/ 15, /*->1677*/
/*1662*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1664*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1667*/        OPC_EmitMergeInputChains1_0,
/*1668*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1677*/      /*Scope*/ 15, /*->1693*/
/*1678*/        OPC_CheckPredicate, 16, // Predicate_zextloadi32
/*1680*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1683*/        OPC_EmitMergeInputChains1_0,
/*1684*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1693*/      /*Scope*/ 15, /*->1709*/
/*1694*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1696*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1699*/        OPC_EmitMergeInputChains1_0,
/*1700*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1709*/      /*Scope*/ 15, /*->1725*/
/*1710*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1712*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1715*/        OPC_EmitMergeInputChains1_0,
/*1716*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1725*/      /*Scope*/ 15, /*->1741*/
/*1726*/        OPC_CheckPredicate, 16, // Predicate_zextloadi32
/*1728*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1731*/        OPC_EmitMergeInputChains1_0,
/*1732*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1741*/      0, /*End of Scope*/
/*1742*/    /*Scope*/ 36, /*->1779*/
/*1743*/      OPC_CheckPredicate, 8, // Predicate_load
/*1745*/      OPC_CheckType, MVT::i64,
/*1747*/      OPC_Scope, 15, /*->1764*/ // 2 children in Scope
/*1749*/        OPC_CheckPredicate, 17, // Predicate_aligned4load
/*1751*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1754*/        OPC_EmitMergeInputChains1_0,
/*1755*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_aligned4load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1764*/      /*Scope*/ 13, /*->1778*/
/*1765*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1768*/        OPC_EmitMergeInputChains1_0,
/*1769*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1778*/      0, /*End of Scope*/
/*1779*/    /*Scope*/ 36, /*->1816*/
/*1780*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1782*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1784*/      OPC_CheckType, MVT::i64,
/*1786*/      OPC_Scope, 13, /*->1801*/ // 2 children in Scope
/*1788*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1791*/        OPC_EmitMergeInputChains1_0,
/*1792*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1801*/      /*Scope*/ 13, /*->1815*/
/*1802*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1805*/        OPC_EmitMergeInputChains1_0,
/*1806*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1815*/      0, /*End of Scope*/
/*1816*/    /*Scope*/ 10|128,1/*138*/, /*->1956*/
/*1818*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1820*/      OPC_CheckType, MVT::i64,
/*1822*/      OPC_Scope, 32, /*->1856*/ // 4 children in Scope
/*1824*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1826*/        OPC_Scope, 13, /*->1841*/ // 2 children in Scope
/*1828*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1831*/          OPC_EmitMergeInputChains1_0,
/*1832*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1841*/        /*Scope*/ 13, /*->1855*/
/*1842*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1845*/          OPC_EmitMergeInputChains1_0,
/*1846*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1855*/        0, /*End of Scope*/
/*1856*/      /*Scope*/ 32, /*->1889*/
/*1857*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1859*/        OPC_Scope, 13, /*->1874*/ // 2 children in Scope
/*1861*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1874*/        /*Scope*/ 13, /*->1888*/
/*1875*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1878*/          OPC_EmitMergeInputChains1_0,
/*1879*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1888*/        0, /*End of Scope*/
/*1889*/      /*Scope*/ 32, /*->1922*/
/*1890*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1892*/        OPC_Scope, 13, /*->1907*/ // 2 children in Scope
/*1894*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1897*/          OPC_EmitMergeInputChains1_0,
/*1898*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1907*/        /*Scope*/ 13, /*->1921*/
/*1908*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1911*/          OPC_EmitMergeInputChains1_0,
/*1912*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1921*/        0, /*End of Scope*/
/*1922*/      /*Scope*/ 32, /*->1955*/
/*1923*/        OPC_CheckPredicate, 18, // Predicate_extloadi32
/*1925*/        OPC_Scope, 13, /*->1940*/ // 2 children in Scope
/*1927*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1930*/          OPC_EmitMergeInputChains1_0,
/*1931*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1940*/        /*Scope*/ 13, /*->1954*/
/*1941*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1944*/          OPC_EmitMergeInputChains1_0,
/*1945*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1954*/        0, /*End of Scope*/
/*1955*/      0, /*End of Scope*/
/*1956*/    /*Scope*/ 21, /*->1978*/
/*1957*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1959*/      OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1961*/      OPC_CheckPredicate, 19, // Predicate_unaligned4sextloadi32
/*1963*/      OPC_CheckType, MVT::i64,
/*1965*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*1968*/      OPC_EmitMergeInputChains1_0,
/*1969*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>><<P:Predicate_unaligned4sextloadi32>> - Complexity = 13
              // Dst: (LWAX:i64 xoaddr:iPTR:$src)
/*1978*/    /*Scope*/ 85, /*->2064*/
/*1979*/      OPC_CheckPredicate, 8, // Predicate_load
/*1981*/      OPC_SwitchType /*3 cases */, 15,  MVT::i64,// ->1999
/*1984*/        OPC_CheckPredicate, 20, // Predicate_unaligned4load
/*1986*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*1989*/        OPC_EmitMergeInputChains1_0,
/*1990*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_unaligned4load>> - Complexity = 13
                // Dst: (LDX:i64 xoaddr:iPTR:$src)
              /*SwitchType*/ 30,  MVT::f32,// ->2031
/*2001*/        OPC_Scope, 13, /*->2016*/ // 2 children in Scope
/*2003*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2006*/          OPC_EmitMergeInputChains1_0,
/*2007*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*2016*/        /*Scope*/ 13, /*->2030*/
/*2017*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2020*/          OPC_EmitMergeInputChains1_0,
/*2021*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*2030*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->2063
/*2033*/        OPC_Scope, 13, /*->2048*/ // 2 children in Scope
/*2035*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2038*/          OPC_EmitMergeInputChains1_0,
/*2039*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*2048*/        /*Scope*/ 13, /*->2062*/
/*2049*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2052*/          OPC_EmitMergeInputChains1_0,
/*2053*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*2062*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2064*/    /*Scope*/ 60, /*->2125*/
/*2065*/      OPC_CheckPredicate, 10, // Predicate_extload
/*2067*/      OPC_CheckPredicate, 21, // Predicate_extloadf32
/*2069*/      OPC_CheckType, MVT::f64,
/*2071*/      OPC_Scope, 25, /*->2098*/ // 2 children in Scope
/*2073*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*2076*/        OPC_EmitMergeInputChains1_0,
/*2077*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2086*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2089*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:i32)
/*2098*/      /*Scope*/ 25, /*->2124*/
/*2099*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*2102*/        OPC_EmitMergeInputChains1_0,
/*2103*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4
/*2112*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*2115*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:i32)
/*2124*/      0, /*End of Scope*/
/*2125*/    /*Scope*/ 19, /*->2145*/
/*2126*/      OPC_CheckPredicate, 8, // Predicate_load
/*2128*/      OPC_CheckType, MVT::v4i32,
/*2130*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2132*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2135*/      OPC_EmitMergeInputChains1_0,
/*2136*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2145*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 90|128,5/*730*/,  TARGET_VAL(ISD::STORE),// ->2880
/*2150*/    OPC_RecordMemRef,
/*2151*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2152*/    OPC_RecordChild1, // #1 = $rS
/*2153*/    OPC_Scope, 103|128,1/*231*/, /*->2387*/ // 5 children in Scope
/*2156*/      OPC_CheckChild1Type, MVT::i32,
/*2158*/      OPC_RecordChild2, // #2 = $src
/*2159*/      OPC_Scope, 110, /*->2271*/ // 2 children in Scope
/*2161*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2163*/        OPC_Scope, 36, /*->2201*/ // 4 children in Scope
/*2165*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2167*/          OPC_Scope, 15, /*->2184*/ // 2 children in Scope
/*2169*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2171*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2174*/            OPC_EmitMergeInputChains1_0,
/*2175*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i32:i32:$rS, iaddr:iPTR:$src)
/*2184*/          /*Scope*/ 15, /*->2200*/
/*2185*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2187*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2190*/            OPC_EmitMergeInputChains1_0,
/*2191*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i32:i32:$rS, iaddr:iPTR:$src)
/*2200*/          0, /*End of Scope*/
/*2201*/        /*Scope*/ 15, /*->2217*/
/*2202*/          OPC_CheckPredicate, 26, // Predicate_store
/*2204*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2207*/          OPC_EmitMergeInputChains1_0,
/*2208*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW i32:i32:$rS, iaddr:iPTR:$src)
/*2217*/        /*Scope*/ 36, /*->2254*/
/*2218*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2220*/          OPC_Scope, 15, /*->2237*/ // 2 children in Scope
/*2222*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2224*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2227*/            OPC_EmitMergeInputChains1_0,
/*2228*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX i32:i32:$rS, xaddr:iPTR:$dst)
/*2237*/          /*Scope*/ 15, /*->2253*/
/*2238*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2240*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2243*/            OPC_EmitMergeInputChains1_0,
/*2244*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX i32:i32:$rS, xaddr:iPTR:$dst)
/*2253*/          0, /*End of Scope*/
/*2254*/        /*Scope*/ 15, /*->2270*/
/*2255*/          OPC_CheckPredicate, 26, // Predicate_store
/*2257*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2260*/          OPC_EmitMergeInputChains1_0,
/*2261*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX i32:i32:$rS, xaddr:iPTR:$dst)
/*2270*/        0, /*End of Scope*/
/*2271*/      /*Scope*/ 114, /*->2386*/
/*2272*/        OPC_RecordChild3, // #3 = $ptroff
/*2273*/        OPC_Scope, 40, /*->2315*/ // 4 children in Scope
/*2275*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2277*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2279*/          OPC_Scope, 16, /*->2297*/ // 2 children in Scope
/*2281*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2283*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2286*/            OPC_EmitMergeInputChains1_0,
/*2287*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2297*/          /*Scope*/ 16, /*->2314*/
/*2298*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2300*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2303*/            OPC_EmitMergeInputChains1_0,
/*2304*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2314*/          0, /*End of Scope*/
/*2315*/        /*Scope*/ 18, /*->2334*/
/*2316*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2318*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2320*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2323*/          OPC_EmitMergeInputChains1_0,
/*2324*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR ?:i32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2334*/        /*Scope*/ 34, /*->2369*/
/*2335*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2337*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2339*/          OPC_Scope, 13, /*->2354*/ // 2 children in Scope
/*2341*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2343*/            OPC_EmitMergeInputChains1_0,
/*2344*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2354*/          /*Scope*/ 13, /*->2368*/
/*2355*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2357*/            OPC_EmitMergeInputChains1_0,
/*2358*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2368*/          0, /*End of Scope*/
/*2369*/        /*Scope*/ 15, /*->2385*/
/*2370*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2372*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2374*/          OPC_EmitMergeInputChains1_0,
/*2375*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i32:i32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STWUX:iPTR ?:i32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2385*/        0, /*End of Scope*/
/*2386*/      0, /*End of Scope*/
/*2387*/    /*Scope*/ 75, /*->2463*/
/*2388*/      OPC_CheckChild1Type, MVT::f32,
/*2390*/      OPC_RecordChild2, // #2 = $dst
/*2391*/      OPC_Scope, 34, /*->2427*/ // 2 children in Scope
/*2393*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2395*/        OPC_CheckPredicate, 26, // Predicate_store
/*2397*/        OPC_Scope, 13, /*->2412*/ // 2 children in Scope
/*2399*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2402*/          OPC_EmitMergeInputChains1_0,
/*2403*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS f32:f32:$rS, iaddr:iPTR:$dst)
/*2412*/        /*Scope*/ 13, /*->2426*/
/*2413*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2416*/          OPC_EmitMergeInputChains1_0,
/*2417*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f32:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX f32:f32:$frS, xaddr:iPTR:$dst)
/*2426*/        0, /*End of Scope*/
/*2427*/      /*Scope*/ 34, /*->2462*/
/*2428*/        OPC_RecordChild3, // #3 = $ptroff
/*2429*/        OPC_CheckPredicate, 31, // Predicate_istore
/*2431*/        OPC_CheckPredicate, 32, // Predicate_pre_store
/*2433*/        OPC_Scope, 14, /*->2449*/ // 2 children in Scope
/*2435*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2438*/          OPC_EmitMergeInputChains1_0,
/*2439*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFSU:iPTR ?:f32:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2449*/        /*Scope*/ 11, /*->2461*/
/*2450*/          OPC_EmitMergeInputChains1_0,
/*2451*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f32:f32:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFSUX:iPTR ?:f32:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2461*/        0, /*End of Scope*/
/*2462*/      0, /*End of Scope*/
/*2463*/    /*Scope*/ 75, /*->2539*/
/*2464*/      OPC_CheckChild1Type, MVT::f64,
/*2466*/      OPC_RecordChild2, // #2 = $dst
/*2467*/      OPC_Scope, 34, /*->2503*/ // 2 children in Scope
/*2469*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2471*/        OPC_CheckPredicate, 26, // Predicate_store
/*2473*/        OPC_Scope, 13, /*->2488*/ // 2 children in Scope
/*2475*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2478*/          OPC_EmitMergeInputChains1_0,
/*2479*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD f64:f64:$rS, iaddr:iPTR:$dst)
/*2488*/        /*Scope*/ 13, /*->2502*/
/*2489*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2492*/          OPC_EmitMergeInputChains1_0,
/*2493*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st f64:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX f64:f64:$frS, xaddr:iPTR:$dst)
/*2502*/        0, /*End of Scope*/
/*2503*/      /*Scope*/ 34, /*->2538*/
/*2504*/        OPC_RecordChild3, // #3 = $ptroff
/*2505*/        OPC_CheckPredicate, 31, // Predicate_istore
/*2507*/        OPC_CheckPredicate, 32, // Predicate_pre_store
/*2509*/        OPC_Scope, 14, /*->2525*/ // 2 children in Scope
/*2511*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2514*/          OPC_EmitMergeInputChains1_0,
/*2515*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STFDU:iPTR ?:f64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2525*/        /*Scope*/ 11, /*->2537*/
/*2526*/          OPC_EmitMergeInputChains1_0,
/*2527*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR f64:f64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STFDUX:iPTR ?:f64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2537*/        0, /*End of Scope*/
/*2538*/      0, /*End of Scope*/
/*2539*/    /*Scope*/ 59|128,2/*315*/, /*->2856*/
/*2541*/      OPC_CheckChild1Type, MVT::i64,
/*2543*/      OPC_RecordChild2, // #2 = $ptrreg
/*2544*/      OPC_Scope, 82, /*->2628*/ // 3 children in Scope
/*2546*/        OPC_RecordChild3, // #3 = $ptroff
/*2547*/        OPC_Scope, 57, /*->2606*/ // 2 children in Scope
/*2549*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2551*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2553*/          OPC_Scope, 16, /*->2571*/ // 3 children in Scope
/*2555*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2557*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2560*/            OPC_EmitMergeInputChains1_0,
/*2561*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2571*/          /*Scope*/ 16, /*->2588*/
/*2572*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2574*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2577*/            OPC_EmitMergeInputChains1_0,
/*2578*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2588*/          /*Scope*/ 16, /*->2605*/
/*2589*/            OPC_CheckPredicate, 33, // Predicate_pre_truncsti32
/*2591*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2594*/            OPC_EmitMergeInputChains1_0,
/*2595*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 10
                    // Dst: (STWU8:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2605*/          0, /*End of Scope*/
/*2606*/        /*Scope*/ 20, /*->2627*/
/*2607*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2609*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2611*/          OPC_CheckPredicate, 34, // Predicate_aligned4pre_store
/*2613*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2616*/          OPC_EmitMergeInputChains1_0,
/*2617*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>><<P:Predicate_aligned4pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR ?:i64:$rS, iaddroff:iPTR:$ptroff, ?:iPTR:$ptrreg)
/*2627*/        0, /*End of Scope*/
/*2628*/      /*Scope*/ 28|128,1/*156*/, /*->2786*/
/*2630*/        OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2632*/        OPC_Scope, 100, /*->2734*/ // 2 children in Scope
/*2634*/          OPC_CheckPredicate, 23, // Predicate_truncstore
/*2636*/          OPC_Scope, 15, /*->2653*/ // 6 children in Scope
/*2638*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2640*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2643*/            OPC_EmitMergeInputChains1_0,
/*2644*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 i64:i64:$rS, iaddr:iPTR:$src)
/*2653*/          /*Scope*/ 15, /*->2669*/
/*2654*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2656*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2659*/            OPC_EmitMergeInputChains1_0,
/*2660*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 i64:i64:$rS, iaddr:iPTR:$src)
/*2669*/          /*Scope*/ 15, /*->2685*/
/*2670*/            OPC_CheckPredicate, 35, // Predicate_truncstorei32
/*2672*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2675*/            OPC_EmitMergeInputChains1_0,
/*2676*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 i64:i64:$rS, iaddr:iPTR:$src)
/*2685*/          /*Scope*/ 15, /*->2701*/
/*2686*/            OPC_CheckPredicate, 24, // Predicate_truncstorei8
/*2688*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2691*/            OPC_EmitMergeInputChains1_0,
/*2692*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2701*/          /*Scope*/ 15, /*->2717*/
/*2702*/            OPC_CheckPredicate, 25, // Predicate_truncstorei16
/*2704*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2707*/            OPC_EmitMergeInputChains1_0,
/*2708*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2717*/          /*Scope*/ 15, /*->2733*/
/*2718*/            OPC_CheckPredicate, 35, // Predicate_truncstorei32
/*2720*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2723*/            OPC_EmitMergeInputChains1_0,
/*2724*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 i64:i64:$rS, xaddr:iPTR:$dst)
/*2733*/          0, /*End of Scope*/
/*2734*/        /*Scope*/ 50, /*->2785*/
/*2735*/          OPC_CheckPredicate, 26, // Predicate_store
/*2737*/          OPC_Scope, 15, /*->2754*/ // 3 children in Scope
/*2739*/            OPC_CheckPredicate, 36, // Predicate_aligned4store
/*2741*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2744*/            OPC_EmitMergeInputChains1_0,
/*2745*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_aligned4store>> - Complexity = 13
                    // Dst: (STD i64:i64:$rS, ixaddr:iPTR:$dst)
/*2754*/          /*Scope*/ 13, /*->2768*/
/*2755*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2758*/            OPC_EmitMergeInputChains1_0,
/*2759*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX i64:i64:$rS, xaddr:iPTR:$dst)
/*2768*/          /*Scope*/ 15, /*->2784*/
/*2769*/            OPC_CheckPredicate, 37, // Predicate_unaligned4store
/*2771*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2774*/            OPC_EmitMergeInputChains1_0,
/*2775*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:i64:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_unaligned4store>> - Complexity = 13
                    // Dst: (STDX ?:i64:$rS, xoaddr:iPTR:$dst)
/*2784*/          0, /*End of Scope*/
/*2785*/        0, /*End of Scope*/
/*2786*/      /*Scope*/ 68, /*->2855*/
/*2787*/        OPC_RecordChild3, // #3 = $ptroff
/*2788*/        OPC_Scope, 48, /*->2838*/ // 2 children in Scope
/*2790*/          OPC_CheckPredicate, 27, // Predicate_itruncstore
/*2792*/          OPC_CheckPredicate, 28, // Predicate_pre_truncst
/*2794*/          OPC_Scope, 13, /*->2809*/ // 3 children in Scope
/*2796*/            OPC_CheckPredicate, 29, // Predicate_pre_truncsti8
/*2798*/            OPC_EmitMergeInputChains1_0,
/*2799*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 4
                    // Dst: (STBUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2809*/          /*Scope*/ 13, /*->2823*/
/*2810*/            OPC_CheckPredicate, 30, // Predicate_pre_truncsti16
/*2812*/            OPC_EmitMergeInputChains1_0,
/*2813*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 4
                    // Dst: (STHUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2823*/          /*Scope*/ 13, /*->2837*/
/*2824*/            OPC_CheckPredicate, 33, // Predicate_pre_truncsti32
/*2826*/            OPC_EmitMergeInputChains1_0,
/*2827*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWUX8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                    // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti32>> - Complexity = 4
                    // Dst: (STWUX8:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2837*/          0, /*End of Scope*/
/*2838*/        /*Scope*/ 15, /*->2854*/
/*2839*/          OPC_CheckPredicate, 31, // Predicate_istore
/*2841*/          OPC_CheckPredicate, 32, // Predicate_pre_store
/*2843*/          OPC_EmitMergeInputChains1_0,
/*2844*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDUX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (ist:iPTR i64:i64:$rS, iPTR:iPTR:$ptrreg, iPTR:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 4
                  // Dst: (STDUX:iPTR ?:i64:$rS, ?:iPTR:$ptrreg, ?:iPTR:$ptroff)
/*2854*/        0, /*End of Scope*/
/*2855*/      0, /*End of Scope*/
/*2856*/    /*Scope*/ 22, /*->2879*/
/*2857*/      OPC_CheckChild1Type, MVT::v4i32,
/*2859*/      OPC_RecordChild2, // #2 = $dst
/*2860*/      OPC_CheckPredicate, 22, // Predicate_unindexedstore
/*2862*/      OPC_CheckPredicate, 26, // Predicate_store
/*2864*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*2866*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2869*/      OPC_EmitMergeInputChains1_0,
/*2870*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st v4i32:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX ?:v4i32:$rS, xoaddr:iPTR:$dst)
/*2879*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2966
/*2883*/    OPC_RecordMemRef,
/*2884*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2885*/    OPC_RecordChild1, // #1 = $ptr
/*2886*/    OPC_RecordChild2, // #2 = $incr
/*2887*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->2946
/*2890*/      OPC_Scope, 17, /*->2909*/ // 3 children in Scope
/*2892*/        OPC_CheckPredicate, 38, // Predicate_atomic_load_add_8
/*2894*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2897*/        OPC_EmitMergeInputChains1_0,
/*2898*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2909*/      /*Scope*/ 17, /*->2927*/
/*2910*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_add_16
/*2912*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2915*/        OPC_EmitMergeInputChains1_0,
/*2916*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2927*/      /*Scope*/ 17, /*->2945*/
/*2928*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_add_32
/*2930*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2933*/        OPC_EmitMergeInputChains1_0,
/*2934*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2945*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->2965
/*2948*/      OPC_CheckPredicate, 41, // Predicate_atomic_load_add_64
/*2950*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2953*/      OPC_EmitMergeInputChains1_0,
/*2954*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3052
/*2969*/    OPC_RecordMemRef,
/*2970*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2971*/    OPC_RecordChild1, // #1 = $ptr
/*2972*/    OPC_RecordChild2, // #2 = $incr
/*2973*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3032
/*2976*/      OPC_Scope, 17, /*->2995*/ // 3 children in Scope
/*2978*/        OPC_CheckPredicate, 42, // Predicate_atomic_load_sub_8
/*2980*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2983*/        OPC_EmitMergeInputChains1_0,
/*2984*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*2995*/      /*Scope*/ 17, /*->3013*/
/*2996*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_sub_16
/*2998*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3001*/        OPC_EmitMergeInputChains1_0,
/*3002*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3013*/      /*Scope*/ 17, /*->3031*/
/*3014*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_sub_32
/*3016*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3019*/        OPC_EmitMergeInputChains1_0,
/*3020*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3031*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3051
/*3034*/      OPC_CheckPredicate, 45, // Predicate_atomic_load_sub_64
/*3036*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3039*/      OPC_EmitMergeInputChains1_0,
/*3040*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3138
/*3055*/    OPC_RecordMemRef,
/*3056*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3057*/    OPC_RecordChild1, // #1 = $ptr
/*3058*/    OPC_RecordChild2, // #2 = $incr
/*3059*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3118
/*3062*/      OPC_Scope, 17, /*->3081*/ // 3 children in Scope
/*3064*/        OPC_CheckPredicate, 46, // Predicate_atomic_load_and_8
/*3066*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3069*/        OPC_EmitMergeInputChains1_0,
/*3070*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3081*/      /*Scope*/ 17, /*->3099*/
/*3082*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_and_16
/*3084*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3087*/        OPC_EmitMergeInputChains1_0,
/*3088*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3099*/      /*Scope*/ 17, /*->3117*/
/*3100*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_and_32
/*3102*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3105*/        OPC_EmitMergeInputChains1_0,
/*3106*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3117*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3137
/*3120*/      OPC_CheckPredicate, 49, // Predicate_atomic_load_and_64
/*3122*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3125*/      OPC_EmitMergeInputChains1_0,
/*3126*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3224
/*3141*/    OPC_RecordMemRef,
/*3142*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3143*/    OPC_RecordChild1, // #1 = $ptr
/*3144*/    OPC_RecordChild2, // #2 = $incr
/*3145*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3204
/*3148*/      OPC_Scope, 17, /*->3167*/ // 3 children in Scope
/*3150*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_or_8
/*3152*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3155*/        OPC_EmitMergeInputChains1_0,
/*3156*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3167*/      /*Scope*/ 17, /*->3185*/
/*3168*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_or_16
/*3170*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3173*/        OPC_EmitMergeInputChains1_0,
/*3174*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3185*/      /*Scope*/ 17, /*->3203*/
/*3186*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_or_32
/*3188*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3191*/        OPC_EmitMergeInputChains1_0,
/*3192*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3203*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3223
/*3206*/      OPC_CheckPredicate, 53, // Predicate_atomic_load_or_64
/*3208*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3211*/      OPC_EmitMergeInputChains1_0,
/*3212*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3310
/*3227*/    OPC_RecordMemRef,
/*3228*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3229*/    OPC_RecordChild1, // #1 = $ptr
/*3230*/    OPC_RecordChild2, // #2 = $incr
/*3231*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3290
/*3234*/      OPC_Scope, 17, /*->3253*/ // 3 children in Scope
/*3236*/        OPC_CheckPredicate, 54, // Predicate_atomic_load_xor_8
/*3238*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3241*/        OPC_EmitMergeInputChains1_0,
/*3242*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3253*/      /*Scope*/ 17, /*->3271*/
/*3254*/        OPC_CheckPredicate, 55, // Predicate_atomic_load_xor_16
/*3256*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3259*/        OPC_EmitMergeInputChains1_0,
/*3260*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3271*/      /*Scope*/ 17, /*->3289*/
/*3272*/        OPC_CheckPredicate, 56, // Predicate_atomic_load_xor_32
/*3274*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3277*/        OPC_EmitMergeInputChains1_0,
/*3278*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3289*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3309
/*3292*/      OPC_CheckPredicate, 57, // Predicate_atomic_load_xor_64
/*3294*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3297*/      OPC_EmitMergeInputChains1_0,
/*3298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3396
/*3313*/    OPC_RecordMemRef,
/*3314*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3315*/    OPC_RecordChild1, // #1 = $ptr
/*3316*/    OPC_RecordChild2, // #2 = $incr
/*3317*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3376
/*3320*/      OPC_Scope, 17, /*->3339*/ // 3 children in Scope
/*3322*/        OPC_CheckPredicate, 58, // Predicate_atomic_load_nand_8
/*3324*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3327*/        OPC_EmitMergeInputChains1_0,
/*3328*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3339*/      /*Scope*/ 17, /*->3357*/
/*3340*/        OPC_CheckPredicate, 59, // Predicate_atomic_load_nand_16
/*3342*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3345*/        OPC_EmitMergeInputChains1_0,
/*3346*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3357*/      /*Scope*/ 17, /*->3375*/
/*3358*/        OPC_CheckPredicate, 60, // Predicate_atomic_load_nand_32
/*3360*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3363*/        OPC_EmitMergeInputChains1_0,
/*3364*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$incr)
/*3375*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3395
/*3378*/      OPC_CheckPredicate, 61, // Predicate_atomic_load_nand_64
/*3380*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3383*/      OPC_EmitMergeInputChains1_0,
/*3384*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, i64:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 88,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3487
/*3399*/    OPC_RecordMemRef,
/*3400*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3401*/    OPC_RecordChild1, // #1 = $ptr
/*3402*/    OPC_RecordChild2, // #2 = $old
/*3403*/    OPC_RecordChild3, // #3 = $new
/*3404*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->3466
/*3407*/      OPC_Scope, 18, /*->3427*/ // 3 children in Scope
/*3409*/        OPC_CheckPredicate, 62, // Predicate_atomic_cmp_swap_8
/*3411*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3414*/        OPC_EmitMergeInputChains1_0,
/*3415*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3427*/      /*Scope*/ 18, /*->3446*/
/*3428*/        OPC_CheckPredicate, 63, // Predicate_atomic_cmp_swap_16
/*3430*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3433*/        OPC_EmitMergeInputChains1_0,
/*3434*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3446*/      /*Scope*/ 18, /*->3465*/
/*3447*/        OPC_CheckPredicate, 64, // Predicate_atomic_cmp_swap_32
/*3449*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3452*/        OPC_EmitMergeInputChains1_0,
/*3453*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$old, i32:i32:$new)
/*3465*/      0, /*End of Scope*/
            /*SwitchType*/ 18,  MVT::i64,// ->3486
/*3468*/      OPC_CheckPredicate, 65, // Predicate_atomic_cmp_swap_64
/*3470*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3473*/      OPC_EmitMergeInputChains1_0,
/*3474*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$old, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3573
/*3490*/    OPC_RecordMemRef,
/*3491*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3492*/    OPC_RecordChild1, // #1 = $ptr
/*3493*/    OPC_RecordChild2, // #2 = $new
/*3494*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3553
/*3497*/      OPC_Scope, 17, /*->3516*/ // 3 children in Scope
/*3499*/        OPC_CheckPredicate, 66, // Predicate_atomic_swap_8
/*3501*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3504*/        OPC_EmitMergeInputChains1_0,
/*3505*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3516*/      /*Scope*/ 17, /*->3534*/
/*3517*/        OPC_CheckPredicate, 67, // Predicate_atomic_swap_16
/*3519*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3522*/        OPC_EmitMergeInputChains1_0,
/*3523*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3534*/      /*Scope*/ 17, /*->3552*/
/*3535*/        OPC_CheckPredicate, 68, // Predicate_atomic_swap_32
/*3537*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3540*/        OPC_EmitMergeInputChains1_0,
/*3541*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, i32:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32:i32 xoaddr:iPTR:$ptr, i32:i32:$new)
/*3552*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3572
/*3555*/      OPC_CheckPredicate, 69, // Predicate_atomic_swap_64
/*3557*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3560*/      OPC_EmitMergeInputChains1_0,
/*3561*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i64, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, i64:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64:i32 xoaddr:iPTR:$ptr, i64:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3624
/*3576*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3577*/    OPC_RecordChild1, // #1 = $negsize
/*3578*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3601
/*3581*/      OPC_CheckChild1Type, MVT::i32,
/*3583*/      OPC_RecordChild2, // #2 = $fpsi
/*3584*/      OPC_CheckChild2Type, MVT::iPTR,
/*3586*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3589*/      OPC_EmitMergeInputChains1_0,
/*3590*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 i32:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3623
/*3603*/      OPC_CheckChild1Type, MVT::i64,
/*3605*/      OPC_RecordChild2, // #2 = $fpsi
/*3606*/      OPC_CheckChild2Type, MVT::iPTR,
/*3608*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3611*/      OPC_EmitMergeInputChains1_0,
/*3612*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 i64:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3661
/*3627*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3628*/    OPC_RecordChild1, // #1 = $src
/*3629*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3645
/*3632*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3635*/      OPC_EmitMergeInputChains1_0,
/*3636*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3660
/*3647*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3650*/      OPC_EmitMergeInputChains1_0,
/*3651*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(PPCISD::LBRX),// ->3727
/*3664*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3665*/    OPC_RecordChild1, // #1 = $src
/*3666*/    OPC_MoveChild, 2,
/*3668*/    OPC_Scope, 18, /*->3688*/ // 3 children in Scope
/*3670*/      OPC_CheckValueType, MVT::i16,
/*3672*/      OPC_MoveParent,
/*3673*/      OPC_CheckType, MVT::i32,
/*3675*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3678*/      OPC_EmitMergeInputChains1_0,
/*3679*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3688*/    /*Scope*/ 18, /*->3707*/
/*3689*/      OPC_CheckValueType, MVT::i32,
/*3691*/      OPC_MoveParent,
/*3692*/      OPC_CheckType, MVT::i32,
/*3694*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3697*/      OPC_EmitMergeInputChains1_0,
/*3698*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3707*/    /*Scope*/ 18, /*->3726*/
/*3708*/      OPC_CheckValueType, MVT::i64,
/*3710*/      OPC_MoveParent,
/*3711*/      OPC_CheckType, MVT::i64,
/*3713*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3716*/      OPC_EmitMergeInputChains1_0,
/*3717*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i64 xoaddr:iPTR:$src, i64:Other) - Complexity = 12
              // Dst: (LDBRX:i64 xoaddr:iPTR:$src)
/*3726*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3767
/*3730*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3731*/    OPC_CaptureGlueInput,
/*3732*/    OPC_RecordChild1, // #1 = $src
/*3733*/    OPC_CheckChild1Type, MVT::iPTR,
/*3735*/    OPC_CheckType, MVT::i64,
/*3737*/    OPC_Scope, 13, /*->3752*/ // 2 children in Scope
/*3739*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3742*/      OPC_EmitMergeInputChains1_0,
/*3743*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3752*/    /*Scope*/ 13, /*->3766*/
/*3753*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3756*/      OPC_EmitMergeInputChains1_0,
/*3757*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3766*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92|128,4/*604*/,  TARGET_VAL(ISD::XOR),// ->4375
/*3771*/    OPC_Scope, 39|128,1/*167*/, /*->3941*/ // 8 children in Scope
/*3774*/      OPC_MoveChild, 0,
/*3776*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3821
/*3780*/        OPC_RecordChild0, // #0 = $rS
/*3781*/        OPC_RecordChild1, // #1 = $rB
/*3782*/        OPC_MoveParent,
/*3783*/        OPC_MoveChild, 1,
/*3785*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3796*/        OPC_MoveParent,
/*3797*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3809
/*3800*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3820
/*3811*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3865
/*3824*/        OPC_RecordChild0, // #0 = $rS
/*3825*/        OPC_RecordChild1, // #1 = $rB
/*3826*/        OPC_MoveParent,
/*3827*/        OPC_MoveChild, 1,
/*3829*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3840*/        OPC_MoveParent,
/*3841*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3853
/*3844*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3864
/*3855*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3940
/*3868*/        OPC_RecordChild0, // #0 = $rS
/*3869*/        OPC_Scope, 40, /*->3911*/ // 2 children in Scope
/*3871*/          OPC_RecordChild1, // #1 = $rB
/*3872*/          OPC_MoveParent,
/*3873*/          OPC_MoveChild, 1,
/*3875*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3886*/          OPC_MoveParent,
/*3887*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3899
/*3890*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 i32:i32:$rS, i32:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3910
/*3901*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 i64:i64:$rS, i64:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
                  0, // EndSwitchType
/*3911*/        /*Scope*/ 27, /*->3939*/
/*3912*/          OPC_MoveChild, 1,
/*3914*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3925*/          OPC_MoveParent,
/*3926*/          OPC_MoveParent,
/*3927*/          OPC_RecordChild1, // #1 = $rB
/*3928*/          OPC_CheckType, MVT::i32,
/*3930*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 i32:i32:$rS, -1:i32), i32:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*3939*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3941*/    /*Scope*/ 33, /*->3975*/
/*3942*/      OPC_RecordChild0, // #0 = $rB
/*3943*/      OPC_MoveChild, 1,
/*3945*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3948*/      OPC_RecordChild0, // #1 = $rS
/*3949*/      OPC_MoveChild, 1,
/*3951*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3962*/      OPC_MoveParent,
/*3963*/      OPC_MoveParent,
/*3964*/      OPC_CheckType, MVT::i32,
/*3966*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 i32:i32:$rB, (xor:i32 i32:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 i32:i32:$rS, i32:i32:$rB)
/*3975*/    /*Scope*/ 33, /*->4009*/
/*3976*/      OPC_MoveChild, 0,
/*3978*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3981*/      OPC_RecordChild0, // #0 = $rS
/*3982*/      OPC_MoveChild, 1,
/*3984*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3995*/      OPC_MoveParent,
/*3996*/      OPC_MoveParent,
/*3997*/      OPC_RecordChild1, // #1 = $rB
/*3998*/      OPC_CheckType, MVT::i64,
/*4000*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 i64:i64:$rS, -1:i64), i64:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4009*/    /*Scope*/ 33, /*->4043*/
/*4010*/      OPC_RecordChild0, // #0 = $rB
/*4011*/      OPC_MoveChild, 1,
/*4013*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4016*/      OPC_RecordChild0, // #1 = $rS
/*4017*/      OPC_MoveChild, 1,
/*4019*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4030*/      OPC_MoveParent,
/*4031*/      OPC_MoveParent,
/*4032*/      OPC_CheckType, MVT::i64,
/*4034*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i64 i64:i64:$rB, (xor:i64 i64:i64:$rS, -1:i64)) - Complexity = 11
              // Dst: (EQV8:i64 i64:i64:$rS, i64:i64:$rB)
/*4043*/    /*Scope*/ 74, /*->4118*/
/*4044*/      OPC_MoveChild, 0,
/*4046*/      OPC_SwitchOpcode /*2 cases */, 32,  TARGET_VAL(ISD::OR),// ->4082
/*4050*/        OPC_RecordChild0, // #0 = $vA
/*4051*/        OPC_RecordChild1, // #1 = $vB
/*4052*/        OPC_MoveParent,
/*4053*/        OPC_MoveChild, 1,
/*4055*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4058*/        OPC_MoveChild, 0,
/*4060*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4063*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4065*/        OPC_CheckType, MVT::v16i8,
/*4067*/        OPC_MoveParent,
/*4068*/        OPC_MoveParent,
/*4069*/        OPC_CheckType, MVT::v4i32,
/*4071*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4073*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::BITCAST),// ->4117
/*4085*/        OPC_MoveChild, 0,
/*4087*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4090*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4092*/        OPC_CheckType, MVT::v16i8,
/*4094*/        OPC_MoveParent,
/*4095*/        OPC_MoveParent,
/*4096*/        OPC_MoveChild, 1,
/*4098*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4101*/        OPC_RecordChild0, // #0 = $vA
/*4102*/        OPC_RecordChild1, // #1 = $vB
/*4103*/        OPC_MoveParent,
/*4104*/        OPC_CheckType, MVT::v4i32,
/*4106*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4108*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
              0, // EndSwitchOpcode
/*4118*/    /*Scope*/ 30, /*->4149*/
/*4119*/      OPC_RecordChild0, // #0 = $vA
/*4120*/      OPC_MoveChild, 1,
/*4122*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4125*/      OPC_MoveChild, 0,
/*4127*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4130*/      OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4132*/      OPC_CheckType, MVT::v16i8,
/*4134*/      OPC_MoveParent,
/*4135*/      OPC_MoveParent,
/*4136*/      OPC_CheckType, MVT::v4i32,
/*4138*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4140*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 v4i32:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4149*/    /*Scope*/ 30, /*->4180*/
/*4150*/      OPC_MoveChild, 0,
/*4152*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4155*/      OPC_MoveChild, 0,
/*4157*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4160*/      OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4162*/      OPC_CheckType, MVT::v16i8,
/*4164*/      OPC_MoveParent,
/*4165*/      OPC_MoveParent,
/*4166*/      OPC_RecordChild1, // #0 = $vA
/*4167*/      OPC_CheckType, MVT::v4i32,
/*4169*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4171*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 ?:v4i32:$vA, ?:v4i32:$vA)
/*4180*/    /*Scope*/ 64|128,1/*192*/, /*->4374*/
/*4182*/      OPC_RecordChild0, // #0 = $in
/*4183*/      OPC_Scope, 25, /*->4210*/ // 2 children in Scope
/*4185*/        OPC_MoveChild, 1,
/*4187*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4198*/        OPC_MoveParent,
/*4199*/        OPC_CheckType, MVT::i32,
/*4201*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (xor:i32 i32:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 ?:i32:$in, ?:i32:$in)
/*4210*/      /*Scope*/ 33|128,1/*161*/, /*->4373*/
/*4212*/        OPC_RecordChild1, // #1 = $src2
/*4213*/        OPC_Scope, 119, /*->4334*/ // 4 children in Scope
/*4215*/          OPC_MoveChild, 1,
/*4217*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4220*/          OPC_Scope, 19, /*->4241*/ // 5 children in Scope
/*4222*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4224*/            OPC_MoveParent,
/*4225*/            OPC_CheckType, MVT::i32,
/*4227*/            OPC_EmitConvertToTarget, 1,
/*4229*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4232*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4241*/          /*Scope*/ 19, /*->4261*/
/*4242*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4244*/            OPC_MoveParent,
/*4245*/            OPC_CheckType, MVT::i32,
/*4247*/            OPC_EmitConvertToTarget, 1,
/*4249*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4252*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4261*/          /*Scope*/ 19, /*->4281*/
/*4262*/            OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4264*/            OPC_MoveParent,
/*4265*/            OPC_CheckType, MVT::i64,
/*4267*/            OPC_EmitConvertToTarget, 1,
/*4269*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4272*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4281*/          /*Scope*/ 19, /*->4301*/
/*4282*/            OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4284*/            OPC_MoveParent,
/*4285*/            OPC_CheckType, MVT::i64,
/*4287*/            OPC_EmitConvertToTarget, 1,
/*4289*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4292*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4301*/          /*Scope*/ 31, /*->4333*/
/*4302*/            OPC_MoveParent,
/*4303*/            OPC_CheckType, MVT::i32,
/*4305*/            OPC_EmitConvertToTarget, 1,
/*4307*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4310*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*4319*/            OPC_EmitConvertToTarget, 1,
/*4321*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*4324*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4333*/          0, /*End of Scope*/
/*4334*/        /*Scope*/ 11, /*->4346*/
/*4335*/          OPC_CheckType, MVT::i32,
/*4337*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 i32:i32:$rS, i32:i32:$rB)
/*4346*/        /*Scope*/ 11, /*->4358*/
/*4347*/          OPC_CheckType, MVT::i64,
/*4349*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 i64:i64:$rS, i64:i64:$rB)
/*4358*/        /*Scope*/ 13, /*->4372*/
/*4359*/          OPC_CheckType, MVT::v4i32,
/*4361*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4363*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VXOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4372*/        0, /*End of Scope*/
/*4373*/      0, /*End of Scope*/
/*4374*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37|128,3/*421*/,  TARGET_VAL(ISD::AND),// ->4800
/*4379*/    OPC_Scope, 46, /*->4427*/ // 5 children in Scope
/*4381*/      OPC_RecordChild0, // #0 = $rS
/*4382*/      OPC_MoveChild, 1,
/*4384*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4387*/      OPC_RecordChild0, // #1 = $rB
/*4388*/      OPC_MoveChild, 1,
/*4390*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4401*/      OPC_MoveParent,
/*4402*/      OPC_MoveParent,
/*4403*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4415
/*4406*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4426
/*4417*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4427*/    /*Scope*/ 88, /*->4516*/
/*4428*/      OPC_MoveChild, 0,
/*4430*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4475
/*4434*/        OPC_RecordChild0, // #0 = $rB
/*4435*/        OPC_MoveChild, 1,
/*4437*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4448*/        OPC_MoveParent,
/*4449*/        OPC_MoveParent,
/*4450*/        OPC_RecordChild1, // #1 = $rS
/*4451*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4463
/*4454*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 i32:i32:$rS, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4474
/*4465*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 i64:i64:$rS, i64:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4515
/*4478*/        OPC_RecordChild0, // #0 = $in
/*4479*/        OPC_RecordChild1, // #1 = $sh
/*4480*/        OPC_CheckChild1Type, MVT::i32,
/*4482*/        OPC_MoveParent,
/*4483*/        OPC_RecordChild1, // #2 = $imm
/*4484*/        OPC_MoveChild, 1,
/*4486*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4489*/        OPC_CheckPredicate, 73, // Predicate_maskimm32
/*4491*/        OPC_MoveParent,
/*4492*/        OPC_CheckType, MVT::i32,
/*4494*/        OPC_EmitConvertToTarget, 2,
/*4496*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4499*/        OPC_EmitConvertToTarget, 2,
/*4501*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4504*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 i32:i32:$in, i32:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4516*/    /*Scope*/ 72, /*->4589*/
/*4517*/      OPC_RecordChild0, // #0 = $vA
/*4518*/      OPC_MoveChild, 1,
/*4520*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4523*/      OPC_Scope, 31, /*->4556*/ // 2 children in Scope
/*4525*/        OPC_RecordChild0, // #1 = $vB
/*4526*/        OPC_MoveChild, 1,
/*4528*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4531*/        OPC_MoveChild, 0,
/*4533*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4536*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4538*/        OPC_CheckType, MVT::v16i8,
/*4540*/        OPC_MoveParent,
/*4541*/        OPC_MoveParent,
/*4542*/        OPC_MoveParent,
/*4543*/        OPC_CheckType, MVT::v4i32,
/*4545*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4547*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4556*/      /*Scope*/ 31, /*->4588*/
/*4557*/        OPC_MoveChild, 0,
/*4559*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4562*/        OPC_MoveChild, 0,
/*4564*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4567*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4569*/        OPC_CheckType, MVT::v16i8,
/*4571*/        OPC_MoveParent,
/*4572*/        OPC_MoveParent,
/*4573*/        OPC_RecordChild1, // #1 = $vB
/*4574*/        OPC_MoveParent,
/*4575*/        OPC_CheckType, MVT::v4i32,
/*4577*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4579*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB)) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4588*/      0, /*End of Scope*/
/*4589*/    /*Scope*/ 73, /*->4663*/
/*4590*/      OPC_MoveChild, 0,
/*4592*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4595*/      OPC_Scope, 32, /*->4629*/ // 2 children in Scope
/*4597*/        OPC_RecordChild0, // #0 = $vB
/*4598*/        OPC_MoveChild, 1,
/*4600*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4603*/        OPC_MoveChild, 0,
/*4605*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4608*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4610*/        OPC_CheckType, MVT::v16i8,
/*4612*/        OPC_MoveParent,
/*4613*/        OPC_MoveParent,
/*4614*/        OPC_MoveParent,
/*4615*/        OPC_RecordChild1, // #1 = $vA
/*4616*/        OPC_CheckType, MVT::v4i32,
/*4618*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4620*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 v4i32:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4629*/      /*Scope*/ 32, /*->4662*/
/*4630*/        OPC_MoveChild, 0,
/*4632*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4635*/        OPC_MoveChild, 0,
/*4637*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4640*/        OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*4642*/        OPC_CheckType, MVT::v16i8,
/*4644*/        OPC_MoveParent,
/*4645*/        OPC_MoveParent,
/*4646*/        OPC_RecordChild1, // #0 = $vB
/*4647*/        OPC_MoveParent,
/*4648*/        OPC_RecordChild1, // #1 = $vA
/*4649*/        OPC_CheckType, MVT::v4i32,
/*4651*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4653*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), v4i32:v4i32:$vB), v4i32:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4662*/      0, /*End of Scope*/
/*4663*/    /*Scope*/ 6|128,1/*134*/, /*->4799*/
/*4665*/      OPC_RecordChild0, // #0 = $src1
/*4666*/      OPC_RecordChild1, // #1 = $src2
/*4667*/      OPC_Scope, 91, /*->4760*/ // 4 children in Scope
/*4669*/        OPC_MoveChild, 1,
/*4671*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4674*/        OPC_Scope, 20, /*->4696*/ // 4 children in Scope
/*4676*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4678*/          OPC_MoveParent,
/*4679*/          OPC_CheckType, MVT::i32,
/*4681*/          OPC_EmitConvertToTarget, 1,
/*4683*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4686*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo:i32:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4696*/        /*Scope*/ 20, /*->4717*/
/*4697*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4699*/          OPC_MoveParent,
/*4700*/          OPC_CheckType, MVT::i32,
/*4702*/          OPC_EmitConvertToTarget, 1,
/*4704*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4707*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                      2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo:i32:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4717*/        /*Scope*/ 20, /*->4738*/
/*4718*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4720*/          OPC_MoveParent,
/*4721*/          OPC_CheckType, MVT::i64,
/*4723*/          OPC_EmitConvertToTarget, 1,
/*4725*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4728*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ANDIo8:i64:i32 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4738*/        /*Scope*/ 20, /*->4759*/
/*4739*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4741*/          OPC_MoveParent,
/*4742*/          OPC_CheckType, MVT::i64,
/*4744*/          OPC_EmitConvertToTarget, 1,
/*4746*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4749*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                      2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ANDISo8:i64:i32 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4759*/        0, /*End of Scope*/
/*4760*/      /*Scope*/ 11, /*->4772*/
/*4761*/        OPC_CheckType, MVT::i32,
/*4763*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (AND:i32 i32:i32:$rS, i32:i32:$rB)
/*4772*/      /*Scope*/ 11, /*->4784*/
/*4773*/        OPC_CheckType, MVT::i64,
/*4775*/        OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (AND8:i64 i64:i64:$rS, i64:i64:$rB)
/*4784*/      /*Scope*/ 13, /*->4798*/
/*4785*/        OPC_CheckType, MVT::v4i32,
/*4787*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*4789*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VAND:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*4798*/      0, /*End of Scope*/
/*4799*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,2/*260*/,  TARGET_VAL(ISD::OR),// ->5064
/*4804*/    OPC_Scope, 46, /*->4852*/ // 3 children in Scope
/*4806*/      OPC_RecordChild0, // #0 = $rS
/*4807*/      OPC_MoveChild, 1,
/*4809*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4812*/      OPC_RecordChild0, // #1 = $rB
/*4813*/      OPC_MoveChild, 1,
/*4815*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4826*/      OPC_MoveParent,
/*4827*/      OPC_MoveParent,
/*4828*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4840
/*4831*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, (xor:i32 i32:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4851
/*4842*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, (xor:i64 i64:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4852*/    /*Scope*/ 46, /*->4899*/
/*4853*/      OPC_MoveChild, 0,
/*4855*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4858*/      OPC_RecordChild0, // #0 = $rB
/*4859*/      OPC_MoveChild, 1,
/*4861*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4872*/      OPC_MoveParent,
/*4873*/      OPC_MoveParent,
/*4874*/      OPC_RecordChild1, // #1 = $rS
/*4875*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4887
/*4878*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 i32:i32:$rB, -1:i32), i32:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 i32:i32:$rS, i32:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4898
/*4889*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 i64:i64:$rB, -1:i64), i64:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 i64:i64:$rS, i64:i64:$rB)
              0, // EndSwitchType
/*4899*/    /*Scope*/ 34|128,1/*162*/, /*->5063*/
/*4901*/      OPC_RecordChild0, // #0 = $src1
/*4902*/      OPC_RecordChild1, // #1 = $src2
/*4903*/      OPC_Scope, 119, /*->5024*/ // 4 children in Scope
/*4905*/        OPC_MoveChild, 1,
/*4907*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4910*/        OPC_Scope, 19, /*->4931*/ // 5 children in Scope
/*4912*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4914*/          OPC_MoveParent,
/*4915*/          OPC_CheckType, MVT::i32,
/*4917*/          OPC_EmitConvertToTarget, 1,
/*4919*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4922*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 i32:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4931*/        /*Scope*/ 19, /*->4951*/
/*4932*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4934*/          OPC_MoveParent,
/*4935*/          OPC_CheckType, MVT::i32,
/*4937*/          OPC_EmitConvertToTarget, 1,
/*4939*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4942*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 i32:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 i32:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4951*/        /*Scope*/ 19, /*->4971*/
/*4952*/          OPC_CheckPredicate, 71, // Predicate_immZExt16
/*4954*/          OPC_MoveParent,
/*4955*/          OPC_CheckType, MVT::i64,
/*4957*/          OPC_EmitConvertToTarget, 1,
/*4959*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4962*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 i64:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4971*/        /*Scope*/ 19, /*->4991*/
/*4972*/          OPC_CheckPredicate, 72, // Predicate_imm16ShiftedZExt
/*4974*/          OPC_MoveParent,
/*4975*/          OPC_CheckType, MVT::i64,
/*4977*/          OPC_EmitConvertToTarget, 1,
/*4979*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4982*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 i64:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 i64:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4991*/        /*Scope*/ 31, /*->5023*/
/*4992*/          OPC_MoveParent,
/*4993*/          OPC_CheckType, MVT::i32,
/*4995*/          OPC_EmitConvertToTarget, 1,
/*4997*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*5000*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/*5009*/          OPC_EmitConvertToTarget, 1,
/*5011*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*5014*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 ?:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*5023*/        0, /*End of Scope*/
/*5024*/      /*Scope*/ 11, /*->5036*/
/*5025*/        OPC_CheckType, MVT::i32,
/*5027*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 i32:i32:$rS, i32:i32:$rB)
/*5036*/      /*Scope*/ 11, /*->5048*/
/*5037*/        OPC_CheckType, MVT::i64,
/*5039*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 i64:i64:$rS, i64:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 i64:i64:$rS, i64:i64:$rB)
/*5048*/      /*Scope*/ 13, /*->5062*/
/*5049*/        OPC_CheckType, MVT::v4i32,
/*5051*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5053*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5062*/      0, /*End of Scope*/
/*5063*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Hi),// ->5226
/*5068*/    OPC_RecordChild0, // #0 = $in
/*5069*/    OPC_MoveChild, 0,
/*5071*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5103
/*5075*/      OPC_MoveParent,
/*5076*/      OPC_MoveChild, 1,
/*5078*/      OPC_CheckInteger, 0, 
/*5080*/      OPC_MoveParent,
/*5081*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5092
/*5084*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5102
/*5094*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5134
/*5106*/      OPC_MoveParent,
/*5107*/      OPC_MoveChild, 1,
/*5109*/      OPC_CheckInteger, 0, 
/*5111*/      OPC_MoveParent,
/*5112*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5123
/*5115*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5133
/*5125*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5165
/*5137*/      OPC_MoveParent,
/*5138*/      OPC_MoveChild, 1,
/*5140*/      OPC_CheckInteger, 0, 
/*5142*/      OPC_MoveParent,
/*5143*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5154
/*5146*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5164
/*5156*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5196
/*5168*/      OPC_MoveParent,
/*5169*/      OPC_MoveChild, 1,
/*5171*/      OPC_CheckInteger, 0, 
/*5173*/      OPC_MoveParent,
/*5174*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5185
/*5177*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5195
/*5187*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5225
/*5199*/      OPC_MoveParent,
/*5200*/      OPC_RecordChild1, // #1 = $in
/*5201*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5213
/*5204*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDIS:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5224
/*5215*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPChi:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDIS8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 30|128,1/*158*/,  TARGET_VAL(PPCISD::Lo),// ->5388
/*5230*/    OPC_RecordChild0, // #0 = $in
/*5231*/    OPC_MoveChild, 0,
/*5233*/    OPC_SwitchOpcode /*5 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5265
/*5237*/      OPC_MoveParent,
/*5238*/      OPC_MoveChild, 1,
/*5240*/      OPC_CheckInteger, 0, 
/*5242*/      OPC_MoveParent,
/*5243*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5254
/*5246*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5264
/*5256*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5296
/*5268*/      OPC_MoveParent,
/*5269*/      OPC_MoveChild, 1,
/*5271*/      OPC_CheckInteger, 0, 
/*5273*/      OPC_MoveParent,
/*5274*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5285
/*5277*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5295
/*5287*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5327
/*5299*/      OPC_MoveParent,
/*5300*/      OPC_MoveChild, 1,
/*5302*/      OPC_CheckInteger, 0, 
/*5304*/      OPC_MoveParent,
/*5305*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5316
/*5308*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5326
/*5318*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5358
/*5330*/      OPC_MoveParent,
/*5331*/      OPC_MoveChild, 1,
/*5333*/      OPC_CheckInteger, 0, 
/*5335*/      OPC_MoveParent,
/*5336*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5347
/*5339*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5357
/*5349*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalTLSAddress),// ->5387
/*5361*/      OPC_MoveParent,
/*5362*/      OPC_RecordChild1, // #1 = $in
/*5363*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5375
/*5366*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i32 (tglobaltlsaddr:i32):$g, i32:i32:$in) - Complexity = 6
                // Dst: (ADDI:i32 ?:i32:$in, (tglobaltlsaddr:i32):$g)
              /*SwitchType*/ 9,  MVT::i64,// ->5386
/*5377*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (PPClo:i64 (tglobaltlsaddr:i64):$g, i64:i64:$in) - Complexity = 6
                // Dst: (ADDI8:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWAX),// ->5406
/*5391*/    OPC_RecordNode,   // #0 = 'PPClfiwax' chained node
/*5392*/    OPC_RecordChild1, // #1 = $src
/*5393*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5396*/    OPC_EmitMergeInputChains1_0,
/*5397*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWAX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwax:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWAX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::LFIWZX),// ->5424
/*5409*/    OPC_RecordNode,   // #0 = 'PPClfiwzx' chained node
/*5410*/    OPC_RecordChild1, // #1 = $src
/*5411*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5414*/    OPC_EmitMergeInputChains1_0,
/*5415*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LFIWZX), 0|OPFL_Chain,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
            // Src: (PPClfiwzx:f64 xoaddr:iPTR:$src) - Complexity = 12
            // Dst: (LFIWZX:f64 xoaddr:iPTR:$src)
          /*SwitchOpcode*/ 125,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->5552
/*5427*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*5428*/    OPC_MoveChild, 1,
/*5430*/    OPC_Scope, 20, /*->5452*/ // 6 children in Scope
/*5432*/      OPC_CheckInteger, 58|128,11/*1466*/, 
/*5435*/      OPC_MoveParent,
/*5436*/      OPC_RecordChild2, // #1 = $src
/*5437*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5439*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5442*/      OPC_EmitMergeInputChains1_0,
/*5443*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 1466:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*5452*/    /*Scope*/ 20, /*->5473*/
/*5453*/      OPC_CheckInteger, 59|128,11/*1467*/, 
/*5456*/      OPC_MoveParent,
/*5457*/      OPC_RecordChild2, // #1 = $src
/*5458*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5460*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5463*/      OPC_EmitMergeInputChains1_0,
/*5464*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 1467:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*5473*/    /*Scope*/ 20, /*->5494*/
/*5474*/      OPC_CheckInteger, 60|128,11/*1468*/, 
/*5477*/      OPC_MoveParent,
/*5478*/      OPC_RecordChild2, // #1 = $src
/*5479*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5481*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5484*/      OPC_EmitMergeInputChains1_0,
/*5485*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1468:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*5494*/    /*Scope*/ 20, /*->5515*/
/*5495*/      OPC_CheckInteger, 63|128,11/*1471*/, 
/*5498*/      OPC_MoveParent,
/*5499*/      OPC_RecordChild2, // #1 = $src
/*5500*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5502*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5505*/      OPC_EmitMergeInputChains1_0,
/*5506*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1471:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*5515*/    /*Scope*/ 20, /*->5536*/
/*5516*/      OPC_CheckInteger, 64|128,11/*1472*/, 
/*5519*/      OPC_MoveParent,
/*5520*/      OPC_RecordChild2, // #1 = $src
/*5521*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5523*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*5526*/      OPC_EmitMergeInputChains1_0,
/*5527*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 1472:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*5536*/    /*Scope*/ 14, /*->5551*/
/*5537*/      OPC_CheckInteger, 65|128,11/*1473*/, 
/*5540*/      OPC_MoveParent,
/*5541*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5543*/      OPC_EmitMergeInputChains1_0,
/*5544*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 1473:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*5551*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48|128,15/*1968*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->7524
/*5556*/    OPC_MoveChild, 0,
/*5558*/    OPC_Scope, 19, /*->5579*/ // 103 children in Scope
/*5560*/      OPC_CheckInteger, 61|128,11/*1469*/, 
/*5563*/      OPC_MoveParent,
/*5564*/      OPC_RecordChild1, // #0 = $src
/*5565*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5567*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5570*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1469:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*5579*/    /*Scope*/ 19, /*->5599*/
/*5580*/      OPC_CheckInteger, 62|128,11/*1470*/, 
/*5583*/      OPC_MoveParent,
/*5584*/      OPC_RecordChild1, // #0 = $src
/*5585*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5587*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*5590*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 1470:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*5599*/    /*Scope*/ 44, /*->5644*/
/*5600*/      OPC_CheckInteger, 114|128,11/*1522*/, 
/*5603*/      OPC_MoveParent,
/*5604*/      OPC_RecordChild1, // #0 = $vB
/*5605*/      OPC_Scope, 15, /*->5622*/ // 2 children in Scope
/*5607*/        OPC_MoveChild, 2,
/*5609*/        OPC_CheckInteger, 0, 
/*5611*/        OPC_MoveParent,
/*5612*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5614*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTUXS_0:v4i32 v4f32:v4f32:$vB)
/*5622*/      /*Scope*/ 20, /*->5643*/
/*5623*/        OPC_RecordChild2, // #1 = $UIMM
/*5624*/        OPC_MoveChild, 2,
/*5626*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5629*/        OPC_MoveParent,
/*5630*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5632*/        OPC_EmitConvertToTarget, 1,
/*5634*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1522:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5643*/      0, /*End of Scope*/
/*5644*/    /*Scope*/ 44, /*->5689*/
/*5645*/      OPC_CheckInteger, 113|128,11/*1521*/, 
/*5648*/      OPC_MoveParent,
/*5649*/      OPC_RecordChild1, // #0 = $vB
/*5650*/      OPC_Scope, 15, /*->5667*/ // 2 children in Scope
/*5652*/        OPC_MoveChild, 2,
/*5654*/        OPC_CheckInteger, 0, 
/*5656*/        OPC_MoveParent,
/*5657*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5659*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCTSXS_0:v4i32 v4f32:v4f32:$vB)
/*5667*/      /*Scope*/ 20, /*->5688*/
/*5668*/        OPC_RecordChild2, // #1 = $UIMM
/*5669*/        OPC_MoveChild, 2,
/*5671*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5674*/        OPC_MoveParent,
/*5675*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5677*/        OPC_EmitConvertToTarget, 1,
/*5679*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4i32 1521:iPTR, v4f32:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, v4f32:v4f32:$vB)
/*5688*/      0, /*End of Scope*/
/*5689*/    /*Scope*/ 44, /*->5734*/
/*5690*/      OPC_CheckInteger, 85|128,11/*1493*/, 
/*5693*/      OPC_MoveParent,
/*5694*/      OPC_RecordChild1, // #0 = $vB
/*5695*/      OPC_Scope, 15, /*->5712*/ // 2 children in Scope
/*5697*/        OPC_MoveChild, 2,
/*5699*/        OPC_CheckInteger, 0, 
/*5701*/        OPC_MoveParent,
/*5702*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5704*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFSX_0:v4f32 v4i32:v4i32:$vB)
/*5712*/      /*Scope*/ 20, /*->5733*/
/*5713*/        OPC_RecordChild2, // #1 = $UIMM
/*5714*/        OPC_MoveChild, 2,
/*5716*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5719*/        OPC_MoveParent,
/*5720*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5722*/        OPC_EmitConvertToTarget, 1,
/*5724*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1493:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5733*/      0, /*End of Scope*/
/*5734*/    /*Scope*/ 44, /*->5779*/
/*5735*/      OPC_CheckInteger, 86|128,11/*1494*/, 
/*5738*/      OPC_MoveParent,
/*5739*/      OPC_RecordChild1, // #0 = $vB
/*5740*/      OPC_Scope, 15, /*->5757*/ // 2 children in Scope
/*5742*/        OPC_MoveChild, 2,
/*5744*/        OPC_CheckInteger, 0, 
/*5746*/        OPC_MoveParent,
/*5747*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5749*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                    1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, 0:i32) - Complexity = 13
                // Dst: (VCFUX_0:v4f32 v4i32:v4i32:$vB)
/*5757*/      /*Scope*/ 20, /*->5778*/
/*5758*/        OPC_RecordChild2, // #1 = $UIMM
/*5759*/        OPC_MoveChild, 2,
/*5761*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5764*/        OPC_MoveParent,
/*5765*/        OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5767*/        OPC_EmitConvertToTarget, 1,
/*5769*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
                // Src: (intrinsic_wo_chain:v4f32 1494:iPTR, v4i32:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
                // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, v4i32:v4i32:$vB)
/*5778*/      0, /*End of Scope*/
/*5779*/    /*Scope*/ 19, /*->5799*/
/*5780*/      OPC_CheckInteger, 125|128,11/*1533*/, 
/*5783*/      OPC_MoveParent,
/*5784*/      OPC_RecordChild1, // #0 = $vA
/*5785*/      OPC_RecordChild2, // #1 = $vB
/*5786*/      OPC_RecordChild3, // #2 = $vC
/*5787*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5789*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1533:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5799*/    /*Scope*/ 19, /*->5819*/
/*5800*/      OPC_CheckInteger, 126|128,11/*1534*/, 
/*5803*/      OPC_MoveParent,
/*5804*/      OPC_RecordChild1, // #0 = $vA
/*5805*/      OPC_RecordChild2, // #1 = $vB
/*5806*/      OPC_RecordChild3, // #2 = $vC
/*5807*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5809*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1534:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5819*/    /*Scope*/ 19, /*->5839*/
/*5820*/      OPC_CheckInteger, 6|128,12/*1542*/, 
/*5823*/      OPC_MoveParent,
/*5824*/      OPC_RecordChild1, // #0 = $vA
/*5825*/      OPC_RecordChild2, // #1 = $vB
/*5826*/      OPC_RecordChild3, // #2 = $vC
/*5827*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5829*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 1542:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v8i16:v8i16:$vC)
/*5839*/    /*Scope*/ 19, /*->5859*/
/*5840*/      OPC_CheckInteger, 22|128,12/*1558*/, 
/*5843*/      OPC_MoveParent,
/*5844*/      OPC_RecordChild1, // #0 = $vA
/*5845*/      OPC_RecordChild2, // #1 = $vB
/*5846*/      OPC_RecordChild3, // #2 = $vC
/*5847*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5849*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1558:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v16i8:v16i8:$vC)
/*5859*/    /*Scope*/ 19, /*->5879*/
/*5860*/      OPC_CheckInteger, 39|128,12/*1575*/, 
/*5863*/      OPC_MoveParent,
/*5864*/      OPC_RecordChild1, // #0 = $vA
/*5865*/      OPC_RecordChild2, // #1 = $vB
/*5866*/      OPC_RecordChild3, // #2 = $vC
/*5867*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5869*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1575:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, v4i32:v4i32:$vC)
/*5879*/    /*Scope*/ 17, /*->5897*/
/*5880*/      OPC_CheckInteger, 72|128,11/*1480*/, 
/*5883*/      OPC_MoveParent,
/*5884*/      OPC_RecordChild1, // #0 = $vA
/*5885*/      OPC_RecordChild2, // #1 = $vB
/*5886*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5888*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1480:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5897*/    /*Scope*/ 17, /*->5915*/
/*5898*/      OPC_CheckInteger, 73|128,11/*1481*/, 
/*5901*/      OPC_MoveParent,
/*5902*/      OPC_RecordChild1, // #0 = $vA
/*5903*/      OPC_RecordChild2, // #1 = $vB
/*5904*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5906*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1481:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*5915*/    /*Scope*/ 17, /*->5933*/
/*5916*/      OPC_CheckInteger, 74|128,11/*1482*/, 
/*5919*/      OPC_MoveParent,
/*5920*/      OPC_RecordChild1, // #0 = $vA
/*5921*/      OPC_RecordChild2, // #1 = $vB
/*5922*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5924*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1482:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*5933*/    /*Scope*/ 17, /*->5951*/
/*5934*/      OPC_CheckInteger, 75|128,11/*1483*/, 
/*5937*/      OPC_MoveParent,
/*5938*/      OPC_RecordChild1, // #0 = $vA
/*5939*/      OPC_RecordChild2, // #1 = $vB
/*5940*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5942*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1483:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*5951*/    /*Scope*/ 17, /*->5969*/
/*5952*/      OPC_CheckInteger, 76|128,11/*1484*/, 
/*5955*/      OPC_MoveParent,
/*5956*/      OPC_RecordChild1, // #0 = $vA
/*5957*/      OPC_RecordChild2, // #1 = $vB
/*5958*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5960*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1484:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*5969*/    /*Scope*/ 17, /*->5987*/
/*5970*/      OPC_CheckInteger, 77|128,11/*1485*/, 
/*5973*/      OPC_MoveParent,
/*5974*/      OPC_RecordChild1, // #0 = $vA
/*5975*/      OPC_RecordChild2, // #1 = $vB
/*5976*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5978*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1485:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*5987*/    /*Scope*/ 17, /*->6005*/
/*5988*/      OPC_CheckInteger, 78|128,11/*1486*/, 
/*5991*/      OPC_MoveParent,
/*5992*/      OPC_RecordChild1, // #0 = $vA
/*5993*/      OPC_RecordChild2, // #1 = $vB
/*5994*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*5996*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1486:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6005*/    /*Scope*/ 17, /*->6023*/
/*6006*/      OPC_CheckInteger, 79|128,11/*1487*/, 
/*6009*/      OPC_MoveParent,
/*6010*/      OPC_RecordChild1, // #0 = $vA
/*6011*/      OPC_RecordChild2, // #1 = $vB
/*6012*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6014*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1487:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6023*/    /*Scope*/ 17, /*->6041*/
/*6024*/      OPC_CheckInteger, 80|128,11/*1488*/, 
/*6027*/      OPC_MoveParent,
/*6028*/      OPC_RecordChild1, // #0 = $vA
/*6029*/      OPC_RecordChild2, // #1 = $vB
/*6030*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6032*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1488:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6041*/    /*Scope*/ 17, /*->6059*/
/*6042*/      OPC_CheckInteger, 81|128,11/*1489*/, 
/*6045*/      OPC_MoveParent,
/*6046*/      OPC_RecordChild1, // #0 = $vA
/*6047*/      OPC_RecordChild2, // #1 = $vB
/*6048*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6050*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1489:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6059*/    /*Scope*/ 17, /*->6077*/
/*6060*/      OPC_CheckInteger, 82|128,11/*1490*/, 
/*6063*/      OPC_MoveParent,
/*6064*/      OPC_RecordChild1, // #0 = $vA
/*6065*/      OPC_RecordChild2, // #1 = $vB
/*6066*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6068*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1490:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6077*/    /*Scope*/ 17, /*->6095*/
/*6078*/      OPC_CheckInteger, 83|128,11/*1491*/, 
/*6081*/      OPC_MoveParent,
/*6082*/      OPC_RecordChild1, // #0 = $vA
/*6083*/      OPC_RecordChild2, // #1 = $vB
/*6084*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6086*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1491:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6095*/    /*Scope*/ 17, /*->6113*/
/*6096*/      OPC_CheckInteger, 84|128,11/*1492*/, 
/*6099*/      OPC_MoveParent,
/*6100*/      OPC_RecordChild1, // #0 = $vA
/*6101*/      OPC_RecordChild2, // #1 = $vB
/*6102*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6104*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1492:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6113*/    /*Scope*/ 17, /*->6131*/
/*6114*/      OPC_CheckInteger, 119|128,11/*1527*/, 
/*6117*/      OPC_MoveParent,
/*6118*/      OPC_RecordChild1, // #0 = $vA
/*6119*/      OPC_RecordChild2, // #1 = $vB
/*6120*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6122*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1527:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6131*/    /*Scope*/ 17, /*->6149*/
/*6132*/      OPC_CheckInteger, 120|128,11/*1528*/, 
/*6135*/      OPC_MoveParent,
/*6136*/      OPC_RecordChild1, // #0 = $vA
/*6137*/      OPC_RecordChild2, // #1 = $vB
/*6138*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6140*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1528:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6149*/    /*Scope*/ 17, /*->6167*/
/*6150*/      OPC_CheckInteger, 121|128,11/*1529*/, 
/*6153*/      OPC_MoveParent,
/*6154*/      OPC_RecordChild1, // #0 = $vA
/*6155*/      OPC_RecordChild2, // #1 = $vB
/*6156*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6158*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1529:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6167*/    /*Scope*/ 17, /*->6185*/
/*6168*/      OPC_CheckInteger, 122|128,11/*1530*/, 
/*6171*/      OPC_MoveParent,
/*6172*/      OPC_RecordChild1, // #0 = $vA
/*6173*/      OPC_RecordChild2, // #1 = $vB
/*6174*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6176*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1530:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6185*/    /*Scope*/ 17, /*->6203*/
/*6186*/      OPC_CheckInteger, 123|128,11/*1531*/, 
/*6189*/      OPC_MoveParent,
/*6190*/      OPC_RecordChild1, // #0 = $vA
/*6191*/      OPC_RecordChild2, // #1 = $vB
/*6192*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6194*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1531:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6203*/    /*Scope*/ 17, /*->6221*/
/*6204*/      OPC_CheckInteger, 124|128,11/*1532*/, 
/*6207*/      OPC_MoveParent,
/*6208*/      OPC_RecordChild1, // #0 = $vA
/*6209*/      OPC_RecordChild2, // #1 = $vB
/*6210*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6212*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1532:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6221*/    /*Scope*/ 17, /*->6239*/
/*6222*/      OPC_CheckInteger, 0|128,12/*1536*/, 
/*6225*/      OPC_MoveParent,
/*6226*/      OPC_RecordChild1, // #0 = $vA
/*6227*/      OPC_RecordChild2, // #1 = $vB
/*6228*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6230*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1536:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6239*/    /*Scope*/ 17, /*->6257*/
/*6240*/      OPC_CheckInteger, 1|128,12/*1537*/, 
/*6243*/      OPC_MoveParent,
/*6244*/      OPC_RecordChild1, // #0 = $vA
/*6245*/      OPC_RecordChild2, // #1 = $vB
/*6246*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6248*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1537:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6257*/    /*Scope*/ 17, /*->6275*/
/*6258*/      OPC_CheckInteger, 2|128,12/*1538*/, 
/*6261*/      OPC_MoveParent,
/*6262*/      OPC_RecordChild1, // #0 = $vA
/*6263*/      OPC_RecordChild2, // #1 = $vB
/*6264*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6266*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1538:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6275*/    /*Scope*/ 17, /*->6293*/
/*6276*/      OPC_CheckInteger, 3|128,12/*1539*/, 
/*6279*/      OPC_MoveParent,
/*6280*/      OPC_RecordChild1, // #0 = $vA
/*6281*/      OPC_RecordChild2, // #1 = $vB
/*6282*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6284*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1539:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6293*/    /*Scope*/ 17, /*->6311*/
/*6294*/      OPC_CheckInteger, 4|128,12/*1540*/, 
/*6297*/      OPC_MoveParent,
/*6298*/      OPC_RecordChild1, // #0 = $vA
/*6299*/      OPC_RecordChild2, // #1 = $vB
/*6300*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6302*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1540:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6311*/    /*Scope*/ 17, /*->6329*/
/*6312*/      OPC_CheckInteger, 5|128,12/*1541*/, 
/*6315*/      OPC_MoveParent,
/*6316*/      OPC_RecordChild1, // #0 = $vA
/*6317*/      OPC_RecordChild2, // #1 = $vB
/*6318*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6320*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1541:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6329*/    /*Scope*/ 19, /*->6349*/
/*6330*/      OPC_CheckInteger, 7|128,12/*1543*/, 
/*6333*/      OPC_MoveParent,
/*6334*/      OPC_RecordChild1, // #0 = $vA
/*6335*/      OPC_RecordChild2, // #1 = $vB
/*6336*/      OPC_RecordChild3, // #2 = $vC
/*6337*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6339*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1543:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6349*/    /*Scope*/ 19, /*->6369*/
/*6350*/      OPC_CheckInteger, 8|128,12/*1544*/, 
/*6353*/      OPC_MoveParent,
/*6354*/      OPC_RecordChild1, // #0 = $vA
/*6355*/      OPC_RecordChild2, // #1 = $vB
/*6356*/      OPC_RecordChild3, // #2 = $vC
/*6357*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6359*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1544:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6369*/    /*Scope*/ 19, /*->6389*/
/*6370*/      OPC_CheckInteger, 9|128,12/*1545*/, 
/*6373*/      OPC_MoveParent,
/*6374*/      OPC_RecordChild1, // #0 = $vA
/*6375*/      OPC_RecordChild2, // #1 = $vB
/*6376*/      OPC_RecordChild3, // #2 = $vC
/*6377*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6379*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1545:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6389*/    /*Scope*/ 19, /*->6409*/
/*6390*/      OPC_CheckInteger, 10|128,12/*1546*/, 
/*6393*/      OPC_MoveParent,
/*6394*/      OPC_RecordChild1, // #0 = $vA
/*6395*/      OPC_RecordChild2, // #1 = $vB
/*6396*/      OPC_RecordChild3, // #2 = $vC
/*6397*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6399*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1546:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v4i32:v4i32:$vC)
/*6409*/    /*Scope*/ 19, /*->6429*/
/*6410*/      OPC_CheckInteger, 11|128,12/*1547*/, 
/*6413*/      OPC_MoveParent,
/*6414*/      OPC_RecordChild1, // #0 = $vA
/*6415*/      OPC_RecordChild2, // #1 = $vB
/*6416*/      OPC_RecordChild3, // #2 = $vC
/*6417*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6419*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1547:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6429*/    /*Scope*/ 19, /*->6449*/
/*6430*/      OPC_CheckInteger, 12|128,12/*1548*/, 
/*6433*/      OPC_MoveParent,
/*6434*/      OPC_RecordChild1, // #0 = $vA
/*6435*/      OPC_RecordChild2, // #1 = $vB
/*6436*/      OPC_RecordChild3, // #2 = $vC
/*6437*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6439*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 1548:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB, v4i32:v4i32:$vC)
/*6449*/    /*Scope*/ 17, /*->6467*/
/*6450*/      OPC_CheckInteger, 13|128,12/*1549*/, 
/*6453*/      OPC_MoveParent,
/*6454*/      OPC_RecordChild1, // #0 = $vA
/*6455*/      OPC_RecordChild2, // #1 = $vB
/*6456*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6458*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1549:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6467*/    /*Scope*/ 17, /*->6485*/
/*6468*/      OPC_CheckInteger, 14|128,12/*1550*/, 
/*6471*/      OPC_MoveParent,
/*6472*/      OPC_RecordChild1, // #0 = $vA
/*6473*/      OPC_RecordChild2, // #1 = $vB
/*6474*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6476*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1550:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6485*/    /*Scope*/ 17, /*->6503*/
/*6486*/      OPC_CheckInteger, 15|128,12/*1551*/, 
/*6489*/      OPC_MoveParent,
/*6490*/      OPC_RecordChild1, // #0 = $vA
/*6491*/      OPC_RecordChild2, // #1 = $vB
/*6492*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6494*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1551:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6503*/    /*Scope*/ 17, /*->6521*/
/*6504*/      OPC_CheckInteger, 16|128,12/*1552*/, 
/*6507*/      OPC_MoveParent,
/*6508*/      OPC_RecordChild1, // #0 = $vA
/*6509*/      OPC_RecordChild2, // #1 = $vB
/*6510*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6512*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1552:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6521*/    /*Scope*/ 17, /*->6539*/
/*6522*/      OPC_CheckInteger, 17|128,12/*1553*/, 
/*6525*/      OPC_MoveParent,
/*6526*/      OPC_RecordChild1, // #0 = $vA
/*6527*/      OPC_RecordChild2, // #1 = $vB
/*6528*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6530*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1553:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6539*/    /*Scope*/ 17, /*->6557*/
/*6540*/      OPC_CheckInteger, 18|128,12/*1554*/, 
/*6543*/      OPC_MoveParent,
/*6544*/      OPC_RecordChild1, // #0 = $vA
/*6545*/      OPC_RecordChild2, // #1 = $vB
/*6546*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6548*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1554:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6557*/    /*Scope*/ 17, /*->6575*/
/*6558*/      OPC_CheckInteger, 19|128,12/*1555*/, 
/*6561*/      OPC_MoveParent,
/*6562*/      OPC_RecordChild1, // #0 = $vA
/*6563*/      OPC_RecordChild2, // #1 = $vB
/*6564*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6566*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1555:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6575*/    /*Scope*/ 17, /*->6593*/
/*6576*/      OPC_CheckInteger, 20|128,12/*1556*/, 
/*6579*/      OPC_MoveParent,
/*6580*/      OPC_RecordChild1, // #0 = $vA
/*6581*/      OPC_RecordChild2, // #1 = $vB
/*6582*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6584*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1556:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6593*/    /*Scope*/ 17, /*->6611*/
/*6594*/      OPC_CheckInteger, 53|128,12/*1589*/, 
/*6597*/      OPC_MoveParent,
/*6598*/      OPC_RecordChild1, // #0 = $vA
/*6599*/      OPC_RecordChild2, // #1 = $vB
/*6600*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6602*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1589:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6611*/    /*Scope*/ 17, /*->6629*/
/*6612*/      OPC_CheckInteger, 54|128,12/*1590*/, 
/*6615*/      OPC_MoveParent,
/*6616*/      OPC_RecordChild1, // #0 = $vA
/*6617*/      OPC_RecordChild2, // #1 = $vB
/*6618*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6620*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1590:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6629*/    /*Scope*/ 17, /*->6647*/
/*6630*/      OPC_CheckInteger, 55|128,12/*1591*/, 
/*6633*/      OPC_MoveParent,
/*6634*/      OPC_RecordChild1, // #0 = $vA
/*6635*/      OPC_RecordChild2, // #1 = $vB
/*6636*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6638*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1591:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6647*/    /*Scope*/ 17, /*->6665*/
/*6648*/      OPC_CheckInteger, 56|128,12/*1592*/, 
/*6651*/      OPC_MoveParent,
/*6652*/      OPC_RecordChild1, // #0 = $vA
/*6653*/      OPC_RecordChild2, // #1 = $vB
/*6654*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6656*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1592:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6665*/    /*Scope*/ 17, /*->6683*/
/*6666*/      OPC_CheckInteger, 57|128,12/*1593*/, 
/*6669*/      OPC_MoveParent,
/*6670*/      OPC_RecordChild1, // #0 = $vA
/*6671*/      OPC_RecordChild2, // #1 = $vB
/*6672*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6674*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1593:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6683*/    /*Scope*/ 17, /*->6701*/
/*6684*/      OPC_CheckInteger, 58|128,12/*1594*/, 
/*6687*/      OPC_MoveParent,
/*6688*/      OPC_RecordChild1, // #0 = $vA
/*6689*/      OPC_RecordChild2, // #1 = $vB
/*6690*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6692*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1594:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6701*/    /*Scope*/ 17, /*->6719*/
/*6702*/      OPC_CheckInteger, 59|128,12/*1595*/, 
/*6705*/      OPC_MoveParent,
/*6706*/      OPC_RecordChild1, // #0 = $vA
/*6707*/      OPC_RecordChild2, // #1 = $vB
/*6708*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6710*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1595:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6719*/    /*Scope*/ 17, /*->6737*/
/*6720*/      OPC_CheckInteger, 64|128,12/*1600*/, 
/*6723*/      OPC_MoveParent,
/*6724*/      OPC_RecordChild1, // #0 = $vA
/*6725*/      OPC_RecordChild2, // #1 = $vB
/*6726*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6728*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1600:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6737*/    /*Scope*/ 17, /*->6755*/
/*6738*/      OPC_CheckInteger, 60|128,12/*1596*/, 
/*6741*/      OPC_MoveParent,
/*6742*/      OPC_RecordChild1, // #0 = $vA
/*6743*/      OPC_RecordChild2, // #1 = $vB
/*6744*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6746*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1596:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6755*/    /*Scope*/ 17, /*->6773*/
/*6756*/      OPC_CheckInteger, 61|128,12/*1597*/, 
/*6759*/      OPC_MoveParent,
/*6760*/      OPC_RecordChild1, // #0 = $vA
/*6761*/      OPC_RecordChild2, // #1 = $vB
/*6762*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6764*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1597:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6773*/    /*Scope*/ 17, /*->6791*/
/*6774*/      OPC_CheckInteger, 62|128,12/*1598*/, 
/*6777*/      OPC_MoveParent,
/*6778*/      OPC_RecordChild1, // #0 = $vA
/*6779*/      OPC_RecordChild2, // #1 = $vB
/*6780*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6782*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1598:iPTR, v8i16:v8i16:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 v8i16:v8i16:$vA, v4i32:v4i32:$vB)
/*6791*/    /*Scope*/ 17, /*->6809*/
/*6792*/      OPC_CheckInteger, 63|128,12/*1599*/, 
/*6795*/      OPC_MoveParent,
/*6796*/      OPC_RecordChild1, // #0 = $vA
/*6797*/      OPC_RecordChild2, // #1 = $vB
/*6798*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6800*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1599:iPTR, v16i8:v16i8:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 v16i8:v16i8:$vA, v4i32:v4i32:$vB)
/*6809*/    /*Scope*/ 17, /*->6827*/
/*6810*/      OPC_CheckInteger, 35|128,12/*1571*/, 
/*6813*/      OPC_MoveParent,
/*6814*/      OPC_RecordChild1, // #0 = $vA
/*6815*/      OPC_RecordChild2, // #1 = $vB
/*6816*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6818*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1571:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6827*/    /*Scope*/ 17, /*->6845*/
/*6828*/      OPC_CheckInteger, 36|128,12/*1572*/, 
/*6831*/      OPC_MoveParent,
/*6832*/      OPC_RecordChild1, // #0 = $vA
/*6833*/      OPC_RecordChild2, // #1 = $vB
/*6834*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6836*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1572:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6845*/    /*Scope*/ 17, /*->6863*/
/*6846*/      OPC_CheckInteger, 37|128,12/*1573*/, 
/*6849*/      OPC_MoveParent,
/*6850*/      OPC_RecordChild1, // #0 = $vA
/*6851*/      OPC_RecordChild2, // #1 = $vB
/*6852*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6854*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1573:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6863*/    /*Scope*/ 17, /*->6881*/
/*6864*/      OPC_CheckInteger, 40|128,12/*1576*/, 
/*6867*/      OPC_MoveParent,
/*6868*/      OPC_RecordChild1, // #0 = $vA
/*6869*/      OPC_RecordChild2, // #1 = $vB
/*6870*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6872*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1576:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6881*/    /*Scope*/ 17, /*->6899*/
/*6882*/      OPC_CheckInteger, 43|128,12/*1579*/, 
/*6885*/      OPC_MoveParent,
/*6886*/      OPC_RecordChild1, // #0 = $vA
/*6887*/      OPC_RecordChild2, // #1 = $vB
/*6888*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6890*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1579:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6899*/    /*Scope*/ 17, /*->6917*/
/*6900*/      OPC_CheckInteger, 41|128,12/*1577*/, 
/*6903*/      OPC_MoveParent,
/*6904*/      OPC_RecordChild1, // #0 = $vA
/*6905*/      OPC_RecordChild2, // #1 = $vB
/*6906*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6908*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1577:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*6917*/    /*Scope*/ 17, /*->6935*/
/*6918*/      OPC_CheckInteger, 42|128,12/*1578*/, 
/*6921*/      OPC_MoveParent,
/*6922*/      OPC_RecordChild1, // #0 = $vA
/*6923*/      OPC_RecordChild2, // #1 = $vB
/*6924*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6926*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1578:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*6935*/    /*Scope*/ 17, /*->6953*/
/*6936*/      OPC_CheckInteger, 44|128,12/*1580*/, 
/*6939*/      OPC_MoveParent,
/*6940*/      OPC_RecordChild1, // #0 = $vA
/*6941*/      OPC_RecordChild2, // #1 = $vB
/*6942*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6944*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1580:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6953*/    /*Scope*/ 17, /*->6971*/
/*6954*/      OPC_CheckInteger, 45|128,12/*1581*/, 
/*6957*/      OPC_MoveParent,
/*6958*/      OPC_RecordChild1, // #0 = $vA
/*6959*/      OPC_RecordChild2, // #1 = $vB
/*6960*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6962*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1581:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6971*/    /*Scope*/ 17, /*->6989*/
/*6972*/      OPC_CheckInteger, 51|128,12/*1587*/, 
/*6975*/      OPC_MoveParent,
/*6976*/      OPC_RecordChild1, // #0 = $vA
/*6977*/      OPC_RecordChild2, // #1 = $vB
/*6978*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6980*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1587:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*6989*/    /*Scope*/ 17, /*->7007*/
/*6990*/      OPC_CheckInteger, 46|128,12/*1582*/, 
/*6993*/      OPC_MoveParent,
/*6994*/      OPC_RecordChild1, // #0 = $vA
/*6995*/      OPC_RecordChild2, // #1 = $vB
/*6996*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*6998*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1582:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7007*/    /*Scope*/ 17, /*->7025*/
/*7008*/      OPC_CheckInteger, 47|128,12/*1583*/, 
/*7011*/      OPC_MoveParent,
/*7012*/      OPC_RecordChild1, // #0 = $vA
/*7013*/      OPC_RecordChild2, // #1 = $vB
/*7014*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7016*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1583:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7025*/    /*Scope*/ 17, /*->7043*/
/*7026*/      OPC_CheckInteger, 48|128,12/*1584*/, 
/*7029*/      OPC_MoveParent,
/*7030*/      OPC_RecordChild1, // #0 = $vA
/*7031*/      OPC_RecordChild2, // #1 = $vB
/*7032*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7034*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1584:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7043*/    /*Scope*/ 17, /*->7061*/
/*7044*/      OPC_CheckInteger, 49|128,12/*1585*/, 
/*7047*/      OPC_MoveParent,
/*7048*/      OPC_RecordChild1, // #0 = $vA
/*7049*/      OPC_RecordChild2, // #1 = $vB
/*7050*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7052*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1585:iPTR, v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*7061*/    /*Scope*/ 17, /*->7079*/
/*7062*/      OPC_CheckInteger, 50|128,12/*1586*/, 
/*7065*/      OPC_MoveParent,
/*7066*/      OPC_RecordChild1, // #0 = $vA
/*7067*/      OPC_RecordChild2, // #1 = $vB
/*7068*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7070*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1586:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7079*/    /*Scope*/ 17, /*->7097*/
/*7080*/      OPC_CheckInteger, 52|128,12/*1588*/, 
/*7083*/      OPC_MoveParent,
/*7084*/      OPC_RecordChild1, // #0 = $vA
/*7085*/      OPC_RecordChild2, // #1 = $vB
/*7086*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7088*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 1588:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7097*/    /*Scope*/ 17, /*->7115*/
/*7098*/      OPC_CheckInteger, 23|128,12/*1559*/, 
/*7101*/      OPC_MoveParent,
/*7102*/      OPC_RecordChild1, // #0 = $vA
/*7103*/      OPC_RecordChild2, // #1 = $vB
/*7104*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7106*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1559:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7115*/    /*Scope*/ 17, /*->7133*/
/*7116*/      OPC_CheckInteger, 24|128,12/*1560*/, 
/*7119*/      OPC_MoveParent,
/*7120*/      OPC_RecordChild1, // #0 = $vA
/*7121*/      OPC_RecordChild2, // #1 = $vB
/*7122*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7124*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1560:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7133*/    /*Scope*/ 17, /*->7151*/
/*7134*/      OPC_CheckInteger, 25|128,12/*1561*/, 
/*7137*/      OPC_MoveParent,
/*7138*/      OPC_RecordChild1, // #0 = $vA
/*7139*/      OPC_RecordChild2, // #1 = $vB
/*7140*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7142*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1561:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7151*/    /*Scope*/ 17, /*->7169*/
/*7152*/      OPC_CheckInteger, 26|128,12/*1562*/, 
/*7155*/      OPC_MoveParent,
/*7156*/      OPC_RecordChild1, // #0 = $vA
/*7157*/      OPC_RecordChild2, // #1 = $vB
/*7158*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7160*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1562:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7169*/    /*Scope*/ 17, /*->7187*/
/*7170*/      OPC_CheckInteger, 27|128,12/*1563*/, 
/*7173*/      OPC_MoveParent,
/*7174*/      OPC_RecordChild1, // #0 = $vA
/*7175*/      OPC_RecordChild2, // #1 = $vB
/*7176*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7178*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1563:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7187*/    /*Scope*/ 17, /*->7205*/
/*7188*/      OPC_CheckInteger, 28|128,12/*1564*/, 
/*7191*/      OPC_MoveParent,
/*7192*/      OPC_RecordChild1, // #0 = $vA
/*7193*/      OPC_RecordChild2, // #1 = $vB
/*7194*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7196*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 1564:iPTR, v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*7205*/    /*Scope*/ 17, /*->7223*/
/*7206*/      OPC_CheckInteger, 29|128,12/*1565*/, 
/*7209*/      OPC_MoveParent,
/*7210*/      OPC_RecordChild1, // #0 = $vA
/*7211*/      OPC_RecordChild2, // #1 = $vB
/*7212*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7214*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 1565:iPTR, v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*7223*/    /*Scope*/ 15, /*->7239*/
/*7224*/      OPC_CheckInteger, 65|128,12/*1601*/, 
/*7227*/      OPC_MoveParent,
/*7228*/      OPC_RecordChild1, // #0 = $vB
/*7229*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7231*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1601:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 v8i16:v8i16:$vB)
/*7239*/    /*Scope*/ 15, /*->7255*/
/*7240*/      OPC_CheckInteger, 66|128,12/*1602*/, 
/*7243*/      OPC_MoveParent,
/*7244*/      OPC_RecordChild1, // #0 = $vB
/*7245*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7247*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1602:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 v16i8:v16i8:$vB)
/*7255*/    /*Scope*/ 15, /*->7271*/
/*7256*/      OPC_CheckInteger, 67|128,12/*1603*/, 
/*7259*/      OPC_MoveParent,
/*7260*/      OPC_RecordChild1, // #0 = $vB
/*7261*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7263*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1603:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 v8i16:v8i16:$vB)
/*7271*/    /*Scope*/ 15, /*->7287*/
/*7272*/      OPC_CheckInteger, 68|128,12/*1604*/, 
/*7275*/      OPC_MoveParent,
/*7276*/      OPC_RecordChild1, // #0 = $vB
/*7277*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7279*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1604:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 v8i16:v8i16:$vB)
/*7287*/    /*Scope*/ 15, /*->7303*/
/*7288*/      OPC_CheckInteger, 69|128,12/*1605*/, 
/*7291*/      OPC_MoveParent,
/*7292*/      OPC_RecordChild1, // #0 = $vB
/*7293*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7295*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 1605:iPTR, v16i8:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 v16i8:v16i8:$vB)
/*7303*/    /*Scope*/ 15, /*->7319*/
/*7304*/      OPC_CheckInteger, 70|128,12/*1606*/, 
/*7307*/      OPC_MoveParent,
/*7308*/      OPC_RecordChild1, // #0 = $vB
/*7309*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7311*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 1606:iPTR, v8i16:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 v8i16:v8i16:$vB)
/*7319*/    /*Scope*/ 15, /*->7335*/
/*7320*/      OPC_CheckInteger, 115|128,11/*1523*/, 
/*7323*/      OPC_MoveParent,
/*7324*/      OPC_RecordChild1, // #0 = $vB
/*7325*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7327*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1523:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 v4f32:v4f32:$vB)
/*7335*/    /*Scope*/ 15, /*->7351*/
/*7336*/      OPC_CheckInteger, 116|128,11/*1524*/, 
/*7339*/      OPC_MoveParent,
/*7340*/      OPC_RecordChild1, // #0 = $vB
/*7341*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7343*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1524:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 v4f32:v4f32:$vB)
/*7351*/    /*Scope*/ 17, /*->7369*/
/*7352*/      OPC_CheckInteger, 118|128,11/*1526*/, 
/*7355*/      OPC_MoveParent,
/*7356*/      OPC_RecordChild1, // #0 = $vA
/*7357*/      OPC_RecordChild2, // #1 = $vB
/*7358*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7360*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1526:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7369*/    /*Scope*/ 17, /*->7387*/
/*7370*/      OPC_CheckInteger, 127|128,11/*1535*/, 
/*7373*/      OPC_MoveParent,
/*7374*/      OPC_RecordChild1, // #0 = $vA
/*7375*/      OPC_RecordChild2, // #1 = $vB
/*7376*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7378*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 1535:iPTR, v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*7387*/    /*Scope*/ 15, /*->7403*/
/*7388*/      OPC_CheckInteger, 30|128,12/*1566*/, 
/*7391*/      OPC_MoveParent,
/*7392*/      OPC_RecordChild1, // #0 = $vB
/*7393*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7395*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1566:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 v4f32:v4f32:$vB)
/*7403*/    /*Scope*/ 15, /*->7419*/
/*7404*/      OPC_CheckInteger, 31|128,12/*1567*/, 
/*7407*/      OPC_MoveParent,
/*7408*/      OPC_RecordChild1, // #0 = $vB
/*7409*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7411*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1567:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 v4f32:v4f32:$vB)
/*7419*/    /*Scope*/ 15, /*->7435*/
/*7420*/      OPC_CheckInteger, 32|128,12/*1568*/, 
/*7423*/      OPC_MoveParent,
/*7424*/      OPC_RecordChild1, // #0 = $vB
/*7425*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7427*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1568:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 v4f32:v4f32:$vB)
/*7435*/    /*Scope*/ 15, /*->7451*/
/*7436*/      OPC_CheckInteger, 33|128,12/*1569*/, 
/*7439*/      OPC_MoveParent,
/*7440*/      OPC_RecordChild1, // #0 = $vB
/*7441*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7443*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1569:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 v4f32:v4f32:$vB)
/*7451*/    /*Scope*/ 15, /*->7467*/
/*7452*/      OPC_CheckInteger, 34|128,12/*1570*/, 
/*7455*/      OPC_MoveParent,
/*7456*/      OPC_RecordChild1, // #0 = $vB
/*7457*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7459*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1570:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 v4f32:v4f32:$vB)
/*7467*/    /*Scope*/ 15, /*->7483*/
/*7468*/      OPC_CheckInteger, 38|128,12/*1574*/, 
/*7471*/      OPC_MoveParent,
/*7472*/      OPC_RecordChild1, // #0 = $vB
/*7473*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7475*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 1574:iPTR, v4f32:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 v4f32:v4f32:$vB)
/*7483*/    /*Scope*/ 19, /*->7503*/
/*7484*/      OPC_CheckInteger, 117|128,11/*1525*/, 
/*7487*/      OPC_MoveParent,
/*7488*/      OPC_RecordChild1, // #0 = $A
/*7489*/      OPC_RecordChild2, // #1 = $B
/*7490*/      OPC_RecordChild3, // #2 = $C
/*7491*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7493*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1525:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7503*/    /*Scope*/ 19, /*->7523*/
/*7504*/      OPC_CheckInteger, 21|128,12/*1557*/, 
/*7507*/      OPC_MoveParent,
/*7508*/      OPC_RecordChild1, // #0 = $A
/*7509*/      OPC_RecordChild2, // #1 = $B
/*7510*/      OPC_RecordChild3, // #2 = $C
/*7511*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*7513*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 1557:iPTR, v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
/*7523*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->7567
/*7527*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*7528*/    OPC_RecordChild1, // #1 = $rS
/*7529*/    OPC_Scope, 17, /*->7548*/ // 2 children in Scope
/*7531*/      OPC_CheckChild1Type, MVT::i32,
/*7533*/      OPC_RecordChild2, // #2 = $dst
/*7534*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7537*/      OPC_EmitMergeInputChains1_0,
/*7538*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i32:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 i32:i32:$rS, xoaddr:iPTR:$dst)
/*7548*/    /*Scope*/ 17, /*->7566*/
/*7549*/      OPC_CheckChild1Type, MVT::i64,
/*7551*/      OPC_RecordChild2, // #2 = $dst
/*7552*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7555*/      OPC_EmitMergeInputChains1_0,
/*7556*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx i64:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 i64:i64:$rS, xoaddr:iPTR:$dst)
/*7566*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 68,  TARGET_VAL(PPCISD::STBRX),// ->7638
/*7570*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*7571*/    OPC_RecordChild1, // #1 = $rS
/*7572*/    OPC_Scope, 41, /*->7615*/ // 2 children in Scope
/*7574*/      OPC_CheckChild1Type, MVT::i32,
/*7576*/      OPC_RecordChild2, // #2 = $dst
/*7577*/      OPC_MoveChild, 3,
/*7579*/      OPC_Scope, 16, /*->7597*/ // 2 children in Scope
/*7581*/        OPC_CheckValueType, MVT::i16,
/*7583*/        OPC_MoveParent,
/*7584*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7587*/        OPC_EmitMergeInputChains1_0,
/*7588*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
                // Dst: (STHBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7597*/      /*Scope*/ 16, /*->7614*/
/*7598*/        OPC_CheckValueType, MVT::i32,
/*7600*/        OPC_MoveParent,
/*7601*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7604*/        OPC_EmitMergeInputChains1_0,
/*7605*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (PPCstbrx i32:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
                // Dst: (STWBRX i32:i32:$rS, xoaddr:iPTR:$dst)
/*7614*/      0, /*End of Scope*/
/*7615*/    /*Scope*/ 21, /*->7637*/
/*7616*/      OPC_CheckChild1Type, MVT::i64,
/*7618*/      OPC_RecordChild2, // #2 = $dst
/*7619*/      OPC_MoveChild, 3,
/*7621*/      OPC_CheckValueType, MVT::i64,
/*7623*/      OPC_MoveParent,
/*7624*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7627*/      OPC_EmitMergeInputChains1_0,
/*7628*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx i64:i64:$rS, xoaddr:iPTR:$dst, i64:Other) - Complexity = 12
              // Dst: (STDBRX i64:i64:$rS, xoaddr:iPTR:$dst)
/*7637*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->7657
/*7641*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*7642*/    OPC_RecordChild1, // #1 = $frS
/*7643*/    OPC_RecordChild2, // #2 = $dst
/*7644*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*7647*/    OPC_EmitMergeInputChains1_0,
/*7648*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx f64:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX f64:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->7686
/*7660*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*7661*/    OPC_CaptureGlueInput,
/*7662*/    OPC_RecordChild1, // #1 = $amt1
/*7663*/    OPC_MoveChild, 1,
/*7665*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7668*/    OPC_MoveParent,
/*7669*/    OPC_RecordChild2, // #2 = $amt2
/*7670*/    OPC_MoveChild, 2,
/*7672*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*7675*/    OPC_MoveParent,
/*7676*/    OPC_EmitMergeInputChains1_0,
/*7677*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->7888
/*7690*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*7691*/    OPC_CaptureGlueInput,
/*7692*/    OPC_RecordChild1, // #1 = $func
/*7693*/    OPC_Scope, 21|128,1/*149*/, /*->7845*/ // 3 children in Scope
/*7696*/      OPC_MoveChild, 1,
/*7698*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->7750
/*7702*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->7726
/*7705*/          OPC_MoveParent,
/*7706*/          OPC_RecordChild2, // #2 = $offset
/*7707*/          OPC_MoveChild, 2,
/*7709*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7712*/          OPC_MoveParent,
/*7713*/          OPC_EmitMergeInputChains1_0,
/*7714*/          OPC_EmitConvertToTarget, 1,
/*7716*/          OPC_EmitConvertToTarget, 2,
/*7718*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->7749
/*7728*/          OPC_MoveParent,
/*7729*/          OPC_RecordChild2, // #2 = $offset
/*7730*/          OPC_MoveChild, 2,
/*7732*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7735*/          OPC_MoveParent,
/*7736*/          OPC_EmitMergeInputChains1_0,
/*7737*/          OPC_EmitConvertToTarget, 1,
/*7739*/          OPC_EmitConvertToTarget, 2,
/*7741*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->7797
/*7753*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7775
/*7756*/          OPC_MoveParent,
/*7757*/          OPC_RecordChild2, // #2 = $imm
/*7758*/          OPC_MoveChild, 2,
/*7760*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7763*/          OPC_MoveParent,
/*7764*/          OPC_EmitMergeInputChains1_0,
/*7765*/          OPC_EmitConvertToTarget, 2,
/*7767*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7796
/*7777*/          OPC_MoveParent,
/*7778*/          OPC_RecordChild2, // #2 = $imm
/*7779*/          OPC_MoveChild, 2,
/*7781*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7784*/          OPC_MoveParent,
/*7785*/          OPC_EmitMergeInputChains1_0,
/*7786*/          OPC_EmitConvertToTarget, 2,
/*7788*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->7844
/*7800*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->7822
/*7803*/          OPC_MoveParent,
/*7804*/          OPC_RecordChild2, // #2 = $imm
/*7805*/          OPC_MoveChild, 2,
/*7807*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7810*/          OPC_MoveParent,
/*7811*/          OPC_EmitMergeInputChains1_0,
/*7812*/          OPC_EmitConvertToTarget, 2,
/*7814*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->7843
/*7824*/          OPC_MoveParent,
/*7825*/          OPC_RecordChild2, // #2 = $imm
/*7826*/          OPC_MoveChild, 2,
/*7828*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7831*/          OPC_MoveParent,
/*7832*/          OPC_EmitMergeInputChains1_0,
/*7833*/          OPC_EmitConvertToTarget, 2,
/*7835*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*7845*/    /*Scope*/ 20, /*->7866*/
/*7846*/      OPC_CheckChild1Type, MVT::i32,
/*7848*/      OPC_RecordChild2, // #2 = $imm
/*7849*/      OPC_MoveChild, 2,
/*7851*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7854*/      OPC_MoveParent,
/*7855*/      OPC_EmitMergeInputChains1_0,
/*7856*/      OPC_EmitConvertToTarget, 2,
/*7858*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*7866*/    /*Scope*/ 20, /*->7887*/
/*7867*/      OPC_CheckChild1Type, MVT::i64,
/*7869*/      OPC_RecordChild2, // #2 = $imm
/*7870*/      OPC_MoveChild, 2,
/*7872*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7875*/      OPC_MoveParent,
/*7876*/      OPC_EmitMergeInputChains1_0,
/*7877*/      OPC_EmitConvertToTarget, 2,
/*7879*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*7887*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_FENCE),// ->7911
/*7891*/    OPC_RecordNode,   // #0 = 'atomic_fence' chained node
/*7892*/    OPC_MoveChild, 1,
/*7894*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7897*/    OPC_MoveParent,
/*7898*/    OPC_MoveChild, 2,
/*7900*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7903*/    OPC_MoveParent,
/*7904*/    OPC_EmitMergeInputChains1_0,
/*7905*/    OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (atomic_fence (imm:iPTR), (imm:iPTR)) - Complexity = 9
            // Dst: (SYNC)
          /*SwitchOpcode*/ 36,  TARGET_VAL(PPCISD::EH_SJLJ_SETJMP),// ->7950
/*7914*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_setjmp' chained node
/*7915*/    OPC_RecordChild1, // #1 = $buf
/*7916*/    OPC_CheckType, MVT::i32,
/*7918*/    OPC_Scope, 14, /*->7934*/ // 2 children in Scope
/*7920*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*7922*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7925*/      OPC_EmitMergeInputChains1_0,
/*7926*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp32), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp32:i32 addr:iPTR:$buf)
/*7934*/    /*Scope*/ 14, /*->7949*/
/*7935*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*7937*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7940*/      OPC_EmitMergeInputChains1_0,
/*7941*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_SetJmp64), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_setjmp:i32 addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_SetJmp64:i32 addr:iPTR:$buf)
/*7949*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(PPCISD::EH_SJLJ_LONGJMP),// ->7985
/*7953*/    OPC_RecordNode,   // #0 = 'PPCeh_sjlj_longjmp' chained node
/*7954*/    OPC_RecordChild1, // #1 = $buf
/*7955*/    OPC_Scope, 13, /*->7970*/ // 2 children in Scope
/*7957*/      OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*7959*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7962*/      OPC_EmitMergeInputChains1_0,
/*7963*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp32), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp32 addr:iPTR:$buf)
/*7970*/    /*Scope*/ 13, /*->7984*/
/*7971*/      OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*7973*/      OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectAddr:$buf #2
/*7976*/      OPC_EmitMergeInputChains1_0,
/*7977*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EH_SjLj_LongJmp64), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCeh_sjlj_longjmp addr:iPTR:$buf) - Complexity = 9
              // Dst: (EH_SjLj_LongJmp64 addr:iPTR:$buf)
/*7984*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 124,  TARGET_VAL(ISD::SUB),// ->8112
/*7988*/    OPC_Scope, 28, /*->8018*/ // 2 children in Scope
/*7990*/      OPC_MoveChild, 0,
/*7992*/      OPC_CheckInteger, 0, 
/*7994*/      OPC_MoveParent,
/*7995*/      OPC_RecordChild1, // #0 = $rA
/*7996*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->8007
/*7999*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, i32:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 i32:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->8017
/*8009*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, i64:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 i64:i64:$rA)
              0, // EndSwitchType
/*8018*/    /*Scope*/ 92, /*->8111*/
/*8019*/      OPC_RecordChild0, // #0 = $imm
/*8020*/      OPC_Scope, 23, /*->8045*/ // 2 children in Scope
/*8022*/        OPC_MoveChild, 0,
/*8024*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8027*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8029*/        OPC_MoveParent,
/*8030*/        OPC_RecordChild1, // #1 = $in
/*8031*/        OPC_CheckType, MVT::i32,
/*8033*/        OPC_EmitConvertToTarget, 0,
/*8035*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, i32:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 ?:i32:$in, (imm:i32):$imm)
/*8045*/      /*Scope*/ 64, /*->8110*/
/*8046*/        OPC_RecordChild1, // #1 = $rA
/*8047*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->8059
/*8050*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 i32:i32:$rA, i32:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->8070
/*8061*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 i64:i64:$rA, i64:i64:$rB)
                /*SwitchType*/ 11,  MVT::v16i8,// ->8083
/*8072*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8074*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
                /*SwitchType*/ 11,  MVT::v8i16,// ->8096
/*8085*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8087*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
                /*SwitchType*/ 11,  MVT::v4i32,// ->8109
/*8098*/          OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8100*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
                0, // EndSwitchType
/*8110*/      0, /*End of Scope*/
/*8111*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->8217
/*8115*/    OPC_CaptureGlueInput,
/*8116*/    OPC_RecordChild0, // #0 = $rA
/*8117*/    OPC_Scope, 69, /*->8188*/ // 2 children in Scope
/*8119*/      OPC_MoveChild, 1,
/*8121*/      OPC_Scope, 36, /*->8159*/ // 2 children in Scope
/*8123*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8134*/        OPC_MoveParent,
/*8135*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8147
/*8138*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8158
/*8149*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8159*/      /*Scope*/ 27, /*->8187*/
/*8160*/        OPC_CheckInteger, 0, 
/*8162*/        OPC_MoveParent,
/*8163*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8175
/*8166*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 i32:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8186
/*8177*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 i64:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8187*/      0, /*End of Scope*/
/*8188*/    /*Scope*/ 27, /*->8216*/
/*8189*/      OPC_RecordChild1, // #1 = $rB
/*8190*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8203
/*8193*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8215
/*8205*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8216*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->8324
/*8220*/    OPC_CaptureGlueInput,
/*8221*/    OPC_Scope, 71, /*->8294*/ // 2 children in Scope
/*8223*/      OPC_MoveChild, 0,
/*8225*/      OPC_Scope, 37, /*->8264*/ // 2 children in Scope
/*8227*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*8238*/        OPC_MoveParent,
/*8239*/        OPC_RecordChild1, // #0 = $rA
/*8240*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8252
/*8243*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8263
/*8254*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8264*/      /*Scope*/ 28, /*->8293*/
/*8265*/        OPC_CheckInteger, 0, 
/*8267*/        OPC_MoveParent,
/*8268*/        OPC_RecordChild1, // #0 = $rA
/*8269*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8281
/*8272*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, i32:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 i32:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->8292
/*8283*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, i64:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 i64:i64:$rA)
                0, // EndSwitchType
/*8293*/      0, /*End of Scope*/
/*8294*/    /*Scope*/ 28, /*->8323*/
/*8295*/      OPC_RecordChild0, // #0 = $rB
/*8296*/      OPC_RecordChild1, // #1 = $rA
/*8297*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8310
/*8300*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8322
/*8312*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8323*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->8396
/*8327*/    OPC_RecordChild0, // #0 = $rA
/*8328*/    OPC_RecordChild1, // #1 = $imm
/*8329*/    OPC_Scope, 38, /*->8369*/ // 3 children in Scope
/*8331*/      OPC_MoveChild, 1,
/*8333*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8336*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8338*/      OPC_MoveParent,
/*8339*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8354
/*8342*/        OPC_EmitConvertToTarget, 1,
/*8344*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->8368
/*8356*/        OPC_EmitConvertToTarget, 1,
/*8358*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 i64:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*8369*/    /*Scope*/ 12, /*->8382*/
/*8370*/      OPC_CheckType, MVT::i32,
/*8372*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 i32:i32:$rA, i32:i32:$rB)
/*8382*/    /*Scope*/ 12, /*->8395*/
/*8383*/      OPC_CheckType, MVT::i64,
/*8385*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
/*8395*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->8449
/*8399*/    OPC_RecordChild0, // #0 = $rA
/*8400*/    OPC_RecordChild1, // #1 = $imm
/*8401*/    OPC_Scope, 21, /*->8424*/ // 3 children in Scope
/*8403*/      OPC_MoveChild, 1,
/*8405*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8408*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8410*/      OPC_MoveParent,
/*8411*/      OPC_CheckType, MVT::i32,
/*8413*/      OPC_EmitConvertToTarget, 1,
/*8415*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 i32:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 i32:i32:$rA, (imm:i32):$imm)
/*8424*/    /*Scope*/ 11, /*->8436*/
/*8425*/      OPC_CheckType, MVT::i32,
/*8427*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 i32:i32:$rA, i32:i32:$rB)
/*8436*/    /*Scope*/ 11, /*->8448*/
/*8437*/      OPC_CheckType, MVT::i64,
/*8439*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 i64:i64:$rA, i64:i64:$rB)
/*8448*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->8523
/*8452*/    OPC_RecordChild0, // #0 = $imm
/*8453*/    OPC_Scope, 39, /*->8494*/ // 2 children in Scope
/*8455*/      OPC_MoveChild, 0,
/*8457*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8460*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*8462*/      OPC_MoveParent,
/*8463*/      OPC_RecordChild1, // #1 = $rA
/*8464*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8479
/*8467*/        OPC_EmitConvertToTarget, 0,
/*8469*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, i32:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 i32:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->8493
/*8481*/        OPC_EmitConvertToTarget, 0,
/*8483*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, i64:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 i64:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*8494*/    /*Scope*/ 27, /*->8522*/
/*8495*/      OPC_RecordChild1, // #1 = $rA
/*8496*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8509
/*8499*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 i32:i32:$rB, i32:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 i32:i32:$rA, i32:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8521
/*8511*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 i64:i64:$rB, i64:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 i64:i64:$rA, i64:i64:$rB)
              0, // EndSwitchType
/*8522*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 120,  TARGET_VAL(ISD::SRA),// ->8646
/*8526*/    OPC_RecordChild0, // #0 = $rS
/*8527*/    OPC_RecordChild1, // #1 = $SH
/*8528*/    OPC_Scope, 38, /*->8568*/ // 5 children in Scope
/*8530*/      OPC_MoveChild, 1,
/*8532*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8535*/      OPC_CheckType, MVT::i32,
/*8537*/      OPC_MoveParent,
/*8538*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->8553
/*8541*/        OPC_EmitConvertToTarget, 1,
/*8543*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 i32:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 i32:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->8567
/*8555*/        OPC_EmitConvertToTarget, 1,
/*8557*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 i64:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 i64:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*8568*/    /*Scope*/ 28, /*->8597*/
/*8569*/      OPC_CheckChild1Type, MVT::i32,
/*8571*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->8584
/*8574*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->8596
/*8586*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8597*/    /*Scope*/ 15, /*->8613*/
/*8598*/      OPC_CheckChild1Type, MVT::v16i8,
/*8600*/      OPC_CheckType, MVT::v16i8,
/*8602*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8604*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8613*/    /*Scope*/ 15, /*->8629*/
/*8614*/      OPC_CheckChild1Type, MVT::v8i16,
/*8616*/      OPC_CheckType, MVT::v8i16,
/*8618*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8620*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8629*/    /*Scope*/ 15, /*->8645*/
/*8630*/      OPC_CheckChild1Type, MVT::v4i32,
/*8632*/      OPC_CheckType, MVT::v4i32,
/*8634*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8636*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8645*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SHL),// ->8782
/*8650*/    OPC_RecordChild0, // #0 = $in
/*8651*/    OPC_RecordChild1, // #1 = $imm
/*8652*/    OPC_Scope, 52, /*->8706*/ // 5 children in Scope
/*8654*/      OPC_MoveChild, 1,
/*8656*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8659*/      OPC_CheckType, MVT::i32,
/*8661*/      OPC_MoveParent,
/*8662*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8686
/*8665*/        OPC_EmitConvertToTarget, 1,
/*8667*/        OPC_EmitInteger, MVT::i32, 0, 
/*8670*/        OPC_EmitConvertToTarget, 1,
/*8672*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*8675*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->8705
/*8688*/        OPC_EmitConvertToTarget, 1,
/*8690*/        OPC_EmitConvertToTarget, 1,
/*8692*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*8695*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 ?:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*8706*/    /*Scope*/ 26, /*->8733*/
/*8707*/      OPC_CheckChild1Type, MVT::i32,
/*8709*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8721
/*8712*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8732
/*8723*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8733*/    /*Scope*/ 15, /*->8749*/
/*8734*/      OPC_CheckChild1Type, MVT::v16i8,
/*8736*/      OPC_CheckType, MVT::v16i8,
/*8738*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8740*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8749*/    /*Scope*/ 15, /*->8765*/
/*8750*/      OPC_CheckChild1Type, MVT::v8i16,
/*8752*/      OPC_CheckType, MVT::v8i16,
/*8754*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8756*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8765*/    /*Scope*/ 15, /*->8781*/
/*8766*/      OPC_CheckChild1Type, MVT::v4i32,
/*8768*/      OPC_CheckType, MVT::v4i32,
/*8770*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8772*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8781*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 4|128,1/*132*/,  TARGET_VAL(ISD::SRL),// ->8918
/*8786*/    OPC_RecordChild0, // #0 = $in
/*8787*/    OPC_RecordChild1, // #1 = $imm
/*8788*/    OPC_Scope, 52, /*->8842*/ // 5 children in Scope
/*8790*/      OPC_MoveChild, 1,
/*8792*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8795*/      OPC_CheckType, MVT::i32,
/*8797*/      OPC_MoveParent,
/*8798*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->8822
/*8801*/        OPC_EmitConvertToTarget, 1,
/*8803*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*8806*/        OPC_EmitConvertToTarget, 1,
/*8808*/        OPC_EmitInteger, MVT::i32, 31, 
/*8811*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->8841
/*8824*/        OPC_EmitConvertToTarget, 1,
/*8826*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*8829*/        OPC_EmitConvertToTarget, 1,
/*8831*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*8842*/    /*Scope*/ 26, /*->8869*/
/*8843*/      OPC_CheckChild1Type, MVT::i32,
/*8845*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->8857
/*8848*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 ?:i32:$rS, ?:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->8868
/*8859*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 ?:i64:$rS, ?:i32:$rB)
              0, // EndSwitchType
/*8869*/    /*Scope*/ 15, /*->8885*/
/*8870*/      OPC_CheckChild1Type, MVT::v16i8,
/*8872*/      OPC_CheckType, MVT::v16i8,
/*8874*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8876*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 ?:v16i8:$vA, ?:v16i8:$vB)
/*8885*/    /*Scope*/ 15, /*->8901*/
/*8886*/      OPC_CheckChild1Type, MVT::v8i16,
/*8888*/      OPC_CheckType, MVT::v8i16,
/*8890*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8892*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 ?:v8i16:$vA, ?:v8i16:$vB)
/*8901*/    /*Scope*/ 15, /*->8917*/
/*8902*/      OPC_CheckChild1Type, MVT::v4i32,
/*8904*/      OPC_CheckType, MVT::v4i32,
/*8906*/      OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*8908*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 ?:v4i32:$vA, ?:v4i32:$vB)
/*8917*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->9013
/*8921*/    OPC_RecordChild0, // #0 = $in
/*8922*/    OPC_RecordChild1, // #1 = $imm
/*8923*/    OPC_Scope, 48, /*->8973*/ // 2 children in Scope
/*8925*/      OPC_MoveChild, 1,
/*8927*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*8930*/      OPC_CheckType, MVT::i32,
/*8932*/      OPC_MoveParent,
/*8933*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->8955
/*8936*/        OPC_EmitConvertToTarget, 1,
/*8938*/        OPC_EmitInteger, MVT::i32, 0, 
/*8941*/        OPC_EmitInteger, MVT::i32, 31, 
/*8944*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 i32:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 ?:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->8972
/*8957*/        OPC_EmitConvertToTarget, 1,
/*8959*/        OPC_EmitInteger, MVT::i32, 0, 
/*8962*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 i64:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 ?:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*8973*/    /*Scope*/ 38, /*->9012*/
/*8974*/      OPC_CheckChild1Type, MVT::i32,
/*8976*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->8996
/*8979*/        OPC_EmitInteger, MVT::i32, 0, 
/*8982*/        OPC_EmitInteger, MVT::i32, 31, 
/*8985*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 i32:i32:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 ?:i32:$in, ?:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->9011
/*8998*/        OPC_EmitInteger, MVT::i32, 0, 
/*9001*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 i64:i64:$in, i32:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 ?:i64:$in, ?:i32:$sh, 0:i32)
              0, // EndSwitchType
/*9012*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->9069
/*9016*/    OPC_RecordChild0, // #0 = $disp
/*9017*/    OPC_MoveChild, 0,
/*9019*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9036
/*9023*/      OPC_MoveParent,
/*9024*/      OPC_RecordChild1, // #1 = $reg
/*9025*/      OPC_CheckType, MVT::i64,
/*9027*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->9052
/*9039*/      OPC_MoveParent,
/*9040*/      OPC_RecordChild1, // #1 = $reg
/*9041*/      OPC_CheckType, MVT::i64,
/*9043*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocJTI), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tjumptable:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocJTI:i64 (tjumptable:i64):$disp, i64:i64:$reg)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->9068
/*9055*/      OPC_MoveParent,
/*9056*/      OPC_RecordChild1, // #1 = $reg
/*9057*/      OPC_CheckType, MVT::i64,
/*9059*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocCPT), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCtoc_entry:i64 (tconstpool:i64):$disp, i64:i64:$reg) - Complexity = 6
              // Dst: (LDtocCPT:i64 (tconstpool:i64):$disp, i64:i64:$reg)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TOC_HA),// ->9091
/*9072*/    OPC_RecordChild0, // #0 = $reg
/*9073*/    OPC_RecordChild1, // #1 = $disp
/*9074*/    OPC_MoveChild, 1,
/*9076*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9079*/    OPC_MoveParent,
/*9080*/    OPC_CheckType, MVT::i64,
/*9082*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStocHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStocHA:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_TOC_L),// ->9113
/*9094*/    OPC_RecordChild0, // #0 = $disp
/*9095*/    OPC_MoveChild, 0,
/*9097*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9100*/    OPC_MoveParent,
/*9101*/    OPC_RecordChild1, // #1 = $reg
/*9102*/    OPC_CheckType, MVT::i64,
/*9104*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldTocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDtocL:i64 (tglobaladdr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TOC_L),// ->9135
/*9116*/    OPC_RecordChild0, // #0 = $reg
/*9117*/    OPC_RecordChild1, // #1 = $disp
/*9118*/    OPC_MoveChild, 1,
/*9120*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*9123*/    OPC_MoveParent,
/*9124*/    OPC_CheckType, MVT::i64,
/*9126*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItocL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp) - Complexity = 6
            // Dst: (ADDItocL:i64 i64:i64:$reg, (tglobaladdr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_GOT_TPREL_HA),// ->9157
/*9138*/    OPC_RecordChild0, // #0 = $reg
/*9139*/    OPC_RecordChild1, // #1 = $disp
/*9140*/    OPC_MoveChild, 1,
/*9142*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9145*/    OPC_MoveParent,
/*9146*/    OPC_CheckType, MVT::i64,
/*9148*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISgotTprelHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisGotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISgotTprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::LD_GOT_TPREL_L),// ->9179
/*9160*/    OPC_RecordChild0, // #0 = $disp
/*9161*/    OPC_MoveChild, 0,
/*9163*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9166*/    OPC_MoveParent,
/*9167*/    OPC_RecordChild1, // #1 = $reg
/*9168*/    OPC_CheckType, MVT::i64,
/*9170*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDgotTprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCldGotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg) - Complexity = 6
            // Dst: (LDgotTprelL:i64 (tglobaltlsaddr:i64):$disp, i64:i64:$reg)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADD_TLS),// ->9201
/*9182*/    OPC_RecordChild0, // #0 = $in
/*9183*/    OPC_RecordChild1, // #1 = $g
/*9184*/    OPC_MoveChild, 1,
/*9186*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9189*/    OPC_MoveParent,
/*9190*/    OPC_CheckType, MVT::i64,
/*9192*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8TLS), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddTls:i64 i64:i64:$in, (tglobaltlsaddr:i64):$g) - Complexity = 6
            // Dst: (ADD8TLS:i64 ?:i64:$in, (tglobaltlsaddr:i64):$g)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSGD_HA),// ->9223
/*9204*/    OPC_RecordChild0, // #0 = $reg
/*9205*/    OPC_RecordChild1, // #1 = $disp
/*9206*/    OPC_MoveChild, 1,
/*9208*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9211*/    OPC_MoveParent,
/*9212*/    OPC_CheckType, MVT::i64,
/*9214*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsgdHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsgdHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSGD_L),// ->9245
/*9226*/    OPC_RecordChild0, // #0 = $reg
/*9227*/    OPC_RecordChild1, // #1 = $disp
/*9228*/    OPC_MoveChild, 1,
/*9230*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9233*/    OPC_MoveParent,
/*9234*/    OPC_CheckType, MVT::i64,
/*9236*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsgdL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsgdL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLS_ADDR),// ->9267
/*9248*/    OPC_RecordChild0, // #0 = $reg
/*9249*/    OPC_RecordChild1, // #1 = $sym
/*9250*/    OPC_MoveChild, 1,
/*9252*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9255*/    OPC_MoveParent,
/*9256*/    OPC_CheckType, MVT::i64,
/*9258*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDIS_TLSLD_HA),// ->9289
/*9270*/    OPC_RecordChild0, // #0 = $reg
/*9271*/    OPC_RecordChild1, // #1 = $disp
/*9272*/    OPC_MoveChild, 1,
/*9274*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9277*/    OPC_MoveParent,
/*9278*/    OPC_CheckType, MVT::i64,
/*9280*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIStlsldHA), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddisTlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIStlsldHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_TLSLD_L),// ->9311
/*9292*/    OPC_RecordChild0, // #0 = $reg
/*9293*/    OPC_RecordChild1, // #1 = $disp
/*9294*/    OPC_MoveChild, 1,
/*9296*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9299*/    OPC_MoveParent,
/*9300*/    OPC_CheckType, MVT::i64,
/*9302*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDItlsldL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiTlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDItlsldL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::GET_TLSLD_ADDR),// ->9333
/*9314*/    OPC_RecordChild0, // #0 = $reg
/*9315*/    OPC_RecordChild1, // #1 = $sym
/*9316*/    OPC_MoveChild, 1,
/*9318*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9321*/    OPC_MoveParent,
/*9322*/    OPC_CheckType, MVT::i64,
/*9324*/    OPC_MorphNodeTo, TARGET_VAL(PPC::GETtlsldADDR), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCgetTlsldAddr:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym) - Complexity = 6
            // Dst: (GETtlsldADDR:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$sym)
          /*SwitchOpcode*/ 21,  TARGET_VAL(PPCISD::ADDIS_DTPREL_HA),// ->9357
/*9336*/    OPC_RecordNode,   // #0 = 'PPCaddisDtprelHA' chained node
/*9337*/    OPC_RecordChild1, // #1 = $reg
/*9338*/    OPC_RecordChild2, // #2 = $disp
/*9339*/    OPC_MoveChild, 2,
/*9341*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9344*/    OPC_MoveParent,
/*9345*/    OPC_CheckType, MVT::i64,
/*9347*/    OPC_EmitMergeInputChains1_0,
/*9348*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDISdtprelHA), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 2, 
            // Src: (PPCaddisDtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDISdtprelHA:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::ADDI_DTPREL_L),// ->9379
/*9360*/    OPC_RecordChild0, // #0 = $reg
/*9361*/    OPC_RecordChild1, // #1 = $disp
/*9362*/    OPC_MoveChild, 1,
/*9364*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalTLSAddress),
/*9367*/    OPC_MoveParent,
/*9368*/    OPC_CheckType, MVT::i64,
/*9370*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIdtprelL), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCaddiDtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp) - Complexity = 6
            // Dst: (ADDIdtprelL:i64 i64:i64:$reg, (tglobaltlsaddr:i64):$disp)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->9479
/*9382*/    OPC_RecordNode,   // #0 = $imm
/*9383*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->9445
/*9386*/      OPC_Scope, 12, /*->9400*/ // 3 children in Scope
/*9388*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9390*/        OPC_EmitConvertToTarget, 0,
/*9392*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*9400*/      /*Scope*/ 15, /*->9416*/
/*9401*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9403*/        OPC_EmitConvertToTarget, 0,
/*9405*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9408*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*9416*/      /*Scope*/ 27, /*->9444*/
/*9417*/        OPC_EmitConvertToTarget, 0,
/*9419*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9422*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3
/*9430*/        OPC_EmitConvertToTarget, 0,
/*9432*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*9435*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*9444*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->9478
/*9447*/      OPC_Scope, 12, /*->9461*/ // 2 children in Scope
/*9449*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*9451*/        OPC_EmitConvertToTarget, 0,
/*9453*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*9461*/      /*Scope*/ 15, /*->9477*/
/*9462*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*9464*/        OPC_EmitConvertToTarget, 0,
/*9466*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*9469*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*9477*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->9510
/*9482*/    OPC_RecordChild0, // #0 = $rS
/*9483*/    OPC_RecordChild1, // #1 = $rB
/*9484*/    OPC_CheckChild1Type, MVT::i32,
/*9486*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9498
/*9489*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9509
/*9500*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->9541
/*9513*/    OPC_RecordChild0, // #0 = $rS
/*9514*/    OPC_RecordChild1, // #1 = $rB
/*9515*/    OPC_CheckChild1Type, MVT::i32,
/*9517*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9529
/*9520*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9540
/*9531*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->9574
/*9544*/    OPC_RecordChild0, // #0 = $rS
/*9545*/    OPC_RecordChild1, // #1 = $rB
/*9546*/    OPC_CheckChild1Type, MVT::i32,
/*9548*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->9561
/*9551*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 i32:i32:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 i32:i32:$rS, i32:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->9573
/*9563*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 i64:i64:$rS, i32:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 i64:i64:$rS, i32:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->9600
/*9577*/    OPC_RecordChild0, // #0 = $rS
/*9578*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9589
/*9581*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 i32:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->9599
/*9591*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 i64:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->9672
/*9603*/    OPC_RecordChild0, // #0 = $rS
/*9604*/    OPC_MoveChild, 1,
/*9606*/    OPC_Scope, 25, /*->9633*/ // 3 children in Scope
/*9608*/      OPC_CheckValueType, MVT::i8,
/*9610*/      OPC_MoveParent,
/*9611*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9622
/*9614*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9632
/*9624*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9633*/    /*Scope*/ 25, /*->9659*/
/*9634*/      OPC_CheckValueType, MVT::i16,
/*9636*/      OPC_MoveParent,
/*9637*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->9648
/*9640*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 i32:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 i32:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->9658
/*9650*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 i64:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 i64:i64:$rS)
              0, // EndSwitchType
/*9659*/    /*Scope*/ 11, /*->9671*/
/*9660*/      OPC_CheckValueType, MVT::i32,
/*9662*/      OPC_MoveParent,
/*9663*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 i64:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 i64:i64:$rS)
/*9671*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->9701
/*9675*/    OPC_RecordChild0, // #0 = $rA
/*9676*/    OPC_RecordChild1, // #1 = $rB
/*9677*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9689
/*9680*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9700
/*9691*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->9730
/*9704*/    OPC_RecordChild0, // #0 = $rA
/*9705*/    OPC_RecordChild1, // #1 = $rB
/*9706*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9718
/*9709*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9729
/*9720*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->9759
/*9733*/    OPC_RecordChild0, // #0 = $rA
/*9734*/    OPC_RecordChild1, // #1 = $rB
/*9735*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9747
/*9738*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9758
/*9749*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->9788
/*9762*/    OPC_RecordChild0, // #0 = $rA
/*9763*/    OPC_RecordChild1, // #1 = $rB
/*9764*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->9776
/*9767*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 i32:i32:$rA, i32:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 i32:i32:$rA, i32:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->9787
/*9778*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 i64:i64:$rA, i64:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 i64:i64:$rA, i64:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::READCYCLECOUNTER),// ->9802
/*9791*/    OPC_RecordNode,   // #0 = 'readcyclecounter' chained node
/*9792*/    OPC_CheckType, MVT::i64,
/*9794*/    OPC_EmitMergeInputChains1_0,
/*9795*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFTB8), 0|OPFL_Chain,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
            // Src: (readcyclecounter:i64) - Complexity = 3
            // Dst: (MFTB8:i64)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->9818
/*9805*/    OPC_RecordChild0, // #0 = $rS
/*9806*/    OPC_CheckChild0Type, MVT::i32,
/*9808*/    OPC_CheckType, MVT::i64,
/*9810*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 i32:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 i32:i32:$rS)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTPOP),// ->9844
/*9821*/    OPC_RecordChild0, // #0 = $rS
/*9822*/    OPC_SwitchType /*2 cases */, 8,  MVT::i64,// ->9833
/*9825*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctpop:i64 i64:i64:$rS) - Complexity = 3
              // Dst: (POPCNTD:i64 i64:i64:$rS)
            /*SwitchType*/ 8,  MVT::i32,// ->9843
/*9835*/      OPC_MorphNodeTo, TARGET_VAL(PPC::POPCNTW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctpop:i32 i32:i32:$rS) - Complexity = 3
              // Dst: (POPCNTW:i32 i32:i32:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->9862
/*9847*/    OPC_RecordChild0, // #0 = $in
/*9848*/    OPC_CheckType, MVT::i32,
/*9850*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9853*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 i64:i64:$in) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 ?:i64:$in, sub_32:i32)
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->9890
/*9865*/    OPC_RecordChild0, // #0 = $in
/*9866*/    OPC_CheckChild0Type, MVT::i32,
/*9868*/    OPC_CheckType, MVT::i64,
/*9870*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9877*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9880*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32)
          /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::ZERO_EXTEND),// ->9934
/*9893*/    OPC_RecordChild0, // #0 = $in
/*9894*/    OPC_CheckChild0Type, MVT::i32,
/*9896*/    OPC_CheckType, MVT::i64,
/*9898*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1
/*9905*/    OPC_EmitInteger, MVT::i32, PPC::sub_32,
/*9908*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2,  // Results = #3
/*9918*/    OPC_EmitInteger, MVT::i32, 0, 
/*9921*/    OPC_EmitInteger, MVT::i32, 32, 
/*9924*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 5, 
            // Src: (zext:i64 i32:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), ?:i32:$in, sub_32:i32), 0:i32, 32:i32)
          /*SwitchOpcode*/ 31|128,1/*159*/,  TARGET_VAL(ISD::FNEG),// ->10097
/*9938*/    OPC_Scope, 102, /*->10042*/ // 3 children in Scope
/*9940*/      OPC_MoveChild, 0,
/*9942*/      OPC_SwitchOpcode /*2 cases */, 68,  TARGET_VAL(ISD::FMA),// ->10014
/*9946*/        OPC_RecordChild0, // #0 = $FRA
/*9947*/        OPC_RecordChild1, // #1 = $FRC
/*9948*/        OPC_Scope, 34, /*->9984*/ // 2 children in Scope
/*9950*/          OPC_MoveChild, 2,
/*9952*/          OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*9955*/          OPC_RecordChild0, // #2 = $FRB
/*9956*/          OPC_MoveParent,
/*9957*/          OPC_MoveParent,
/*9958*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->9971
/*9961*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB))) - Complexity = 9
                    // Dst: (FNMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->9983
/*9973*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB))) - Complexity = 9
                    // Dst: (FNMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*9984*/        /*Scope*/ 28, /*->10013*/
/*9985*/          OPC_RecordChild2, // #2 = $FRB
/*9986*/          OPC_MoveParent,
/*9987*/          OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10000
/*9990*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)) - Complexity = 6
                    // Dst: (FNMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                  /*SwitchType*/ 10,  MVT::f32,// ->10012
/*10002*/           OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)) - Complexity = 6
                    // Dst: (FNMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                  0, // EndSwitchType
/*10013*/       0, /*End of Scope*/
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->10041
/*10017*/       OPC_RecordChild0, // #0 = $frB
/*10018*/       OPC_MoveParent,
/*10019*/       OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10030
/*10022*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 f32:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 f32:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->10040
/*10032*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 f64:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 f64:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*10042*/   /*Scope*/ 23, /*->10066*/
/*10043*/     OPC_RecordChild0, // #0 = $frB
/*10044*/     OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10055
/*10047*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 f32:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 f32:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->10065
/*10057*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 f64:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 f64:f64:$frB)
              0, // EndSwitchType
/*10066*/   /*Scope*/ 29, /*->10096*/
/*10067*/     OPC_MoveChild, 0,
/*10069*/     OPC_CheckOpcode, TARGET_VAL(ISD::FMA),
/*10072*/     OPC_RecordChild0, // #0 = $vA
/*10073*/     OPC_RecordChild1, // #1 = $vC
/*10074*/     OPC_MoveChild, 2,
/*10076*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10079*/     OPC_RecordChild0, // #2 = $vB
/*10080*/     OPC_MoveParent,
/*10081*/     OPC_MoveParent,
/*10082*/     OPC_CheckType, MVT::v4f32,
/*10084*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10086*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fneg:v4f32 (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, (fneg:v4f32 v4f32:v4f32:$vB))) - Complexity = 9
              // Dst: (VNMSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
/*10096*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,1/*172*/,  TARGET_VAL(ISD::FMA),// ->10273
/*10101*/   OPC_Scope, 35, /*->10138*/ // 5 children in Scope
/*10103*/     OPC_RecordChild0, // #0 = $FRA
/*10104*/     OPC_RecordChild1, // #1 = $FRC
/*10105*/     OPC_MoveChild, 2,
/*10107*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10110*/     OPC_RecordChild0, // #2 = $FRB
/*10111*/     OPC_MoveParent,
/*10112*/     OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10125
/*10115*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, (fneg:f64 f64:f64:$FRB)) - Complexity = 6
                // Dst: (FMSUB:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
              /*SwitchType*/ 10,  MVT::f32,// ->10137
/*10127*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, (fneg:f32 f32:f32:$FRB)) - Complexity = 6
                // Dst: (FMSUBS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
              0, // EndSwitchType
/*10138*/   /*Scope*/ 21, /*->10160*/
/*10139*/     OPC_MoveChild, 0,
/*10141*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10144*/     OPC_RecordChild0, // #0 = $A
/*10145*/     OPC_MoveParent,
/*10146*/     OPC_RecordChild1, // #1 = $C
/*10147*/     OPC_RecordChild2, // #2 = $B
/*10148*/     OPC_CheckType, MVT::f64,
/*10150*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 (fneg:f64 f64:f64:$A), f64:f64:$C, f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10160*/   /*Scope*/ 21, /*->10182*/
/*10161*/     OPC_RecordChild0, // #0 = $A
/*10162*/     OPC_MoveChild, 1,
/*10164*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10167*/     OPC_RecordChild0, // #1 = $C
/*10168*/     OPC_MoveParent,
/*10169*/     OPC_RecordChild2, // #2 = $B
/*10170*/     OPC_CheckType, MVT::f64,
/*10172*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f64 f64:f64:$A, (fneg:f64 f64:f64:$C), f64:f64:$B) - Complexity = 6
              // Dst: (FNMSUB:f64 ?:f64:$A, ?:f64:$C, ?:f64:$B)
/*10182*/   /*Scope*/ 21, /*->10204*/
/*10183*/     OPC_MoveChild, 0,
/*10185*/     OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10188*/     OPC_RecordChild0, // #0 = $A
/*10189*/     OPC_MoveParent,
/*10190*/     OPC_RecordChild1, // #1 = $C
/*10191*/     OPC_RecordChild2, // #2 = $B
/*10192*/     OPC_CheckType, MVT::f32,
/*10194*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fma:f32 (fneg:f32 f32:f32:$A), f32:f32:$C, f32:f32:$B) - Complexity = 6
              // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10204*/   /*Scope*/ 67, /*->10272*/
/*10205*/     OPC_RecordChild0, // #0 = $A
/*10206*/     OPC_Scope, 20, /*->10228*/ // 2 children in Scope
/*10208*/       OPC_MoveChild, 1,
/*10210*/       OPC_CheckOpcode, TARGET_VAL(ISD::FNEG),
/*10213*/       OPC_RecordChild0, // #1 = $C
/*10214*/       OPC_MoveParent,
/*10215*/       OPC_RecordChild2, // #2 = $B
/*10216*/       OPC_CheckType, MVT::f32,
/*10218*/       OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fma:f32 f32:f32:$A, (fneg:f32 f32:f32:$C), f32:f32:$B) - Complexity = 6
                // Dst: (FNMSUBS:f32 ?:f32:$A, ?:f32:$C, ?:f32:$B)
/*10228*/     /*Scope*/ 42, /*->10271*/
/*10229*/       OPC_RecordChild1, // #1 = $FRC
/*10230*/       OPC_RecordChild2, // #2 = $FRB
/*10231*/       OPC_SwitchType /*3 cases */, 10,  MVT::f64,// ->10244
/*10234*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
                  // Dst: (FMADD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
                /*SwitchType*/ 10,  MVT::f32,// ->10256
/*10246*/         OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
                  // Dst: (FMADDS:f32 f32:f32:$FRA, f32:f32:$FRC, f32:f32:$FRB)
                /*SwitchType*/ 12,  MVT::v4f32,// ->10270
/*10258*/         OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10260*/         OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                      1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fma:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB) - Complexity = 3
                  // Dst: (VMADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vC, v4f32:v4f32:$vB)
                0, // EndSwitchType
/*10271*/     0, /*End of Scope*/
/*10272*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->10287
/*10276*/   OPC_RecordChild0, // #0 = $frB
/*10277*/   OPC_CheckType, MVT::f64,
/*10279*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->10299
/*10290*/   OPC_RecordChild0, // #0 = $frB
/*10291*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FNEARBYINT),// ->10337
/*10302*/   OPC_RecordChild0, // #0 = $frB
/*10303*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10314
/*10306*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIND), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIND:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10324
/*10316*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10336
/*10326*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10328*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fnearbyint:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIN:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FCEIL),// ->10375
/*10340*/   OPC_RecordChild0, // #0 = $frB
/*10341*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10352
/*10344*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fceil:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIPD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10362
/*10354*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIPS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fceil:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIPS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10374
/*10364*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10366*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (fceil:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIP:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FTRUNC),// ->10413
/*10378*/   OPC_RecordChild0, // #0 = $frB
/*10379*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10390
/*10382*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIZD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10400
/*10392*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIZS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIZS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10412
/*10402*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10404*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ftrunc:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIZ:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::FFLOOR),// ->10451
/*10416*/   OPC_RecordChild0, // #0 = $frB
/*10417*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10428
/*10420*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (ffloor:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRIMD:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10438
/*10430*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRIMS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRIMS:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10450
/*10440*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10442*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (ffloor:v4f32 v4f32:v4f32:$vA) - Complexity = 3
              // Dst: (VRFIM:v4f32 ?:v4f32:$vA)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->10477
/*10454*/   OPC_RecordChild0, // #0 = $frB
/*10455*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10466
/*10458*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10476
/*10468*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->10503
/*10480*/   OPC_RecordChild0, // #0 = $frB
/*10481*/   OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->10492
/*10484*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 f32:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->10502
/*10494*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 f64:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRE),// ->10541
/*10506*/   OPC_RecordChild0, // #0 = $frB
/*10507*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10518
/*10510*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10528
/*10520*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10540
/*10530*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10532*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfre:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VREFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::FRSQRTE),// ->10579
/*10544*/   OPC_RecordChild0, // #0 = $frB
/*10545*/   OPC_SwitchType /*3 cases */, 8,  MVT::f64,// ->10556
/*10548*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTE), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRSQRTE:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10566
/*10558*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRSQRTES), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRSQRTES:f32 f32:f32:$frB)
            /*SwitchType*/ 10,  MVT::v4f32,// ->10578
/*10568*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10570*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (PPCfrsqrte:v4f32 v4f32:v4f32:$A) - Complexity = 3
              // Dst: (VRSQRTEFP:v4f32 ?:v4f32:$A)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->10589
/*10582*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->10621
/*10592*/   OPC_RecordChild0, // #0 = $FRA
/*10593*/   OPC_RecordChild1, // #1 = $FRC
/*10594*/   OPC_RecordChild2, // #2 = $FRB
/*10595*/   OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->10608
/*10598*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 f64:f64:$FRA, f64:f64:$FRC, f64:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->10620
/*10610*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 f64:f64:$FRA, f32:f32:$FRC, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FADD),// ->10663
/*10624*/   OPC_RecordChild0, // #0 = $FRA
/*10625*/   OPC_RecordChild1, // #1 = $FRB
/*10626*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10638
/*10629*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FADD:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10649
/*10640*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FADDS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10662
/*10651*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10653*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VADDFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->10692
/*10666*/   OPC_RecordChild0, // #0 = $FRA
/*10667*/   OPC_RecordChild1, // #1 = $FRB
/*10668*/   OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->10680
/*10671*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10691
/*10682*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 f32:f32:$FRA, f32:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::FMUL),// ->10758
/*10695*/   OPC_RecordChild0, // #0 = $FRA
/*10696*/   OPC_RecordChild1, // #1 = $FRC
/*10697*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10709
/*10700*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 f64:f64:$FRA, f64:f64:$FRC) - Complexity = 3
              // Dst: (FMUL:f64 f64:f64:$FRA, f64:f64:$FRC)
            /*SwitchType*/ 9,  MVT::f32,// ->10720
/*10711*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 f32:f32:$FRA, f32:f32:$FRC) - Complexity = 3
              // Dst: (FMULS:f32 f32:f32:$FRA, f32:f32:$FRC)
            /*SwitchType*/ 35,  MVT::v4f32,// ->10757
/*10722*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10724*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #2
/*10731*/     OPC_EmitNode, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v16i8, 0/*#Ops*/,  // Results = #3
/*10738*/     OPC_EmitNode, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3,  // Results = #4
/*10747*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (fmul:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 ?:v4f32:$vA, ?:v4f32:$vB, (VSLW:v4i32 (V_SETALLONES:v16i8), (V_SETALLONES:v16i8)))
            0, // EndSwitchType
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::FSUB),// ->10800
/*10761*/   OPC_RecordChild0, // #0 = $FRA
/*10762*/   OPC_RecordChild1, // #1 = $FRB
/*10763*/   OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->10775
/*10766*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
              // Dst: (FSUB:f64 f64:f64:$FRA, f64:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->10786
/*10777*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 f32:f32:$FRA, f32:f32:$FRB) - Complexity = 3
              // Dst: (FSUBS:f32 f32:f32:$FRA, f32:f32:$FRB)
            /*SwitchType*/ 11,  MVT::v4f32,// ->10799
/*10788*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10790*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->10816
/*10803*/   OPC_RecordChild0, // #0 = $src
/*10804*/   OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*10807*/   OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 f32:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 ?:f32:$src, F8RC:i32)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->10830
/*10819*/   OPC_RecordChild0, // #0 = $frB
/*10820*/   OPC_CheckType, MVT::f64,
/*10822*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->10844
/*10833*/   OPC_RecordChild0, // #0 = $frB
/*10834*/   OPC_CheckType, MVT::f64,
/*10836*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFIDU),// ->10858
/*10847*/   OPC_RecordChild0, // #0 = $frB
/*10848*/   OPC_CheckType, MVT::f64,
/*10850*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDU), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidu:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDU:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDS),// ->10870
/*10861*/   OPC_RecordChild0, // #0 = $frB
/*10862*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfids:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::FCFIDUS),// ->10882
/*10873*/   OPC_RecordChild0, // #0 = $frB
/*10874*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCFIDUS), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (PPCfcfidus:f32 f64:f64:$frB) - Complexity = 3
            // Dst: (FCFIDUS:f32 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDUZ),// ->10896
/*10885*/   OPC_RecordChild0, // #0 = $frB
/*10886*/   OPC_CheckType, MVT::f64,
/*10888*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiduz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIDUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWUZ),// ->10910
/*10899*/   OPC_RecordChild0, // #0 = $frB
/*10900*/   OPC_CheckType, MVT::f64,
/*10902*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWUZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwuz:f64 f64:f64:$frB) - Complexity = 3
            // Dst: (FCTIWUZ:f64 f64:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FRINT),// ->10936
/*10913*/   OPC_RecordChild0, // #0 = $frB
/*10914*/   OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->10925
/*10917*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINDrint), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (frint:f64 f64:f64:$frB) - Complexity = 3
              // Dst: (FRINDrint:f64 f64:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->10935
/*10927*/     OPC_MorphNodeTo, TARGET_VAL(PPC::FRINSrint), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (frint:f32 f32:f32:$frB) - Complexity = 3
              // Dst: (FRINSrint:f32 f32:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::FADDRTZ),// ->10952
/*10939*/   OPC_RecordChild0, // #0 = $FRA
/*10940*/   OPC_RecordChild1, // #1 = $FRB
/*10941*/   OPC_CheckType, MVT::f64,
/*10943*/   OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 f64:f64:$FRA, f64:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 f64:f64:$FRA, f64:f64:$FRB)
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(PPCISD::VCMP),// ->11194
/*10956*/   OPC_RecordChild0, // #0 = $vA
/*10957*/   OPC_RecordChild1, // #1 = $vB
/*10958*/   OPC_MoveChild, 2,
/*10960*/   OPC_Scope, 16, /*->10978*/ // 13 children in Scope
/*10962*/     OPC_CheckInteger, 6, 
/*10964*/     OPC_MoveParent,
/*10965*/     OPC_CheckType, MVT::v16i8,
/*10967*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10969*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10978*/   /*Scope*/ 17, /*->10996*/
/*10979*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*10982*/     OPC_MoveParent,
/*10983*/     OPC_CheckType, MVT::v16i8,
/*10985*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*10987*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*10996*/   /*Scope*/ 17, /*->11014*/
/*10997*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11000*/     OPC_MoveParent,
/*11001*/     OPC_CheckType, MVT::v16i8,
/*11003*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11005*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11014*/   /*Scope*/ 16, /*->11031*/
/*11015*/     OPC_CheckInteger, 70, 
/*11017*/     OPC_MoveParent,
/*11018*/     OPC_CheckType, MVT::v8i16,
/*11020*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11022*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11031*/   /*Scope*/ 17, /*->11049*/
/*11032*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11035*/     OPC_MoveParent,
/*11036*/     OPC_CheckType, MVT::v8i16,
/*11038*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11040*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11049*/   /*Scope*/ 17, /*->11067*/
/*11050*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11053*/     OPC_MoveParent,
/*11054*/     OPC_CheckType, MVT::v8i16,
/*11056*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11058*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11067*/   /*Scope*/ 17, /*->11085*/
/*11068*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11071*/     OPC_MoveParent,
/*11072*/     OPC_CheckType, MVT::v4i32,
/*11074*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11076*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11085*/   /*Scope*/ 17, /*->11103*/
/*11086*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11089*/     OPC_MoveParent,
/*11090*/     OPC_CheckType, MVT::v4i32,
/*11092*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11094*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11103*/   /*Scope*/ 17, /*->11121*/
/*11104*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11107*/     OPC_MoveParent,
/*11108*/     OPC_CheckType, MVT::v4i32,
/*11110*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11112*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11121*/   /*Scope*/ 17, /*->11139*/
/*11122*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11125*/     OPC_MoveParent,
/*11126*/     OPC_CheckType, MVT::v4f32,
/*11128*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11130*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11139*/   /*Scope*/ 17, /*->11157*/
/*11140*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11143*/     OPC_MoveParent,
/*11144*/     OPC_CheckType, MVT::v4f32,
/*11146*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11148*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11157*/   /*Scope*/ 17, /*->11175*/
/*11158*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11161*/     OPC_MoveParent,
/*11162*/     OPC_CheckType, MVT::v4f32,
/*11164*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11166*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11175*/   /*Scope*/ 17, /*->11193*/
/*11176*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11179*/     OPC_MoveParent,
/*11180*/     OPC_CheckType, MVT::v4f32,
/*11182*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11184*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11193*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 123|128,1/*251*/,  TARGET_VAL(PPCISD::VCMPo),// ->11449
/*11198*/   OPC_RecordChild0, // #0 = $vA
/*11199*/   OPC_RecordChild1, // #1 = $vB
/*11200*/   OPC_MoveChild, 2,
/*11202*/   OPC_Scope, 17, /*->11221*/ // 13 children in Scope
/*11204*/     OPC_CheckInteger, 6, 
/*11206*/     OPC_MoveParent,
/*11207*/     OPC_CheckType, MVT::v16i8,
/*11209*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11211*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11221*/   /*Scope*/ 18, /*->11240*/
/*11222*/     OPC_CheckInteger, 6|128,6/*774*/, 
/*11225*/     OPC_MoveParent,
/*11226*/     OPC_CheckType, MVT::v16i8,
/*11228*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11230*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11240*/   /*Scope*/ 18, /*->11259*/
/*11241*/     OPC_CheckInteger, 6|128,4/*518*/, 
/*11244*/     OPC_MoveParent,
/*11245*/     OPC_CheckType, MVT::v16i8,
/*11247*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11249*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11259*/   /*Scope*/ 17, /*->11277*/
/*11260*/     OPC_CheckInteger, 70, 
/*11262*/     OPC_MoveParent,
/*11263*/     OPC_CheckType, MVT::v8i16,
/*11265*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11267*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11277*/   /*Scope*/ 18, /*->11296*/
/*11278*/     OPC_CheckInteger, 70|128,6/*838*/, 
/*11281*/     OPC_MoveParent,
/*11282*/     OPC_CheckType, MVT::v8i16,
/*11284*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11286*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11296*/   /*Scope*/ 18, /*->11315*/
/*11297*/     OPC_CheckInteger, 70|128,4/*582*/, 
/*11300*/     OPC_MoveParent,
/*11301*/     OPC_CheckType, MVT::v8i16,
/*11303*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11305*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 v8i16:v8i16:$vA, v8i16:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 v8i16:v8i16:$vA, v8i16:v8i16:$vB)
/*11315*/   /*Scope*/ 18, /*->11334*/
/*11316*/     OPC_CheckInteger, 6|128,1/*134*/, 
/*11319*/     OPC_MoveParent,
/*11320*/     OPC_CheckType, MVT::v4i32,
/*11322*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11324*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11334*/   /*Scope*/ 18, /*->11353*/
/*11335*/     OPC_CheckInteger, 6|128,7/*902*/, 
/*11338*/     OPC_MoveParent,
/*11339*/     OPC_CheckType, MVT::v4i32,
/*11341*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11343*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11353*/   /*Scope*/ 18, /*->11372*/
/*11354*/     OPC_CheckInteger, 6|128,5/*646*/, 
/*11357*/     OPC_MoveParent,
/*11358*/     OPC_CheckType, MVT::v4i32,
/*11360*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11362*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 v4i32:v4i32:$vA, v4i32:v4i32:$vB)
/*11372*/   /*Scope*/ 18, /*->11391*/
/*11373*/     OPC_CheckInteger, 70|128,7/*966*/, 
/*11376*/     OPC_MoveParent,
/*11377*/     OPC_CheckType, MVT::v4f32,
/*11379*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11381*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11391*/   /*Scope*/ 18, /*->11410*/
/*11392*/     OPC_CheckInteger, 70|128,1/*198*/, 
/*11395*/     OPC_MoveParent,
/*11396*/     OPC_CheckType, MVT::v4f32,
/*11398*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11400*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11410*/   /*Scope*/ 18, /*->11429*/
/*11411*/     OPC_CheckInteger, 70|128,3/*454*/, 
/*11414*/     OPC_MoveParent,
/*11415*/     OPC_CheckType, MVT::v4f32,
/*11417*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11419*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11429*/   /*Scope*/ 18, /*->11448*/
/*11430*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*11433*/     OPC_MoveParent,
/*11434*/     OPC_CheckType, MVT::v4f32,
/*11436*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11438*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 v4f32:v4f32:$vA, v4f32:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 v4f32:v4f32:$vA, v4f32:v4f32:$vB)
/*11448*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 94|128,2/*350*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->11803
/*11453*/   OPC_Scope, 81, /*->11536*/ // 4 children in Scope
/*11455*/     OPC_RecordNode, // #0 = $UIMM
/*11456*/     OPC_RecordChild0, // #1 = $vB
/*11457*/     OPC_MoveChild, 1,
/*11459*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11462*/     OPC_MoveParent,
/*11463*/     OPC_CheckType, MVT::v16i8,
/*11465*/     OPC_Scope, 16, /*->11483*/ // 4 children in Scope
/*11467*/       OPC_CheckPredicate, 74, // Predicate_vspltb_shuffle
/*11469*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11471*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*11474*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11483*/     /*Scope*/ 16, /*->11500*/
/*11484*/       OPC_CheckPredicate, 75, // Predicate_vsplth_shuffle
/*11486*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11488*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*11491*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11500*/     /*Scope*/ 16, /*->11517*/
/*11501*/       OPC_CheckPredicate, 76, // Predicate_vspltw_shuffle
/*11503*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11505*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*11508*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vB, (undef:v16i8)):$UIMM), v16i8:v16i8:$vB)
/*11517*/     /*Scope*/ 17, /*->11535*/
/*11518*/       OPC_CheckPredicate, 77, // Predicate_vsldoi_unary_shuffle
/*11520*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11522*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*11525*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 ?:v16i8:$vA, ?:v16i8:$vA, (VSLDOI_unary_get_imm:i32 ?:v16i8:$in))
/*11535*/     0, /*End of Scope*/
/*11536*/   /*Scope*/ 123, /*->11660*/
/*11537*/     OPC_RecordChild0, // #0 = $vA
/*11538*/     OPC_MoveChild, 1,
/*11540*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*11543*/     OPC_MoveParent,
/*11544*/     OPC_CheckType, MVT::v16i8,
/*11546*/     OPC_Scope, 13, /*->11561*/ // 8 children in Scope
/*11548*/       OPC_CheckPredicate, 78, // Predicate_vpkuwum_unary_shuffle
/*11550*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11552*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11561*/     /*Scope*/ 13, /*->11575*/
/*11562*/       OPC_CheckPredicate, 79, // Predicate_vpkuhum_unary_shuffle
/*11564*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11566*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11575*/     /*Scope*/ 13, /*->11589*/
/*11576*/       OPC_CheckPredicate, 80, // Predicate_vmrglb_unary_shuffle
/*11578*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11580*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11589*/     /*Scope*/ 13, /*->11603*/
/*11590*/       OPC_CheckPredicate, 81, // Predicate_vmrglh_unary_shuffle
/*11592*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11594*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11603*/     /*Scope*/ 13, /*->11617*/
/*11604*/       OPC_CheckPredicate, 82, // Predicate_vmrglw_unary_shuffle
/*11606*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11608*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11617*/     /*Scope*/ 13, /*->11631*/
/*11618*/       OPC_CheckPredicate, 83, // Predicate_vmrghb_unary_shuffle
/*11620*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11622*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11631*/     /*Scope*/ 13, /*->11645*/
/*11632*/       OPC_CheckPredicate, 84, // Predicate_vmrghh_unary_shuffle
/*11634*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11636*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11645*/     /*Scope*/ 13, /*->11659*/
/*11646*/       OPC_CheckPredicate, 85, // Predicate_vmrghw_unary_shuffle
/*11648*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11650*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 ?:v16i8:$vA, ?:v16i8:$vA)
/*11659*/     0, /*End of Scope*/
/*11660*/   /*Scope*/ 22, /*->11683*/
/*11661*/     OPC_RecordNode, // #0 = $SH
/*11662*/     OPC_RecordChild0, // #1 = $vA
/*11663*/     OPC_RecordChild1, // #2 = $vB
/*11664*/     OPC_CheckPredicate, 86, // Predicate_vsldoi_shuffle
/*11666*/     OPC_CheckType, MVT::v16i8,
/*11668*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11670*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*11673*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB):$SH))
/*11683*/   /*Scope*/ 118, /*->11802*/
/*11684*/     OPC_RecordChild0, // #0 = $vA
/*11685*/     OPC_RecordChild1, // #1 = $vB
/*11686*/     OPC_CheckType, MVT::v16i8,
/*11688*/     OPC_Scope, 13, /*->11703*/ // 8 children in Scope
/*11690*/       OPC_CheckPredicate, 87, // Predicate_vmrghb_shuffle
/*11692*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11694*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11703*/     /*Scope*/ 13, /*->11717*/
/*11704*/       OPC_CheckPredicate, 88, // Predicate_vmrghh_shuffle
/*11706*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11708*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11717*/     /*Scope*/ 13, /*->11731*/
/*11718*/       OPC_CheckPredicate, 89, // Predicate_vmrghw_shuffle
/*11720*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11722*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11731*/     /*Scope*/ 13, /*->11745*/
/*11732*/       OPC_CheckPredicate, 90, // Predicate_vmrglb_shuffle
/*11734*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11736*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11745*/     /*Scope*/ 13, /*->11759*/
/*11746*/       OPC_CheckPredicate, 91, // Predicate_vmrglh_shuffle
/*11748*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11750*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11759*/     /*Scope*/ 13, /*->11773*/
/*11760*/       OPC_CheckPredicate, 92, // Predicate_vmrglw_shuffle
/*11762*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11764*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11773*/     /*Scope*/ 13, /*->11787*/
/*11774*/       OPC_CheckPredicate, 93, // Predicate_vpkuhum_shuffle
/*11776*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11778*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11787*/     /*Scope*/ 13, /*->11801*/
/*11788*/       OPC_CheckPredicate, 94, // Predicate_vpkuwum_shuffle
/*11790*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11792*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB)
/*11801*/     0, /*End of Scope*/
/*11802*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->11823
/*11806*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*11807*/   OPC_RecordChild1, // #1 = $amt
/*11808*/   OPC_MoveChild, 1,
/*11810*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*11813*/   OPC_MoveParent,
/*11814*/   OPC_EmitMergeInputChains1_0,
/*11815*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 92,  TARGET_VAL(PPCISD::CALL),// ->11918
/*11826*/   OPC_RecordNode,   // #0 = 'PPCcall' chained node
/*11827*/   OPC_CaptureGlueInput,
/*11828*/   OPC_RecordChild1, // #1 = $func
/*11829*/   OPC_MoveChild, 1,
/*11831*/   OPC_SwitchOpcode /*3 cases */, 28,  TARGET_VAL(ISD::Constant),// ->11863
/*11835*/     OPC_SwitchType /*2 cases */, 11,  MVT::i32,// ->11849
/*11838*/       OPC_MoveParent,
/*11839*/       OPC_EmitMergeInputChains1_0,
/*11840*/       OPC_EmitConvertToTarget, 1,
/*11842*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i32):$func) - Complexity = 6
                // Dst: (BLA (imm:i32):$func)
              /*SwitchType*/ 11,  MVT::i64,// ->11862
/*11851*/       OPC_MoveParent,
/*11852*/       OPC_EmitMergeInputChains1_0,
/*11853*/       OPC_EmitConvertToTarget, 1,
/*11855*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (PPCcall (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11890
/*11866*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11878
/*11869*/       OPC_MoveParent,
/*11870*/       OPC_EmitMergeInputChains1_0,
/*11871*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL (tglobaladdr:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11889
/*11880*/       OPC_MoveParent,
/*11881*/       OPC_EmitMergeInputChains1_0,
/*11882*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11917
/*11893*/     OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->11905
/*11896*/       OPC_MoveParent,
/*11897*/       OPC_EmitMergeInputChains1_0,
/*11898*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL (texternalsym:i32):$dst)
              /*SwitchType*/ 9,  MVT::i64,// ->11916
/*11907*/       OPC_MoveParent,
/*11908*/       OPC_EmitMergeInputChains1_0,
/*11909*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (PPCcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 51,  TARGET_VAL(PPCISD::CALL_NOP),// ->11972
/*11921*/   OPC_RecordNode,   // #0 = 'PPCcall_nop' chained node
/*11922*/   OPC_CaptureGlueInput,
/*11923*/   OPC_RecordChild1, // #1 = $func
/*11924*/   OPC_MoveChild, 1,
/*11926*/   OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::Constant),// ->11943
/*11930*/     OPC_CheckType, MVT::i64,
/*11932*/     OPC_MoveParent,
/*11933*/     OPC_EmitMergeInputChains1_0,
/*11934*/     OPC_EmitConvertToTarget, 1,
/*11936*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 2, 
              // Src: (PPCcall_nop (imm:i64):$func) - Complexity = 6
              // Dst: (BLA8_NOP (imm:i64):$func)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->11957
/*11946*/     OPC_CheckType, MVT::i64,
/*11948*/     OPC_MoveParent,
/*11949*/     OPC_EmitMergeInputChains1_0,
/*11950*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (tglobaladdr:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (tglobaladdr:i64):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->11971
/*11960*/     OPC_CheckType, MVT::i64,
/*11962*/     OPC_MoveParent,
/*11963*/     OPC_EmitMergeInputChains1_0,
/*11964*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_NOP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (PPCcall_nop (texternalsym:i64):$dst) - Complexity = 6
              // Dst: (BL8_NOP (texternalsym:i64):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 85,  TARGET_VAL(ISD::BUILD_VECTOR),// ->12060
/*11975*/   OPC_Scope, 54, /*->12031*/ // 3 children in Scope
/*11977*/     OPC_RecordNode, // #0 = $SIMM
/*11978*/     OPC_SwitchType /*3 cases */, 15,  MVT::v16i8,// ->11996
/*11981*/       OPC_CheckPredicate, 95, // Predicate_vecspltisb
/*11983*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*11985*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*11988*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 15,  MVT::v8i16,// ->12013
/*11998*/       OPC_CheckPredicate, 96, // Predicate_vecspltish
/*12000*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12002*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*12005*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 15,  MVT::v4i32,// ->12030
/*12015*/       OPC_CheckPredicate, 97, // Predicate_vecspltisw
/*12017*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12019*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*12022*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*12031*/   /*Scope*/ 13, /*->12045*/
/*12032*/     OPC_CheckPredicate, 98, // Predicate_immAllZerosV
/*12034*/     OPC_CheckType, MVT::v4i32,
/*12036*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12038*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*12045*/   /*Scope*/ 13, /*->12059*/
/*12046*/     OPC_CheckPredicate, 70, // Predicate_immAllOnesV
/*12048*/     OPC_CheckType, MVT::v4i32,
/*12050*/     OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12052*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SETALLONES), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllOnesV>> - Complexity = 4
              // Dst: (V_SETALLONES:v4i32)
/*12059*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 107,  TARGET_VAL(ISD::BITCAST),// ->12170
/*12063*/   OPC_RecordChild0, // #0 = $src
/*12064*/   OPC_Scope, 25, /*->12091*/ // 4 children in Scope
/*12066*/     OPC_CheckChild0Type, MVT::v8i16,
/*12068*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12076
/*12071*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12073*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12083
/*12078*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12080*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12090
/*12085*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12087*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12091*/   /*Scope*/ 25, /*->12117*/
/*12092*/     OPC_CheckChild0Type, MVT::v4i32,
/*12094*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12102
/*12097*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12099*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12109
/*12104*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12106*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12116
/*12111*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12113*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12117*/   /*Scope*/ 25, /*->12143*/
/*12118*/     OPC_CheckChild0Type, MVT::v4f32,
/*12120*/     OPC_SwitchType /*3 cases */, 5,  MVT::v16i8,// ->12128
/*12123*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12125*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 5,  MVT::v8i16,// ->12135
/*12130*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12132*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12142
/*12137*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12139*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*12143*/   /*Scope*/ 25, /*->12169*/
/*12144*/     OPC_CheckChild0Type, MVT::v16i8,
/*12146*/     OPC_SwitchType /*3 cases */, 5,  MVT::v8i16,// ->12154
/*12149*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12151*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 5,  MVT::v4i32,// ->12161
/*12156*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12158*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 5,  MVT::v4f32,// ->12168
/*12163*/       OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12165*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*12169*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::RET_FLAG),// ->12182
/*12173*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*12174*/   OPC_CaptureGlueInput,
/*12175*/   OPC_EmitMergeInputChains1_0,
/*12176*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->12201
/*12185*/   OPC_RecordNode,   // #0 = 'br' chained node
/*12186*/   OPC_RecordChild1, // #1 = $dst
/*12187*/   OPC_MoveChild, 1,
/*12189*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*12192*/   OPC_MoveParent,
/*12193*/   OPC_EmitMergeInputChains1_0,
/*12194*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::BCTRL),// ->12228
/*12204*/   OPC_RecordNode,   // #0 = 'PPCbctrl' chained node
/*12205*/   OPC_CaptureGlueInput,
/*12206*/   OPC_Scope, 9, /*->12217*/ // 2 children in Scope
/*12208*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*12210*/     OPC_EmitMergeInputChains1_0,
/*12211*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL)
/*12217*/   /*Scope*/ 9, /*->12227*/
/*12218*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*12220*/     OPC_EmitMergeInputChains1_0,
/*12221*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (PPCbctrl) - Complexity = 3
              // Dst: (BCTRL8)
/*12227*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->12239
/*12231*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*12232*/   OPC_EmitMergeInputChains1_0,
/*12233*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6SET),// ->12252
/*12242*/   OPC_RecordNode,   // #0 = 'PPCcr6set' chained node
/*12243*/   OPC_CaptureGlueInput,
/*12244*/   OPC_EmitMergeInputChains1_0,
/*12245*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6SET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6set) - Complexity = 3
            // Dst: (CR6SET:i32)
          /*SwitchOpcode*/ 10,  TARGET_VAL(PPCISD::CR6UNSET),// ->12265
/*12255*/   OPC_RecordNode,   // #0 = 'PPCcr6unset' chained node
/*12256*/   OPC_CaptureGlueInput,
/*12257*/   OPC_EmitMergeInputChains1_0,
/*12258*/   OPC_MorphNodeTo, TARGET_VAL(PPC::CR6UNSET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
            // Src: (PPCcr6unset) - Complexity = 3
            // Dst: (CR6UNSET:i32)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->12297
/*12268*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*12269*/   OPC_CaptureGlueInput,
/*12270*/   OPC_RecordChild1, // #1 = $rS
/*12271*/   OPC_Scope, 11, /*->12284*/ // 2 children in Scope
/*12273*/     OPC_CheckChild1Type, MVT::i32,
/*12275*/     OPC_EmitMergeInputChains1_0,
/*12276*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i32:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 i32:i32:$rS)
/*12284*/   /*Scope*/ 11, /*->12296*/
/*12285*/     OPC_CheckChild1Type, MVT::i64,
/*12287*/     OPC_EmitMergeInputChains1_0,
/*12288*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr i64:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 i64:i64:$rS)
/*12296*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VPERM),// ->12317
/*12300*/   OPC_RecordChild0, // #0 = $vA
/*12301*/   OPC_RecordChild1, // #1 = $vB
/*12302*/   OPC_RecordChild2, // #2 = $vC
/*12303*/   OPC_CheckType, MVT::v16i8,
/*12305*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12307*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 v16i8:v16i8:$vA, v16i8:v16i8:$vB, v16i8:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 ?:v16i8:$vA, ?:v16i8:$vB, ?:v16i8:$vC)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_SINT),// ->12335
/*12320*/   OPC_RecordChild0, // #0 = $vA
/*12321*/   OPC_CheckChild0Type, MVT::v4f32,
/*12323*/   OPC_CheckType, MVT::v4i32,
/*12325*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12327*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTSXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FP_TO_UINT),// ->12353
/*12338*/   OPC_RecordChild0, // #0 = $vA
/*12339*/   OPC_CheckChild0Type, MVT::v4f32,
/*12341*/   OPC_CheckType, MVT::v4i32,
/*12343*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12345*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS_0), 0,
                1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_uint:v4i32 v4f32:v4f32:$vA) - Complexity = 3
            // Dst: (VCTUXS_0:v4i32 ?:v4f32:$vA)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VMADDFP),// ->12373
/*12356*/   OPC_RecordChild0, // #0 = $A
/*12357*/   OPC_RecordChild1, // #1 = $B
/*12358*/   OPC_RecordChild2, // #2 = $C
/*12359*/   OPC_CheckType, MVT::v4f32,
/*12361*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12363*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::VNMSUBFP),// ->12393
/*12376*/   OPC_RecordChild0, // #0 = $A
/*12377*/   OPC_RecordChild1, // #1 = $B
/*12378*/   OPC_RecordChild2, // #2 = $C
/*12379*/   OPC_CheckType, MVT::v4f32,
/*12381*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12383*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 v4f32:v4f32:$A, v4f32:v4f32:$B, v4f32:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 ?:v4f32:$A, ?:v4f32:$B, ?:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SINT_TO_FP),// ->12411
/*12396*/   OPC_RecordChild0, // #0 = $vA
/*12397*/   OPC_CheckChild0Type, MVT::v4i32,
/*12399*/   OPC_CheckType, MVT::v4f32,
/*12401*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12403*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFSX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::UINT_TO_FP),// ->12429
/*12414*/   OPC_RecordChild0, // #0 = $vA
/*12415*/   OPC_CheckChild0Type, MVT::v4i32,
/*12417*/   OPC_CheckType, MVT::v4f32,
/*12419*/   OPC_CheckPatternPredicate, 0, // (PPCSubTarget.hasAltivec())
/*12421*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX_0), 0,
                1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
            // Src: (uint_to_fp:v4f32 v4i32:v4i32:$vA) - Complexity = 3
            // Dst: (VCFUX_0:v4f32 ?:v4i32:$vA)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->12445
/*12432*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*12433*/   OPC_CaptureGlueInput,
/*12434*/   OPC_RecordChild1, // #1 = $reg
/*12435*/   OPC_CheckChild1Type, MVT::i64,
/*12437*/   OPC_EmitMergeInputChains1_0,
/*12438*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc i64:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc i64:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->12457
/*12448*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*12449*/   OPC_CaptureGlueInput,
/*12450*/   OPC_EmitMergeInputChains1_0,
/*12451*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 12459 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 114
  // #OPC_RecordNode                     = 45
  // #OPC_RecordChild                    = 534
  // #OPC_RecordMemRef                   = 11
  // #OPC_CaptureGlueInput               = 14
  // #OPC_MoveChild                      = 155
  // #OPC_MoveParent                     = 373
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 245
  // #OPC_CheckPredicate                 = 199
  // #OPC_CheckOpcode                    = 92
  // #OPC_SwitchOpcode                   = 16
  // #OPC_CheckType                      = 178
  // #OPC_SwitchType                     = 98
  // #OPC_CheckChildType                 = 55
  // #OPC_CheckInteger                   = 197
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 9
  // #OPC_CheckComplexPat                = 150
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 6
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 74
  // #OPC_EmitMergeInputChains           = 203
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 12
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 641

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

virtual bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (PPCSubTarget.hasAltivec());
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

virtual bool CheckNodePredicate(SDNode *Node,
                                unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_aligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 16: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_aligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() >= 4;

  }
  case 18: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 19: { // Predicate_unaligned4sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 20: { // Predicate_unaligned4load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAlignment() < 4;

  }
  case 21: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 22: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 23: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 25: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 26: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 27: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 30: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 31: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 32: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 33: { // Predicate_pre_truncsti32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 34: { // Predicate_aligned4pre_store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 35: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 36: { // Predicate_aligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() >= 4;

  }
  case 37: { // Predicate_unaligned4store
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAlignment() < 4;

  }
  case 38: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 55: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 56: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 57: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 58: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 63: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 64: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 65: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 66: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 67: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 68: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 69: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 70: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 71: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 72: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 73: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 74: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 75: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 76: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 77: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 78: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 79: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 80: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 81: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 82: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 83: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 84: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 85: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 86: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 87: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 88: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 89: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 90: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 91: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 92: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 93: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 94: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 95: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 96: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 97: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 98: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

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
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  case 5:
    Result.resize(NextRes+1);
    return SelectAddr(N, Result[NextRes+0].first);
  }
}

virtual SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

