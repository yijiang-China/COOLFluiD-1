cf_add_case( MPI 8       CASEDIR Cavity PCASE cavityAUSMPlusUpcp_Lref.CFcase CASEFILES cavity_CF_v2.neu )
cf_add_case( MPI 1       CASEDIR CurvedPipe PCASE pipeNS3D-sfdm-impl.CFcase CASEFILES pipeCurved.msh pipeCurved.SP )
cf_add_case( MPI 8       CASEDIR Cylinder PCASE cyl_Pg_M15_FVM_1st2nd.CFcase CASEFILES cyl_Pg_M15.plt cyl_Pg_M15.surf.plt )
cf_add_case( MPI 8       CASEDIR Cylinder PCASE cyl_Pg_M15_FVM_1st2nd_MeFiAlgo.CFcase CASEFILES cyl_Pg_M15.plt cyl_Pg_M15.surf.plt )
cf_add_case( MPI 8       CASEDIR Cylinder PCASE cyl3DFVMImplPuvt_Reynolds_40.CFcase CASEFILES cylinder_2D_quad.CFmesh )
cf_add_case( MPI 8       CASEDIR Cylinder PCASE cylinderEuler2DFR-impl.CFcase CASEFILES CylinderNSQuadCurved_16_5.CFmesh )
cf_add_case( MPI 8       CASEDIR Cylinder PCASE cylinderNS2DFR-impl.CFcase CASEFILES CylinderNSQuadCurved_16_5.CFmesh )
cf_add_case( MPI 8       CASEDIR Cylinder PCASE cylinderNS2DFR.CFcase CASEFILES CylinderNSQuadCurved_16_5.CFmesh )
cf_add_case( MPI 8       CASEDIR DoubleEllipse PCASE doubleEllipseRDS_NS_Pvt_adim.CFcase CASEFILES doubleEllipseNS_RDS.CFmesh )
cf_add_case( MPI 8       CASEDIR DoubleEllipse PCASE restartRDS_NS_Pvt.CFcase CASEFILES restartRDS.plt restartRDS.surf.plt )
cf_add_case( MPI default CASEDIR FlatPlate PCASE flatPlateFVMBlasius.CFcase CASEFILES flatPlateQD.CFmesh )
cf_add_case( MPI default CASEDIR FlatPlate PCASE flatPlate3DFVMBlasius.CFcase CASEFILES flatPlateQD.CFmesh )
cf_add_case( MPI 8       CASEDIR Hemisphere PCASE hemisphereN.CFcase CASEFILES hemisphere.plt hemisphere.surf.plt )
cf_add_case( MPI 8       CASEDIR Hemisphere PCASE hemisphereN_pvt.CFcase CASEFILES hemisphere.plt hemisphere.surf.plt )
cf_add_case( MPI 8       CASEDIR Jets2D PCASE jets2DFVMImpl2Namespaces.CFcase CASEFILES jets1.CFmesh jets2.CFmesh )
cf_add_case( MPI 8       CASEDIR Jets2D PCASE jets2DFVMImplConcurrent.CFcase CASEFILES jets2DFVM.thor jets2DFVM.SP jets2DFVM_EXTRA_in.CFmesh )
cf_add_case( MPI default CASEDIR Jets2D PCASE jets2DFluctSplit.CFcase CASEFILES jets2D.thor jets2D.SP )
cf_add_case( MPI default CASEDIR Jets2D PCASE jets2DFluctSplitImpl.CFcase CASEFILES jets2D.thor jets2D.SP )
cf_add_case( MPI 8       CASEDIR Jets2D PCASE jets2DFVMImplLimiterIO.CFcase CASEFILES jets2DFVM.thor jets2DFVM.SP )
cf_add_case( MPI 8       CASEDIR Jets2D PCASE jets2DFVM_in.CFcase CASEFILES jets2D-sol.CFmesh )
cf_add_case( MPI 8       CASEDIR Jets2D PCASE jets2DFVM_out.CFcase CASEFILES jets2DFVM.thor jets2DFVM.SP )
cf_add_case( MPI default CASEDIR Jets2D PCASE jets2DFVMImpl.CFcase CASEFILES jets2DFVM.thor jets2DFVM.SP )
cf_add_case( MPI 8       CASEDIR Jets2D PCASE jets2DFVMImplAUSMAnalytic.CFcase CASEFILES jets2DFVM.thor jets2DFVM.SP )
cf_add_case( MPI 8       CASEDIR Jets2D PCASE jets2DFVMImpl_MatFree.CFcase CASEFILES jets2DFVM.thor jets2DFVM.SP )
cf_add_case( MPI 8       CASEDIR Jets3D PCASE jets3DFVM_in.CFcase CASEFILES jets3DFVM_binary.CFmesh )
cf_add_case( MPI default CASEDIR Jets3D PCASE jets3DFVM_out.CFcase CASEFILES jets2DFVM.CFmesh )
cf_add_case( MPI default CASEDIR Jets3D PCASE jets3DFVMImpl.CFcase CASEFILES jets3Dcoarse.thor jets3Dcoarse.SP )
cf_add_case( MPI default CASEDIR Jets3D PCASE jets3DFVMImplAUSMAnalytic.CFcase CASEFILES jets3Dcoarse.thor jets3Dcoarse.SP )
cf_add_case( MPI 8       CASEDIR Jets3D PCASE jets3DFluctSplitPrism.CFcase CASEFILES prism-coarse.CFmesh )
cf_add_case( MPI 1       CASEDIR Wedge  PCASE wedgeFluctSplit.CFcase CASEFILES wedge.thor wedge.SP )
cf_add_case( MPI 8       CASEDIR Wedge  PCASE wedgeFluctSplitHOCRD_Bx_imp.CFcase CASEFILES wedge-1_15-P2.CFmesh )
cf_add_case( MPI 8       CASEDIR Wedge  PCASE wedgeFluctSplitHOCRD.CFcase CASEFILES wedgeP2.CFmesh )
cf_add_case( MPI default CASEDIR Wedge  PCASE wedgeFluctSplitImpl.CFcase CASEFILES wedge.thor wedge.SP )
cf_add_case( MPI 8       CASEDIR Wedge  PCASE wedgeFVM_MeFiAlgo.CFcase CASEFILES wedge.thor wedge.SP )
cf_add_case( MPI 8       CASEDIR Wedge  PCASE wedgeFVM_MeFiAlgoQuads.CFcase CASEFILES wedge2dQuads.neu )
cf_add_case( MPI 8       CASEDIR Wedge  PCASE wedge3dFVM_MeFiAlgoQuads.CFcase CASEFILES wedge2dQuadsIN.CFmesh )
cf_add_case( MPI 8       CASEDIR Wedge  PCASE wedgeFVMImpl_MeFiAlgo.CFcase CASEFILES wedge.thor wedge.SP )
cf_add_case( MPI 1       CASEDIR Wedge  PCASE wedgeFS_SpaceTime.CFcase CASEFILES wedgestart.CFmesh )
cf_add_case( MPI default CASEDIR Wedge  PCASE wedgeFVM.CFcase CASEFILES wedge.thor wedge.SP )
cf_add_case( MPI default CASEDIR Naca0012 PCASE nacaFluctSplitImplHOCRD.CFcase CASEFILES MTC1_naca0012_unstr_mesh2_triP2.CFmesh )
cf_add_case( MPI default CASEDIR Naca0012 PCASE nacaFluctSplitImplviscousHOCRD.CFcase CASEFILES MTC3_naca0012_unstr_mesh1_triP2.CFmesh )
cf_add_case( MPI default CASEDIR Naca0012 PCASE nacaFVMImpl_FEMMoveShock.CFcase CASEFILES nacatg-fvm-6kn.CFmesh nacatg-fem-6kn.CFmesh )
cf_add_case( MPI 8       CASEDIR Naca0012 PCASE nacaFVMImpl_hybrid_euler.CFcase CASEFILES naca0012_hybrid.SP naca0012_hybrid.dpl )
cf_add_case( MPI 8       CASEDIR Naca0012 PCASE nacaFVMImpl_hybrid_euler_Puvt.CFcase CASEFILES naca0012_hybrid.SP naca0012_hybrid.dpl )
#cf_add_case( MPI 8       CASEDIR Naca0012 PCASE nacaFVMImpl_hybrid_euler_PuvtAnalytic.CFcase CASEFILES naca0012_hybrid.SP naca0012_hybrid.dpl )
cf_add_case( MPI 8       CASEDIR Naca0012 PCASE nacaFVMImpl_viscous.CFcase CASEFILES naca0012_hybrid.SP naca0012_hybrid.dpl )
cf_add_case( MPI 1       CASEDIR Nozzle1D PCASE shocktubeSOD.CFcase CASEFILES ParametersShock.dat )
cf_add_case( MPI 8       CASEDIR Piston2D PCASE piston2DFVMBDF2.CFcase CASEFILES channel.SP channel.thor )
cf_add_case( MPI 8       CASEDIR Piston2D PCASE piston2DFVMCN.CFcase CASEFILES channel.SP channel.thor )
cf_add_case( MPI 4       CASEDIR SinusBump PCASE bumpFVMTtPtAlpha.CFcase CASEFILES bump-fine.SP bump-fine.thor )
cf_add_case( MPI default CASEDIR SinusBump PCASE bumpFluctSplitWeakImpl.CFcase CASEFILES bump-fine.SP bump-fine.thor )
cf_add_case( MPI default CASEDIR SinusBump PCASE bumpFluctSplitWeakImplHOCRD.CFcase CASEFILES bump-coarseP2.CFmesh )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump-sfdm-impl.CFcase CASEFILES sineBumpQuad.msh sineBumpQuad.SP )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump-sfdm-implNewton.CFcase CASEFILES sineBumpQuad.msh sineBumpQuad.SP )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump-sfdm-lusgs.CFcase CASEFILES sineBumpQuad.msh sineBumpQuad.SP )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump-sfdm-lusgs-computejacob.CFcase CASEFILES sineBumpQuad.msh sineBumpQuad.SP )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump3DCurved-sfdm-impl.CFcase CASEFILES sineBumpHexaCurved3D.msh sineBumpHexaCurved3D.SP ) 
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump3DCurved-sfdm-lusgs.CFcase CASEFILES sineBumpHexaCurved3D.msh sineBumpHexaCurved3D.SP )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump3DCurved-sfdm-lusgs-freezejacob.CFcase CASEFILES sineBumpHexaCurved3D.msh sineBumpHexaCurved3D.SP )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump3DCurved-sfdm-lusgs-computejacob.CFcase CASEFILES sineBumpHexaCurved3D.msh sineBumpHexaCurved3D.SP )
cf_add_case( MPI 1       CASEDIR SinusBump PCASE bump3DCurved-sfdm-lusgs-computejacob-freezejacob.CFcase CASEFILES sineBumpHexaCurved3D.msh sineBumpHexaCurved3D.SP )
cf_add_case( MPI 8       CASEDIR SinusBump PCASE bump2DFRBwdEuler.CFcase CASEFILES sineBumpQuadCurved_5_20.CFmesh )
cf_add_case( MPI 8       CASEDIR SinusBump PCASE bump2DFR.CFcase CASEFILES sineBumpQuadCoarse.CFmesh )
cf_add_case( MPI 8       CASEDIR SinusBump PCASE bump3DFR-impl.CFcase CASEFILES sineBump3DQuadCurved_2_8_2.CFmesh )
